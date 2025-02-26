// 数据存储器（可写）
module data_mem (
    input clk,
    input [31:0] addr,
    input [31:0] write_data,
    input mem_write,
    output [31:0] read_data
);
    reg [31:0] mem [0:1023]; // 1KB数据存储器
    assign read_data = mem[addr >> 2]; // 按字寻址

    always @(posedge clk) begin
        if (mem_write) mem[addr >> 2] <= write_data;
    end
endmodule
