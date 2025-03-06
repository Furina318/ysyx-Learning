`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module alu(
    input  wire [`AlucBus] aluc,  // ALU控制信号
    input  wire [31:0]  num1,  // 操作数1
    input  wire [31:0]  num2,  // 操作数2
    output reg  [31:0]  result // 结果
);

    import "DPI-C" function void ebreak(input int station, input int inst, input byte unit);
    
    // 定义一个临时变量temp，例如BitWidth = 32，则temp = 0xfffe
    wire [31:0] temp = {{31{1'b1}}, 1'b0};//
    wire [31:0] num2_cplm = ~num2 + `RegNum'h1;    // 补码
    wire [31:0] num2_temp = (num2 & 32'h1f);   // 取低5位 

    always @(*) begin
        case (aluc)
            `ADD:      result = num1 + num2;  // 加法
            `SUB:      result = num1 + num2_cplm;  // 减法(num1-num2)
            `SLL:      result = num1 << num2;  // 逻辑左移
            `XOR:      result = num1 ^ num2;  // 异或
            `SRL:      result = num1 >> (num2 & 32'h1f);  // 逻辑右移
            `SRA:      result = ($signed(num1)) >>> (num2 & 32'h1f);  // 算术右移
            `OR:       result = num1 | num2;  // 或
            `AND:      result = num1 & num2;  // 与
            `EQ:       result = {{31{1'b0}}, (num1 == num2)};  // 等于
            `NE:       result = {{31{1'b0}}, (num1 != num2)};  // 不等于
            `LT:       result = {{31{1'b0}}, (($signed(num1)) <  ($signed(num2)))};  // 小于
            `GE:       result = {{31{1'b0}}, (($signed(num1)) >= ($signed(num2)))};  // 大于等于
            `LTU:      result = {{31{1'b0}}, (num1 <  num2)};  // 无符号小于
            `GEU:      result = {{31{1'b0}}, (num1 >= num2)};  // 无符号大于等于
            `ADD_LUI:  result = num2;  // 加载高位立即数
            `ADD_JALR: result = (num1 + num2) & temp;  // 跳转并链接寄存器
            default:   begin
                        ebreak(`ABORT, 32'hdeafbeaf, `Unit_ALU);  // 异常处理
                        result = 0;
                       end
        endcase
    end

endmodule