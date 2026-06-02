`include "defines.vh"

module ifu (
    input  wire         clk            ,
    input  wire         rst            ,
    input  wire         exu_flush_en   ,
    input  wire [31: 0] exu_flush_dnpc ,
    output wire         pc_updata      ,
    input  wire         idu_ready      ,
    output wire         ifu_valid      ,

    input  wire [31: 0] icache_inst    ,
    output wire [31: 0] icache_addr    ,
    input  wire         icache_valid   ,
    input  wire [31: 0] bpu_dnpc       ,
    output reg  [31: 0] pc             ,

    output wire         is_call        ,
    output wire         is_ret         ,
    output wire         is_jal         ,
    output wire         is_jalr        ,
    output wire         is_indirect    ,
    output wire         is_c_inst      , // 标记当前指令是否为 C 扩展指令

    output wire [`IF_TO_ID_WD-1:0] if_to_id_bus
);
    localparam JAL_OP  = 7'b1101111;
    localparam JALR_OP = 7'b1100111;

    // ─── 跨界指令缓冲区 (Cross Boundary Buffer) ───
    // 仅当 32位指令 跨越了 4字节对齐边界时才使用 (低16位在字尾，高16位在下字头)
    reg         cross_buf_valid;
    reg  [15:0] cross_buf_data;

    // 取指地址：如果在等待跨界指令的后半段，必须向 Cache 请求 pc+2 的下一个字
    assign icache_addr = cross_buf_valid ? (pc + 32'd2) : pc;

    // ─── 提取当前半字与指令边界判定 ───
    wire [15:0] cache_lower_16 = icache_inst[15:0];
    wire [15:0] cache_upper_16 = icache_inst[31:16];

    // 如果 pc 未对齐 (pc[1]==1)，当前指令在字的高半部分；否则在低半部分
    wire [15:0] current_half = pc[1] ? cache_upper_16 : cache_lower_16;

    // 判断该半字是否为 32 位指令（末两位为 11）
    wire is_32bit = cross_buf_valid | (current_half[1:0] == 2'b11);

    // 判断是否遇到了 32位指令跨界的第一拍：
    // 未缓存中 + PC在半字边界 + 截取到的半字末两位为 11
    wire is_cross_32_first_beat = ~cross_buf_valid & pc[1] & (current_half[1:0] == 2'b11);

    // ─── 3. C 扩展译码器实例化 ───
    wire [31:0] c_expanded_inst;
    wire        c_decoded_valid;

    c_decode u_c_decode (
        .clk   (clk             ),
        .reset (rst             ),
        .c_inst(current_half    ), // 喂给译码器的一定是当前定位到的半字
        .inst  (c_expanded_inst ),
        .valid (c_decoded_valid )
    );

    // ─── 最终指令组装 ───
    wire [31:0] output_inst;
    // 如果在处理跨界第二拍，把新取回的低16位(高半段)和缓存的低半段拼接
    // 如果是完整的32位指令，直接吐出整个 cache 的 32 位
    // 否则说明是 C 指令，吐出展开后的 32 位
    assign output_inst = cross_buf_valid ? {cache_lower_16, cross_buf_data} :
                         is_32bit        ? icache_inst : 
                         c_expanded_inst;

    // ─── 有效性与下游握手 ───
    // 当且仅当遇到了跨界 32 位指令的第一拍时，指令不完整，不能发往下游
    wire inst_ready = icache_valid & ~is_cross_32_first_beat;

    reg [31:0] inst_old;
    wire       sent = inst_ready & (output_inst != inst_old);
    wire       this_is_c_inst = inst_ready & ~is_32bit;

    // ─── 快速译码与分支预测 ───
    wire [ 6:0] opcode     = output_inst[ 6: 0];
    wire [ 4:0] rd         = output_inst[11: 7];
    wire [ 4:0] rs1        = output_inst[19:15];
    wire [31:0] immJ       = {{12{output_inst[31]}}, output_inst[19:12], output_inst[20], output_inst[30:21], 1'b0};
    wire [31:0] jal_target = pc + immJ;

    wire inst_is_call     = ((opcode == JAL_OP) | (opcode == JALR_OP)) & (rd == 5'd1);
    wire inst_is_ret      = (opcode == JALR_OP) && (rd == 5'd0) && (rs1 == 5'd1) && (output_inst[31:20] == 0);
    wire inst_is_jal      = (opcode == JAL_OP );
    wire inst_is_jalr     = (opcode == JALR_OP);
    wire inst_is_indirect = (opcode == JALR_OP) && (rs1 != 5'd1);
    assign is_call     = inst_is_call & sent;
    assign is_ret      = inst_is_ret  & sent;
    assign is_jal      = inst_is_jal  & sent;
    assign is_jalr     = inst_is_jalr & sent;
    assign is_indirect = inst_is_indirect & sent;
    wire inst_is_c_inst   = this_is_c_inst & sent;

    // PC 递增预测
    wire [31:0] seq_dnpc  = this_is_c_inst ? (pc + 32'd2) : (pc + 32'd4);
    wire [31:0] bpu_seq   = pc + 32'd4;
    wire [31:0] pred_dnpc = (bpu_dnpc == bpu_seq) ? seq_dnpc : bpu_dnpc;

    wire [31:0] pre_dnpc = is_jal ? jal_target : pred_dnpc;
    wire [31:0] dnpc = exu_flush_en ? exu_flush_dnpc :
                       is_jal       ? jal_target     :
                       pred_dnpc;

    wire ifu_jump_taken = (dnpc != seq_dnpc);

    assign pc_updata = inst_ready & idu_ready;
    assign ifu_valid = inst_ready & ~exu_flush_en;

    assign if_to_id_bus = {pc, pre_dnpc, output_inst, inst_is_call, inst_is_ret, inst_is_jal, inst_is_jalr, inst_is_indirect, this_is_c_inst};

    reg flush_handled; 
    always @(posedge clk) begin
        if (rst) begin
            flush_handled <= 1'b0;
        end else if (exu_flush_en && pc_updata) begin
            flush_handled <= 1'b0;
        end else if (exu_flush_en) begin
            flush_handled <= 1'b1;
        end else begin
            flush_handled <= 1'b0;
        end
    end
    // 建立单脉冲冲刷信号
    wire inter_flush_pulse = exu_flush_en & ~flush_handled;

    always @(posedge clk) begin
        if (rst) begin
`ifdef YSYXSOC
            pc <= `RESET_FLASH_PC;
`else
            pc <= `RESET_PC;
`endif
            inst_old        <= 32'b0;
            cross_buf_valid <= 1'b0;
            cross_buf_data  <= 16'b0;
        end
        else if (inter_flush_pulse) begin
            pc              <= exu_flush_dnpc;
            inst_old        <= 32'b0;
            cross_buf_valid <= 1'b0;      // 冲刷时必须清空跨界缓存
            cross_buf_data  <= 16'b0;
        end
        else begin
            if (pc_updata) begin
                pc       <= dnpc;
                inst_old <= output_inst;
                
                // 指令被消耗，不论是不是跳转，原跨界缓存都用完了，清空
                cross_buf_valid <= 1'b0; 
            end
            // 当遇到跨界 32 位指令的第一拍，我们将其拦下并存入 Buffer (此时 pc_updata 必定为 0)
            else if (icache_valid && is_cross_32_first_beat) begin
                cross_buf_valid <= 1'b1;
                cross_buf_data  <= current_half;
            end
        end
    end

endmodule
