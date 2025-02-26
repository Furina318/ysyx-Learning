// 指令存储器（只读）
module instr_mem (
    input [31:0] addr,
    output [31:0] data
);
    reg [31:0] instrmem [0:1023]; // 1KB指令存储器
    assign data = instrmem[addr >> 2]; // 按字寻址
endmodule
