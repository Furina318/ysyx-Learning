module WB (
    input              clk,
    input              reset,
    input       [31:0] pc,
    input       [31:0] imm,
    input       [31:0] rs1_val,
    input       [31:0] alu_result,
    input       [31:0] data_out,
    input       [6:0]  opcode,
    input       [2:0]  func3,

    input       [4:0]  mem_rd,//MEM阶段传入的rd
    input              mem_RegWrite,//MEM阶段传入的RegWrite
    input              id_MemRead,
    input              id_MemWrite,
    input       [1:0]  id_MemLen,
    input       [31:0] id_addr,
    input       [31:0] id_data_in,

    input              alu_zero,
    input              alu_less,
    input              mem_valid,//上游mem数据是否有效
    input              if_ready,//下游if就绪
    output reg         wb_ready,//wb就绪
    output reg         wb_valid,//wb有效
    output reg [31:0]  jal_target,
    output reg [31:0]  jalr_target,
    output reg         is_jal,
    output reg         is_jalr,
    output reg         take_branch,
    output reg [31:0]  wb_data,

    output reg [4:0]   rd_wb,//WB阶段传入的rd
    output reg         RegWrite_wb,//WB阶段传入的RegWrite
    output reg         wb_MemRead,
    output reg         wb_MemWrite,
    output reg [1:0]   wb_MemLen,
    output reg [31:0]  wb_addr,
    output reg [31:0]  wb_data_in

);

    typedef enum { IDLE, BUSY, STALL} state_t;
    state_t state,next_state;
    reg [1:0] delay;
    parameter DELAY_CYCLES = 1;//处理周期
    //状态机定义(IDLE等待上游valid信号, BUSY处理, STALL等待下游ready信号)

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            state = STALL;
            delay = DELAY_CYCLES;
            wb_ready = 1'b1;
            wb_valid = 1'b1;
            jal_target = 32'h0;
            jalr_target = 32'h0;
            is_jal = 0;
            is_jalr = 0;
            take_branch = 1'b0;
            wb_data = 32'h0;
        end
        else begin
            state = next_state;
            case(state)
                IDLE: begin
                    wb_ready = 1'b1;
                    wb_valid = 1'b0;
                    delay = DELAY_CYCLES;
                    next_state = mem_valid ? BUSY : IDLE; 
                end 
                BUSY: begin
                    wb_ready = 1'b0;
                    wb_valid = 1'b0;
                     if(delay > 0) begin//牵手成功
                        // 跳转目标计算
                        jal_target = pc + imm;
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

                        // 写回数据选择
                        wb_data = (opcode == `INST_LUI) ? imm :                   // LUI
                                        (opcode == `INST_AUIPC) ? (pc + imm) :          // AUIPC
                                        (opcode == `INST_JAL || opcode == `INST_JALR) ? (pc + 4) : // JAL, JALR
                                        (opcode == `INST_LW) ? data_out :              // LW
                                        (opcode == `INST_R || opcode == `INST_I) ? alu_result : 32'b0; // R-type, I-type
                        //=====写回数据=====
                        rd_wb = mem_rd;
                        RegWrite_wb = mem_RegWrite;
                        wb_MemRead = id_MemRead;
                        wb_MemWrite = id_MemWrite;
                        
                        wb_MemLen = id_MemLen;
                        wb_addr = id_addr;
                        wb_data_in = id_data_in;
                        //=====写回数据=====
                        $display("\033[31m[WB]: wb_data=0x%08x\033[0m",wb_data);
                        delay = delay - 1;
                    end
                    next_state = (delay == 0) ? STALL : BUSY;
                end
                STALL: begin
                    wb_ready = 1'b0;
                    wb_valid = 1'b1;
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
    always @(*) begin
        // wb_MemLen = id_MemLen;
        // wb_addr = id_addr;
        // wb_data_in = id_data_in;
        $display("\033[31m[WB]: state = %d | wb_ready=%b | wb_valid=%b\033[0m", state, wb_ready, wb_valid);
    end
endmodule