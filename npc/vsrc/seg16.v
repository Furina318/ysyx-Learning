module seg16(
    input [3:0] bin_in,
    output reg [7:0] seg_out
);
    always @(*) begin
        case(bin_in)
            4'b0000:seg_out=8'b00000011;
            4'b0001:seg_out=8'b10011111;
            4'b0010:seg_out=8'b00100101;
            4'b0011:seg_out=8'b00001101;
            4'b0100:seg_out=8'b10011001;
            4'b0101:seg_out=8'b01001001;
            4'b0110:seg_out=8'b01000001;
            4'b0111:seg_out=8'b00011111;
            4'b1000:seg_out=8'b00000001;
            4'b1001:seg_out=8'b00001001;
            4'b1010:seg_out=8'b00010001;
            4'b1011:seg_out=8'b11000001;
            4'b1100:seg_out=8'b01100011;
            4'b1101:seg_out=8'b10000101;
            4'b1110:seg_out=8'b01100001;
            4'b1111:seg_out=8'b01110001;
            default:seg_out=8'b11111111;
        endcase
    end
endmodule