`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module register_files(
    input clk,
    input rst, 
    input RegWr,// clk, reset, enable
    input [4:0] rs1,rs2,rd,// register address
    input [31:0] busW,//data input
    output [31:0] busA,busB // data output
);
    reg [31:0] regs[31:0];//32个寄存器（0号寄存器不可写）（32位）

    //初始化寄存器
    // integer i;
    // initial begin
    //     for(i=0;i<32;i=i+1)
    //         regs[i]=0;
    // end


    //读取寄存器
    assign busA=(rs1==0) ? 32'b0 : regs[rs1];//0号寄存器的访存应保持为0
    assign busB=(rs2==0) ? 32'b0 : regs[rs2];
    //写入寄存器
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            integer i;
            for(i=0;i<32;i=i+1)
                regs[i]<=0;
        end
        if(RegWr && rd!=0) begin//0号寄存器不可写
            regs[rd]<=busW;//数据写回寄存器
        end
    end
endmodule
