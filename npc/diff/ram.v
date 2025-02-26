module ram(
    input [31:0] addr,
    input [2:0] MemOp,
    input [31:0] data_in, // rs2
    input clk,
    input WrEn,
    output reg [31:0] data_out
);

    reg [31:0] mem[0:1023];
    wire [9:0] mapped_addr;

    // Address mapping logic
    assign mapped_addr = (addr - 32'h80000000) >> 2;

    always @(posedge clk) begin
        if(WrEn) begin
            case(MemOp)
                3'b010: mem[mapped_addr] <= data_in; // 4字节写
                3'b001: mem[mapped_addr][15:0] <= data_in[15:0]; // 2字节写
                3'b000: mem[mapped_addr][7:0] <= data_in[7:0]; // 1字节写
                3'b101: mem[mapped_addr][15:0] <= data_in[15:0]; // 2字节写无符号拓展
                3'b100: mem[mapped_addr][7:0] <= data_in[7:0]; // 1字节写无符号拓展
            endcase
        end
        case(MemOp)
            3'b010: data_out <= mem[mapped_addr]; // 4字节读
            3'b001: data_out <= {{16{mem[mapped_addr][15]}}, mem[mapped_addr][15:0]}; // 2字节读带符号扩展
            3'b000: data_out <= {{24{mem[mapped_addr][7]}}, mem[mapped_addr][7:0]}; // 1字节读带符号扩展
            3'b101: data_out <= {16'b0, mem[mapped_addr][15:0]}; // 2字节读无符号扩展
            3'b100: data_out <= {24'b0, mem[mapped_addr][7:0]}; // 1字节读无符号扩展
        endcase
    end
endmodule