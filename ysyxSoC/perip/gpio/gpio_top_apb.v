module gpio_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,    //从设备选择
  input         in_penable,
  input  [2:0]  in_pprot,   //保护信号
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr, //错误信号

  output [15:0] gpio_out,   //16位LED灯输出
  input  [15:0] gpio_in,    //16位拨码开关
  output [7:0]  gpio_seg_0,
  output [7:0]  gpio_seg_1,
  output [7:0]  gpio_seg_2,
  output [7:0]  gpio_seg_3,
  output [7:0]  gpio_seg_4,
  output [7:0]  gpio_seg_5,
  output [7:0]  gpio_seg_6,
  output [7:0]  gpio_seg_7
);

  reg [31:0] gpio_reg [3:0];//4个地址寄存器(0x0, 0x4, 0x8, 0xc)
  wire wen;
  wire ren;
  wire [31:0] wdata;
  wire [1:0] addr;

  assign in_pready = in_psel && in_penable;
  assign in_prdata = ren ? gpio_reg[addr] : 32'b0;

  assign wen = in_psel && in_penable && in_pwrite;
  assign ren = in_psel && in_penable && !in_pwrite;
  assign addr = in_paddr[3:2];        //选择对应寄存器地址
  assign gpio_out = gpio_reg[0][15:0];//LED控制寄存器

  genvar i;
  generate
    for(i = 0; i < 4; i = i + 1) begin
      assign wdata[i*8+7 : i*8] = in_pstrb[i]? in_pwdata[i*8+7 : i*8] : gpio_reg[addr][i*8+7 : i*8];
    end

    for (i = 0; i < 4; i = i + 1) begin
      always @(posedge clock) begin
        if (reset) begin
          gpio_reg[i] <= 32'b0;
        end 
        else begin 
          if (wen && (addr == i)) begin
            gpio_reg[i] <=  wdata;
          end
          if(i == 1) begin
            gpio_reg[i] <= {16'b0, gpio_in};//拨码开关控制寄存器
          end
        end
      end
    end
  endgenerate
  //七段数码管控制寄存器
  assign gpio_seg_0 = ~seg(gpio_reg[2][3:0]);
  assign gpio_seg_1 = ~seg(gpio_reg[2][7:4]);
  assign gpio_seg_2 = ~seg(gpio_reg[2][11:8]);
  assign gpio_seg_3 = ~seg(gpio_reg[2][15:12]);
  assign gpio_seg_4 = ~seg(gpio_reg[2][19:16]);
  assign gpio_seg_5 = ~seg(gpio_reg[2][23:20]);
  assign gpio_seg_6 = ~seg(gpio_reg[2][27:24]);
  assign gpio_seg_7 = ~seg(gpio_reg[2][31:28]);

  function [7:0] seg(input [3:0] num);
    case(num)
      4'b0000 : seg = {7'h7E, 1'b0};
      4'b0001 : seg = {7'h30, 1'b0};
      4'b0010 : seg = {7'h6D, 1'b0};
      4'b0011 : seg = {7'h79, 1'b0};
      4'b0100 : seg = {7'h33, 1'b0};          
      4'b0101 : seg = {7'h5B, 1'b0};
      4'b0110 : seg = {7'h5F, 1'b0};
      4'b0111 : seg = {7'h70, 1'b0};
      4'b1000 : seg = {7'h7F, 1'b0};
      4'b1001 : seg = {7'h7B, 1'b0};
      4'b1010 : seg = {7'h77, 1'b0};
      4'b1011 : seg = {7'h1F, 1'b0};
      4'b1100 : seg = {7'h4E, 1'b0};
      4'b1101 : seg = {7'h3D, 1'b0};
      4'b1110 : seg = {7'h4F, 1'b0};
      4'b1111 : seg = {7'h47, 1'b0};
    endcase
  endfunction

endmodule
