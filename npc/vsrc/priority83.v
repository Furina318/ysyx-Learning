module priority83(
    input [7:0] sw,
    output reg [2:0] y,
    output reg [6:0] out_seg
);
    always @(*) begin
        casez(sw)
            8'b00000001:y=0;
            8'b0000001z:y=1;
            8'b000001zz:y=2;
            8'b00001zzz:y=3;
            8'b0001zzzz:y=4;
            8'b001zzzzz:y=5;
            8'b01zzzzzz:y=6;
            8'b1zzzzzzz:y=7;
            default:y=0;
        endcase
    end

    seg my_seg(
        .bin_in(y),
        .seg_out(out_seg)
    );
endmodule
