module vga_top_apb(
  input         clock,
  input         reset,
  input  [31:0] in_paddr,
  input         in_psel,
  input         in_penable,
  input  [2:0]  in_pprot,
  input         in_pwrite,
  input  [31:0] in_pwdata,
  input  [3:0]  in_pstrb,
  output        in_pready,
  output [31:0] in_prdata,
  output        in_pslverr,

  output [7:0]  vga_r,      //RGB
  output [7:0]  vga_g,
  output [7:0]  vga_b,
  output        vga_hsync,  //同步信号
  output        vga_vsync,
  output        vga_valid
);
  localparam NUM = 2 ** 21;  //帧缓冲区
  reg [31:0] data [0:NUM-1];
  reg sync_reg;

  localparam H_FRONT = 96;  //前肩（消隐），负脉冲宽度
  localparam H_ACT   = 144; //有效像素开始点
  localparam H_BACK  = 784; //后肩,有效像素结束点
  localparam H_TOTAL = 800; 

  localparam V_FRONT = 2;
  localparam V_ACT   = 35;
  localparam V_BACK  = 515;
  localparam V_TOTAL = 525;

  localparam VGA_SYNC = 32'h211ffff4;

  reg [9:0] x_cnt;
  reg [9:0] y_cnt;
  reg [20:0] cnt;
  wire h_valid;
  wire v_valid;

  always @(posedge clock) begin
    if(reset) begin
      x_cnt <= 0;
    end
    else begin
      if(x_cnt == H_TOTAL) begin
        if(y_cnt == V_TOTAL) begin
          x_cnt <= 0;
        end
        else begin
          x_cnt <= 1;
        end
      end
      else if(x_cnt > 0) begin
        x_cnt <= x_cnt + 1;
      end
      else begin
        if(sync_reg) begin
          x_cnt <= 1;
        end
      end
    end
  end

  always @(posedge clock) begin
    if(reset) begin
        y_cnt <= 1;
    end 
    else begin
        if(x_cnt == H_TOTAL) begin
            if(y_cnt == V_TOTAL) begin
                y_cnt <= 1;
            end 
            else begin
                y_cnt <= y_cnt + 1;
            end
        end
    end
end

always @(posedge clock) begin
    if (reset) begin
        cnt <= 0;
    end 
    else begin
        if(y_cnt == V_TOTAL) begin
            cnt <= 0;
        end 
        else if(vga_valid) begin
            cnt <= cnt + 1;
        end 
        else begin
            cnt <= cnt;
        end
    end
end

localparam VGA_IDLE  = 0;
localparam VGA_WRITE = 1;
reg [1:0] vga_state;

assign in_pready = (vga_state == VGA_WRITE) ? 1 : 0;
assign in_prdata = 0;
assign in_pslverr = 0;

always @(posedge clock) begin
  if(reset) begin
    vga_state <= VGA_IDLE;
  end
  else begin
    case(vga_state)
      VGA_IDLE: begin
        if(in_psel && in_pwrite) begin
          vga_state <= VGA_WRITE;
        end
      end 
      VGA_WRITE: begin
        vga_state <= VGA_IDLE;
      end
      default: begin
        vga_state <= VGA_IDLE;
      end
    endcase
  end
end

integer i;
always @(posedge clock) begin
  if(reset) begin
    for(i = 0; i < NUM; i++) begin
      data[i] = 0;
    end
    sync_reg <= 0;
  end
  else begin
    if(in_penable) begin
      if(in_paddr == VGA_SYNC) begin
        sync_reg <= in_pwdata[0];
      end
      else begin
        data[in_paddr[22:2]] <= in_pwdata;
        sync_reg <= 0;
      end
    end
  end
end

assign vga_hsync = (x_cnt > H_FRONT);
assign vga_vsync = (y_cnt > V_FRONT);

assign h_valid   = (x_cnt > H_ACT) & (x_cnt <= H_BACK);
assign v_valid   = (y_cnt > V_ACT) & (y_cnt <= V_BACK);
assign vga_valid = h_valid & v_valid;

assign vga_r     = vga_valid ? data[cnt][23:16] : 8'h0;
assign vga_g     = vga_valid ? data[cnt][15: 8] : 8'h0;
assign vga_b     = vga_valid ? data[cnt][ 7: 0] : 8'h0;

endmodule
