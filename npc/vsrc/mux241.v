module mux241(
	input [1:0] a,
	input [1:0] b,
	input [1:0] c,
	input [1:0] d,
	input [1:0] s,
	output reg [1:0] y);
	always @(*) begin
		case(s)
			2'b00: y=a;
			2'b01: y=b;
			2'b10: y=c;
			2'b11: y=d;
			default: y=a;
		endcase
	end
endmodule
