module bitrev (
  input  sck,
  input  ss,
  input  mosi,
  output reg miso
);
  // assign miso = 1'b1;
  reg [7:0] data_in, data_out;
  reg [2:0] bit_cnt;
  reg       receiving;

  always @(posedge sck or negedge ss) begin
      if (!ss) begin
          if(!receiving) begin
              receiving <= 1;
              bit_cnt   <= 0;
          end
          else begin
              data_in[7 - bit_cnt] <= mosi;
              bit_cnt <= bit_cnt + 1;
              if (bit_cnt == 7) begin
                  receiving <= 0;
                  //位翻转
                  data_out  <= {data_in[0], data_in[1], data_in[2], data_in[3],
                                data_in[4], data_in[5], data_in[6], data_in[7]};
              end
          end
      end
      else begin
          receiving <= 0;
          bit_cnt   <= 0;
      end
  end

  always @(negedge sck) begin
      if (ss) begin
          miso <= 1; // 在空闲时候，miso保持高电平
      end
      else if (!receiving) begin
          miso <= data_out[7 - bit_cnt];
      end
      else begin
          miso <= 1; // 在接收过程中，miso保持高电平
      end
  end
endmodule
