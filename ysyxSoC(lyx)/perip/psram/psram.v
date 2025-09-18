module psram(
  input sck,
  input ce_n,
  inout [3:0] dio
);

  // assign dio = 4'bz;
  import "DPI-C" function void psram_read(input int addr, output int data);
  import "DPI-C" function void psram_write(input int addr, input int data,input int mask);

  parameter RCMD = 8'hEB;   // 1-4-4读
  parameter WCMD = 8'h38;   // 1-4-4写
  parameter QPICMD = 8'h35; // 4-4-4

  wire [3:0] dout_en;
  wire [3:0] dout;
  wire [3:0] din;
  assign din = dio;

  genvar i;
  generate
    for(i = 0; i < 4; i = i + 1) begin
      assign dio[i] = dout_en[i] ? dout[i] : 1'bz;
    end
  endgenerate

  reg QPI_MODE = 0;
  reg [7:0]  cmd;
  reg [23:0] addr;
  reg [31:0] data;
  reg [31:0] rdata;
  reg [7:0]  cnt;

  reg [2:0]  state;
  localparam CMD   = 3'd0;
  localparam ADDR  = 3'd1;
  localparam DATA  = 3'd2;
  localparam DELAY = 3'd3;
  localparam ERR   = 3'd4;

  always @(posedge ce_n) begin
    if(cmd == QPICMD) begin
      QPI_MODE = 1;
    end
  end

  always @(posedge sck or posedge ce_n) begin
    if(ce_n) begin
      cnt <= 0;
      state <= CMD;
    end
    else begin
      case(state)
        CMD: begin
          if(QPI_MODE) begin
            cnt   <= (cnt < 8'd1 ) ? cnt + 8'd1 : 8'd0;
            state <= (cnt == 8'd1) ? ADDR : state;
          end
          else begin
            cnt   <= (cnt < 8'd7 ) ? cnt + 8'd1 : 8'd0;
            state <= (cnt == 8'd7) ? ADDR : state;
          end
        end
        ADDR: begin
            cnt   <= (cnt < 8'd5 ) ? cnt + 8'd1 : 8'd0;
            state <= (cnt == 8'd5) ? ((cmd == RCMD) ? DELAY : (cmd == WCMD) ? DATA : ERR) : state;
        end
        DATA: begin
          cnt   <= cnt + 8'd1;
          state <= state;
        end
        DELAY: begin
          cnt   <= (cnt < 8'd6 ) ? cnt + 8'd1 : 8'd0;
          state <= (cnt == 8'd6) ? DATA : state;
        end
        default: begin
          state <= state;
          // $fwrite(32'h80000002, "Assertion failed: Unsupported command `%xh`, only support `EBh,38H` read command\n", cmd);
          // $fatal;
          $display("What's wrong with you ??? why %x ???", cmd);
        end
      endcase
    end
  end

  always @(posedge sck or posedge ce_n) begin
    if(ce_n) begin
      cmd <= 8'd0;
    end
    else if(state == CMD) begin
      if(QPI_MODE) begin
        cmd <= {cmd[3:0], din[3:0]};
      end
      else begin
        cmd <= {cmd[6:0], din[0]};
      end
    end
  end

  always@(posedge sck or posedge ce_n) begin
    if (ce_n) begin
      addr <= 24'd0;
    end
    else if (state == ADDR && cnt < 8'd6)
      addr <= { addr[19:0], din[3:0] };
  end

  wire [31:0] data_bswap = {rdata[7:0], rdata[15:8], rdata[23:16], rdata[31:24]};

  always@(posedge sck or posedge ce_n) begin
    if (ce_n) begin
      data <= 32'd0;
    end
    else if (state == DATA && cmd == RCMD) begin
      data <= { {cnt == 8'd0 ? data_bswap : data}[27:0], 4'b0000 };
    end
    else if (state == DATA && cmd == WCMD) begin
      data <= {data[27:0], din[3:0]};
    end
  end
  assign dout = {(state == DATA && cnt == 8'd0) ? data_bswap : data}[31:28];

  assign dout_en = (state == DATA | state == DELAY)&& cmd == RCMD ? 4'b1111 : 4'd0;

  wire [31:0] wdata = {data[7:0], data[15:8], data[23:16], data[31:24]};

  always @(posedge sck)begin
    if((state == DELAY) && (cnt == 8'd0) && (cmd == RCMD))begin
      psram_read({8'd0, addr}, rdata);
    end
  end

  always@(posedge ce_n) begin
    if(cmd == WCMD)begin
      psram_write({8'd0, addr}, wdata, {24'd0, cnt});
    end
  end

endmodule
