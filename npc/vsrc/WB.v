`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
module WB (
    input              clk,
    input              reset,
    input              mem_valid,
    input              if_ready,
    input       [6:0]  opcode,
    input       [2:0]  func3,
    input       [4:0]  rd,
    input              RegWrite,
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
    // input  reg         is_ebreak,
    // input  reg [31:0]  instr,
    output reg [4:0]   rd_wb,
    output reg         RegWrite_wb,
    output reg [31:0]  wb_data
);
    // import "DPI-C" function void ebreak(input int station, input int inst);

    typedef enum {IDLE, STALL} state_t;
    state_t state, next_state;

    // reg        RegWrite_wb;
    // reg [4:0]  rd_wb;
    reg [4:0]  rd_wb_pre;
    reg [1:0] delay;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state = IDLE;
            wb_ready = 1'b1;
            wb_valid = 1'b1;
            wb_data = 32'h0;
        end
        else begin
            state = next_state;
            case (state)
                IDLE: begin
                    wb_ready = 1'b1;
                    wb_valid = 1'b0;

                    RegWrite_wb = 1'b0;
                    rd_wb = 5'b0;
                    if(mem_valid) begin
                        // 写回数据选择
                        wb_data = (opcode == `INST_LUI) ? imm :                   // LUI
                                        (opcode == `INST_AUIPC) ? (pc + imm) :          // AUIPC
                                        (opcode == `INST_JAL || opcode == `INST_JALR) ? (pc + 4) : // JAL, JALR
                                        (opcode == `INST_LW) ? data_out :              // LW
                                        (opcode == `INST_R || opcode == `INST_I) ? alu_result : 32'b0; // R-type, I-type
                        //=====写回数据=====
                        // rd_wb_pre = rd;
                        // rd_wb = rd_wb_pre;
                        rd_wb = rd;
                        RegWrite_wb = RegWrite;
                        next_state = STALL;
                    end
                    else begin
                        next_state = IDLE;
                    end
                end
                STALL: begin
                    wb_ready = 1'b0;
                    wb_valid = 1'b1;
                    rd_wb = 5'b0;
                    RegWrite_wb = 1'b0;
                    // rd_wb <= rd;
                    // RegWrite_wb <= RegWrite;
                    next_state = if_ready ? IDLE : STALL;
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