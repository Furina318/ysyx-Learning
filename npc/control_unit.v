module control_unit (
    input [6:0] opcode,    // 操作码
    input [2:0] funct3,    // funct3字段
    output reg reg_write,   // 寄存器写使能
    output reg mem_write,  // 存储器写使能
    output reg jump,       // 跳转指令
    output reg jalr,       // JALR标志
    output reg [1:0] alu_src1, // ALU输入1选择
    output reg [1:0] alu_src2, // ALU输入2选择
    output reg [1:0] result_src // 写回数据选择
);

    always @(*) begin
        // 默认值
        reg_write = 0;
        mem_write = 0;
        jump = 0;
        jalr = 0;
        alu_src1 = 2'b00; // rs1
        alu_src2 = 2'b00; // rs2
        result_src = 2'b00; // ALU结果

        case (opcode)
            // LUI指令
            7'b0110111: begin
                reg_write = 1;
                result_src = 2'b11; // 直接使用立即数
            end

            // AUIPC指令
            7'b0010111: begin
                reg_write = 1;
                alu_src1 = 2'b01;    // 输入1为PC
                alu_src2 = 2'b11;    // 输入2为U型立即数
            end

            // SW指令
            7'b0100011: begin
                alu_src2 = 2'b10;    // S型立即数
                mem_write = 1;
            end

            // JAL指令
            7'b1101111: begin
                jump = 1;
                reg_write = 1;
                result_src = 2'b10;  // 写回PC+4
            end

            // JALR指令
            7'b1100111: begin
                if (funct3 == 3'b000) begin
                    jump = 1;
                    jalr = 1;
                    reg_write = 1;
                    result_src = 2'b10; // 写回PC+4
                end
            end
            //enbreak指令
            7'b1110011: begin
                dpi_enbreak();
            end
        endcase
    end

endmodule
