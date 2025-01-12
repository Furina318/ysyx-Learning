module seg(
    input [2:0] bin_in,
    output reg [6:0] seg_out
);
    always @(*) begin
        case(bin_in)
            3'b000:seg_out=7'b1111110;
            3'b001:seg_out=7'b0110000;
            3'b010:seg_out=7'b1101101;
            3'b011:seg_out=7'b1111001;
            3'b100:seg_out=7'b0110011;
            3'b101:seg_out=7'b1011011;
            3'b110:seg_out=7'b0011111;
            3'b111:seg_out=7'b1110000;
        endcase
    end
endmodule