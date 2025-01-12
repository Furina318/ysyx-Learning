module alu4(
    input [3:0] a,
    input [3:0] b,
    input [2:0] sel,
    output reg [3:0] result,
    output reg zero,
    output reg overflow,
    output reg cout,
    output reg [6:0] seg7
);
wire [3:0] add_result;
wire [3:0] sub_result;
wire [3:0] not_A=~a;
wire [3:0] and_result;
wire [3:0] or_result;
wire [3:0] xor_result;

assign add_result=a+b;
assign sub_result=a-b;
assign not_A=~a;
assign and_result=a&b;
assign or_result=a|b;
assign xor_result=a^b;

always @(*) begin
    case(sel)
        3'b000:result=add_result;
        3'b001:result=sub_result;
        3'b010:result=not_A;
        3'b011:result=and_result;
        3'b100:result=or_result;
        3'b101:result=xor_result;
        3'b110:result=(a<b)?1:0;
        3'b111:result=(a==b)?1:0;
        default:result=4'b0000;
    endcase
end

assign zero=~(|result);
assign overflow=(sel[2] && (add_result[3] != b[3])) || (!sel[2] && (sub_result[3] != b[3]));
assign cout=(sel[2]&&add_result[3])||(!sel[2]&&sub_result[3]);

seg16 alu4_seg(
    .bin_in(result),
    .seg_out(seg7)
);

endmodule