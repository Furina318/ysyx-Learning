`include "defines.vh"
// 组相连icache
module icache #(
    parameter ADDR_WIDTH    = 32,
    parameter DATA_WIDTH    = 32,
    parameter CACHE_SETS    = 16,    // cache组数量
    parameter WAYS          = 2,     // cache[WAYS]路组相联
    parameter BLOCK_SIZE    = 16,    // cache块大小，BLOCK_SIZE字节
    parameter OFFSET_WIDTH  = $clog2(BLOCK_SIZE),
    parameter INDEX_WIDTH   = $clog2(CACHE_SETS),  // index对应“组索引”
    parameter TAG_WIDTH     = ADDR_WIDTH - INDEX_WIDTH - OFFSET_WIDTH
) (
    input  wire         clk                 ,
    input  wire         rst                 ,
    // axi
    input  wire         arready             ,
    output reg          arvalid             ,
    output reg  [31: 0] araddr              ,
    output wire [ 3: 0] arid                ,
    output wire [ 7: 0] arlen               ,
    output wire [ 2: 0] arsize              ,
    output wire [ 1: 0] arburst             ,
    output reg          rready              ,
    input  wire         rvalid              ,
    input  wire [ 1: 0] rresp               ,
    input  wire [31: 0] rdata               ,
    input  wire         rlast               ,
    input  wire [ 3: 0] rid                 ,

    input  wire         is_fencei           ,

    input  wire [19: 0] inst_tag            ,
    input  wire [ 7: 0] inst_index          ,
    input  wire [ 3: 0] inst_offset         ,
    input  wire         inst_valid          ,
    output wire [63: 0] inst64              ,
    output wire         fetch_done
);
localparam IDLE    = 1'b0;
localparam BUSY    = 1'b1;

wire [31:0] inst_addr = {inst_tag, inst_index, inst_offset};
wire        icache_hit;
wire [31:0] mem_addr;

reg         state, next_state;
reg  [ 1:0] burst_cnt;

wire [OFFSET_WIDTH-1:0]   offset;
wire [ INDEX_WIDTH-1:0]   index;
wire [   TAG_WIDTH-1:0]   tag;

assign offset   = inst_addr[OFFSET_WIDTH-1 : 0];
assign index    = inst_addr[OFFSET_WIDTH + INDEX_WIDTH - 1 : OFFSET_WIDTH];
assign tag      = inst_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];
assign mem_addr = {inst_addr[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};

reg [   TAG_WIDTH-1:0]  tag_array  [CACHE_SETS-1:0][WAYS-1:0];
reg [BLOCK_SIZE*8-1:0]  data_array [CACHE_SETS-1:0][WAYS-1:0];
reg [        WAYS-1:0]  valid_array[CACHE_SETS-1:0];
reg [        WAYS-1:0]  lru_array  [CACHE_SETS-1:0];  // LRU标记（0表示最近使用，1表示最久未使用）

wire [        WAYS-1:0] way_hit;     // 每一路的hit标记
wire [$clog2(WAYS)-1:0] hit_way;     // 命中的路
reg  [   TAG_WIDTH-1:0] replace_tag;
reg  [$clog2(WAYS)-1:0] replace_way; // cache块更新时替换的路
reg  [ INDEX_WIDTH-1:0] replace_index;
wire                    icache_valid;

assign icache_valid = inst_valid;

genvar w;
generate
    for(w = 0; w < WAYS; w = w+1) begin : hit_check
        assign way_hit[w] = valid_array[index][w] && (tag_array[index][w] == tag);
    end
endgenerate
assign icache_hit   = |way_hit;
assign hit_way      = way_hit == 2'b01 ? 1'b0 : // 0路命中
                      way_hit == 2'b10 ? 1'b1 : // 1路命中
                      1'b0;

assign inst64 = icache_hit ?
                (data_array[index][hit_way] >> ({offset, 3'b000})) :
                64'b0;

assign fetch_done = (state == IDLE) && icache_hit && ~is_fencei;

always @(*) begin
    case (state)
        IDLE:  next_state = is_fencei    ? IDLE :          // fencei：保持IDLE直到冲刷完成
                            ~icache_valid ? IDLE :
                            icache_hit    ? IDLE : BUSY;
        BUSY:  next_state = (rvalid & rlast & rready) ? IDLE : BUSY;
        default: next_state = IDLE;
    endcase
end

assign arid = 4'h0;
assign arlen = 8'h3;  
assign arsize = 3'h2; 
assign arburst = 2'h1; 

integer i;
always @(posedge clk) begin
    if (rst) begin
        state       <= IDLE;
        arvalid     <= 1'b0;
        rready      <= 1'b0;
        burst_cnt   <= 2'd0;
        for(i = 0; i < CACHE_SETS; i = i + 1) begin
            valid_array[i] <= 2'b00;
            lru_array[i]   <= 2'b10;
        end
    end else begin
        state <= next_state;
        case (state)
            IDLE: begin
                // fencei：将所有组的所有路 valid 清零
                if (is_fencei) begin
                    for (i = 0; i < CACHE_SETS; i = i + 1)
                        valid_array[i] <= {WAYS{1'b0}};
                end else if (icache_hit & icache_valid) begin   // 命中，更新 LRU
                    case (hit_way)
                        1'b0: lru_array[index] <= 2'b10;
                        1'b1: lru_array[index] <= 2'b01;
                    endcase
                end else if (~icache_hit & icache_valid) begin  // 未命中，发起 AXI 读
                    replace_tag   <= tag;
                    replace_index <= index;
                    replace_way   <= lru_array[index] == 2'b01 ? 1'b0 : // 0路最久未使用
                                     lru_array[index] == 2'b10 ? 1'b1 : // 1路最久未使用
                                     1'b0;
                    araddr        <= mem_addr;
                    arvalid       <= 1'b1;
                    // arsize        <= 3'h2;
                    // arlen         <= 8'h3;
                    // arburst       <= 2'h1;
                end
            end
            BUSY: begin
                if (arvalid && arready) begin
                    arvalid <= 1'b0;
                    rready  <= 1'b1;
                end
                if (rvalid && rready) begin
                    case (burst_cnt)
                        2'd0: data_array[replace_index][replace_way][ 31: 0] <= rdata;
                        2'd1: data_array[replace_index][replace_way][ 63:32] <= rdata;
                        2'd2: data_array[replace_index][replace_way][ 95:64] <= rdata;
                        2'd3: data_array[replace_index][replace_way][127:96] <= rdata;
                    endcase
                    burst_cnt <= burst_cnt + 2'b1;
                    if (rlast) begin
                        rready <= 1'b0;
                        burst_cnt                                <= 2'd0;
                        tag_array[  replace_index][replace_way] <= replace_tag;
                        valid_array[replace_index][replace_way] <= 1'b1;
                        lru_array[  replace_index]              <= (replace_way == 1'd0) ? 2'b10 : 2'b01;
                    end
                end
            end
        endcase
    end
end

endmodule
