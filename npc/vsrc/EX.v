`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
module EX (
    input             clk,
    input             reset,
    input             reg_valid,//reg模块的输出是否有效
    output reg        ex_ready,//ex就绪状态
    input      [6:0]  opcode,
    input      [31:0] rs1_val,
    input      [31:0] rs2_val,
    input      [31:0] imm,
    input      [3:0]  alu_op,
    input             mem_ready,//下游mem是否就绪
    output reg        ex_valid,//ex输出是否有效
    output reg [31:0] alu_result,
    output reg        alu_zero,
    output reg        alu_less
);
    typedef enum { IDLE, BUSY, STALL } state_t;
    state_t state, next_state;
    parameter DELAY_CYCLES = 1;//处理周期
    reg [1:0] delay;
    //状态机定义(IDLE等待上游valid信号, BUSY处理, STALL等待下游ready信号)

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state = IDLE;
            delay = DELAY_CYCLES;
            ex_ready = 1'b1;
            ex_valid = 1'b0;
            alu_result = 32'b0;
            alu_zero = 1'b0;
            alu_less = 1'b0;
        end else begin
            state = next_state;
            case (state)
                IDLE: begin
                    ex_ready = 1'b1;
                    ex_valid = 1'b0;
                    delay = DELAY_CYCLES;
                    next_state = reg_valid ? BUSY : IDLE;
                end
                BUSY: begin
                    ex_ready = 1'b0;
                    ex_valid = 1'b0;
                    if (delay > 0) begin//处于工作状态
                        case (alu_op)
                            `ALU_ADD:  alu_result = rs1_val + ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm);
                            `ALU_SUB:  alu_result = rs1_val - ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm);
                            `ALU_AND:  alu_result = rs1_val & ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm);
                            `ALU_OR:   alu_result = rs1_val | ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm);
                            `ALU_XOR:  alu_result = rs1_val ^ ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm);
                            `ALU_SLTU: alu_result = (rs1_val < ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm)) ? {31'b0, 1'b1} : 32'b0;
                            `ALU_SLT:  alu_result = ($signed(rs1_val) < $signed((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm)) ? {31'b0, 1'b1} : 32'b0;
                            `ALU_SRA:  alu_result = $signed(rs1_val) >>> ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val[4:0] : imm[4:0]);
                            `ALU_SLL:  alu_result = rs1_val << ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val[4:0] : imm[4:0]);
                            `ALU_SRL:  alu_result = rs1_val >> ((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val[4:0] : imm[4:0]);
                            default:   alu_result = 32'b0;
                        endcase
                        alu_zero = (alu_result == 32'b0);
                        alu_less = ($signed(rs1_val) < $signed((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm));
                        delay = delay - 1;
                    end
                    next_state = (delay == 0) ? STALL : BUSY;
                    $display("\033[33m[EX]: alu_result = %h | alu_zero=%b | alu_less=%b\033[0m", alu_result, alu_zero, alu_less);
                    $display("\033[33m[EX]: imm=%h | rs1_val=%h | rs2_val=%h\033[0m", imm, rs1_val, rs2_val);
                end
                STALL: begin
                    ex_ready = 1'b0;
                    ex_valid = 1'b1;
                    next_state = mem_ready ? IDLE : STALL;
                end
                default: begin
                    ex_ready = 1'b0;
                    ex_valid = 1'b0;
                    next_state = IDLE;
                end
            endcase
        end
    end
    // always @(*) begin
    //     $display("\033[33m[EX]: state = %d | ex_ready=%b | ex_valid=%b\033[0m", state, ex_ready, ex_valid);
    // end
endmodule