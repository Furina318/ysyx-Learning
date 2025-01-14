//一个分频器从50MHz的时钟产生需要的VGA_CLK
//该生成器可以按照调用时的参数来生成不同频率的时钟：clkgen #(25000000) my_vgaclk(CLOCK_50,SW[0],1'b1,VGA_CLK);
module clkgen(
    input clkin,
    input rst,
    input clken,
    output reg clkout
    );
    parameter clk_freq=1000;
    parameter countlimit=50000000/2/clk_freq; //自动计算计数次数

    reg[31:0] clkcount;
    always @ (posedge clkin)
        if(rst)
        begin
            clkcount=0;
            clkout=1'b0;
        end
        else
        begin
        if(clken)
            begin
                clkcount=clkcount+1;
                if(clkcount>=countlimit)   //当计数器达到设定的分频，则输出时钟翻转
                begin
                    clkcount=32'd0;
                    clkout=~clkout;
                end
                else
                    clkout=clkout;
            end
        else                               //若时钟使能未开启则各项保持不变
        begin
            clkcount=clkcount;
            clkout=clkout;
        end
    end
endmodule