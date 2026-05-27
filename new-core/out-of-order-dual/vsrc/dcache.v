`include "config.vh"
`include "csr.vh"
// 组相连dcache
module dcache #(
    parameter ADDR_WIDTH    = 32,
    parameter DATA_WIDTH    = 32,
    parameter CACHE_SETS    = 16,    // cache组数量
    parameter WAYS          = 2,     // cache[WAYS]路组相联
    parameter WAYS_WIDTH    = $clog2(WAYS),
    parameter BLOCK_SIZE    = 16,    // cache块大小，BLOCK_SIZE字节
    parameter OFFSET_WIDTH  = $clog2(BLOCK_SIZE),
    parameter INDEX_WIDTH   = $clog2(CACHE_SETS),
    parameter TAG_WIDTH     = ADDR_WIDTH - INDEX_WIDTH - OFFSET_WIDTH
) (
    input  wire         clk                 ,
    input  wire         rst                 ,

    input  wire         awready             ,
    output reg          awvalid             ,
    output reg  [31: 0] awaddr              ,
    output wire [ 3: 0] awid                ,
    output reg  [ 7: 0] awlen               ,
    output reg  [ 2: 0] awsize              ,
    output reg  [ 1: 0] awburst             ,
    input  wire         wready              ,
    output reg          wvalid              ,
    output reg  [31: 0] wdata               ,
    output reg  [ 3: 0] wstrb               ,
    output reg          wlast               ,
    output reg          bready              ,
    input  wire         bvalid              ,
    input  wire [ 1: 0] bresp               ,
    input  wire [ 3: 0] bid                 ,
    input  wire         arready             ,
    output reg          arvalid             ,
    output reg  [31: 0] araddr              ,
    output wire [ 3: 0] arid                ,
    output reg  [ 7: 0] arlen               ,
    output reg  [ 2: 0] arsize              ,
    output reg  [ 1: 0] arburst             ,
    output reg          rready              ,
    input  wire         rvalid              ,
    input  wire [ 1: 0] rresp               ,
    input  wire [31: 0] rdata               ,
    input  wire         rlast               ,
    input  wire [ 3: 0] rid                 ,

    input  wire        data_uncache_en      ,
    input  wire [31:0] dcache_addr          ,
    input  wire        dcache_valid         ,
    input  wire        dcache_we            ,
    input  wire [31:0] dcache_wdata         ,
    input  wire [ 3:0] dcache_wstrb         ,
    output wire [31:0] dcache_rdata         ,
    output wire        dcache_ready
);
localparam AXI_ID = 4'b0;

localparam IDLE     = 2'b00;
localparam MEM_BUSY = 2'b01;
localparam WB       = 2'b11;

wire [OFFSET_WIDTH-1:0]   offset;
wire [ INDEX_WIDTH-1:0]   index;
wire [   TAG_WIDTH-1:0]   tag;

wire [31:0] mem_addr;

