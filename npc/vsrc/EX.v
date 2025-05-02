`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
module EX (
    input             clk,
    input             reset,
    input             is_ebreak,
    input      [31:0] instr,
    input             id_valid,//reg模块的输出是否有效
    output reg        ex_ready,//ex就绪状态
    input      [6:0]  opcode,
    input      [31:0] rs1_val,
    input      [31:0] rs2_val,
    input      [31:0] imm,
    input      [3:0]  alu_op,
    input      [2:0]  func3,
    input      [31:0] pc,
    output reg [31:0] jal_target,
    output reg [31:0] jalr_target,
    output reg        is_jal,
    output reg        is_jalr,
    output reg        take_branch,
    input             mem_ready,//下游mem是否就绪
    output reg        ex_valid,//ex输出是否有效
    output reg [31:0] alu_result,
    output reg        alu_zero,
    output reg        alu_less
);

    import "DPI-C" function void ebreak(input int station, input int inst);

    typedef enum { IDLE, STALL } state_t;
    state_t state, next_state;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state = IDLE;
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
                    if(id_valid) begin
                        // ex_ready = 1'b0;
                        // ex_valid = 1'b0;
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
                        case(alu_op)
                            `ALU_SLT:  alu_less = ($signed(rs1_val) < $signed((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm));
                             `ALU_SLTU: alu_less = (rs1_val < rs2_val);
                            default:   alu_less = ($signed(rs1_val) < $signed((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm));
                        endcase

                        jal_target = (pc - 4) + imm;
                        jalr_target = (rs1_val + imm) & ~32'h1;
                        is_jal = (opcode == `INST_JAL);
                        is_jalr = (opcode == `INST_JALR) & (func3 == 3'b000);
                        take_branch = (opcode == `INST_B) && (
                            (func3 == `F3_BNE && !alu_zero) || // bne
                            (func3 == `F3_BEQ && alu_zero) ||  // beq
                            (func3 == `F3_BLT && alu_less) ||  // blt
                            (func3 == `F3_BGE && !alu_less) || // bge
                            (func3 == `F3_BLTU && alu_less) || // bltu
                            (func3 == `F3_BGEU && !alu_less)   // bgeu
                        );
                        // next_state = mem_ready ? STALL : IDLE;
                        if(is_ebreak) begin
                            ebreak(`HIT_TRAP, instr);
                        end
                        next_state = STALL;
                    end
                    else begin
                        next_state = IDLE;
                    end
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
    //     $display("\033[32m[EX]: state = %d | ex_ready=%b | ex_valid=%b\033[0m", state, ex_ready, ex_valid);
    // end
endmodule