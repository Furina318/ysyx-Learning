`include "defines.vh"

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
    output wire                     lsu_load_free    ,

    output wire                       lsu_en           ,
    output wire [   `EX_TO_LS_WD-1:0] ex_to_ls_bus     ,
    input  wire [               31:0] lsu_data         ,
    input  wire [`STB_DEPTH_LOG2-1:0] lsu_stb_id       ,
    input  wire                       lsu_ready        ,
    input  wire                       stb_forward_full_hit,
    input  wire                       stb_drain_valid  ,
    input  wire                       stb_ready        ,

    // 非阻塞完成端口 (来自 LSU, 由 dcache 完成端口驱动)
    input  wire                       lsu_done_valid   ,
    input  wire [               31:0] lsu_done_data    ,
    input  wire [                5:0] lsu_done_phy_rd  ,
    input  wire [                4:0] lsu_done_rd      ,
    input  wire                       lsu_done_gpr_we  ,
    input  wire [               31:0] lsu_done_pc      ,
    input  wire [               31:0] lsu_done_inst    ,
    input  wire [     ID_WIDTH-1: 0]  lsu_done_id      ,
    input  wire [               31:0] lsu_done_addr    ,
    input  wire                       lsu_hit          ,

    output wire [   ID_WIDTH-1: 0]  lsu_inst_id      ,  // 当前 LSU 操作对应的指令 ID (用于 STB 精确冲刷)
    output wire [            5:0]   lsu_cur_phy_rd   ,  // 当前请求的物理目的寄存器
    output wire [           31:0]   lsu_cur_pc       ,  // 当前请求的 PC
    output wire [           31:0]   lsu_cur_inst     ,  // 当前请求的指令
    output wire                     lsu_cur_gpr_we   ,  // 当前请求是否写 GPR
    output reg                      lsu_done_ack     ,  // 完成端口被 CDB/缓冲接收

    output wire                     is_fencei        ,
    input  wire                     fence_done       ,

    // load buffer 非推测判断
    input  wire                     rob_oldest_valid ,
    input  wire [   ID_WIDTH-1:0]   rob_oldest_id
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
    // 完成端口结果冲刷检查: flush 拍输出被冲刷 load 的结果需抑制
    wire lsu_done2_flushed = flush && lsu_done_valid && (
        (flush_id[ID_WIDTH-1] ^ lsu_done_id[ID_WIDTH-1]) ?
        (flush_id[ID_WIDTH-2:0] > lsu_done_id[ID_WIDTH-2:0]) :
        (flush_id[ID_WIDTH-2:0] < lsu_done_id[ID_WIDTH-2:0])
    );
    // 慢路径结果 (done_r) 本拍是否被 CDB/缓冲消费 (与下方仲裁分支精确一致):
    //   fast=0: done_eff=0 时 done_r 上 CDB (done_r_eff 分支) 或入缓冲;
    //           done_eff=1 且缓冲空闲时 done_eff 上 CDB、done_r 入缓冲
    //   fast=1: 缓冲空闲且 done_eff=0 时 fast 上 CDB、done_r 入缓冲
    // 其余情形 (缓冲被 fast/done_eff 抢占) done_r 保持电平下拍重试。
    wire lsu_done_r_consumed =
        (!lsu_fast_valid && (!lsu_done_eff || !(cdb_buf_valid && !cdb_buf_flushed))) ||
        ( lsu_fast_valid && !lsu_done_eff && !(cdb_buf_valid && !cdb_buf_flushed));
    // 本周期发射的指令 (若比 flush_id 年轻则抑制)
    wire issue_flushed = flush && issue_valid && (
        (flush_id[ID_WIDTH-1] ^ inst_id[ID_WIDTH-1]) ?
        (flush_id[ID_WIDTH-2:0] > inst_id[ID_WIDTH-2:0]) :
        (flush_id[ID_WIDTH-2:0] < inst_id[ID_WIDTH-2:0])
    );

    wire this_is_alu = |alu_op;
    wire this_is_mdu = mdu_en;
    wire this_is_lsu = is_read | is_write;

    // ── Load Buffer: 接受 load 发射, 排队等待进入 LSU ──
    wire lb_ready;
    wire lb_empty;
    wire lb_req_valid;
    wire [   ID_WIDTH-1:0] lb_req_inst_id;
    wire [            5:0] lb_req_phy_rd;
    wire [            4:0] lb_req_rd;
    wire                   lb_req_gpr_we;
    wire [           31:0] lb_req_pc;
    wire [           31:0] lb_req_inst;
    wire [`EX_TO_LS_WD-1:0] lb_req_bus;

    // 只有非冲刷、且不是错误路径的 load 才允许分配进 load buffer
    wire load_issue = issue_valid & this_is_lsu & is_read & !issue_flushed;
    wire store_issue = issue_valid & this_is_lsu & is_write & !issue_flushed;

    // 普通 cacheable load 在 LSU 空闲且 load buffer 为空时仍然走原有的直通
    // 快/慢路径 (不引入额外延迟); load buffer 负责暂存非 cacheable/MMIO 投机
    // load, 以及在前一个 load 尚未完成时继续发射进来的 load。
    wire [31:0] addr_now = src1 + imm;
    wire        is_mem_addr_now = (addr_now[31:28] == 4'h8) || (addr_now[31:28] == 4'h9);
    wire        direct_load = load_issue & is_mem_addr_now & !lsu_active & lb_empty & !flush;
    wire        lb_alloc_valid = load_issue & !direct_load;

    // load buffer 请求被 exu_slot2 接受并驱动 LSU (store 优先)
    wire lb_req_granted = lb_req_valid & !store_issue & !lsu_active & !flush & !direct_load;

    load_buffer #(
        .DEPTH        (8            ),
        .ID_WIDTH     (ID_WIDTH     ),
        .PHY_REG_WIDTH(6            )
    ) u_load_buffer (
        .clk             (clk             ),
        .rst             (rst             ),
        .flush           (flush           ),
        .flush_id        (flush_id        ),

        .alloc_valid     (lb_alloc_valid  ),
        .alloc_inst_id   (inst_id         ),
        .alloc_phy_rd    (phy_rd          ),
        .alloc_rd        (rd              ),
        .alloc_gpr_we    (gpr_we          ),
        .alloc_pc        (pc              ),
        .alloc_inst      (inst            ),
        .alloc_bus       ({rd, lw_lh_lb, sw_sh_sb, is_load_sign, is_write, is_read, src1, src2, imm}),
        .lb_ready        (lb_ready        ),
        .lb_empty        (lb_empty        ),

        .req_valid       (lb_req_valid    ),
        .req_inst_id     (lb_req_inst_id  ),
        .req_phy_rd      (lb_req_phy_rd   ),
        .req_rd          (lb_req_rd       ),
        .req_gpr_we      (lb_req_gpr_we   ),
        .req_pc          (lb_req_pc       ),
        .req_inst        (lb_req_inst     ),
        .req_bus         (lb_req_bus      ),
        .req_granted     (lb_req_granted  ),


        .rob_oldest_valid(rob_oldest_valid),
        .rob_oldest_id   (rob_oldest_id   )
    );

    // 当前要送入 LSU 的请求: store 发射优先, 其次普通直通 load, 最后 load buffer 队首
    wire lsu_req_from_store = store_issue & !lsu_active;
    wire lsu_req_from_direct= direct_load;
    wire lsu_req_from_lb    = lb_req_valid & !store_issue & !lsu_active & !flush & !direct_load;
    wire lsu_req_valid      = lsu_req_from_store | lsu_req_from_direct | lsu_req_from_lb;
    wire [`EX_TO_LS_WD-1:0] lsu_req_bus = (lsu_req_from_store | lsu_req_from_direct) ?
        {rd, lw_lh_lb, sw_sh_sb, is_load_sign, is_write, is_read, src1, src2, imm} :
        lb_req_bus;
    wire [   ID_WIDTH-1:0]  lsu_req_id   = (lsu_req_from_store | lsu_req_from_direct) ? inst_id : lb_req_inst_id;
    wire [            5:0]  lsu_req_phy_rd = (lsu_req_from_store | lsu_req_from_direct) ? phy_rd : lb_req_phy_rd;
    wire [            4:0]  lsu_req_rd   = (lsu_req_from_store | lsu_req_from_direct) ? rd : lb_req_rd;
    wire                    lsu_req_gpr_we = (lsu_req_from_store | lsu_req_from_direct) ? gpr_we : lb_req_gpr_we;
    wire [           31:0]  lsu_req_pc   = (lsu_req_from_store | lsu_req_from_direct) ? pc : lb_req_pc;
    wire [           31:0]  lsu_req_inst = (lsu_req_from_store | lsu_req_from_direct) ? inst : lb_req_inst;
    wire [           31:0]  lsu_req_addr = lsu_req_bus[95:64] + lsu_req_bus[31:0];
    wire                    lsu_req_is_write = lsu_req_from_store;
    wire                    lsu_req_is_read  = lsu_req_from_direct | lsu_req_from_lb;
    wire [`STB_DEPTH_LOG2-1:0] lsu_req_stb_id = lsu_req_from_store ? lsu_stb_id : {`STB_DEPTH_LOG2{1'b0}};

    // ── 冲刷安全的就绪信号: 冲刷周期内抑制来自被冲刷指令的结果 ──
    wire lsu_has_valid_result;
    wire alu_has_valid_result;
    assign lsu_has_valid_result = lsu_has_result && !(lsu_done_r && lsu_done_flushed)
                                                  && !lsu_done2_flushed;
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
    wire cdb_buf_eff = cdb_buf_valid && !cdb_buf_flushed;
    // MDU 完成端口结果被 CDB/缓冲消费 
    wire mdu_consumed =
        ( cdb_buf_eff && !lsu_fast_valid && !lsu_done_eff && !lsu_done_r_eff) ||
        (!cdb_buf_eff && ((!lsu_done_r_eff && !lsu_done_eff) ||
                          (!lsu_done_r_eff && !lsu_fast_valid) ||
                          (!lsu_done_eff   && !lsu_fast_valid)));
    wire mdu_ack = mdu_done && mdu_consumed; // MDU 完成端口结果被 CDB/缓冲消费
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
    // load buffer 提供的 load 与 store 发射统一在此仲裁: store 优先,
    // load 从 load_buffer 队首取出送入 LSU。
    wire lsu_start = lsu_active ? 1'b1 : lsu_req_valid;
    assign lsu_en = lsu_start;

    assign ex_to_ls_bus = lsu_active ? lsu_sav_bus : lsu_req_bus;

    // 当前 LSU 操作的指令 ID:
    //   快路径 (lsu_active=0): 使用当前送入 LSU 的请求 ID
    //   慢路径 (lsu_active=1): 使用进入慢路径时保存的 lsu_sav_iid
    assign lsu_inst_id = lsu_active ? lsu_sav_iid : lsu_req_id;

    // 当前 LSU 请求的完成元数据 (供 LSU in_flight 队列登记)
    assign lsu_cur_phy_rd = lsu_active ? lsu_sav_phy_rd : lsu_req_phy_rd;
    assign lsu_cur_pc     = lsu_active ? lsu_sav_pc     : lsu_req_pc;
    assign lsu_cur_inst   = lsu_active ? lsu_sav_inst   : lsu_req_inst;
    assign lsu_cur_gpr_we = lsu_active ? lsu_sav_gpr_we : lsu_req_gpr_we;

    // 当前 LSU 操作的访存地址 (随提交总线传给 ROB/WBU, 供 difftest 判断 MMIO load):
    //   快路径: 当前送入 LSU 请求的 src1+imm;  慢路径: 锁存总线里的 src1+imm
    wire [31:0] lsu_addr_fast = lsu_req_addr;
    wire [31:0] lsu_addr_slow = lsu_sav_bus[95:64] + lsu_sav_bus[31:0];

    // LSU 快路径: 本拍 lsu_ready=1 -> 组合直通 CDB (阻塞路径下 ready 即完成)
    // 非阻塞语义: load miss 拍 lsu_ready=1 (MSHR 已接受) 但数据尚未返回,
    // 必须排除 (lsu_hit=0), 结果稍后经 lsu_done_* 完成端口交付。
    wire is_stb_hit = lsu_req_is_read & stb_forward_full_hit;
    wire lsu_fast_valid = lsu_req_valid & (lsu_ready | is_stb_hit) & !lsu_active &
                          (lsu_req_is_write | lsu_hit | is_stb_hit);
    // flush 拍 issue 被抑制, lsu_req_valid 来自残留总线 (垃圾地址如 0x0),
    // 若不抑制慢路径启动, 垃圾请求会锁存进 sav 并覆盖 flush 对 lsu_active
    // 的清除 → LSU 对 0x0 持续投机读死循环 (AXI_Bridge Invalid read)。
    wire lsu_slow_start = lsu_req_valid & !(lsu_ready | is_stb_hit) & !lsu_active & !flush;

    // 快路径 CDB 元数据: store 使用当前发射信息, load 使用 load_buffer 队首信息
    wire [            5:0]  lsu_fast_phy_rd  = lsu_req_phy_rd;
    wire [ID_WIDTH-1:0]     lsu_fast_id      = lsu_req_id;
    wire [           31:0]  lsu_fast_pc      = lsu_req_pc;
    wire [           31:0]  lsu_fast_inst    = lsu_req_inst;
    wire [            4:0]  lsu_fast_rd      = lsu_req_rd;
    wire                    lsu_fast_gpr_we  = lsu_req_gpr_we;
    wire                    lsu_fast_is_write= lsu_req_is_write;
    wire [`STB_DEPTH_LOG2-1:0] lsu_fast_stb_id = lsu_req_stb_id;
    wire [           31:0]  lsu_fast_addr    = lsu_req_addr;

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
            if (flush) begin
                if (lsu_flushed)      lsu_active    <= 1'b0;
                if (lsu_done_flushed) lsu_done_r    <= 1'b0;
                if (cdb_buf_flushed)  cdb_buf_valid <= 1'b0;
            end

            // ── LSU 慢路径 (lsu_ready=0, 未被接受, 需重试) ──
            if (lsu_slow_start) begin
                lsu_active       <= 1;
                lsu_done_r       <= 0;
                lsu_sav_pc       <= lsu_req_pc;
                lsu_sav_inst     <= lsu_req_inst;
                lsu_sav_rd       <= lsu_req_rd;
                lsu_sav_iid      <= lsu_req_id;
                lsu_sav_gpr_we   <= lsu_req_gpr_we;
                lsu_sav_phy_rd   <= lsu_req_phy_rd;
                lsu_sav_is_write <= lsu_req_is_write;
                lsu_sav_stb_id   <= lsu_req_stb_id;
                lsu_sav_bus      <= lsu_req_bus;  // 锁存 LSU 操作信息
            end else if (lsu_active & lsu_ready & !lsu_done_r &
                          (lsu_sav_is_write | lsu_hit)) begin
                // load 慢路径只在命中时完成: MSHR 接受拍 (miss, lsu_hit=0)
                // 不完成, 结果由 IQ 完成端口交付; 若在此完成, sav_data 锁存
                // 的是 miss 拍的旧行数据 (垃圾), 会抢先于 IQ 的正确数据提交
                // (ROB 一旦提交 bus 不再更新)。store 慢路径 ready 即完成。
                lsu_done_r    <= 1;
                lsu_sav_data  <= lsu_data;
                lsu_active    <= 0;
            end else if (lsu_done_r && lsu_done_r_consumed) begin
                // 仅当慢路径结果被 CDB/缓冲消费后才清除 (与仲裁分支精确一致),
                // 否则保持电平下拍重试。消费条件:
                //   fast=0: done_eff=0 (done_r 上 CDB/入缓冲) 或缓冲空时 done_eff 入缓冲留出 done_r
                //   fast=1: 缓冲空且 done_eff=0 时 done_r 随 fast 分支入缓冲
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
    wire lsu_has_result = lsu_fast_valid | lsu_done_r | lsu_done_valid;  // 快/慢/完成端口

    // 完成端口与慢路径的有效结果 (冲刷抑制)
    wire lsu_done_eff   = lsu_done_valid && !lsu_done2_flushed;
    wire lsu_done_r_eff = lsu_done_r && !lsu_done_flushed;

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
        lsu_done_ack         = 0;

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
            // 新结果入缓冲: one-shot 优先 (fast > done), done_r 电平可重试
            if (lsu_fast_valid) begin
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt      = lsu_fast_phy_rd;
                cdb_buf_data_nxt     = lsu_data;
                cdb_buf_id_nxt       = lsu_fast_id;
                cdb_buf_pc_nxt       = lsu_fast_pc;
                cdb_buf_inst_nxt     = lsu_fast_inst;
                cdb_buf_rd_nxt       = lsu_fast_rd;
                cdb_buf_gpr_nxt      = lsu_fast_gpr_we;
                cdb_buf_phy_nxt      = lsu_fast_phy_rd;
                cdb_buf_is_write_nxt = lsu_fast_is_write;
                cdb_buf_stb_id_nxt   = lsu_fast_stb_id;
                cdb_buf_addr_nxt     = lsu_fast_addr;
            end else if (lsu_done_eff) begin
                cdb_buf_load    = 1;
                lsu_done_ack    = 1;
                cdb_buf_tag_nxt      = lsu_done_phy_rd;
                cdb_buf_data_nxt     = lsu_done_data;
                cdb_buf_id_nxt       = lsu_done_id;
                cdb_buf_pc_nxt       = lsu_done_pc;
                cdb_buf_inst_nxt     = lsu_done_inst;
                cdb_buf_rd_nxt       = lsu_done_rd;
                cdb_buf_gpr_nxt      = lsu_done_gpr_we;
                cdb_buf_phy_nxt      = lsu_done_phy_rd;
                cdb_buf_is_write_nxt = 1'b0;
                cdb_buf_stb_id_nxt   = {`STB_DEPTH_LOG2{1'b0}};
                cdb_buf_addr_nxt     = lsu_done_addr;
            end else if (lsu_done_r_eff) begin
                // 慢路径结果 (done_r) 与 done_eff 同拍时入缓冲, 防止丢失
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt      = lsu_sav_phy_rd;
                cdb_buf_data_nxt     = lsu_sav_data;
                cdb_buf_id_nxt       = lsu_sav_iid;
                cdb_buf_pc_nxt       = lsu_sav_pc;
                cdb_buf_inst_nxt     = lsu_sav_inst;
                cdb_buf_rd_nxt       = lsu_sav_rd;
                cdb_buf_gpr_nxt      = lsu_sav_gpr_we;
                cdb_buf_phy_nxt      = lsu_sav_phy_rd;
                cdb_buf_is_write_nxt = lsu_sav_is_write;
                cdb_buf_stb_id_nxt   = lsu_sav_stb_id;
                cdb_buf_addr_nxt     = lsu_addr_slow;
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
        else if (lsu_done_eff) begin
            // 完成端口结果优先走 CDB (in_flight 等待最久), 其余冲突结果入缓冲
            cdb_sel_valid    = 1;
            cdb_sel_tag      = lsu_done_phy_rd;
            cdb_sel_data     = lsu_done_data;
            cdb_sel_id       = lsu_done_id;
            cdb_sel_pc       = lsu_done_pc;
            cdb_sel_inst     = lsu_done_inst;
            cdb_sel_rd       = lsu_done_rd;
            cdb_sel_gpr_we   = lsu_done_gpr_we;
            cdb_sel_phy_rd   = lsu_done_phy_rd;
            cdb_sel_is_write = 1'b0;
            cdb_sel_stb_id   = {`STB_DEPTH_LOG2{1'b0}};
            cdb_sel_addr     = lsu_done_addr;
            lsu_done_ack     = 1;
            if (lsu_fast_valid) begin
                cdb_buf_load         = 1;
                cdb_buf_tag_nxt      = lsu_fast_phy_rd;
                cdb_buf_data_nxt     = lsu_data;
                cdb_buf_id_nxt       = lsu_fast_id;
                cdb_buf_pc_nxt       = lsu_fast_pc;
                cdb_buf_inst_nxt     = lsu_fast_inst;
                cdb_buf_rd_nxt       = lsu_fast_rd;
                cdb_buf_gpr_nxt      = lsu_fast_gpr_we;
                cdb_buf_phy_nxt      = lsu_fast_phy_rd;
                cdb_buf_is_write_nxt = lsu_fast_is_write;
                cdb_buf_stb_id_nxt   = lsu_fast_stb_id;
                cdb_buf_addr_nxt     = lsu_fast_addr;
            end else if (lsu_done_r_eff) begin
                // 慢路径结果与 done_eff 同拍时入缓冲, 防止丢失
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt      = lsu_sav_phy_rd;
                cdb_buf_data_nxt     = lsu_sav_data;
                cdb_buf_id_nxt       = lsu_sav_iid;
                cdb_buf_pc_nxt       = lsu_sav_pc;
                cdb_buf_inst_nxt     = lsu_sav_inst;
                cdb_buf_rd_nxt       = lsu_sav_rd;
                cdb_buf_gpr_nxt      = lsu_sav_gpr_we;
                cdb_buf_phy_nxt      = lsu_sav_phy_rd;
                cdb_buf_is_write_nxt = lsu_sav_is_write;
                cdb_buf_stb_id_nxt   = lsu_sav_stb_id;
                cdb_buf_addr_nxt     = lsu_addr_slow;
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
        else if (lsu_done_r_eff) begin
            // 慢路径 (store/load 慢完成) 优先走 CDB 端口, 快路径冲突时进缓冲
            cdb_sel_valid    = 1;
            cdb_sel_tag      = lsu_sav_phy_rd;
            cdb_sel_data     = lsu_sav_data;
            cdb_sel_id       = lsu_sav_iid;
            cdb_sel_pc       = lsu_sav_pc;
            cdb_sel_inst     = lsu_sav_inst;
            cdb_sel_rd       = lsu_sav_rd;
            cdb_sel_gpr_we   = lsu_sav_gpr_we;
            cdb_sel_phy_rd   = lsu_sav_phy_rd;
            cdb_sel_is_write = lsu_sav_is_write;
            cdb_sel_stb_id   = lsu_sav_stb_id;
            cdb_sel_addr     = lsu_addr_slow;
            if (lsu_fast_valid) begin
                cdb_buf_load         = 1;
                cdb_buf_tag_nxt      = lsu_fast_phy_rd;
                cdb_buf_data_nxt     = lsu_data;
                cdb_buf_id_nxt       = lsu_fast_id;
                cdb_buf_pc_nxt       = lsu_fast_pc;
                cdb_buf_inst_nxt     = lsu_fast_inst;
                cdb_buf_rd_nxt       = lsu_fast_rd;
                cdb_buf_gpr_nxt      = lsu_fast_gpr_we;
                cdb_buf_phy_nxt      = lsu_fast_phy_rd;
                cdb_buf_is_write_nxt = lsu_fast_is_write;
                cdb_buf_stb_id_nxt   = lsu_fast_stb_id;
                cdb_buf_addr_nxt     = lsu_fast_addr;
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
        else if (lsu_fast_valid) begin
            cdb_sel_valid    = 1;
            cdb_sel_tag      = lsu_fast_phy_rd;
            cdb_sel_data     = lsu_data;
            cdb_sel_id       = lsu_fast_id;
            cdb_sel_pc       = lsu_fast_pc;
            cdb_sel_inst     = lsu_fast_inst;
            cdb_sel_rd       = lsu_fast_rd;
            cdb_sel_gpr_we   = lsu_fast_gpr_we;
            cdb_sel_phy_rd   = lsu_fast_phy_rd;
            cdb_sel_is_write = lsu_fast_is_write;
            cdb_sel_stb_id   = lsu_fast_stb_id;
            cdb_sel_addr     = lsu_fast_addr;
            if (lsu_done_r_eff) begin
                // 慢路径结果与 fast 同拍时入缓冲 (fast 抢占 CDB)
                cdb_buf_load    = 1;
                cdb_buf_tag_nxt      = lsu_sav_phy_rd;
                cdb_buf_data_nxt     = lsu_sav_data;
                cdb_buf_id_nxt       = lsu_sav_iid;
                cdb_buf_pc_nxt       = lsu_sav_pc;
                cdb_buf_inst_nxt     = lsu_sav_inst;
                cdb_buf_rd_nxt       = lsu_sav_rd;
                cdb_buf_gpr_nxt      = lsu_sav_gpr_we;
                cdb_buf_phy_nxt      = lsu_sav_phy_rd;
                cdb_buf_is_write_nxt = lsu_sav_is_write;
                cdb_buf_stb_id_nxt   = lsu_sav_stb_id;
                cdb_buf_addr_nxt     = lsu_addr_slow;
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
    // lsu_done_valid (IQ 完成端口, 电平保持) 亦须计入, 否则 done_eff 上 CDB
    // 且 fast/mdu 抢占缓冲槽时 ALU 结果被静默丢弃 → ROB 死锁。
    wire high_prio_completing = lsu_done_r || lsu_done_valid || mdu_done;
    assign alu2_free = !cdb_buf_valid && !high_prio_completing;
    // MDU 自由: 由内部流水线与完成队列反压决定 (mdu_ready)
    assign mdu_free  = mdu_ready;
    // store 发射要求 STB 有空间: 若 stb_ready=0 时发射, stb_alloc_valid
    // 不被接收, store 指令静默丢失 (hello-str 的 sb 0xb7c 缺失, flush 后
    // 重放集中发射 STB 满)。
    assign lsu_free  = !lsu_active & !stb_drain_valid & stb_ready;
    assign lsu_load_free = lb_ready & !stb_drain_valid;
endmodule
