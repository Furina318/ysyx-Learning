`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// ALU模块
module ALU (
    input      [3:0]   alu_op,
    input      [31:0]  a,
    input      [31:0]  b,
    output reg [31:0]  result,
    output             zero,
    output             less
);
    import "DPI-C" function void ebreak(input int station, input int inst);
    always @(*) begin
        // Less 信号生成
        if (alu_op[3])
            less = (a < b) ? 1'b1 : 1'b0;                    // 无符号比较 (sltiu)
        else
            less = ($signed(a) < $signed(b)) ? 1'b1 : 1'b0;  // 有符号比较 (slt)

        case (alu_op)
            `ALU_ADD:  result = a + b;  // 加法 (add, addi)
            `ALU_SUB:  result = a - b;  // 减法 (sub, bne)
            `ALU_AND:  result = a & b;  // 与 (and)
            `ALU_OR:   result = a | b;  // 或 (or)
            `ALU_XOR:  result = a ^ b;  // 异或(xor)
            `ALU_SLTU: result = {31'b0, less};//无符号小于比较(sltiu)
            default: begin
                result = 32'b0;
                ebreak(`ABORT,32'hdeadbeef);
                $display("ALU : Unknown alu_op = %b",alu_op);
            end
        endcase
    end

    assign zero = (result == 32'b0);
    // assign less = ($signed(a) < $signed(b)); //有符号比较
endmodule