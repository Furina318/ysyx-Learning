module ps2_kbd(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output [7:0] data,
    output reg ready,
    output reg overflow
);

reg [9:0] buffer;                 //ps2_data bits
reg [7:0] fifo[7:0];              //FIFO数据缓存队列，二维数组fifo[7][7]
reg [2:0] w_ptr,r_ptr;            //fifo队列中的读写指针
reg [3:0] count;
reg [2:0] ps2_clk_sync;           //检测ps2_clk的电平变化

always @(posedge clk) begin
    ps2_clk_sync<={ps2_clk_sync[1:0],ps2_clk};//随着仿真时间更新检测记录
end
wire sampling=ps2_clk_sync[2] & ~ps2_clk_sync[1];//检测到上升沿

always @(posedge clk) begin
    if(rst) begin
        count<=0;w_ptr<=0;r_ptr<=0;overflow<=0;ready<=0;//复位
    end
    else begin
        if(ready) begin                         //检测到fifo准备，便启动读出
            r_ptr<=r_ptr+3'b1;              //读出指针递增
            if(w_ptr==(r_ptr+3'b1)) begin   //若读取指针与写入指针重合，即fifo为空，则取消fifo读取准备状态
                ready<=1'b0;
            end
        end
        if(sampling) begin
            if(count==4'd10) begin                                  //读入buffer数组完成后
                if((buffer[0]==0)&&(ps2_data)&&(^buffer[9:1])) begin//检测到数据头完整（数据准入），有数据传入
                    fifo[w_ptr]<=buffer[8:1];                       //数据写入二维数组fifo中
                    w_ptr<=w_ptr+3'b1;                              //写入指针递增
                    ready<=1'b1;                                    //fifo准备
                    overflow<=overflow|(r_ptr==(w_ptr+3'b1));
                end
                count<=0;
            end
            else begin
                buffer[count]<=ps2_data;                  //一位一位地读入buffer
                count<=count+4'b1;
            end
        end
    end
end
assign data=fifo[r_ptr];
endmodule

module seven_segment_display_controller (
    input clk,
    input rst,
    input [7:0] keycode,
    input key_released,
    output reg [6:0] seg_low,
    output reg [6:0] seg_mid,
    output reg [6:0] seg_high
);

reg [7:0] ascii_rom [0:255];                       //建立一个ROM将键码映射为ASCII码
integer i;

initial begin
    for (i = 0; i < 256; i = i + 1) begin          // ROM初始化
        ascii_rom[i] = 8'hFF;                      // 如果没有输入则7段数码管初始化熄灭
    end
    ascii_rom[39] = 8'h3F; // '1'
    ascii_rom[55] = 8'h06; // '2'
    ascii_rom[54] = 8'h5B; // '3'
    ascii_rom[53] = 8'h4F; // '4'
    ascii_rom[38] = 8'h66; // '5'
    ascii_rom[51] = 8'h6D; // '6'
    ascii_rom[37] = 8'h7D; // '7'
    ascii_rom[36] = 8'h07; // '8'
    ascii_rom[35] = 8'h7F; // '9'
    ascii_rom[28] = 8'h6F; // '0'
    ascii_rom[4] = 8'h77;  // 'A'
    ascii_rom[5] = 8'h7C;  // 'B'
    ascii_rom[12] = 8'h39; // 'C'
    ascii_rom[29] = 8'h5E; // 'D'
    ascii_rom[42] = 8'h79; // 'E'
    ascii_rom[43] = 8'h71; // 'F'
end

reg [7:0] current_ascii;
reg [7:0] prev_keycode;
reg [6:0] press_count;

always @(posedge clk) begin
    if (rst) begin                    //复位，6个七段数码管熄灭
        seg_low <= 7'b1111111;
        seg_mid <= 7'b1111111;
        seg_high <= 7'b1111111;
        current_ascii <= 8'hFF;
        prev_keycode <= 8'h00;
        press_count <= 7'b0000000;
    end else begin
        if (keycode != prev_keycode && keycode != 8'hFF) begin   //当键盘信号刷新（keycode\prev_code）
            current_ascii <= ascii_rom[keycode];                 //从ROM读取对应的ASCII值
            prev_keycode <= keycode;
            press_count <= press_count + 1;                      //记录按键次数
        end else if (key_released) begin                         //松开则七段数码管复位
            seg_low <= 7'b1111111;
            seg_mid <= 7'b1111111;
        end

        case (current_ascii)
            8'h3F: seg_mid <= 7'b0000110; // '1'
            8'h06: seg_mid <= 7'b1011011; // '2'
            8'h5B: seg_mid <= 7'b1001111; // '3'
            8'h4F: seg_mid <= 7'b1100110; // '4'
            8'h66: seg_mid <= 7'b1101101; // '5'
            8'h6D: seg_mid <= 7'b1111101; // '6'
            8'h7D: seg_mid <= 7'b0000111; // '7'
            8'h07: seg_mid <= 7'b1111111; // '8'
            8'h7F: seg_mid <= 7'b1111011; // '9'
            8'h6F: seg_mid <= 7'b1110111; // '0'
            8'h77: seg_mid <= 7'b1111001; // 'A'
            8'h7C: seg_mid <= 7'b0111101; // 'B'
            8'h39: seg_mid <= 7'b1001110; // 'C'
            8'h5E: seg_mid <= 7'b0111100; // 'D'
            8'h79: seg_mid <= 7'b1011001; // 'E'
            8'h71: seg_mid <= 7'b1011111; // 'F'
            default: seg_mid <= 7'b1111111;
        endcase

        case (keycode)
            39: seg_low <= 7'b0000110; // '1'
            55: seg_low <= 7'b1011011; // '2'
            54: seg_low <= 7'b1001111; // '3'
            53: seg_low <= 7'b1100110; // '4'
            38: seg_low <= 7'b1101101; // '5'
            51: seg_low <= 7'b1111101; // '6'
            37: seg_low <= 7'b0000111; // '7'
            36: seg_low <= 7'b1111111; // '8'
            35: seg_low <= 7'b1110111; // '9'
            28: seg_low <= 7'b1110110; // '0'
            default: seg_low <= 7'b1111111;
        endcase

        seg_high <=~(press_count[6:0]); 
    end
end

endmodule

module ps2_keyboard(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output reg [6:0] seg_low,
    output reg [6:0] seg_mid,
    output reg [6:0] seg_high
);

reg [7:0] keycode;
reg ready;
reg overflow;
reg key_released;

ps2_kbd ps2_kb (
    .clk(clk),
    .rst(rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .data(keycode),
    .ready(ready),
    .overflow(overflow)
);

seven_segment_display_controller ssd_ctrl (
    .clk(clk),
    .rst(rst),
    .keycode(keycode),
    .key_released(key_released),
    .seg_low(seg_low),
    .seg_mid(seg_mid),
    .seg_high(seg_high)
);

always @(posedge clk) begin
    if (rst) begin
        key_released <= 1'b0;
    end else begin
        if (ready) begin
            key_released <= 1'b0;
        end else begin
            key_released <= 1'b1;
        end
    end
end

endmodule