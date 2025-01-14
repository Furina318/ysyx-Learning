module vga_ctrl(
    input           pclk,     //25MHz时钟
    input           reset,    //置位
    input  [23:0]   vga_data, //上层模块提供的VGA颜色数据
    output [9:0]    h_addr,   //提供给上层模块的当前扫描像素点坐标
    output [9:0]    v_addr,
    output          hsync,    //行同步和列同步信号
    output          vsync,
    output          valid,    //消隐信号
    output [7:0]    vga_r,    //红绿蓝颜色信号
    output [7:0]    vga_g,
    output [7:0]    vga_b
    );

  //640x480分辨率下的VGA参数设置
  parameter    h_frontporch = 96;
  parameter    h_active = 144;
  parameter    h_backporch = 784;
  parameter    h_total = 800;

  parameter    v_frontporch = 2;
  parameter    v_active = 35;
  parameter    v_backporch = 515;
  parameter    v_total = 525;

  //像素计数值
  reg [9:0]    x_cnt;
  reg [9:0]    y_cnt;
  wire         h_valid;
  wire         v_valid;

  always @(posedge reset or posedge pclk) //行像素计数
      if (reset == 1'b1)
        x_cnt <= 1;
      else
      begin
        if (x_cnt == h_total)
            x_cnt <= 1;
        else
            x_cnt <= x_cnt + 10'd1;
      end

  always @(posedge pclk)  //列像素计数
      if (reset == 1'b1)
        y_cnt <= 1;
      else
      begin
        if (y_cnt == v_total & x_cnt == h_total)
            y_cnt <= 1;
        else if (x_cnt == h_total)
            y_cnt <= y_cnt + 10'd1;
      end
  //生成同步信号
  assign hsync = (x_cnt > h_frontporch);
  assign vsync = (y_cnt > v_frontporch);
  //生成消隐信号
  assign h_valid = (x_cnt > h_active) & (x_cnt <= h_backporch);
  assign v_valid = (y_cnt > v_active) & (y_cnt <= v_backporch);
  assign valid = h_valid & v_valid;
  //计算当前有效像素坐标
  assign h_addr = h_valid ? (x_cnt - 10'd145) : {10{1'b0}};
  assign v_addr = v_valid ? (y_cnt - 10'd36) : {10{1'b0}};
  //设置输出的颜色值
  assign vga_r = vga_data[23:16];
  assign vga_g = vga_data[15:8];
  assign vga_b = vga_data[7:0];
endmodule
/*
此代码对外提供了VGA控制信号，利用对时钟进行计数来判断当前是在扫描第几行的第几个像素，并确定是否要消隐。代码输出的红R、绿G、蓝B三种颜色分别是以vga_r,vga_g,vga_b三个8位的二进制信号表示的，这三组8位数字信号将被传送到开发板上的数模转换器，转换成模拟信号，经VGA接口送入显示器中。

该控制器的特点是可以方便地实现上层系统对显示内容的控制。例如，如果在模块调用时设置vga_data为常数24’hFF0000，就可以直接显示全屏红色。上层系统也可以根据当前扫描的像素坐标，选择合适的颜色给不同的像素设置不同的vga_data。更重要的是，上层系统可以分配一块显示存储，利用v_addr, h_addr来索引该显存，每次扫描到特定像素点时，按照显存的值来设置vga_data。这样，其他应用就可以直接对显存进行操作，显存改变自动对应到VGA的显示上，而不用关心VGA扫描的具体过程了。

非常不幸的是，如果每个像素点用3个8bit数来表示，一个像素点需要24bit， 
640x480的像素点需要7.372M bit的RAM。我们的FPGA只有5.57M bit片内内存，不够实现24bit颜色的VGA显存。可能的解决方案包括

降低颜色分辨率至12bit，即RGB各用4bit来表示，颜色数量变少（ 建议方案 ）

只给256x256的像素范围分配显存

调用片外的64M SDRAM（此方案过于复杂，不建议使用）
*/