assign offset      = {dcache_addr[OFFSET_WIDTH-1 : 2], 2'b0};
assign index       = dcache_addr[OFFSET_WIDTH + INDEX_WIDTH - 1 : OFFSET_WIDTH];
assign tag         = dcache_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];
assign mem_addr    = {dcache_addr[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};

reg [   TAG_WIDTH-1:0]  tag_array  [CACHE_SETS-1:0][WAYS-1:0];
reg [BLOCK_SIZE*8-1:0]  data_array [CACHE_SETS-1:0][WAYS-1:0];
reg [        WAYS-1:0]  valid_array[CACHE_SETS-1:0];
reg [        WAYS-1:0]  dirty_array[CACHE_SETS-1:0];
reg [        WAYS-1:0]  lru_array  [CACHE_SETS-1:0];

wire [        WAYS-1:0] way_hit;     // 每一路的hit标记
wire [  WAYS_WIDTH-1:0] hit_way;     // 命中的路
wire [  WAYS_WIDTH-1:0] replace_way; // 最近未使用路
wire                    dcache_hit;
wire                    data_valid;  // 真正有效的访存

assign data_valid = dcache_valid;

genvar w;
generate
    for(w = 0; w < WAYS; w = w+1) begin : hit_check
        assign way_hit[w] = valid_array[index][w] && (tag_array[index][w] == tag);
    end
endgenerate

assign dcache_hit   = |way_hit && ~data_uncache_en;
assign hit_way      = way_hit == 2'b01 ? 1'b0 : // 0路命中
                      way_hit == 2'b10 ? 1'b1 : // 1路命中
                      1'b0;
assign replace_way  = lru_array[index] == 2'b01 ? 1'b0 : // 0路最久未使用
                      lru_array[index] == 2'b10 ? 1'b1 : // 1路最久未使用
                      1'b0;

reg [1:0]  state, next_state;
reg [1:0]  burst_cnt;

reg        write_done;

reg [31:0] uncache_rdata;
reg        uncache_done;

always @(*) begin
    case (state)
        IDLE    : begin next_state =  ~data_valid        ? IDLE     : // 地址无效
                                      data_uncache_en    ? MEM_BUSY : // 直接访问非缓存
                                      dcache_hit         ? IDLE     : // cache命中
                         dirty_array[index][replace_way] ? WB       : // cache未命中，且将要被替换的块为脏
                                      MEM_BUSY;                       // cache未命中，且将要被替换的块不为脏
                  end
        MEM_BUSY: begin next_state = (dcache_hit | uncache_done) ? IDLE : MEM_BUSY; end
        WB      : begin next_state = (write_done) ? MEM_BUSY : WB; end
        default: next_state = IDLE;
    endcase
end

wire [31: 0] wdata_mask;
wire [31: 0] array_wdata;

assign wdata_mask    = {{8{dcache_wstrb[3]}},{8{dcache_wstrb[2]}},{8{dcache_wstrb[1]}},{8{dcache_wstrb[0]}}};
assign array_wdata   = dcache_wdata    | (data_array[index][hit_way][32*offset/4 +: 32] & ~wdata_mask);         // 写入对应字节
assign dcache_rdata  = data_uncache_en ? uncache_rdata : data_array[index][hit_way][offset*8 +: DATA_WIDTH];
assign dcache_ready  = data_valid      ? (dcache_hit | uncache_done) : state == IDLE;

assign arid = AXI_ID;
assign awid = AXI_ID;

reg [WAYS-1:0]  rst_valid_array[CACHE_SETS-1:0];
reg [WAYS-1:0]  rst_dirty_array[CACHE_SETS-1:0];
reg [WAYS-1:0]  rst_lru_array  [CACHE_SETS-1:0];
integer i;
always @(*)begin
    for(i = 0; i < CACHE_SETS; i = i + 1) begin
        rst_valid_array[i] = 2'b00;
        rst_dirty_array[i] = 2'b00;
        rst_lru_array[i]   = 2'b10; 
    end
end
always @(posedge clk or posedge rst) begin
    if (rst) begin
        state        <= IDLE;
        burst_cnt    <= 2'd0;
        write_done   <= 1'b0;
        uncache_done <= 1'b0;
        valid_array  <= rst_valid_array;
        dirty_array  <= rst_dirty_array;
        lru_array    <= rst_lru_array; 
        arvalid      <= 1'b0;
        awvalid      <= 1'b0;
        wvalid       <= 1'b0;
        bready       <= 1'b0;
        rready       <= 1'b0;
    end else begin
        state <= next_state;
        uncache_done <= 1'b0;
        write_done <= 1'b0;
        case (state)
            IDLE: begin
                if (data_valid && dcache_hit) begin
                    case(hit_way)           // 更新lru
                        1'b0: lru_array[index] <= 2'b10;        // 0路命中，标记1路为最久未使用
                        1'b1: lru_array[index] <= 2'b01;        // 1路命中，标记0路为最久未使用
                    endcase
                    if (dcache_we) begin // cache命中直接写入
                        case (offset)
                            4'h0: data_array[index][hit_way][ 31: 0] <= array_wdata;
                            4'h4: data_array[index][hit_way][ 63:32] <= array_wdata;
                            4'h8: data_array[index][hit_way][ 95:64] <= array_wdata;
                            4'hc: data_array[index][hit_way][127:96] <= array_wdata;
                            default: data_array[index][hit_way] <= data_array[index][hit_way];
                        endcase
                        dirty_array[index][hit_way] <= 1'b1;
                    end
                end else if (data_valid && ~dcache_hit) begin
                    if ((dirty_array[index][replace_way] && ~data_uncache_en) | (data_uncache_en && dcache_we)) begin // 需要先写回的缓存读取，和非缓存读取
                        awaddr  <= data_uncache_en ? dcache_addr : {tag_array[index][replace_way], index, {OFFSET_WIDTH{1'b0}}};
                        awvalid <= 1'b1;
                        wdata   <= data_uncache_en ? dcache_wdata : data_array[index][replace_way][burst_cnt*32 +: 32];
                        wstrb   <= data_uncache_en ? dcache_wstrb : 4'hf;
                        wvalid  <= 1'b1;
                        wlast   <= 1'b0;
                        awsize  <= data_uncache_en ? 3'h0 : 3'h2;
                        awlen   <= data_uncache_en ? 8'h0 : 8'h3;
                        awburst <= data_uncache_en ? 2'h0 : 2'h1;
                    end else begin      // 不需要写回的缓存读取， 非缓存读取
                        valid_array[index][replace_way] <= 1'b0;
                        araddr  <= data_uncache_en ? dcache_addr : mem_addr;
                        arvalid <= 1'b1;
                        arsize  <= data_uncache_en ? 3'b0 : 3'h2;
                        arlen   <= data_uncache_en ? 8'b0 : 8'h3;
                        arburst <= data_uncache_en ? 2'b0 : 2'h1;
                    end
                end
            end

            MEM_BUSY: begin
                // 非缓存的读写
                if(data_uncache_en)  begin
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready  <= 1'b1;
                    end
                    if (rvalid && rready) begin
                        uncache_rdata <= rdata;
                        uncache_done  <= 1'b1;
                        rready        <= 1'b0;
                    end

                    if (awvalid && awready) begin
                        awvalid <= 1'b0;
                        // wvalid  <= 1'b1;
                        // wlast   <= 1'b1;
                    end
                    if (wvalid && wready) begin
                        wvalid <= 1'b0;
                        wlast  <= 1'b0;
                        bready <= 1'b1;
                    end
                    if (bvalid && bready) begin
                        uncache_done <= 1'b1;
                        bready       <= 1'b0;
                    end
                end else begin
                    // 缓存的读出
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready  <= 1'b1;
                    end
                    if (rvalid && rready) begin
                        case(burst_cnt)
                            2'd0: data_array[index][replace_way][ 31: 0] <= rdata;
                            2'd1: data_array[index][replace_way][ 63:32] <= rdata;
                            2'd2: data_array[index][replace_way][ 95:64] <= rdata;
                            2'd3: data_array[index][replace_way][127:96] <= rdata;
                        endcase
                        burst_cnt <= burst_cnt + 2'b1;
                        if (rlast) begin
                            rready <= 1'b0;
                            tag_array[index][replace_way]   <= tag;
                            valid_array[index][replace_way] <= 1'b1;
                            lru_array[index]                <= (replace_way == 1'd0) ? 2'b10 : 2'b01;
                        end
                    end
                end
                if(valid_array[index][hit_way] && dcache_hit && ~data_uncache_en) begin  // 处理写入未命中时，先读出，在写入
                    dirty_array[index][hit_way] <= dcache_we;
                    if (dcache_we) begin
                        case (offset)
                            4'h0: data_array[index][hit_way][ 31: 0] <= array_wdata;
                            4'h4: data_array[index][hit_way][ 63:32] <= array_wdata;
                            4'h8: data_array[index][hit_way][ 95:64] <= array_wdata;
                            4'hc: data_array[index][hit_way][127:96] <= array_wdata;
                            default: data_array[index][hit_way] <= data_array[index][hit_way];
                        endcase
                    end
                end
            end

            WB: begin
                if (awvalid && awready) begin
                    awvalid <= 1'b0;
                    // wvalid  <= 1'b1;
                end
                if (wvalid && wready) begin
                    wvalid    <= ~wlast;
                    bready    <= 1'b1;
                    burst_cnt <= burst_cnt + 2'b1;
                    wdata <= data_array[index][replace_way][((burst_cnt)*32+32) +: 32];
                    wlast <= (burst_cnt == 2'b10);
                end
                if(bvalid && bready) begin
                    bready <= 1'b0;
                    valid_array[index][replace_way] <= 1'b0; 
                    dirty_array[index][replace_way] <= 1'b0; 
                    write_done <= 1'b1;
                end 
            end
        endcase
    end
end

endmodule
