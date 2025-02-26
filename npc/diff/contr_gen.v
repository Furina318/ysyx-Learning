module contr_gen(
    input [31:0] inst,           // 输入指令
    output reg [2:0] ExtOP,      // 立即数产生器输出类型
    output reg RegWr,            // 寄存器写回控制
    output reg ALUAsrc,          // ALU输入A选择
    output reg [1:0] ALUBsrc,    // ALU输入B选择
    output reg [3:0] ALUctr,     // ALU操作控制
    output reg MemtoReg,         // 寄存器写回数据来源
    output reg MemWr,            // 数据存储器写控制
    output reg [2:0] MemOP,      // 数据存储器读写格式
    output reg [2:0] Branch      // 分支和跳转种类
);
    assign opcode = inst[6:0];
    assign func3 = inst[14:12];
    assign func7 = inst[31:25];

    always @(*) begin
        // 默认值
        ExtOP = 3'b000;
        RegWr = 1'b0;
        ALUAsrc = 1'b0;
        ALUBsrc = 2'b00;
        ALUctr = 4'b0000;
        MemtoReg = 1'b0;
        MemWr = 1'b0;
        MemOP = 3'b000;
        Branch = 3'b000;

        case (opcode[6:2])  // 只使用操作码的高 5 位
            // LUI 指令
            5'b01101: begin
                ExtOP = 3'b001; // U-type 立即数
                RegWr = 1'b1;   // 写回寄存器
                ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                ALUBsrc = 2'b01; // ALU B 输入选择 imm
                ALUctr = 4'b0000; // ADD
            end

            // AUIPC 指令
            5'b00101: begin
                ExtOP = 3'b001; // U-type 立即数
                RegWr = 1'b1;   // 写回寄存器
                ALUAsrc = 1'b1; // ALU A 输入选择 PC
                ALUBsrc = 2'b01; // ALU B 输入选择 imm
                ALUctr = 4'b0000; // ADD
            end

            // I-type 指令（立即数运算）
            5'b00100: begin
                ExtOP = 3'b000; // I-type 立即数
                RegWr = 1'b1;   // 写回寄存器
                ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                ALUBsrc = 2'b01; // ALU B 输入选择 imm
                case (func3)
                    3'b000: ALUctr = 4'b0000; // ADDI
                    3'b010: ALUctr = 4'b0010; // SLTI
                    3'b011: ALUctr = 4'b1010; // SLTIU
                    3'b100: ALUctr = 4'b0100; // XORI
                    3'b110: ALUctr = 4'b0110; // ORI
                    3'b111: ALUctr = 4'b0111; // ANDI
                    3'b001: ALUctr = 4'b0001; // SLLI
                    3'b101: ALUctr = (func7[5]) ? 4'b1101 : 4'b0101; // SRLI/SRAI
                endcase
            end

            // R-type 指令
            5'b01100: begin
                ExtOP = 3'b111; // 不产生立即数
                RegWr = 1'b1;   // 写回寄存器
                ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                ALUBsrc = 2'b00; // ALU B 输入选择 rs2
                case (func3)
                    3'b000: ALUctr = (func7[5]) ? 4'b1000 : 4'b0000; // ADD/SUB
                    3'b001: ALUctr = 4'b0001; // SLL
                    3'b010: ALUctr = 4'b0010; // SLT
                    3'b011: ALUctr = 4'b1010; // SLTU
                    3'b100: ALUctr = 4'b0100; // XOR
                    3'b101: ALUctr = (func7[5]) ? 4'b1101 : 4'b0101; // SRL/SRA
                    3'b110: ALUctr = 4'b0110; // OR
                    3'b111: ALUctr = 4'b0111; // AND
                endcase
            end

            // Load 指令
            5'b00000: begin
                ExtOP = 3'b000; // I-type 立即数
                RegWr = 1'b1;   // 写回寄存器
                ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                ALUBsrc = 2'b01; // ALU B 输入选择 imm
                ALUctr = 4'b0000; // ADD
                MemtoReg = 1'b1; // 写回数据选择存储器输出
                case (func3)
                    3'b000: MemOP = 3'b000; // LB
                    3'b001: MemOP = 3'b001; // LH
                    3'b010: MemOP = 3'b010; // LW
                    3'b100: MemOP = 3'b100; // LBU
                    3'b101: MemOP = 3'b101; // LHU
                endcase
            end

            // Store 指令
            5'b01000: begin
                ExtOP = 3'b010; // S-type 立即数
                ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                ALUBsrc = 2'b01; // ALU B 输入选择 imm
                ALUctr = 4'b0000; // ADD
                MemWr = 1'b1;    // 写存储器
                case (func3)
                    3'b000: MemOP = 3'b000; // SB
                    3'b001: MemOP = 3'b001; // SH
                    3'b010: MemOP = 3'b010; // SW
                endcase
            end

            // Branch 指令
            5'b11000: begin
                ExtOP = 3'b011; // B-type 立即数
                ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                ALUBsrc = 2'b00; // ALU B 输入选择 rs2
                ALUctr = 4'b0010; // SUB
                Branch = {func3}; // 分支类型由 func3 决定
            end

            // JAL 指令
            5'b11011: begin
                ExtOP = 3'b100; // J-type 立即数
                RegWr = 1'b1;   // 写回寄存器
                ALUAsrc = 1'b1;  // ALU A 输入选择 PC
                ALUBsrc = 2'b10; // ALU B 输入选择常数 4
                ALUctr = 4'b0000; // ADD
                Branch = 3'b001; // JAL
            end

            // JALR 指令
            5'b11001: begin
                ExtOP = 3'b000; // I-type 立即数
                RegWr = 1'b1;   // 写回寄存器
                ALUAsrc = 1'b0; // ALU A 输入选择 rs1
                ALUBsrc = 2'b01; // ALU B 输入选择 imm
                ALUctr = 4'b0000; // ADD
                Branch = 3'b010; // JALR
            end

            // 其他指令（默认）
            default: begin
                // 保持默认值
            end
        endcase
    end
endmodule