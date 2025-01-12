module lfsr_num(
    input clk,
    input rst,
    output reg [6:0] num0,
    output reg [6:0] num1
);
reg [7:0] q;
always @(posedge clk or posedge rst) begin
    if(rst) begin
        q[7:0]<=8'b00000001;
    end
    else begin
        q[6:0]<=q[7:1];
        q[7]<=q[4]^q[3]^q[2]^q[0];
    end
end

seg16 show1(
    .bin_in(q[3:0]),
    .seg_out(num0)
);
seg16 show2(
    .bin_in(q[7:4]),
    .seg_out(num1)
);

endmodule