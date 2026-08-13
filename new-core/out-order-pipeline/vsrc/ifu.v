`include "defines.vh"

module ifu (
    input  wire         clk            ,
    input  wire         rst            ,
    input  wire         exu_flush_en   ,
    input  wire [31: 0] exu_flush_dnpc ,
    output wire         pc_updata      ,
    input  wire         ibu_ready      ,
    output wire         ifu_valid1     ,
    output wire         ifu_valid2     ,

    input  wire [31: 0] icache_inst1   ,
    input  wire [31: 0] icache_inst2   ,
    output wire [31: 0] icache_addr    ,
    input  wire         icache_valid   ,
    input  wire [31: 0] bpu_dnpc       ,
    output reg  [31: 0] bpu_pc         ,
    input  wire [31: 0] dnpc_slot1     ,
    input  wire [31: 0] dnpc_slot2     ,
    input  wire [1 : 0] pre_way        ,
    output wire         bpu_en_1       ,
    output wire         bpu_en_2       ,

    output wire         is_call_1        ,
    output wire         is_ret_1         ,
    output wire         is_jal_1         ,
    output wire         is_jalr_1        ,
    output wire         is_indirect_1    ,
    output wire         is_cond_branch_1 ,
    output wire         is_c_inst_1      ,

    output wire         is_call_2        ,
    output wire         is_ret_2         ,
    output wire         is_jal_2         ,
    output wire         is_jalr_2        ,
    output wire         is_indirect_2    ,
    output wire         is_cond_branch_2 ,
    output wire         is_c_inst_2      ,

    output wire [`IF_TO_ID_WD-1:0] if_to_ib_bus1,
    output wire [`IF_TO_ID_WD-1:0] if_to_ib_bus2
);
    localparam JAL_OP    = 7'b1101111;
    localparam JALR_OP   = 7'b1100111;
    localparam B_COND_OP = 7'b1100011;

    reg  [31:0] pc;
    wire [31:0] bpu_pc_comb = {pc[31:3], 3'b000}; // 八字节对齐

    wire [ 2:0] pc_offset   = pc[2:0];
    wire [63:0] inst_window = {icache_inst2, icache_inst1};

    // ─── 跨界缓冲 ───
    // 当某指令起始于偏移 6 且为 32 位时, 其高 16 位在下一 8 字节窗口,
    // 需缓冲低 16 位并 stall 一拍
    reg         cross_buf_valid;
    reg  [15:0] cross_buf_data;
    reg         cross_from_slot1;  // 暂未使用但保留以备后续调试

    // 取指地址: 跨界解决时跳到 bpu_pc + 8
    assign icache_addr = cross_buf_valid ? (bpu_pc_comb + 32'd8) : bpu_pc_comb;

    wire slot1_exists = (pc_offset < 3'd4);   // pc 在第一 word 内 → 有待发射指令

    // slot1 半字 (偏移 0 或 2)
    wire [15:0] s1_hw = pc_offset[1] ? inst_window[31:16] : inst_window[15:0];

    // slot1 是否为 32 位指令
    wire s1_is32 = slot1_exists & (s1_hw[1:0] == 2'b11);

    wire [31:0] c_exp1; 
    wire        c_valid1;
    c_decode u_cd1 (
        .clk   (clk        ), 
        .reset (rst        ), 
        .c_inst(s1_hw      ), 
        .inst  (c_exp1     ), 
        .valid (c_valid1   )
    );

    // slot1 完整指令
    // 偏移 0, 32-bit → window[31:0]
    // 偏移 2, 32-bit → window[47:16]   (低16在 word0 高半, 高16在 word1 低半)
    // 偏移 0/2, 16-bit → C 扩展
    wire [31:0] s1_inst = s1_is32
                           ? (pc_offset[1] ? inst_window[47:16] : inst_window[31:0])
                           : c_exp1;
    wire s1_is_c = slot1_exists & ~s1_is32;
    wire [31:0] s1_pc  = pc;

    wire [2:0] s1_bytes  = s1_is32 ? 3'd4 : 3'd2;
    // 用 4-bit 加法避免 slot2 超出窗口时偏移回绕
    wire [3:0] s2_start4 = {1'b0, pc_offset} + (slot1_exists ? {1'b0, s1_bytes} : 4'd0);
    wire       s2_exists = (s2_start4 >= 4'd4) & (s2_start4 < 4'd8);  // 仅在偏移 4 或 6

    // slot2 半字 (偏移 4→window[47:32], 偏移 6→window[63:48])
    wire [15:0] s2_hw = s2_start4[1] ? inst_window[63:48] : inst_window[47:32];

    // slot2 是否为 32 位 & 是否跨界
    wire s2_is32  = s2_exists & (s2_hw[1:0] == 2'b11);
    wire s2_cross = s2_is32 & s2_start4[1];   // 偏移 6 且 32 位 → 跨界

    wire [31:0] c_exp2; 
    wire        c_valid2;
    c_decode u_cd2 (
        .clk    (clk      ), 
        .reset  (rst      ), 
        .c_inst (s2_hw    ), 
        .inst   (c_exp2   ), 
        .valid  (c_valid2 )
    );

    // slot2 完整指令 (仅偏移 4 的 32 位指令完整; 偏移 6 的 32 位指令跨界)
    wire [31:0] s2_inst = s2_is32 ? inst_window[63:32] : c_exp2;
    wire        s2_is_c = s2_exists & ~s2_cross & ~s2_is32;
    wire [31:0] s2_pc   = bpu_pc_comb + {28'b0, s2_start4};

    // slot2 本拍是否可发射
    wire s2_valid = s2_exists & ~s2_cross;

    // ═══════════════════════════════════════════════════
    // 跨界指令完成 (cross_buf_valid=1 时)
    // 此时 icache_addr = bpu_pc+8, 跨界指令在 icache_inst1 低 16 位
    // ═══════════════════════════════════════════════════

    // 跨界解决时: 完整指令占用 slot1 位置
    wire [31:0] cross_inst = {icache_inst1[15:0], cross_buf_data};

    // 最终 slot1 输出
    wire        final_s1_valid = slot1_exists | cross_buf_valid;
    wire [31:0] final_s1_inst  = cross_buf_valid ? cross_inst : s1_inst;
    wire        final_s1_is32  = cross_buf_valid ? 1'b1    : s1_is32;
    wire        final_s1_is_c  = cross_buf_valid ? 1'b0    : s1_is_c;
    // 跨界指令起始于 bpu_pc+6 (上一拍的 slot2 起始)
    wire [31:0] final_s1_pc    = cross_buf_valid ? (bpu_pc_comb + 32'd6) : s1_pc;

    // 最终 slot2 输出 (跨界解决时 slot2 不可用)
    wire        final_s2_valid = s2_valid & ~cross_buf_valid;
    wire [31:0] final_s2_inst  = s2_inst;
    wire        final_s2_is32  = s2_is32;
    wire        final_s2_is_c  = s2_is_c;
    wire [31:0] final_s2_pc    = s2_pc;

    // ═══════════════════════════════════════════════════
    // 偏移 6 处的指令跨界检测
    // (slot1 不存在时, 唯一指令在偏移 6 且为 32 位 → 需 stall)
    // ═══════════════════════════════════════════════════
    wire inst6_cross = ~cross_buf_valid & ~slot1_exists
                       & (pc_offset == 3'd6) & s2_is32;

    // ─── 有效性与握手 ───
    wire inst_ready = icache_valid & ~inst6_cross;

    // 去重
    reg [31:0] old1, old2;
    wire sent1 = inst_ready & (final_s1_inst != old1) & final_s1_valid;
    wire sent2 = inst_ready & (final_s2_inst != old2) & final_s2_valid;

    // ─── BPU 使能 ───
    // bpu_en_1: slot1 位置 (起始在 bpu_pc word) 有待预测指令
    // bpu_en_2: slot2 位置 (起始在 bpu_pc+4 word) 有待预测指令
    assign bpu_en_1 = slot1_exists | cross_buf_valid | inst6_cross;
    assign bpu_en_2 = ~cross_buf_valid & (s2_exists | inst6_cross);

    // ─── ifu_valid ───
    wire base_valid = inst_ready & ~exu_flush_en;
    // pre_way==01: slot1 跳转 → slot2 被冲刷 (ifu_valid2=0)
    assign ifu_valid1 = base_valid & final_s1_valid & ibu_ready;
    assign ifu_valid2 = base_valid & final_s2_valid & (pre_way != 2'b01) & !is_jal_1 & ibu_ready;

    wire [6:0] op1   = final_s1_inst[ 6: 0];
    wire [4:0] rd1   = final_s1_inst[11: 7];
    wire [4:0] rs1_1 = final_s1_inst[19:15];

    wire i_call_1     = ((op1 == JAL_OP) | (op1 == JALR_OP)) & (rd1 == 5'd1);
    wire i_ret_1      = (op1 == JALR_OP) & (rd1 == 5'd0) & (rs1_1 == 5'd1)
                        & (final_s1_inst[31:20] == 0);
    wire i_jal_1      = (op1 == JAL_OP);
    wire i_jalr_1     = (op1 == JALR_OP);
    wire i_ind_1      = (op1 == JALR_OP) & (rs1_1 != 5'd1);
    wire i_br_1       = (op1 == B_COND_OP);

    assign is_call_1        = i_call_1 & sent1;
    assign is_ret_1         = i_ret_1  & sent1;
    assign is_jal_1         = i_jal_1  & sent1;
    assign is_jalr_1        = i_jalr_1 & sent1;
    assign is_indirect_1    = i_ind_1  & sent1;
    assign is_cond_branch_1 = i_br_1   & sent1;
    assign is_c_inst_1      = final_s1_is_c & sent1;
    wire [31:0] immJ1            = {{12{final_s1_inst[31]}}, final_s1_inst[19:12], final_s1_inst[20], final_s1_inst[30:21], 1'b0};
    wire [31:0] jal_target1 = final_s1_pc + immJ1;

    wire [6:0] op2   = final_s2_inst[ 6: 0];
    wire [4:0] rd2   = final_s2_inst[11: 7];
    wire [4:0] rs1_2 = final_s2_inst[19:15];

    wire i_call_2     = ((op2 == JAL_OP) | (op2 == JALR_OP)) & (rd2 == 5'd1);
    wire i_ret_2      = (op2 == JALR_OP) & (rd2 == 5'd0) & (rs1_2 == 5'd1)
                        & (final_s2_inst[31:20] == 0);
    wire i_jal_2      = (op2 == JAL_OP);
    wire i_jalr_2     = (op2 == JALR_OP);
    wire i_ind_2      = (op2 == JALR_OP) & (rs1_2 != 5'd1);
    wire i_br_2       = (op2 == B_COND_OP);

    assign is_call_2        = i_call_2 & sent2;
    assign is_ret_2         = i_ret_2  & sent2;
    assign is_jal_2         = i_jal_2  & sent2;
    assign is_jalr_2        = i_jalr_2 & sent2;
    assign is_indirect_2    = i_ind_2  & sent2;
    assign is_cond_branch_2 = i_br_2   & sent2;
    assign is_c_inst_2      = final_s2_is_c & sent2;
    wire [31:0] immJ2       = {{12{final_s2_inst[31]}}, final_s2_inst[19:12], final_s2_inst[20], final_s2_inst[30:21], 1'b0};
    wire [31:0] jal_target2 = final_s2_pc + immJ2;

    // ─── 下一 PC ───
    wire [2:0] sz1 = final_s1_is32 ? 3'd4 : 3'd2;
    wire [2:0] sz2 = final_s2_is32 ? 3'd4 : 3'd2;

    // 本拍发射的总字节
    wire [3:0] adv4 = {1'b0, pc_offset}
                      + (final_s1_valid ? {1'b0, sz1} : 4'd0)
                      + (final_s2_valid ? {1'b0, sz2} : 4'd0);
    wire [31:0] seq_dnpc = bpu_pc_comb + {28'b0, adv4};

    wire [31:0] dnpc    = exu_flush_en           ? exu_flush_dnpc :
                          (i_jal_1 & ifu_valid1) ? jal_target1    :
                          (i_jal_2 & ifu_valid2) ? jal_target2    :
                          bpu_dnpc;

    assign pc_updata = inst_ready & ibu_ready;

    wire [31:0] pre_dnpc1 = is_jal_1 ? jal_target1 : dnpc_slot1;
    wire [31:0] pre_dnpc2 = is_jal_2 ? jal_target2 : dnpc_slot2;

    assign if_to_ib_bus1 = {final_s1_pc, pre_dnpc1, final_s1_inst,
                            i_call_1, i_ret_1, i_jal_1, i_jalr_1, i_ind_1, final_s1_is_c};
    assign if_to_ib_bus2 = {final_s2_pc, pre_dnpc2, final_s2_inst,
                            i_call_2, i_ret_2, i_jal_2, i_jalr_2, i_ind_2, final_s2_is_c};

    reg flush_handled;
    always @(posedge clk) begin
        if (rst)                                   flush_handled <= 0;
        else if (exu_flush_en && pc_updata)        flush_handled <= 0;
        else if (exu_flush_en)                     flush_handled <= 1;
        else                                       flush_handled <= 0;
    end
    wire inter_flush_pulse = exu_flush_en & ~flush_handled;

    always @(*) begin
`ifdef YSYXSOC
        if (rst) bpu_pc = `RESET_FLASH_PC;
`else
        if (rst) bpu_pc = `RESET_PC;
`endif
        else if (exu_flush_en) bpu_pc = {exu_flush_dnpc[31:3], 3'b000};
        else                   bpu_pc = bpu_pc_comb;
    end

    always @(posedge clk) begin
        if (rst) begin
`ifdef YSYXSOC
            pc     <= `RESET_FLASH_PC;
`else
            pc     <= `RESET_PC;
`endif
            old1             <= 0;
            old2             <= 0;
            cross_buf_valid  <= 0;
            cross_buf_data   <= 0;
            cross_from_slot1 <= 0;
        end
        else if (inter_flush_pulse) begin
            pc               <= exu_flush_dnpc;
            old1             <= 0;
            old2             <= 0;
            cross_buf_valid  <= 0;
            cross_buf_data   <= 0;
            cross_from_slot1 <= 0;
        end
        else begin
            // bpu_pc <= bpu_pc_comb;

            if (pc_updata) begin
                pc   <= dnpc;
                old1 <= final_s1_inst;
                old2 <= final_s2_valid ? final_s2_inst : 32'b0;

                cross_buf_valid  <= 0;
                cross_from_slot1 <= 0;

                // slot2 在偏移 6 且 32 位: 缓冲低 16 位
                // (s2_cross 已隐含 s2_exists 且 slot1 已发射, pc 推进到 slot2 起始)
                if (~cross_buf_valid & s2_cross) begin
                    cross_buf_valid  <= 1;
                    cross_buf_data   <= inst_window[63:48];
                    cross_from_slot1 <= 0;
                end
            end
            // 偏移 6 处 32 位指令跨界 (唯一指令, 非 slot2)
            else if (inst6_cross & icache_valid) begin
                cross_buf_valid  <= 1;
                cross_buf_data   <= inst_window[63:48];
                cross_from_slot1 <= 1;
            end
        end
    end

endmodule
