module lfsr_num(
    input clk,
    input rst,
    input stop,
    output reg [7:0] num0,
    output reg [7:0] num1
);
reg [7:0] q;
reg [31:0] count;
always @(posedge clk or posedge rst or posedge stop) begin
    if(rst) begin
        q[7:0]<=8'b00000001;
        count<=0;
    end
    else begin
        if(stop) begin
            q[7:0]<=q[7:0];
        end
        if(count==0 && !stop) begin
            q[6:0]<=q[7:1];
            q[7]<=q[4]^q[3]^q[2]^q[0];
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
