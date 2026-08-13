`include "defines.vh"

// exu_slot1: 执行槽1 — ALU1 + BRU + PRU (CSR)
// 处理 quick_type, ctrl_type, special_type 指令
module exu_slot1 #(
    ID_WIDTH      = 5
)(
    input  wire                    clk              ,
    input  wire                    rst              ,

    // 从 issue 发射的指令
    input  wire                    issue_valid      ,
    input  wire [           31: 0] src1             ,  // 源操作数1 (已旁路)
    input  wire [           31: 0] src2             ,  // 源操作数2 (已旁路)
    input  wire [            5: 0] phy_rd           ,  // 目的物理寄存器
    input  wire [   ID_WIDTH-1: 0] inst_id          ,  // 指令ID (低5位)
    input  wire [`IS_TO_EX_WD-1:0] is_to_eu_bus     ,  // 译码信息

    // CDB 输出
    output reg                      cdb_valid        ,
    output reg  [            5: 0]  cdb_tag          ,
    output reg  [           31: 0]  cdb_data         ,
    output reg  [   ID_WIDTH-1: 0]  cdb_id           ,

    // ROB 提交
    output reg                      commit_valid     ,
    output reg  [   ID_WIDTH-1: 0]  commit_id        ,
    output reg  [`EX_TO_RO_WD-1:0]  eu_to_ro_bus     ,

    // FU 状态 (slot1 的 FU 总是单周期，永远空闲)
    output wire                     alu1_free        ,
    output wire                     bru_free         ,
    output wire                     csr_free         ,

    // 冲刷信号 (来自 BRU)
    output reg                      flush_en         ,
    output reg  [           31: 0]  flush_dnpc       ,
    output reg  [   ID_WIDTH-1: 0]  flush_id         ,

    // BPU 更新 (来自 BRU)
    output reg  [           31: 0]  bru_pc           ,
    output reg  [           31: 0]  bru_dnpc         ,
    output reg                      bru_dnpc_valid   ,
    output reg                      bru_taken        ,
    output reg                      bru_is_call      ,
    output reg                      bru_is_ret       ,
    output reg                      bru_is_jal       ,
    output reg                      bru_is_jalr      ,
    output reg                      bru_is_indirect  ,
    output reg                      bru_is_c_inst    ,

    // fence.i
    output wire                     is_fencei        ,
    input  wire                     pc_update        ,
    input  wire                     fence_done       ,

    // CSR 接口
    output wire [           11: 0]  csr_raddr        ,
    input  wire [           31: 0]  csr_rdata        ,
    output wire [           11: 0]  csr_waddr        ,
    output wire [           31: 0]  csr_wdata        ,
    output wire                     csr_gpr_we       ,
    output wire                     ecall_en         ,
    output wire                     mret_en
);

    // ─── 解析 du_bus ───
    wire [31:0] pc;
    wire [31:0] inst;
    wire [31:0] bpu_dnpc;
    wire [ 1:0] lw_lh_lb;
    wire [ 1:0] sw_sh_sb;
    wire        is_load_sign;
    wire        inst_fence_i;
    wire [31:0] imm;
    wire [ 4:0] rd;
    wire [ 4:0] rs1;
    wire [ 4:0] rs2;
    wire        is_write;
    wire        is_read;
    wire        gpr_we;
    wire [10:0] alu_op;
    wire [ 5:0] bru_op;
    wire        mdu_en;
    wire [ 7:0] mdu_op;
    wire        src1_is_pc;
    wire        src2_is_imm;
    wire [ 1:0] jal_or_jalr;
    wire        ecall_op;
    wire        mret_op;
    wire [ 5:0] csr_op;
    wire        inst_ebreak;
    wire        is_call;
    wire        is_ret;
    wire        is_jal;
    wire        is_jalr;
    wire        is_indirect;
    wire        is_c_inst;

    assign {
        pc           ,
        inst         ,
        bpu_dnpc     ,
        lw_lh_lb     ,
        sw_sh_sb     ,
        is_load_sign ,
        inst_fence_i ,
        imm          ,
        rd           ,
        rs1          ,
        rs2          ,
        is_write     ,
        is_read      ,
        gpr_we       ,
        alu_op       ,
        bru_op       ,
        mdu_en       ,
        mdu_op       ,
        src1_is_pc   ,
        src2_is_imm  ,
        jal_or_jalr  ,
        ecall_op     ,
        mret_op      ,
        csr_op       ,
        inst_ebreak  ,
        is_call      ,
        is_ret       ,
        is_jal       ,
        is_jalr      ,
        is_indirect  ,
        is_c_inst
    } = is_to_eu_bus;

    assign is_fencei = inst_fence_i;
    assign ecall_en  = ecall_op;
    assign mret_en   = mret_op;

    // ═══════════════════════════════════════════
    // ALU1
    // ═══════════════════════════════════════════
    wire [31:0] alu_src1 = src1_is_pc  ? pc  : src1;
    wire [31:0] alu_src2 = src2_is_imm ? imm : src2;
    wire [31:0] alu_result;

    alu u_alu1 (
        .alu_op     (alu_op     ),
        .alu_src1   (alu_src1   ),
        .alu_src2   (alu_src2   ),
        .alu_result (alu_result )
    );

    // ═══════════════════════════════════════════
    // BRU
    // ═══════════════════════════════════════════
    wire [31:0] bru_src1 = src1;
    wire [31:0] bru_src2 = src2;
    wire [31:0] bru_src3 = src1_is_pc  ? pc  : src1;
    wire [31:0] bru_src4 = src2_is_imm ? imm : src2;

    wire                bru_flush_en;
    wire [        31:0] bru_flush_dnpc;
    reg  [ID_WIDTH-1:0] branch_inst_id;   // 保存分支指令ID，供冲刷时使用
    wire [        31:0] bru_pc_o, bru_dnpc_o;
    wire                bru_dnpc_valid_o, bru_taken_o;
    wire                bru_is_call_o, bru_is_ret_o, bru_is_jal_o, bru_is_jalr_o, bru_is_indirect_o, bru_is_c_inst_o;
    wire [ID_WIDTH-1:0] bru_flush_id;
    wire                bru_dnpc_valid_c, bru_taken_c;
    wire [        31:0] bru_pc_c, bru_dnpc_c;
    wire                bru_is_call_c, bru_is_ret_c, bru_is_jal_c, bru_is_jalr_c, bru_is_indirect_c, bru_is_c_inst_c;

    bru #(
        .ID_WIDTH(ID_WIDTH)
    )u_bru (
        .clk            (clk            ),
        .rst            (rst            ),
        .bru_op         (bru_op         ),
        .bru_src1       (bru_src1       ),
        .bru_src2       (bru_src2       ),
        .bru_src3       (bru_src3       ),
        .bru_src4       (bru_src4       ),
        .pc             (pc             ),
        .jal_or_jalr    (jal_or_jalr    ),
        .is_fencei      (inst_fence_i   ),
        .issue_valid    (issue_valid    ),
        .pc_update      (pc_update      ),
        .bpu_dnpc       (bpu_dnpc       ),
        .inst_id        (inst_id        ),
        .flush_id       (bru_flush_id   ),
        .flush_en       (bru_flush_en   ),
        .flush_dnpc     (bru_flush_dnpc ),
        .is_call        (is_call        ),
        .is_ret         (is_ret         ),
        .is_jal         (is_jal         ),
        .is_jalr        (is_jalr        ),
        .is_indirect    (is_indirect    ),
        .ecall_en       (ecall_op       ),
        .mret_en        (mret_op        ),
        .csr_rdata      (csr_rdata      ),
        .is_c_inst      (is_c_inst      ),
        .bru_is_c_inst  (bru_is_c_inst_o),
        .bru_pc         (bru_pc_o       ),
        .bru_dnpc       (bru_dnpc_o     ),
        .bru_dnpc_valid (bru_dnpc_valid_o),
        .bru_taken      (bru_taken_o    ),
        .bru_is_call    (bru_is_call_o  ),
        .bru_is_ret     (bru_is_ret_o   ),
        .bru_is_jal     (bru_is_jal_o   ),
        .bru_is_jalr    (bru_is_jalr_o  ),
        .bru_is_indirect(bru_is_indirect_o),
        .bru_dnpc_valid_c  (bru_dnpc_valid_c  ),
        .bru_pc_c          (bru_pc_c          ),
        .bru_dnpc_c        (bru_dnpc_c        ),
        .bru_taken_c       (bru_taken_c       ),
        .bru_is_call_c     (bru_is_call_c     ),
        .bru_is_ret_c      (bru_is_ret_c      ),
        .bru_is_jal_c      (bru_is_jal_c      ),
        .bru_is_jalr_c     (bru_is_jalr_c     ),
        .bru_is_indirect_c (bru_is_indirect_c ),
        .bru_is_c_inst_c   (bru_is_c_inst_c   )
    );

    // ═══════════════════════════════════════════
    // PRU (CSR 处理)
    // ═══════════════════════════════════════════
    wire [11:0] pru_raddr, pru_waddr;
    wire [31:0] pru_wdata;
    wire        pru_we;

    /* verilator lint_off PINCONNECTEMPTY */
    pru u_pru (
        .clk        (clk        ),
        .rst        (rst        ),
        .pru_en     (issue_valid & (|csr_op)),
        .pru_done   (),
        .pru_pc     (pc         ),
        .pru_imm    (imm        ),
        .csr_op     (csr_op     ),
        .inst_ebreak(inst_ebreak),
        .pru_rs1    (rs1        ),
        .pru_src1   (src1       ),
        .pru_src2   (src2       ),
        .pru_raddr  (pru_raddr  ),
        .pru_rdata  (csr_rdata  ),
        .pru_waddr  (pru_waddr  ),
        .pru_wdata  (pru_wdata  ),
        .pru_we     (pru_we     )
    );
    /* verilator lint_on PINCONNECTEMPTY */

    assign csr_raddr = pru_raddr;
    assign csr_waddr = pru_waddr;
    assign csr_wdata = pru_wdata;
    assign csr_gpr_we = pru_we;

    // ═══════════════════════════════════════════
    // 结果选择 & CDB 输出
    // ═══════════════════════════════════════════
    wire [31:0] snpc = is_c_inst ? (pc + 2) : (pc + 4);
    wire        is_ctrl = |bru_op | (|jal_or_jalr);

    wire [31:0] result = is_ctrl    ? snpc       :
                         pru_we     ? csr_rdata  :
                         alu_result;

    // 本拍是否完成 (slot1 所有 FU 都是单周期)
    wire done = issue_valid;

    // 冲刷: 来自 BRU
    // (BRU 内部已处理目标地址比较和 flush 生成)

    // ─── 时序输出 ───
    always @(posedge clk) begin
        if (rst) begin
            cdb_valid       <= 1'b0;
            cdb_tag         <= 6'b0;
            cdb_data        <= 32'b0;
            cdb_id          <= {ID_WIDTH {1'b0}};
            commit_valid    <= 1'b0;
            commit_id       <= {ID_WIDTH {1'b0}};
            eu_to_ro_bus    <= 'b0;
            flush_en        <= 1'b0;
            flush_dnpc      <= 32'b0;
            flush_id        <= {ID_WIDTH {1'b0}};
            branch_inst_id  <= {ID_WIDTH {1'b0}};
            bru_pc          <= 32'b0;
            bru_dnpc        <= 32'b0;
            bru_dnpc_valid  <= 1'b0;
            bru_taken       <= 1'b0;
            bru_is_call     <= 1'b0;
            bru_is_ret      <= 1'b0;
            bru_is_jal      <= 1'b0;
            bru_is_jalr     <= 1'b0;
            bru_is_indirect <= 1'b0;
            bru_is_c_inst   <= 1'b0;
        end
        else begin
            if (done && issue_valid) begin
                // CDB 广播
                cdb_valid  <= gpr_we && (|rd);
                cdb_tag    <= phy_rd;
                cdb_data   <= result;
                cdb_id     <= inst_id;

                // ROB 提交
                commit_valid <= 1'b1;
                commit_id    <= inst_id;
                eu_to_ro_bus <= {
                    32'b0       ,  // mem_addr (slot1 无访存, 置 0)
                    pc          ,
                    inst        ,
                    ecall_op    ,
                    mret_op     ,
                    pru_we      ,
                    pru_waddr   ,
                    pru_wdata   ,
                    rd          ,
                    gpr_we      ,
                    result      ,
                    1'b0        ,  // is_write (slot1 never has stores)
                    4'b0           // lsu_stb_id
                };
            end else begin
                cdb_valid    <= 1'b0;
                commit_valid <= 1'b0;
            end

            // BRU 冲刷信号直通
            flush_en        <= bru_flush_en;
            flush_dnpc      <= bru_flush_dnpc;
            flush_id        <= bru_flush_id;
            // 仅在冲刷首周期锁存 flush_id，避免冲刷期间新进入的指令
            // 覆盖 branch_inst_id 导致 flush_id 跳变。
            // if (bru_flush_en && !flush_en) flush_id <= branch_inst_id;

            // // 任何进入 slot1 的指令都可能因 BPU 误预测而触发 BRU 冲刷,
            // // 所以每条指令都应保存 inst_id (而非仅 ctrl_type)。
            // // 同时冲刷期间 (!bru_flush_en) 禁止覆盖, 保持 flush_id 稳定。
            // if (done && issue_valid && !bru_flush_en) begin
            //     branch_inst_id <= inst_id;
            // end

            // BPU 状态更新仅对 ctrl 指令。
            // 用 bru 的组合输出 (bru_*_c): 寄存器输出晚一拍, 会丢失训练数据。
            // 不抑制 flush 期间更新: 误预测分支自身常在 flush 恢复期内完成,
            // 抑制会导致其 TAGE/FTB 训练被丢弃 (quick-sort partition blt
            // 因此每次误预测, IPC 0.07)。训练仅影响性能, 正确性由 BRU 兜底。
            if (is_ctrl && done && issue_valid) begin
                bru_pc          <= bru_pc_c;
                bru_dnpc        <= bru_dnpc_c;
                bru_dnpc_valid  <= bru_dnpc_valid_c;
                bru_taken       <= bru_taken_c;
                bru_is_call     <= bru_is_call_c;
                bru_is_ret      <= bru_is_ret_c;
                bru_is_jal      <= bru_is_jal_c;
                bru_is_jalr     <= bru_is_jalr_c;
                bru_is_indirect <= bru_is_indirect_c;
                bru_is_c_inst   <= bru_is_c_inst_c;
            end else begin
                bru_dnpc_valid  <= 1'b0;
                bru_taken       <= 1'b0;
                bru_is_call     <= 1'b0;
                bru_is_ret      <= 1'b0;
                bru_is_jal      <= 1'b0;
                bru_is_jalr     <= 1'b0;
                bru_is_indirect <= 1'b0;
                bru_is_c_inst   <= 1'b0;
            end
        end
    end

    assign alu1_free = 1'b1;
    assign bru_free  = 1'b1;
    // assign bru_free  = !flush_en;
    assign csr_free  = 1'b1;

endmodule
