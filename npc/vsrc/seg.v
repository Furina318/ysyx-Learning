module seg(
    input [2:0] bin_in,
    output reg [6:0] seg_out
);
    always @(*) begin
        case(bin_in)
            3'b000:seg_out=8'b00000011;
            3'b001:seg_out=8'b10011111;
            3'b010:seg_out=8'b00100101;
            3'b011:seg_out=8'b00001101;
            3'b100:seg_out=8'b10011001;
            3'b101:seg_out=8'b01001001;
            3'b110:seg_out=8'b11000001;
            3'b111:seg_out=8'b00011111;
            default:seg_out=8'b11111111;
        endcase
    end
endmodule