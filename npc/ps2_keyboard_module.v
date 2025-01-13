//打包数据并进行发送，同时加快仿真速率
//timescale 1ns / 1ps
module ps2_keyboard_module(
    output reg ps2_clk,
    output reg ps2_data
);
parameter [31:0] kbd_clk_per=60;
initial begin
    ps2_clk=1'b1;
    forever #(kbd_clk_per/2) ps2_clk=~ps2_clk;

task automatic kbd_sendcode;
    input [7:0] code;
    integer i;
    
    begin
        reg [10:0] send_buffer;
        send_buffer[0]=1'b0;
        send_buffer[8:1]=code;
        send_buffer[9]=~(^code);//odd parity bit
        send_buffer[10]=1'b1;
        i=0;
        while(i<11) begin
            @(negedge ps2_clk);
            ps2_data=send_buffer[i];
            @(posedge ps2_clk);
            i=i+1;
        end
    end
endtask
endmodule
