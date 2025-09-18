module sdram_16(
  input        clk,
  input        cke, //时钟使能
  input        cs,
  input        ras, //行地址
  input        cas, //列地址
  input        we,
  input [12:0] a,   //地址总线
  input [ 1:0] ba,  //存储体地址，选择4个存储体中的一个
  input [ 1:0] dqm, //数据掩码信号
  inout [15:0] dq
);

  // assign dq = 16'bz;
  wire [2:0] cmd = {ras, cas, we};
  localparam NOP       = 3'b111;//无操作
  localparam ACTIVE    = 3'b011;//激活存储体某一行
  localparam READ      = 3'b101;//读操作
  localparam WRITE     = 3'b100;//写操作
  localparam TERMINATE = 3'b110;//终止突发传输
  localparam PRECHARGE = 3'b010;//预充电
  localparam REFRESH   = 3'b001;//自动刷新
  localparam LOAD_MODE = 3'b000;//加载模式寄存器，设置CAS延迟和突发长度

  localparam BANK_SIZE = 8192 * 512;

  reg [15:0] bank[0:3][0:BANK_SIZE-1]; //4 * 8192 * 512 * 16（32MB）
  reg [12:0] line_address [0:3];     //存储体的激活行地址

  wire [15:0] den;
  wire [15:0] din;
  reg  [15:0] dout;
  assign din = dq;

  genvar i;
  generate
    for(i = 0; i < 16; i = i + 1) begin
      assign dq[i] = den[i] ? dout[i] : 1'bz;
    end
  endgenerate

  reg [2:0] CAS_latency;   //CAS延迟
  reg [2:0] brust_len;     //突发长度

  reg [1:0] L_Bank;    //当前存储体
  reg [1:0] dqm_buf;   //数据掩码缓冲
  reg [3:0] r_cnt;
  reg [3:0] w_cnt;
  reg       read_flag;
  reg [8:0] r_addr; //读列地址
  reg [8:0] w_addr; //写列地址
  reg [15:0] w_data;
  wire [21:0] r_sdram_address = {line_address[L_Bank], r_addr};//完整地址
  wire [21:0] w_sdram_address = {line_address[L_Bank], w_addr};
  wire [3:0]  Length = (brust_len == 3'b011) ? 4'd8 :
                       (brust_len == 3'b010) ? 4'd4 :
                       (brust_len == 3'b001) ? 4'd2 : 4'd1;//根据突发长度选择8列，4列，2列，1列
  assign den = read_flag ? 16'hffff : 16'h0;

  //行地址选择
  always @(posedge clk) begin
    if(!cke) begin
      line_address[0] <= 0;
      line_address[1] <= 0;
      line_address[2] <= 0;
      line_address[3] <= 0;
    end
    else if(!cs & (cmd == ACTIVE)) begin
      line_address[ba] <= a;
    end
  end
  
  //存储体选择
  always @(posedge clk) begin
    if(!cke) begin
      L_Bank <= 0;
    end
    else if(!cs & (cmd == ACTIVE | cmd == READ | cmd == WRITE)) begin
      L_Bank <= ba;
    end
  end

  //MODE加载
  always @(posedge clk) begin
    if(!cke) begin
        CAS_latency <= 3'd0;
        brust_len   <= 3'd0;
    end
    else if(!cs & (cmd == LOAD_MODE)) begin
      CAS_latency <= a[6:4];
      brust_len   <= a[2:0];
    end
  end

  always @(posedge clk) begin
    if(!cke) begin
      dqm_buf <= 0;
    end
    else if(!cs) begin
      dqm_buf <= dqm;
    end
  end

  //读操作控制
  always @(posedge clk) begin
    if(!cke) begin
      r_cnt     <= 0;
      r_addr    <= 0;
      read_flag <= 0;
    end
    else if(!cs) begin
      if(cmd == READ) begin
        r_cnt     <= r_cnt + 1;
        r_addr    <= a[8:0];
        read_flag <= 1;
      end
      else if((r_cnt > 0) && (r_cnt < {1'b0, CAS_latency} - 1)) begin
        r_cnt     <= r_cnt + 1;
        read_flag <= 1;
      end
      else if(r_cnt >= {1'b0, CAS_latency} - 1) begin
        r_cnt     <= (r_cnt < Length + CAS_latency - 1) ? r_cnt + 1 : 0;
        r_addr    <= r_addr + 1;
        read_flag <= 1;
      end
      else begin
        r_cnt     <= 0;
        r_addr    <= 0;
        read_flag <= 0;
      end
    end
    else begin
      r_cnt     <= 0;
      r_addr    <= 0;
      dout      <= 0;
      read_flag <= 0;
    end
  end

  always @(posedge clk) begin
    if (!cke) begin
      w_cnt     <= 0;
      w_addr    <= 0;
      w_data    <= 0;
    end 
    else if (!cs) begin
      if (cmd == WRITE) begin
        w_cnt     <= w_cnt + 1;
        w_addr    <= a[8:0];
        w_data    <= din;
      end 
      else if (w_cnt > 0) begin
        w_cnt     <= (w_cnt < Length) ? w_cnt + 1 : 0;
        w_addr    <= w_addr + 1;
        w_data    <= din;
      end 
      else begin
        w_cnt     <= 0;
        w_addr    <= 0;
        w_data    <= 0;
      end
    end
  end

  //数据输出，存储器写入
  always @(posedge clk) begin
    if (!cke) begin
      dout <= 0;
    end 
    else if (!cs) begin
      if (r_cnt >= {1'b0, CAS_latency} - 1) begin
        dout[15:8] <= bank[L_Bank][r_sdram_address][15:8];
        dout[7:0]  <= bank[L_Bank][r_sdram_address][7:0];
      end 
      else begin
        dout <= 0;
      end
      if (w_cnt > 0) begin
        bank[L_Bank][w_sdram_address][15:8] <= (!dqm_buf[1]) ? w_data[15:8] : bank[L_Bank][w_sdram_address][15:8];
        bank[L_Bank][w_sdram_address][7:0]  <= (!dqm_buf[0]) ? w_data[7:0]  : bank[L_Bank][w_sdram_address][7:0];
      end
    end 
    else begin
      dout <= 0;
    end
  end
endmodule
