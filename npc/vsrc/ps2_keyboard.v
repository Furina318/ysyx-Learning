module ps2_keyboard(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output reg [7:0] seg0,   // 最低位七段数码管显示
    output reg [7:0] seg1,   // 次低位七段数码管显示
    output reg [7:0] seg2,   // 最中间位七段数码管显示
    output reg [7:0] seg3,   // 次中间位七段数码管显示
    output reg [7:0] seg4,   // 次高位七段数码管显示
    output reg [7:0] seg5    // 最高位七段数码管显示
);

    reg [9:0] buffer;                                       // ps2_data bits
    reg [3:0] count;                                        // count ps2_data bits
    reg [2:0] ps2_clk_sync;
    reg [7:0] press_count;

    reg [7:0] rom [255:0];
    initial begin
      rom[18]=65;//a
      rom[50]=66;//b
      rom[33]=67;//c
      rom[35]=68;//d
      rom[36]=69;//e
      rom[43]=70;//f
      rom[52]=71;//g
      rom[51]=72;//h
      rom[67]=73;//i
      rom[59]=74;//j
      rom[66]=75;//k
      rom[75]=76;//l
      rom[58]=77;//m
      rom[49]=78;//n
      rom[68]=79;//o
      rom[77]=80;//p
      rom[21]=81;//q
      rom[45]=82;//r
      rom[27]=83;//s
      rom[44]=84;//t
      rom[60]=85;//u
      rom[42]=86;//v
      rom[29]=87;//w
      rom[34]=88;//x
      rom[53]=89;//y
      rom[26]=90;//z

      rom[69]=48;//0
      rom[22]=49;//1
      rom[30]=50;//2
      rom[38]=51;//3
      rom[37]=52;//4
      rom[46]=53;//5
      rom[54]=54;//6
      rom[61]=55;//7
      rom[62]=56;//8
      rom[70]=57;//9
    end

    reg [3:0] bin_in0,bin_in1,bin_in2,bin_in3,bin_in4,bin_in5;
    reg [7:0] get_ascii;
    reg check;

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

    always @(posedge clk) begin
        if (rst == 1) begin // reset
            count <= 0;
            press_count<=0;
            bin_in0<=4'b0000;
            bin_in1<=4'b0000;
            bin_in2<=4'b0000;
            bin_in3<=4'b0000;
            bin_in4<=4'b0000;
            bin_in5<=4'b0000;
        end
        else begin
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&                     // start bit
                    (ps2_data)       &&                     // stop bit
                    (^buffer[9:1])) begin                   // odd  parity
                    $display("receive %x", buffer[8:1]);
                    get_ascii=rom[buffer[8:1]];

                    if(buffer[8:1]==8'hF0) begin
                        check<=1;
                        press_count<=press_count+1;
                        bin_in0<=4'b0000;
                        bin_in1<=4'b0000;
                        bin_in2<=4'b0000;
                        bin_in3<=4'b0000;
                    end
                    else begin
                        if(check==0) begin
                            bin_in0<=buffer[4:1];
                            bin_in1<=buffer[8:5];
                            bin_in2<=get_ascii[3:0];
                            bin_in3<=get_ascii[7:4];
                            bin_in4<=press_count[3:0];
                            bin_in5<=press_count[7:4];
                        end
                        else begin
                            check<=0;
                            seg0=8'b11111111;
                            seg1=8'b11111111;
                            seg2=8'b11111111;
                            seg3=8'b11111111;
                        end
                    end
                end
                count <= 0;                                 // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end
    
    seg16 show0(.bin_in(bin_in0),.seg_out(seg0));
    seg16 show1(.bin_in(bin_in1),.seg_out(seg1));
    seg16 show2(.bin_in(bin_in2),.seg_out(seg2));
    seg16 show3(.bin_in(bin_in3),.seg_out(seg3));
    seg16 show4(.bin_in(bin_in4),.seg_out(seg4));
    seg16 show5(.bin_in(bin_in5),.seg_out(seg5));

endmodule