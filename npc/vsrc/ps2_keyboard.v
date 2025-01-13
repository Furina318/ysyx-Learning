module ps2_keyboard(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output reg [6:0] seg0,   // 最低位七段数码管显示
    output reg [6:0] seg1,   // 次低位七段数码管显示
    output reg [6:0] seg2,   // 最中间位七段数码管显示
    output reg [6:0] seg3,   // 次中间位七段数码管显示
    output reg [6:0] seg4,   // 次高位七段数码管显示
    output reg [6:0] seg5    // 最高位七段数码管显示
);

reg [9:0] buffer;                 // PS2_data bits
reg [6:0] keycode;
reg [6:0] ascii_code;
reg key_pressed;
reg [7:0] press_count;

// ROM for ASCII conversion
reg [6:0] rom [0:127];

initial begin
    rom[4] = 7'd65;  // 'A'
    rom[5] = 7'd66;  // 'B'
    rom[6] = 7'd67;  // 'C'
    rom[7] = 7'd68;  // 'D'
    rom[8] = 7'd69;  // 'E'
    rom[9] = 7'd70;  // 'F'
    rom[10] = 7'd71;  // 'G'
    rom[11] = 7'd72;  // 'H'
    rom[12] = 7'd73;  // 'I'
    rom[13] = 7'd74;  // 'J'
    rom[14] = 7'd75;  // 'K'
    rom[15] = 7'd76;  // 'L'
    rom[16] = 7'd77;  // 'M'
    rom[17] = 7'd78;  // 'N'
    rom[18] = 7'd79;  // 'O'
    rom[19] = 7'd80;  // 'P'
    rom[20] = 7'd81;  // 'Q'
    rom[21] = 7'd82;  // 'R'
    rom[22] = 7'd83;  // 'S'
    rom[23] = 7'd84;  // 'T'
    rom[24] = 7'd85;  // 'U'
    rom[25] = 7'd86;  // 'V'
    rom[26] = 7'd87;  // 'W'
    rom[27] = 7'd88;  // 'X'
    rom[28] = 7'd89;  // 'Y'
    rom[29] = 7'd90;  // 'Z'
    rom[30] = 7'd49;  // '1'
    rom[31] = 7'd50;  // '2'
    rom[32] = 7'd51;  // '3'
    rom[33] = 7'd52;  // '4'
    rom[34] = 7'd53;  // '5'
    rom[35] = 7'd54;  // '6'
    rom[36] = 7'd55;  // '7'
    rom[37] = 7'd56;  // '8'
    rom[38] = 7'd57;  // '9'
    rom[39] = 7'd48;  // '0'
end

reg [2:0] ps2_clk_sync;           // 检测ps2_clk的电平变化

always @(posedge clk) begin
    ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk}; // 更新检测记录
end

wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; // 检测到上升沿

always @(posedge clk) begin
    if (rst) begin
        keycode <= 7'b1111111;
        ascii_code <= 7'b1111111;
        key_pressed <= 0;
        press_count <= 0;
        seg0 <= 7'b1111111; // 熄灭
        seg1 <= 7'b1111111; // 熄灭
        seg2 <= 7'b1111111; // 熄灭
        seg3 <= 7'b1111111; // 熄灭
        seg4 <= 7'b1111111; // 熄灭
        seg5 <= 7'b1111111; // 熄灭
    end else begin
        if (sampling) begin
            if (buffer[0] == 0 && buffer[9] == 1 && (^buffer[8:1])) begin // 数据头完整（数据准入），有数据传入
                keycode <= buffer[8:2]; // 存储按键码
                if (!key_pressed) begin
                    key_pressed <= 1;
                    press_count <= press_count + 8'd1;
                end
            end
        end

        // 处理按键释放
        if (~ps2_data && key_pressed) begin
            key_pressed <= 0;
            seg0 <= 7'b1111111; // 熄灭
            seg1 <= 7'b1111111; // 熄灭
        end

        // 显示按键码和ASCII码
        if (keycode != 7'b1111111) begin
            ascii_code <= rom[keycode];
            seg0 <= segment_codes[keycode[3:0]]; // 最低位显示按键码低四位
            seg1 <= segment_codes[{1'b0, keycode[6:4]}]; // 次低位显示按键码高三位
            seg2 <= segment_codes[ascii_code[3:0]]; // 最中间位显示ASCII码低四位
            seg3 <= segment_codes[{1'b0, ascii_code[6:4]}]; // 次中间位显示ASCII码高三位
            seg4 <= segment_codes[(press_count > 9 ? press_count / 10 : 0)]; // 次高位显示按键次数十位
            seg5 <= segment_codes[press_count % 10]; // 最高位显示按键次数个位
        end
        else begin
            seg0 <= 7'b1111111; // 熄灭
            seg1 <= 7'b1111111; // 熄灭
            seg2 <= 7'b1111111; // 熄灭
            seg3 <= 7'b1111111; // 熄灭
            seg4 <= 7'b1111111; // 熄灭
            seg5 <= 7'b1111111; // 熄灭
        end
    end
end

// 七段数码管编码
reg [6:0] segment_codes [0:15];

initial begin
    segment_codes[0] = 7'b1000000; // 0
    segment_codes[1] = 7'b1111001; // 1
    segment_codes[2] = 7'b0100100; // 2
    segment_codes[3] = 7'b0110000; // 3
    segment_codes[4] = 7'b0011001; // 4
    segment_codes[5] = 7'b0010010; // 5
    segment_codes[6] = 7'b0000010; // 6
    segment_codes[7] = 7'b1111000; // 7
    segment_codes[8] = 7'b0000000; // 8
    segment_codes[9] = 7'b0010000; // 9
    segment_codes[10] = 7'b1111111; // OFF
end
endmodule



