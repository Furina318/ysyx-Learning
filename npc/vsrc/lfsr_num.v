//生成更加复杂的伪随机数
module lfsr_num(
    input clk,
    input rst,
    input stop,
    output reg [7:0] num0,
    output reg [7:0] num1
);
reg [7:0] q1;
reg [7:0] q2;
reg [7:0] q;
reg [31:0] count;
always @(posedge clk or posedge rst or posedge stop) begin
    if(rst) begin
        q1[7:0]<=8'b00000001;
        q2[7:0]<=8'b00000010;
        count<=0;
    end
    else begin
        if(stop) begin
            q[7:0]<=q[7:0];
        end
        if(count==0 && !stop) begin
            q1[6:0]<=q1[7:1];
            q1[7]<=q1[4]^q1[3]^q1[2]^q1[0];
            q2[6:0]<=q2[7:1];
            q2[7]<=q2[6]^q2[5]^q2[4];

            q<=q1+q2;
        end
        count<=(count>=5000000 ? 32'b0 : count+1);
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
