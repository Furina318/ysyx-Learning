`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module contr_gen(
    // input clk,
    input rst,
    input [31:0] inst,           // 输入指令
    output reg [2:0] i_type,      // 立即数产生器输出类型
    output reg RegWr,            // 寄存器写回控制
    output reg ALUAsrc,          // ALU输入A选择
    output reg [1:0] ALUBsrc,    // ALU输入B选择
    output reg [3:0] ALUctr,     // ALU操作控制
    output reg MemtoReg,         // 寄存器写回数据来源
    output reg MemWr,            // 数据存储器写控制
    output reg MemRd,            // 数据存储器读控制
    output reg [2:0] MemOP,      // 数据存储器读写格式
    output reg [2:0] Branch      // 分支和跳转种类
);

    import "DPI-C" function void ebreak(input int station, input int inst);

    reg [6:0] opcode; // 操作码
    reg [2:0] func3; // 功能码3
    reg [6:0] func7; // 功能码7

    assign opcode = inst[6:0];
    assign func3 = inst[14:12];
    assign func7 = inst[31:25];

    always @(*) begin
        // 默认值
        if (rst) begin
            i_type = 3'b000;
            RegWr = 1'b0;
            ALUAsrc = 1'b0;
            ALUBsrc = 2'b00;
            ALUctr = `ADD;
            MemtoReg = 1'b0;
            MemWr = 1'b0;
            MemRd = 1'b0;
            MemOP = 3'b000;
            Branch = `Branch_None;
        end
        else begin
            case (opcode)  
                // LUI 指令
                `INST_TYPE_LUI: begin
                    i_type = `INST_U; // U-type 立即数
                    RegWr = 1'b1;   // 写回寄存器
                    ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                    ALUBsrc = 2'b01; // ALU B 输入选择 imm
                    ALUctr = `ADD; // ADD
                end

                // AUIPC 指令
                `INST_TYPE_AUIPC: begin
                    i_type = `INST_U; // U-type 立即数
                    RegWr = 1'b1;   // 写回寄存器
                    ALUAsrc = 1'b1; // ALU A 输入选择 PC
                    ALUBsrc = 2'b01; // ALU B 输入选择 imm
                    ALUctr = `ADD; // ADD
                end

                // I-type 指令（立即数运算）
                `INST_TYPE_I: begin
                    i_type = `INST_I; // I-type 立即数
                    RegWr = 1'b1;   // 写回寄存器
                    ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                    ALUBsrc = 2'b01; // ALU B 输入选择 imm
                    case (func3)
                        3'b000: ALUctr = `ADD; // ADDI
                        3'b010: ALUctr = `SLT; // SLTI
                        3'b011: ALUctr = `SLTU; // SLTIU
                        3'b100: ALUctr = `XOR; // XORI
                        3'b110: ALUctr = `OR; // ORI
                        3'b111: ALUctr = `AND; // ANDI
                        3'b001: ALUctr = `SLL; // SLLI
                        3'b101: ALUctr = (func7[5]) ? `SRA : `SRL; // SRLI/SRAI
                    endcase
                end

                // R-type 指令
                `INST_TYPE_R: begin
                    i_type = `INST_R; // 不产生立即数
                    RegWr = 1'b1;   // 写回寄存器
                    ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                    ALUBsrc = 2'b00; // ALU B 输入选择 rs2
                    case (func3)
                        3'b000: ALUctr = (func7[5]) ? `SUB : `ADD; //SUB/ADD
                        3'b001: ALUctr = `SLL; // SLL
                        3'b010: ALUctr = `SLT; // SLT
                        3'b011: ALUctr = `SLTU; // SLTU
                        3'b100: ALUctr = `XOR; // XOR
                        3'b101: ALUctr = (func7[5]) ? `SRA : `SRL; // SRL/SRA
                        3'b110: ALUctr = `OR; // OR
                        3'b111: ALUctr = `AND; // AND
                    endcase
                end

                // Load 指令
                `INST_TYPE_L: begin
                    i_type = `INST_I; // I-type 立即数
                    MemRd = 1'b1;
                    RegWr = 1'b1;   // 写回寄存器
                    ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                    ALUBsrc = 2'b01; // ALU B 输入选择 imm
                    ALUctr = `ADD; // ADD
                    MemtoReg = 1'b1; // 写回数据选择存储器输出
                    case (func3)
                        3'b000: MemOP = 3'b000; // LB
                        3'b001: MemOP = 3'b001; // LH
                        3'b010: MemOP = 3'b010; // LW
                        3'b100: MemOP = 3'b100; // LBU
                        3'b101: MemOP = 3'b101; // LHU
                        default: begin
                            ebreak(`ABORT, inst);
                            $display("contr_gen : Unknown load instruction with func3 = %b", func3);
                        end
                    endcase
                end

                // Store 指令
                `INST_TYPE_S: begin
                    i_type = `INST_S; // S-type 立即数
                    ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                    ALUBsrc = 2'b01; // ALU B 输入选择 imm
                    ALUctr = `ADD; // ADD
                    MemWr = 1'b1;    // 写存储器
                    case (func3)
                        3'b000: MemOP = 3'b000; // SB
                        3'b001: MemOP = 3'b001; // SH
                        3'b010: MemOP = 3'b010; // SW
                        default: begin
                            ebreak(`ABORT, inst);
                            $display("contr_gen : Unknown store instruction with func3 = %b", func3);
                        end
                    endcase
                end

                // Branch 指令
                `INST_TYPE_B: begin
                    i_type = `INST_B; // B-type 立即数
                    ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                    ALUBsrc = 2'b00; // ALU B 输入选择 rs2
                    ALUctr = `SLT; // SUB
                    Branch = {func3}; // 分支类型由 func3 决定
                end

                // JAL 指令
                `INST_TYPE_JAL: begin
                    i_type = `INST_J; // J-type 立即数
                    RegWr = 1'b1;   // 写回寄存器
                    ALUAsrc = 1'b1;  // ALU A 输入选择 PC
                    ALUBsrc = 2'b10; // ALU B 输入选择常数 4
                    ALUctr = `ADD; // ADD
                    Branch = `Branch_PC; // JAL
                end

                // JALR 指令
                `INST_TYPE_JALR: begin
                    i_type = `INST_I; // I-type 立即数
                    RegWr = 1'b1;   // 写回寄存器
                    ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                    ALUBsrc = 2'b01; // ALU B 输入选择 imm
                    ALUctr = `ADD; // ADD
                    Branch = `Branch_Reg; // JALR
                end

                //ebreak指令
                `INST_TYPE_E: begin
                    if(inst == `INST_EBREAK) begin
                        ebreak(`HIT_TRAP, inst);
                        $display("ebreak instruction");
                    end
                end

                // 其他指令（默认）
                default: begin
                    if($time != 0) begin
                        ebreak(`ABORT, inst);
                        $display("contr_gen : Unknown instruction with inst = %h", inst);
                    end
                end
            endcase
        end
    end
endmodule
