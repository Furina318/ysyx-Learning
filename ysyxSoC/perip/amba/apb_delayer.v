module apb_delayer(
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

  output [31:0] out_paddr,
  output        out_psel,
  output        out_penable,
  output [2:0]  out_pprot,
  output        out_pwrite,
  output [31:0] out_pwdata,
  output [3:0]  out_pstrb,
  input         out_pready,
  input  [31:0] out_prdata,
  input         out_pslverr
);

  // assign out_paddr   = in_paddr;
  // assign out_psel    = in_psel;
  // assign out_penable = in_penable;
  // assign out_pprot   = in_pprot;
  // assign out_pwrite  = in_pwrite;
  // assign out_pwdata  = in_pwdata;
  // assign out_pstrb   = in_pstrb;
  // assign in_pready   = out_pready;
  // assign in_prdata   = out_prdata;
  // assign in_pslverr  = out_pslverr;

  reg [1:0] state;
  localparam IDLE  = 0;
  localparam WAIT  = 1;
  localparam DELAY = 2;

  assign out_paddr   = in_paddr;
  assign out_psel    = in_psel & (state != DELAY);
  assign out_penable = in_penable;
  assign out_pprot   = in_pprot;
  assign out_pwrite  = in_pwrite;
  assign out_pwdata  = in_pwdata;
  assign out_pstrb   = in_pstrb;

  reg [31:0] counter;
  reg [31:0] prdata_reg;
  reg        pslverr_reg;

  // Fmax: 372MHz, Perip: 100MHz, r = 3.72
  // set s = 32, r*s = 119.04 --> 119
  // 每周期加(r-1)*s=87，直到(r-1)*s*k=87*k
  // counter先/s = 87/32*k, 每周期-1
  localparam R_S = 32'd47;

  always @(posedge clock) begin
    if(reset) begin
      state <= IDLE;
      counter <= 0;
    end
    else begin
      case(state)
        IDLE: begin
          if(in_psel) begin
            state <= WAIT;
            counter <= counter + R_S;
          end
        end
        WAIT: begin
          if(out_pready) begin
            state <= DELAY;
            counter <= (counter + R_S) >> 5;
          end
          else begin
            counter <= counter + R_S;
          end
        end
        DELAY: begin
          if(counter == 32'b1) begin
            state <= IDLE;
            counter <= 32'b0;
          end
          else begin
            counter <= counter - 1;
          end
        end
        default: begin
          state <= IDLE;
        end
      endcase
    end
  end

  always @(posedge clock) begin
    if(reset) begin
      prdata_reg <= 32'h0;
      pslverr_reg <= 1'b0;
    end
    else if(out_pready) begin
      prdata_reg <= out_prdata;
      pslverr_reg <= out_pslverr;
    end
  end

  assign in_pready = (state == DELAY) && (counter == 1);
  assign in_prdata = prdata_reg;
  assign in_pslverr = pslverr_reg;



endmodule
