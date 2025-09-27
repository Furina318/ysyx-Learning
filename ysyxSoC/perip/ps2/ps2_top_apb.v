module ps2_top_apb(
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

  input         ps2_clk,
  input         ps2_data
);

  reg [1:0] ps2_state;
  localparam PS2_IDLE = 0;
  localparam PS2_READ = 1;

  reg [9:0] buffer;      //起始位+8数据位+奇偶位+停止位
  reg [3:0] counter;
  reg [7:0] fifo [15:0];
  reg [3:0] w_ptr;
  reg [3:0] r_ptr;
  reg       isn_empty;
  integer i;

  assign in_pready  = (ps2_state == PS2_READ) ? 1'b1 : 1'b0;
  assign in_prdata  = (ps2_state == PS2_READ) ? (isn_empty ? {24'd0, fifo[r_ptr]} : 0) : 0;
  assign in_pslverr = 1'b0;

  //ps2_clk是异步信号，避免亚稳态
  reg [2:0] ps2_clk_sync;
  always @(posedge clock) begin
    ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
  end
  wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];//ps2时钟上升沿触发数据采样

  always @(posedge clock or posedge reset) begin
    if(reset) begin
      ps2_state <= PS2_IDLE;
    end
    else begin
      case(ps2_state)
        PS2_IDLE: begin
          if(in_psel && !in_pwrite) begin
            ps2_state <= PS2_READ;
          end
        end
        PS2_READ: begin
          ps2_state <= PS2_IDLE;
        end
        default: begin
          ps2_state <= PS2_IDLE;
        end
      endcase
    end
  end

  always @(posedge clock) begin
    if (reset) begin
      counter   <= 0;
      w_ptr     <= 0;
      r_ptr     <= 0;
      isn_empty <= 0;
      for (i = 0; i < 8; i++) fifo[i] <= 0;
    end else begin
      if (sampling) begin
        if (counter == 4'd10) begin
          // 接收完成一帧，做校验
          if ((buffer[0] == 0) && (ps2_data) && (^buffer[9:1])) begin
            fifo[w_ptr] <= buffer[8:1]; // 保存数据位
            w_ptr       <= w_ptr + 1;
            isn_empty   <= 1;
          end
          counter <= 0;
        end else begin
          buffer[counter] <= ps2_data;
          counter         <= counter + 1;
        end
      end

      // APB 读取时，FIFO 出队
      if (in_penable & in_pready & isn_empty) begin
        r_ptr <= r_ptr + 1;
        if (w_ptr == (r_ptr + 1)) isn_empty <= 0; // FIFO 读空
      end
    end
  end


endmodule
