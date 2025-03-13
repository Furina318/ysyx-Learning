`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module ALU (
    // input [31:0] A,          // 输入 A
    // input [31:0] B,          // 输入 B
    input [3:0]        ALUctr,      // 控制信号
    input              ALUAsrc,     // ALU 输入 A 选择
    input [1:0]        ALUBsrc,     // ALU 输入 B 选择
    input [31:0]       imm,         // 立即数
    input [31:0]       PC,          // PC
    input [31:0]       rs1,
    input [31:0]       rs2,
    // input              clk,
    input              rst,
    output reg [31:0]  Result,       // 输出结果
    output reg         Less,       // 小于比较结果
    output reg         zero       // 零比较结果
);
    import "DPI-C" function void ebreak(input int station, input int inst);

    // 内部信号
    reg [31:0] A;            
    reg [31:0] B;           
    reg [31:0] adder_out;    // 加法器输出
    reg [31:0] sub_out;      // 减法器输出
    reg [31:0] shift_out;    // 移位器输出
    reg [31:0] xor_out;      // 异或输出
    reg [31:0] or_out;       // 逻辑或输出
    reg [31:0] and_out;      // 逻辑与输出
    // reg Less;                // 小于比较结果

    //处理输入信号
    always @(*) begin
        if(rst) begin
            Result = 32'h0;
            Less = 1'b0;
            zero = 1'b0;
        end
        else begin
            A = (ALUAsrc) ? PC : rs1; // 选择 A 输入
            case(ALUBsrc)
                2'b00: B = rs2; // 选择 B 输入
                2'b01: B = imm; // 立即数输入(当是立即数移位指令时，只有低5位有效)
                2'b10: B = 4; // 用于后续PC+4
                default: B = 32'b0;
            endcase

            adder_out=A+B;//加法
            sub_out=A-B;//减法
            xor_out=A^B;//异或操作
            or_out=A|B;//或操作
            and_out=A&B;//与操作

            case (ALUctr[2:0])//移位操作
                3'b001: shift_out=A<<B[4:0];  // 左移
                3'b101: begin
                    if (ALUctr[3])
                        shift_out=$signed(A)>>B[4:0]; // 算术右移
                    else
                        shift_out=A>>B[4:0];  // 逻辑右移
                end
                default: shift_out = 32'b0;
            endcase

            if(ALUctr[3])//小于比较
                Less=(A<B) ? 1'b1 : 1'b0;//无符号比较
            else
                Less=($signed(A)<$signed(B)) ? 1'b1 : 1'b0;//带符号比较

            case (ALUctr[2:0])
                3'b000: Result = (ALUctr[3]) ? sub_out : adder_out; // 加法或减法
                3'b001: Result = shift_out;  // 左移,SLL
                3'b010: Result = {31'b0, Less}; // 小于比较,SLT/SLTU
                3'b011: Result = B;          // 直接输出 B
                3'b100: Result = xor_out;    // 异或,XOR
                3'b101: Result = shift_out;  // 右移,SRL/SRA
                3'b110: Result = or_out;     // 逻辑或,OR
                3'b111: Result = and_out;    // 逻辑与,AND
                default: begin
                    ebreak(`ABORT,32'hdeadbeaf);   
                    $display("Something wrong in ALU");
                end
            endcase
            zero=(Result==32'b0) ? 1'b1 : 1'b0;//零比较
        end
    end
endmodule
