module barrel_shifter(
    input [31:0] data_in, // data input
    input [4:0] shamt; // shift amount
    input [1:0] shamt_type; // shift amount type(A/L、L/R)
    output [31:0] data_out; // data output
);
    reg [31:0] data_out;
    always @(*) begin
        case(shamt_type)
            2'b00: data_out=data_in<<shamt; //逻辑左移
            2'b01: data_out=data_in>>>shamt; //逻辑右移
            2'b10: data_out=$signed(data_in)>>shamt; //算术右移
            2'b11: data_out=data_in<<<shamt; //算术左移
            default: data_out=data_in;
        endcase
    end
endmodule