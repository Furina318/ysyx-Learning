module seg(
    input [2:0] bin_in,
    output reg [6:0] seg_out
);
    always @(*) begin
        case(bin_in)
            3'b000:seg_out=7'b0000001;
            3'b001:seg_out=7'b1001111;
            3'b010:seg_out=7'b0010010;
            3'b011:seg_out=7'b0000110;
            3'b100:seg_out=7'b1001100;
            3'b101:seg_out=7'b0100100;
            3'b110:seg_out=7'b1100000;
            3'b111:seg_out=7'b0001111;
        endcase
    end
endmodule