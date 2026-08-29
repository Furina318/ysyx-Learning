`include "defines.vh"

// exu_slot2: 执行槽2 — ALU2 + MDU + LSU (独立 FU 跟踪)
// 每个 FU 独立管理 busy/free, 允许并发执行:
//   - MDU 流水线化 (2 级 mul / 32 级 div), 连续乘/除可每拍发射 1 条
//   - LSU 忙碌时 ALU2/MDU 仍可发射
// CDB 输出: 单端口, 多 FU 同时完成时用单缓冲串行化。
//   alu2_free 通过 CDB 缓冲反压防止组合逻辑的 ALU 结果被丢弃。
//   flush 冲刷: 取消比 flush_id 年轻的在飞行 LSU/MDU 指令,
//   防止冲刷后 ID 复用导致旧指令数据污染 ROB 条目。
//   MDU 内部自行精确冲刷 (mdu_done 对已冲刷结果保持 0 并自动丢弃),
//   外部只需在结果被 CDB 端口/缓冲接收时给出 mdu_done_ack。
module exu_slot2 #(
    parameter ID_WIDTH = 5
)(
    input  wire                    clk              ,
    input  wire                    rst              ,

    input  wire                    flush            ,
    input  wire [   ID_WIDTH-1: 0] flush_id         ,

    input  wire                    issue_valid      ,
    input  wire [           31: 0] src1             ,
    input  wire [           31: 0] src2             ,
    input  wire [            5: 0] phy_rd           ,
    input  wire [   ID_WIDTH-1: 0] inst_id          ,
    input  wire [`IS_TO_EX_WD-1:0] is_to_eu_bus     ,

    output reg                      cdb_valid        ,
    output reg  [            5: 0]  cdb_tag          ,
    output reg  [           31: 0]  cdb_data         ,
    output reg  [   ID_WIDTH-1: 0]  cdb_id           ,

    output reg                      commit_valid     ,
    output reg  [   ID_WIDTH-1: 0]  commit_id        ,
    output reg  [`EX_TO_RO_WD-1:0]  eu_to_ro_bus     ,

    output wire                     alu2_free        ,
    output wire                     mdu_free         ,
    output wire                     lsu_free         ,

    output wire                       lsu_en           ,
    output wire [   `EX_TO_LS_WD-1:0] ex_to_ls_bus     ,
    input  wire [               31:0] lsu_data         ,
    input  wire [`STB_DEPTH_LOG2-1:0] lsu_stb_id       ,
    input  wire                       lsu_ready        ,
    input  wire                       stb_forward_full_hit,
    input  wire                       stb_drain_valid  ,

    output wire [   ID_WIDTH-1: 0]  lsu_inst_id      ,  // 当前 LSU 操作对应的指令 ID (用于 STB 精确冲刷)

    output wire                     is_fencei        ,
    input  wire                     fence_done
);

    wire [31:0] pc, inst, bpu_dnpc;
    wire [ 1:0] lw_lh_lb, sw_sh_sb;
    wire        is_load_sign, inst_fence_i;
    wire [31:0] imm;
    wire [ 4:0] rd, rs1, rs2;
    wire        is_write, is_read, gpr_we;
    wire [10:0] alu_op;
    wire [ 5:0] bru_op;
    wire        mdu_en;
    wire [ 7:0] mdu_op;
    wire        src1_is_pc, src2_is_imm;
    wire [ 1:0] jal_or_jalr;
    wire        ecall_op, mret_op;
    wire [ 5:0] csr_op;
    wire        inst_ebreak, is_call, is_ret, is_jal, is_jalr, is_indirect, is_c_inst;

    assign {
        pc          , 
        inst        , 
        bpu_dnpc    , 
        lw_lh_lb    , 
        sw_sh_sb    , 
        is_load_sign, 
        inst_fence_i,
        imm         , 
        rd          , 
        rs1         , 
        rs2         , 
        is_write    , 
        is_read     , 
        gpr_we      , 
        alu_op      , 
        bru_op      ,
        mdu_en      , 
        mdu_op      , 
        src1_is_pc  ,  
        src2_is_imm , 
        jal_or_jalr ,
        ecall_op    , 
        mret_op     , 
        csr_op      , 
        inst_ebreak ,
        is_call     , 
        is_ret      , 
        is_jal      , 
        is_jalr     , 
        is_indirect , 
        is_c_inst
    } = is_to_eu_bus;

    assign is_fencei = inst_fence_i;

    // ── 冲刷检查: 判断在飞行指令是否比 flush_id 年轻 ──
    // 若年轻则表明该指令来自错误路径, 需取消以阻止 commit_match 复用 ID 后污染 ROB
    // (MDU 内部自行精确冲刷, 无需外部维护; LSU/缓冲由本模块处理)
    wire lsu_flushed = flush && lsu_active && (
        (flush_id[ID_WIDTH-1] ^ lsu_sav_iid[ID_WIDTH-1]) ?
        (flush_id[ID_WIDTH-2:0] > lsu_sav_iid[ID_WIDTH-2:0]) :
        (flush_id[ID_WIDTH-2:0] < lsu_sav_iid[ID_WIDTH-2:0])
    );
    wire lsu_done_flushed = flush && lsu_done_r && (
        (flush_id[ID_WIDTH-1] ^ lsu_sav_iid[ID_WIDTH-1]) ?
        (flush_id[ID_WIDTH-2:0] > lsu_sav_iid[ID_WIDTH-2:0]) :
        (flush_id[ID_WIDTH-2:0] < lsu_sav_iid[ID_WIDTH-2:0])
    );
    wire cdb_buf_flushed = flush && cdb_buf_valid && (
        (flush_id[ID_WIDTH-1] ^ cdb_buf_id[ID_WIDTH-1]) ?
        (flush_id[ID_WIDTH-2:0] > cdb_buf_id[ID_WIDTH-2:0]) :
        (flush_id[ID_WIDTH-2:0] < cdb_buf_id[ID_WIDTH-2:0])
    );
    // 本周期发射的指令 (若比 flush_id 年轻则抑制)
    wire issue_flushed = flush && issue_valid && (
        (flush_id[ID_WIDTH-1] ^ inst_id[ID_WIDTH-1]) ?
        (flush_id[ID_WIDTH-2:0] > inst_id[ID_WIDTH-2:0]) :
        (flush_id[ID_WIDTH-2:0] < inst_id[ID_WIDTH-2:0])
    );

    wire this_is_alu = |alu_op;
    wire this_is_mdu = mdu_en;
    wire this_is_lsu = is_read | is_write;

    // ── 冲刷安全的就绪信号: 冲刷周期内抑制来自被冲刷指令的结果 ──
    wire lsu_has_valid_result;
    wire alu_has_valid_result;
    assign lsu_has_valid_result = lsu_has_result && !(
        (lsu_fast_valid && issue_flushed) || (lsu_done_r && lsu_done_flushed));
    assign alu_has_valid_result = alu_has_result && !issue_flushed;
    // MDU 结果电平保持 (mdu_done 保持到 mdu_done_ack), 且被冲刷的结果由 MDU 内部丢弃,
    // 故 mdu_done 本身即为冲刷安全的有效结果。
    wire mdu_has_valid_result = mdu_done;

    wire [31:0] alu_src1_w = src1_is_pc  ? pc  : src1;
    wire [31:0] alu_src2_w = src2_is_imm ? imm : src2;
    wire [31:0] alu_result;
    alu u_alu2 (
        .alu_op    (alu_op    ), 
        .alu_src1  (alu_src1_w), 
        .alu_src2  (alu_src2_w), 
        .alu_result(alu_result)
    );

    wire        mdu_ready;
    wire [31:0] mdu_result;
    wire        mdu_done;
    wire [ID_WIDTH-1:0]      mdu_done_inst_id;
    wire [5:0]               mdu_done_phy_rd;
    wire [4:0]               mdu_done_rd;
    wire                     mdu_done_gpr_we;
    wire [31:0]              mdu_done_pc;
    wire [31:0]              mdu_done_inst;
    // MDU 结果被 CDB 端口或缓冲接收时给出 ack, 使 comp_q 头部前移
    wire mdu_ack = mdu_done && (
        ((cdb_buf_valid && !cdb_buf_flushed) && !lsu_has_valid_result) ||
        (!(cdb_buf_valid && !cdb_buf_flushed) && !(lsu_done_r && lsu_fast_valid))
    );
    wire mdu_start = issue_valid & this_is_mdu & mdu_ready;

    mdu #(
        .ID_WIDTH      (ID_WIDTH      ),
        .PHY_REG_WIDTH (6             )
    ) u_mdu (
        .clk             (clk              ),
        .rst             (rst              ),
        .mdu_en          (mdu_start        ),
        .mdu_op          (mdu_op           ),
        .mdu_src1        (src1             ),
        .mdu_src2        (src2             ),
        .mdu_inst_id     (inst_id          ),
        .mdu_phy_rd      (phy_rd           ),
        .mdu_rd          (rd               ),
        .mdu_gpr_we      (gpr_we           ),
        .mdu_pc          (pc               ),
        .mdu_inst        (inst             ),
        .mdu_ready       (mdu_ready        ),
        .flush           (flush            ),
        .flush_id        (flush_id         ),
        .mdu_done        (mdu_done         ),
        .mdu_result      (mdu_result       ),
        .mdu_done_inst_id(mdu_done_inst_id ),
        .mdu_done_phy_rd (mdu_done_phy_rd  ),
        .mdu_done_rd     (mdu_done_rd      ),
        .mdu_done_gpr_we (mdu_done_gpr_we  ),
        .mdu_done_pc     (mdu_done_pc      ),
        .mdu_done_inst   (mdu_done_inst    ),
        .mdu_done_ack    (mdu_ack          )
    );

    // LSU 接口: 快路径 (store STB未满 / load dcache命中) 组合直通 CDB
    //           慢路径 (load dcache未命中) 进入状态机
    wire lsu_start = lsu_active ? 1'b1 : (issue_valid & this_is_lsu & !lsu_active);
    assign lsu_en = lsu_start;

    assign ex_to_ls_bus = lsu_active ? lsu_sav_bus :
                          {rd, lw_lh_lb, sw_sh_sb, is_load_sign, is_write, is_read, src1, src2, imm};

    // 当前 LSU 操作的指令 ID:
    //   快路径 (lsu_active=0): 直接使用当前发射的 inst_id
    //   慢路径 (lsu_active=1): 使用进入慢路径时保存的 lsu_sav_iid
    assign lsu_inst_id = lsu_active ? lsu_sav_iid : inst_id;

    // 当前 LSU 操作的访存地址 (随提交总线传给 ROB/WBU, 供 difftest 判断 MMIO load):
    //   快路径: 当前发射的 src1+imm;  慢路径: 锁存总线里的 src1+imm
    wire [31:0] lsu_addr_fast = src1 + imm;
    wire [31:0] lsu_addr_slow = lsu_sav_bus[95:64] + lsu_sav_bus[31:0];

    // LSU 快路径: 本拍 lsu_ready=1 → 不设 lsu_active, 组合直通 CDB
    wire is_stb_hit = is_read & stb_forward_full_hit;
    wire lsu_fast_valid = issue_valid & this_is_lsu & (lsu_ready | is_stb_hit) & !lsu_active;
    // LSU 慢路径: 本拍 lsu_ready=0 → 进入状态机等待
    wire lsu_slow_start = issue_valid & this_is_lsu & !(lsu_ready | is_stb_hit) & !lsu_active;

    reg        lsu_active;

    // LSU 状态
    reg [        31:0] lsu_sav_pc, lsu_sav_inst;
    reg [         4:0] lsu_sav_rd;
    reg [ID_WIDTH-1:0] lsu_sav_iid;
    reg                lsu_sav_gpr_we;
    reg [         5:0] lsu_sav_phy_rd;
    reg [        31:0] lsu_sav_data;       // 慢路径保存 lsu_data
    reg                lsu_done_r;
    reg                lsu_sav_is_write;                         // 慢路径保存 is_write
    reg [`STB_DEPTH_LOG2-1:0] lsu_sav_stb_id;           // 慢路径保存 stb_id
    reg [`EX_TO_LS_WD-1:0] lsu_sav_bus;                 // 慢路径锁存 ex_to_ls_bus

    // CDB 结果缓冲 (多 FU 同时完成时串行化)
    reg                cdb_buf_valid;
    reg [         5:0] cdb_buf_tag;
    reg [        31:0] cdb_buf_data;
    reg [ID_WIDTH-1:0] cdb_buf_id;
    reg [        31:0] cdb_buf_pc, cdb_buf_inst;
    reg [         4:0] cdb_buf_rd;
    reg                cdb_buf_gpr_we;
    reg [         5:0] cdb_buf_phy_rd;
    reg                cdb_buf_is_write;                         // 缓冲的 is_write
    reg [`STB_DEPTH_LOG2-1:0] cdb_buf_stb_id;           // 缓冲的 stb_id
    reg [        31:0] cdb_buf_addr;                    // 缓冲的访存地址

    always @(posedge clk) begin
        if (rst) begin
            lsu_active              <= 0;
            lsu_done_r              <= 0;
            cdb_buf_valid           <= 0;
        end else begin
            // ── 冲刷: 清除比 flush_id 年轻的在飞行指令 ──
            if (flush) begin
                if (lsu_flushed)      lsu_active    <= 1'b0;
                if (lsu_done_flushed) lsu_done_r    <= 1'b0;
                if (cdb_buf_flushed)  cdb_buf_valid <= 1'b0;
            end

            // ── LSU 慢路径 (lsu_ready=0, 需等待) ──
            if (lsu_slow_start) begin
                lsu_active       <= 1;
                lsu_done_r       <= 0;
                lsu_sav_pc       <= pc;
                lsu_sav_inst     <= inst;
                lsu_sav_rd       <= rd;
                lsu_sav_iid      <= inst_id;
                lsu_sav_gpr_we   <= gpr_we;
                lsu_sav_phy_rd   <= phy_rd;
                lsu_sav_is_write <= is_write;
                lsu_sav_stb_id   <= lsu_stb_id;
                lsu_sav_bus      <= ex_to_ls_bus;  // 锁存 LSU 操作信息
            end else if (lsu_active & lsu_ready & !lsu_done_r) begin
                lsu_done_r    <= 1;
                lsu_sav_data  <= lsu_data;   // 捕获结果
                lsu_active    <= 0;
            end else if (lsu_done_r && !(cdb_buf_valid && lsu_fast_valid)) begin
                // 仅当慢路径结果被 CDB 消费后才清除:
                // 若 cdb_buf_valid=1(CDB被占用) 且 lsu_fast_valid=1(快路径抢占缓冲),
                // 则慢路径结果未被消费, lsu_done_r 保持为 1 下周期重试
                lsu_done_r <= 0;
            end

            // ── CDB 缓冲 ──
            // 缓冲加载: 本周期 cdb_buf_load=1 表示有结果需要暂存
            if (cdb_buf_load) begin
                cdb_buf_valid    <= 1;
                cdb_buf_tag      <= cdb_buf_tag_nxt;
                cdb_buf_data     <= cdb_buf_data_nxt;
                cdb_buf_id       <= cdb_buf_id_nxt;
                cdb_buf_pc       <= cdb_buf_pc_nxt;
                cdb_buf_inst     <= cdb_buf_inst_nxt;
                cdb_buf_rd       <= cdb_buf_rd_nxt;
                cdb_buf_gpr_we   <= cdb_buf_gpr_nxt;
                cdb_buf_phy_rd   <= cdb_buf_phy_nxt;
                cdb_buf_is_write <= cdb_buf_is_write_nxt;
                cdb_buf_stb_id   <= cdb_buf_stb_id_nxt;
                cdb_buf_addr     <= cdb_buf_addr_nxt;
            end else if (cdb_buf_valid) begin
                cdb_buf_valid <= 0;
            end
        end
    end

    // CDB 仲裁: 多 FU 完成时优先级 LSU > MDU > ALU
    // 若 CDB 端口忙, 低优先级结果进入缓冲。
    // alu2_free 反压机制: 当 CDB 缓冲被占用时阻止 ALU 发射,
    // 防止组合逻辑的 ALU 结果因无缓冲槽位而被静默丢弃导致 ROB 死锁。
    wire alu_has_result = issue_valid & this_is_alu;  // ALU 组合逻辑
    wire lsu_has_result = lsu_fast_valid | lsu_done_r;  // 快路径(组合) 或 慢路径(完成)

    reg                cdb_sel_valid;
    reg [         5:0] cdb_sel_tag;
    reg [        31:0] cdb_sel_data;
    reg [ID_WIDTH-1:0] cdb_sel_id;
    reg [        31:0] cdb_sel_pc, cdb_sel_inst;
    reg [         4:0] cdb_sel_rd;
    reg                cdb_sel_gpr_we;
    reg [         5:0] cdb_sel_phy_rd;
    reg                cdb_sel_is_write;
    reg [`STB_DEPTH_LOG2-1:0] cdb_sel_stb_id;
    reg [        31:0] cdb_sel_addr;
    reg                cdb_buf_load;
    reg [         5:0] cdb_buf_tag_nxt;
    reg [        31:0] cdb_buf_data_nxt;
    reg [ID_WIDTH-1:0] cdb_buf_id_nxt;
    reg [        31:0] cdb_buf_pc_nxt, cdb_buf_inst_nxt;
    reg [         4:0] cdb_buf_rd_nxt;
    reg                cdb_buf_gpr_nxt;
    reg [         5:0] cdb_buf_phy_nxt;
    reg                cdb_buf_is_write_nxt;
    reg [`STB_DEPTH_LOG2-1:0] cdb_buf_stb_id_nxt;
    reg [        31:0] cdb_buf_addr_nxt;

    always @(*) begin
        cdb_sel_valid        = 0;
        cdb_sel_tag          = 0;
        cdb_sel_data         = 0;
        cdb_sel_id           = 0;
        cdb_sel_pc           = 0;
        cdb_sel_inst         = 0;
        cdb_sel_rd           = 0;
        cdb_sel_gpr_we       = 0;
        cdb_sel_phy_rd       = 0;
        cdb_sel_is_write     = 0;
        cdb_sel_stb_id       = 0;
        cdb_sel_addr         = 0;
        cdb_buf_load         = 0;
        cdb_buf_tag_nxt      = 0;
        cdb_buf_data_nxt     = 0;
        cdb_buf_id_nxt       = 0;
        cdb_buf_pc_nxt       = 0;
        cdb_buf_addr_nxt     = 0;
        cdb_buf_inst_nxt     = 0;
        cdb_buf_rd_nxt       = 0;
        cdb_buf_gpr_nxt      = 0;
        cdb_buf_phy_nxt      = 0;
        cdb_buf_is_write_nxt = 0;
        cdb_buf_stb_id_nxt   = 0;

        // 优先级: 缓冲 > LSU > MDU > ALU, 快/慢路径统一处理
        if (cdb_buf_valid && !cdb_buf_flushed) begin
            cdb_sel_valid    = 1;
            cdb_sel_tag      = cdb_buf_tag;
            cdb_sel_data     = cdb_buf_data;
            cdb_sel_id       = cdb_buf_id;
            cdb_sel_pc       = cdb_buf_pc;
            cdb_sel_inst     = cdb_buf_inst;
            cdb_sel_rd       = cdb_buf_rd;
            cdb_sel_gpr_we   = cdb_buf_gpr_we;
            cdb_sel_phy_rd   = cdb_buf_phy_rd;
            cdb_sel_is_write = cdb_buf_is_write;
            cdb_sel_stb_id   = cdb_buf_stb_id;
            cdb_sel_addr     = cdb_buf_addr;
            // 新结果入缓冲, 若同时有多个结果则低优先级被丢弃
            // 快路径(单周期脉冲)优先入缓冲, 慢路径(lsu_done_r 持续)可重试
            if (lsu_has_valid_result) begin
                cdb_buf_load    = 1;
                // 快/慢冲突: 快路径(one-shot)进缓冲, 慢路径下周期重试
                if (lsu_done_r && lsu_fast_valid) begin
                    cdb_buf_tag_nxt      = phy_rd;
                    cdb_buf_data_nxt     = lsu_data;
                    cdb_buf_id_nxt       = inst_id;
                    cdb_buf_pc_nxt       = pc;
                    cdb_buf_inst_nxt     = inst;
                    cdb_buf_rd_nxt       = rd;
                    cdb_buf_gpr_nxt      = gpr_we;
                    cdb_buf_phy_nxt      = phy_rd;
                    cdb_buf_is_write_nxt = is_write;
                    cdb_buf_stb_id_nxt   = lsu_stb_id;
                    cdb_buf_addr_nxt     = lsu_addr_fast;
                end else begin
                    cdb_buf_tag_nxt      = lsu_done_r ? lsu_sav_phy_rd : phy_rd;
                    cdb_buf_data_nxt     = lsu_done_r ? lsu_sav_data   : lsu_data;
                    cdb_buf_id_nxt       = lsu_done_r ? lsu_sav_iid     : inst_id;
                    cdb_buf_pc_nxt       = lsu_done_r ? lsu_sav_pc      : pc;
                    cdb_buf_inst_nxt     = lsu_done_r ? lsu_sav_inst    : inst;
                    cdb_buf_rd_nxt       = lsu_done_r ? lsu_sav_rd      : rd;
                    cdb_buf_gpr_nxt      = lsu_done_r ? lsu_sav_gpr_we  : gpr_we;
                    cdb_buf_phy_nxt      = lsu_done_r ? lsu_sav_phy_rd  : phy_rd;
                    cdb_buf_is_write_nxt = lsu_done_r ? lsu_sav_is_write : is_write;
                    cdb_buf_stb_id_nxt   = lsu_done_r ? lsu_sav_stb_id   : lsu_stb_id;
                    cdb_buf_addr_nxt     = lsu_done_r ? lsu_addr_slow    : lsu_addr_fast;
                end
            end else if (mdu_has_valid_result) begin
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt = mdu_done_phy_rd;
                cdb_buf_data_nxt= mdu_result;
                cdb_buf_id_nxt  = mdu_done_inst_id;
                cdb_buf_pc_nxt  = mdu_done_pc;
                cdb_buf_inst_nxt= mdu_done_inst;
                cdb_buf_rd_nxt  = mdu_done_rd;
                cdb_buf_gpr_nxt = mdu_done_gpr_we;
                cdb_buf_phy_nxt = mdu_done_phy_rd;
            end else if (alu_has_valid_result) begin
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt = phy_rd;
                cdb_buf_data_nxt= alu_result;
                cdb_buf_id_nxt  = inst_id;
                cdb_buf_pc_nxt  = pc;
                cdb_buf_inst_nxt= inst;
                cdb_buf_rd_nxt  = rd;
                cdb_buf_gpr_nxt = gpr_we;
                cdb_buf_phy_nxt = phy_rd;
            end
        end
        else if (lsu_has_valid_result) begin
            // 慢路径优先走 CDB 端口 (等待更久), 快路径冲突时进缓冲
            cdb_sel_valid    = 1;
            cdb_sel_tag      = lsu_done_r ? lsu_sav_phy_rd : phy_rd;
            cdb_sel_data     = lsu_done_r ? lsu_sav_data   : lsu_data;
            cdb_sel_id       = lsu_done_r ? lsu_sav_iid     : inst_id;
            cdb_sel_pc       = lsu_done_r ? lsu_sav_pc      : pc;
            cdb_sel_inst     = lsu_done_r ? lsu_sav_inst    : inst;
            cdb_sel_rd       = lsu_done_r ? lsu_sav_rd      : rd;
            cdb_sel_gpr_we   = lsu_done_r ? lsu_sav_gpr_we  : gpr_we;
            cdb_sel_phy_rd   = lsu_done_r ? lsu_sav_phy_rd  : phy_rd;
            cdb_sel_is_write = lsu_done_r ? lsu_sav_is_write : is_write;
            cdb_sel_stb_id   = lsu_done_r ? lsu_sav_stb_id   : lsu_stb_id;
            cdb_sel_addr     = lsu_done_r ? lsu_addr_slow     : lsu_addr_fast;
            // FIX: 快慢路径同时有效 → 慢路径上 CDB, 快路径(one-shot)进缓冲
            if (lsu_done_r && lsu_fast_valid) begin
                cdb_buf_load         = 1;
                cdb_buf_tag_nxt      = phy_rd;
                cdb_buf_data_nxt     = lsu_data;
                cdb_buf_id_nxt       = inst_id;
                cdb_buf_pc_nxt       = pc;
                cdb_buf_inst_nxt     = inst;
                cdb_buf_rd_nxt       = rd;
                cdb_buf_gpr_nxt      = gpr_we;
                cdb_buf_phy_nxt      = phy_rd;
                cdb_buf_is_write_nxt = is_write;
                cdb_buf_stb_id_nxt   = lsu_stb_id;
                cdb_buf_addr_nxt     = lsu_addr_fast;
            end else if (mdu_has_valid_result) begin
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt = mdu_done_phy_rd;
                cdb_buf_data_nxt= mdu_result;
                cdb_buf_id_nxt  = mdu_done_inst_id;
                cdb_buf_pc_nxt  = mdu_done_pc;
                cdb_buf_inst_nxt= mdu_done_inst;
                cdb_buf_rd_nxt  = mdu_done_rd;
                cdb_buf_gpr_nxt = mdu_done_gpr_we;
                cdb_buf_phy_nxt = mdu_done_phy_rd;
            end else if (alu_has_valid_result) begin
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt = phy_rd;
                cdb_buf_data_nxt= alu_result;
                cdb_buf_id_nxt  = inst_id;
                cdb_buf_pc_nxt  = pc;
                cdb_buf_inst_nxt= inst;
                cdb_buf_rd_nxt  = rd;
                cdb_buf_gpr_nxt = gpr_we;
                cdb_buf_phy_nxt = phy_rd;
            end
        end
        else if (mdu_has_valid_result) begin
            cdb_sel_valid  = 1;
            cdb_sel_tag    = mdu_done_phy_rd;
            cdb_sel_data   = mdu_result;
            cdb_sel_id     = mdu_done_inst_id;
            cdb_sel_pc     = mdu_done_pc;
            cdb_sel_inst   = mdu_done_inst;
            cdb_sel_rd     = mdu_done_rd;
            cdb_sel_gpr_we = mdu_done_gpr_we;
            cdb_sel_phy_rd = mdu_done_phy_rd;
            if (alu_has_valid_result) begin
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt = phy_rd;
                cdb_buf_data_nxt= alu_result;
                cdb_buf_id_nxt  = inst_id;
                cdb_buf_pc_nxt  = pc;
                cdb_buf_inst_nxt= inst;
                cdb_buf_rd_nxt  = rd;
                cdb_buf_gpr_nxt = gpr_we;
                cdb_buf_phy_nxt = phy_rd;
            end
        end
        else if (alu_has_valid_result) begin
            cdb_sel_valid  = 1;
            cdb_sel_tag    = phy_rd;
            cdb_sel_data   = alu_result;
            cdb_sel_id     = inst_id;
            cdb_sel_pc     = pc;
            cdb_sel_inst   = inst;
            cdb_sel_rd     = rd;
            cdb_sel_gpr_we = gpr_we;
            cdb_sel_phy_rd = phy_rd;
        end
    end

    // CDB 输出和提交通路 (posedge 寄存器输出)
    always @(posedge clk) begin
        if (rst) begin
            cdb_valid    <= 0;
            cdb_tag      <= 0;
            cdb_data     <= 0;
            cdb_id       <= 0;
            commit_valid <= 0;
            commit_id    <= 0;
            eu_to_ro_bus <= 0;
        end else begin
            if (cdb_sel_valid) begin
                cdb_valid    <= cdb_sel_gpr_we && (|cdb_sel_rd);
                cdb_tag      <= cdb_sel_tag;
                cdb_data     <= cdb_sel_data;
                cdb_id       <= cdb_sel_id;
                commit_valid <= 1;
                commit_id    <= cdb_sel_id;
                eu_to_ro_bus <= {cdb_sel_addr,  // 访存地址放最高 32 位, 低位字段位置不变
                    cdb_sel_pc, cdb_sel_inst,
                    1'b0, 1'b0,  // ecall, mret
                    1'b0, 12'b0, 32'b0,  // csr
                    cdb_sel_rd, cdb_sel_gpr_we, cdb_sel_data,
                    cdb_sel_is_write, cdb_sel_stb_id};
            end else begin
                cdb_valid    <= 0;
                commit_valid <= 0;
            end
        end
    end

    // CDB 反压: 防止 ALU 组合逻辑结果被丢弃。
    // ALU 结果仅在当前周期有效, 若 CDB 端口/缓冲无法接收则永久丢失。
    // 以下条件任一满足时阻止 ALU 发射:
    //   1. CDB 缓冲被占用 (下一拍才能排空)
    //   2. LSU/MDU 即将完成 (高优先级, 会抢占 CDB 或缓冲槽位)
    wire high_prio_completing = lsu_done_r || mdu_done;
    assign alu2_free = !cdb_buf_valid && !high_prio_completing;
    // MDU 自由: 由内部流水线与完成队列反压决定 (mdu_ready)
    assign mdu_free  = mdu_ready;
    assign lsu_free  = !lsu_active & !stb_drain_valid;

endmodule
