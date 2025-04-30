`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
module WB (
    input              clk,
    input              reset,
    input              mem_valid,
    input              if_ready,
    input       [6:0]  opcode,
    input       [2:0]  func3,
    // input       [4:0]  rd,
    // input              RegWrite,
    // input       [4:0]  rs1,
    // input       [4:0]  rs2,
    input       [31:0] pc,
    input       [31:0] imm,
    input              alu_zero,
    input              alu_less,
    input       [31:0] alu_result,
    input       [31:0] data_out,
    input       [31:0] rs1_val,
    input       [31:0] rs2_val,
    output reg         wb_ready,
    output reg         wb_valid,
    // output reg [31:0]  jal_target,
    // output reg [31:0]  jalr_target,
    // output reg         is_jal,
    // output reg         is_jalr,
    // output reg         take_branch,
    output reg [31:0]  wb_data
);
    typedef enum {IDLE, STALL} state_t;
    state_t state, next_state;

    reg        RegWrite_wb;
    reg [4:0]  rd_wb;
    reg [4:0]  rd_wb_pre;
    reg [31:0] regs [0:31]; // 32个寄存器
    // assign rs1_val = (rs1 != 0) ? regs[rs1] : 0;
    // assign rs2_val = (rs2 != 0) ? regs[rs2] : 0;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state = STALL;
            wb_ready = 1'b1;
            wb_valid = 1'b1;
            // jal_target = 32'h0;
            // jalr_target = 32'h0;
            // is_jal = 1'b0;
            // is_jalr = 1'b0;
            // take_branch = 1'b0;
            wb_data = 32'h0;

            // for(integer i = 0; i < 32; i = i + 1) begin
            //     regs[i] <= 32'h0;//初始化寄存器
            // end
        end
        else begin
            state = next_state;
            case (state)
                IDLE: begin
                    wb_ready = 1'b1;
                    wb_valid = 1'b0;

                    if(mem_valid) begin
                        // wb_ready = 1'b0;
                        // wb_valid = 1'b0;
                        // 跳转目标计算
                        // jal_target = pc + imm;
                        // jalr_target = (rs1_val + imm) & ~32'h1;
                        // is_jal = (opcode == `INST_JAL);
                        // is_jalr = (opcode == `INST_JALR) & (func3 == 3'b000);
                        // take_branch = (opcode == `INST_B) && (
                        //     (func3 == `F3_BNE && !alu_zero) || // bne
                        //     (func3 == `F3_BEQ && alu_zero) ||  // beq
                        //     (func3 == `F3_BLT && alu_less) ||  // blt
                        //     (func3 == `F3_BGE && !alu_less) || // bge
                        //     (func3 == `F3_BLTU && alu_less) || // bltu
                        //     (func3 == `F3_BGEU && !alu_less)   // bgeu
                        // );

                        // 写回数据选择
                        wb_data = (opcode == `INST_LUI) ? imm :                   // LUI
                                        (opcode == `INST_AUIPC) ? (pc + imm) :          // AUIPC
                                        (opcode == `INST_JAL || opcode == `INST_JALR) ? (pc + 4) : // JAL, JALR
                                        (opcode == `INST_LW) ? data_out :              // LW
                                        (opcode == `INST_R || opcode == `INST_I) ? alu_result : 32'b0; // R-type, I-type
                        //=====写回数据=====
                        // rd_wb = rd;
                        // rd_wb_pre = rd_wb;
                        // RegWrite_wb = RegWrite;
                        // if(RegWrite_wb && rd_wb_pre != 0) begin
                        //     regs[rd_wb_pre] <= wb_data;
                        //     // $display("\033[35m[WB/REG]: regs[%d] = %h\033[0m", rd_wb_pre, wb_data);
                        // end
                        // next_state = if_ready ? STALL : IDLE;
                        next_state = STALL;
                    end
                    else begin
                        next_state = IDLE;
                    end
                end
                STALL: begin
                    wb_ready = 1'b0;
                    wb_valid = 1'b1;
                    next_state = if_ready ? IDLE : STALL;
                    // next_state = IDLE;
                end
                default: begin
                    wb_ready = 1'b0;
                    wb_valid = 1'b0;
                    next_state = IDLE;
                end
            endcase
        end
    end
    // always @(*) begin
    //     $display("\033[34m[WB]: state = %d | wb_ready=%b | wb_valid=%b\033[0m", state, wb_ready, wb_valid);
    // end
endmodule