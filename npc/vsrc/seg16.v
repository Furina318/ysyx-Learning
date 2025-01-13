module seg16(
    input [3:0] bin_in,
    output reg [7:0] seg_out
);
    always @(*) begin
        case(bin_in)
            4'b0000:seg_out=8'b00000011;//0
            4'b0001:seg_out=8'b10011111;//1
            4'b0010:seg_out=8'b00100101;//2
            4'b0011:seg_out=8'b00001101;//3
            4'b0100:seg_out=8'b10011001;//4
            4'b0101:seg_out=8'b01001001;//5
            4'b0110:seg_out=8'b01000001;//6
            4'b0111:seg_out=8'b00011111;//7
            4'b1000:seg_out=8'b00000001;//8
            4'b1001:seg_out=8'b00001001;//9
            4'b1010:seg_out=8'b00010001;//a
            4'b1011:seg_out=8'b11000001;//b
            4'b1100:seg_out=8'b01100011;//c
            4'b1101:seg_out=8'b10000101;//d
            4'b1110:seg_out=8'b01100001;//e
            4'b1111:seg_out=8'b01110001;//f
            default:seg_out=8'b11111111;//熄灭
        endcase
    end
endmodule