`include "defines.vh"

// ============================================================================
// dcache: 2-way set-associative write-back cache with MSHR (non-blocking)
//
// 非阻塞设计:
//   - load miss 时分配 MSHR 条目并立即响应 lsu_ready (请求被接受),
//     LSU 无需等待数据, 可继续发送后续请求 (多 outstanding load)。
//   - MSHR 后台依次执行: victim 写回 (若 dirty) -> AXI 读填充 -> 写缓存行
//     -> 通过完成端口 (lsu_ret_valid/tag/data) 把数据返回给对应 load。
//   - 命中 load/store 在任意时刻均可完成 (hit-under-miss / store-under-miss)。
//   - store 写 / MMIO / fence 保持阻塞式处理 (前台状态机), 与后台 MSHR
//     通过 AXI 忙标志互斥共享 AXI 通道 (SRAM 仅支持单 outstanding)。
//   - flush 时清除比 flush_id 年轻的 MSHR 条目; 在飞的 AXI 读只收数据
//     不写缓存行, 防止冲刷后的 load 污染缓存或误交付数据。
// ============================================================================
module dcache #(
    parameter ADDR_WIDTH    = 32,
    parameter DATA_WIDTH    = 32,
    parameter CACHE_BLOCKS  = 1024,
    parameter BLOCK_SIZE    = 16,
    parameter WAYS          = 2,
    parameter WAYS_LOG      = $clog2(WAYS),
    parameter MSHR_DEPTH    = 4,
    parameter MSHR_IDX_W    = $clog2(MSHR_DEPTH),
    parameter ID_WIDTH      = 7,   // 与顶层一致 (7 位 id 空间, 避免 flush 后回绕冲突)
    parameter SETS          = CACHE_BLOCKS / WAYS,
    parameter OFFSET_WIDTH  = $clog2(BLOCK_SIZE),
    parameter INDEX_WIDTH   = $clog2(SETS),
    parameter TAG_WIDTH     = ADDR_WIDTH - INDEX_WIDTH - OFFSET_WIDTH
) (
    input  wire         clk,
    input  wire         rst,

    input  wire         awready ,
    output reg          awvalid ,
    output reg  [31: 0] awaddr  ,
    output reg  [ 3: 0] awid    ,
    output reg  [ 7: 0] awlen   ,
    output reg  [ 2: 0] awsize  ,
    output reg  [ 1: 0] awburst ,
    input  wire         wready  ,
    output reg          wvalid  ,
    output reg  [31: 0] wdata   ,
    output reg  [ 3: 0] wstrb   ,
    output reg          wlast   ,
    output reg          bready  ,
    input  wire         bvalid  ,
    input  wire [ 1: 0] bresp   ,
    input  wire [ 3: 0] bid     ,
    input  wire         arready ,
    output reg          arvalid ,
    output reg  [31: 0] araddr  ,
    output reg  [ 3: 0] arid    ,
    output reg  [ 7: 0] arlen   ,
    output reg  [ 2: 0] arsize  ,
    output reg  [ 1: 0] arburst ,
    output reg          rready  ,
    input  wire         rvalid  ,
    input  wire [ 1: 0] rresp   ,
    input  wire [31: 0] rdata   ,
    input  wire         rlast   ,
    input  wire [ 3: 0] rid     ,

    input  wire                  fence_en  ,
    output reg                   fence_done,
    input  wire [ADDR_WIDTH-1:0] lsu_addr  ,
    input  wire                  lsu_valid ,
    input  wire                  lsu_we    ,
    input  wire [DATA_WIDTH-1:0] lsu_wdata ,
    input  wire [          3: 0] lsu_wstrb ,
    output wire [DATA_WIDTH-1:0] lsu_rdata ,
    output wire                  lsu_ready ,
    output wire                  lsu_hit   ,
    input  wire [ID_WIDTH-1:0]   lsu_tag   ,
    output wire                  lsu_ret_valid,
    output wire [ID_WIDTH-1:0]   lsu_ret_tag  ,
    output wire [DATA_WIDTH-1:0] lsu_ret_data ,
    input  wire                  lsu_ret_ready,
    input  wire                  lsu_head_valid, // LSU in_flight 队列非空
    input  wire [ID_WIDTH-1:0]   lsu_head_tag  , // LSU in_flight 队首 tag
    input  wire                  lsu_retry     , // LSU 慢路径 load 重试中
    input  wire                  flush     ,
    input  wire [ID_WIDTH-1:0]   flush_id
);
localparam FLASH_BASE = 4'h3; // 3000_0000-3FFF_FFFF
localparam SRAM_BASE  = 4'hf; // 0F00_0000-0FFF_FFFF
localparam PSRAM_BASE = 4'h8; // 8000_0000-9FFF_FFFF
localparam PSRAM_END  = 4'h9;
localparam SDRAM_BASE = 4'hA; // A000_0000-BFFF_FFFF
localparam SDRAM_END  = 4'hB;

localparam IDLE     = 2'b00;
localparam MEM_BUSY = 2'b01;
localparam FENCE    = 2'b10;
localparam WB       = 2'b11;

wire [OFFSET_WIDTH-1:0]   offset;
wire [ INDEX_WIDTH-1:0]   index;
wire [   TAG_WIDTH-1:0]   tag;

wire [31:0] block_addr = {lsu_addr[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
wire        is_flash   = (lsu_addr[31:28] == FLASH_BASE);
wire        is_sram    = (lsu_addr[27:24] == SRAM_BASE);
wire        is_psram   = (lsu_addr[31:28] == PSRAM_BASE) | (lsu_addr[31:28] == PSRAM_END);
wire        is_sdram   = (lsu_addr[31:28] == SDRAM_BASE) | (lsu_addr[31:28] == SDRAM_END);

`ifdef YSYXSOC
wire        is_mem     = is_flash | is_sram | is_psram | is_sdram;
`else
wire        is_mem     = is_psram;
`endif

wire is_sdram_wb    = (tag_array[pend_index][TAG_WIDTH-1 -: 4] == SDRAM_BASE) | (tag_array[pend_index][TAG_WIDTH-1 -: 4] == SDRAM_END);
wire is_sdram_fence = (tag_array[fence_index][TAG_WIDTH-1 -: 4] == SDRAM_BASE) | (tag_array[fence_index][TAG_WIDTH-1 -: 4] == SDRAM_END);
reg  is_sdram_fence_reg;

// 前台事务上下文锁存 (store 写 / MMIO / fence 的填充与写回可能跨多拍,
// 期间 LSU 会切换 load/drain 请求, 必须用锁存值)
reg [INDEX_WIDTH + WAYS_LOG - 1:0] pend_index;
reg [3:0]             pend_offset;
reg [31:0]            pend_wdata;
reg [3:0]             pend_wstrb;
reg                   pend_we;
reg                   pend_is_sdram;
reg                   pend_is_mem;
reg [31:0]            pend_mem_addr;
wire [INDEX_WIDTH-1:0] pend_set = pend_index[INDEX_WIDTH + WAYS_LOG - 1 : WAYS_LOG];
wire                   pend_way = pend_index[0];

assign offset = {lsu_addr[OFFSET_WIDTH-1 : 2], 2'b0};
assign index  = lsu_addr[OFFSET_WIDTH + INDEX_WIDTH - 1 : OFFSET_WIDTH];
assign tag    = lsu_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];

// 2-way set-associative: way0 physical index = {index,1'b0}, way1 = {index,1'b1}
wire [INDEX_WIDTH + WAYS_LOG - 1:0] index0 = {index, 1'b0};
wire [INDEX_WIDTH + WAYS_LOG - 1:0] index1 = {index, 1'b1};

reg [   TAG_WIDTH-1:0]  tag_array  [CACHE_BLOCKS-1:0];
reg [BLOCK_SIZE*8-1:0]  data_array [CACHE_BLOCKS-1:0];
reg [CACHE_BLOCKS-1:0]  valid_array;
reg [CACHE_BLOCKS-1:0]  dirty_array;
reg [CACHE_BLOCKS/WAYS-1:0] lru;    // 每个 set 1 bit: 0=way0 LRU, 1=way1 LRU

// ============================ MSHR ==========================================
// 每条目跟踪一个 outstanding load miss 的整行填充:
//   valid      : 条目被占用
//   done       : 填充完成, 数据可用, 等待完成端口交付 (ret)
//   line       : 块地址 (16B 对齐)
//   pend_idx   : 填充行在 tag/data/valid 数组中的物理位置 (含 way 位)
//   woff       : 请求 word 偏移 (0/4/8/c), 用于交付数据
//   tag        : load 的指令 ID (完成端口匹配)
//   sdram      : 填充是否使用 4-beat burst
//   wait_wb    : victim 行 dirty, 填充前需先写回
reg [MSHR_DEPTH-1:0]         mshr_valid;
reg [MSHR_DEPTH-1:0]         mshr_done;
reg [ADDR_WIDTH-1:0]         mshr_line     [0:MSHR_DEPTH-1];
reg [INDEX_WIDTH+WAYS_LOG-1:0] mshr_pend_idx [0:MSHR_DEPTH-1];
reg [3:0]                    mshr_woff     [0:MSHR_DEPTH-1];
reg [ID_WIDTH-1:0]           mshr_tag      [0:MSHR_DEPTH-1];
reg [MSHR_DEPTH-1:0]         mshr_sdram;
reg [MSHR_DEPTH-1:0]         mshr_wait_wb;

reg [MSHR_IDX_W-1:0] cur_fill_idx;
reg                  cur_fill_valid;
reg [MSHR_IDX_W-1:0] cur_wb_idx;
reg                  cur_wb_valid;
reg                  discard_fill;   // flush 后在飞 fill 只收数据不写行
reg                  discard_wb;     // flush 后在飞 WB 完成后不触碰新条目状态
reg                  mshr_valid_set;   // fill 完成拍置位, 下一拍写 valid+lru
reg                  front_valid_set;  // 前台 fill 完成拍置位, 下一拍写 valid+lru

reg [MSHR_IDX_W-1:0] mshr_alloc_slot;
integer msi;

// 空位分配
// 跳过在飞 fill/WB 的槽: flush 清掉条目后槽位变空, 新 load 若分配到
// 同一槽, 旧 fill 完成拍的 !mshr_valid 检查会因新条目 valid=1 而失效,
// 旧数据被写进新条目的行且 done 误置 → 提前 ret 交付垃圾数据。
always @(*) begin
    mshr_alloc_slot = {(MSHR_IDX_W > 0) ? MSHR_IDX_W : 1{1'b0}};
    for (msi = 0; msi < MSHR_DEPTH; msi = msi + 1) begin
        if (!mshr_valid[msi] &&
            !(cur_fill_valid && (msi[MSHR_IDX_W-1:0] == cur_fill_idx)) &&
            !(cur_wb_valid   && (msi[MSHR_IDX_W-1:0] == cur_wb_idx))) begin
            mshr_alloc_slot = msi[MSHR_IDX_W-1:0];
            msi = MSHR_DEPTH;
        end
    end
end

// 同行在飞检测: 含 done 条目 (交付前阻挡同行新分配)。
// fill 完成拍 done 置位 (边沿后), 若 line_match 排除 done 条目,
// 等待中的慢路径请求会在该拍被 MSHR 再接受 (iq 重复入队),
// 同时慢路径又因 lsu_ready=1 完成 → 同一 load 双重完成路径,
// 且 sav_data 锁存 fill 完成前的旧数据。done 条目在 ret 交付后清除,
// 届时 valid 已置位, 等待请求走命中路径完成。
wire [MSHR_DEPTH-1:0] mshr_line_match_v;
genvar gml;
generate
    for (gml = 0; gml < MSHR_DEPTH; gml = gml + 1) begin : gen_mshr_match
        assign mshr_line_match_v[gml] = mshr_valid[gml] &&
                                        (mshr_line[gml] == block_addr);
    end
endgenerate
wire mshr_line_match  = |mshr_line_match_v;

// 前台 pend 事务的行是否有在飞 MSHR: store miss 锁存与 MSHR 分配可能
// 错位一拍 (line_match 在锁存拍尚为 0), 前台 fill 若照常发起, 会与
// 同行的 MSHR 后台 fill 并行填充两个 way (数据分裂: store 数据在
// 一个 way, 另一 way 是内存旧值, 后续命中读错)。故发起前须复查。
wire [31:0] pend_block_addr = {pend_mem_addr[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
wire [MSHR_DEPTH-1:0] mshr_pend_line_v;
genvar gpl;
generate
    for (gpl = 0; gpl < MSHR_DEPTH; gpl = gpl + 1) begin : gen_pend_line
        assign mshr_pend_line_v[gpl] = mshr_valid[gpl] && !mshr_done[gpl] &&
                                       (mshr_line[gpl] == pend_block_addr);
    end
endgenerate
wire mshr_pend_line  = |mshr_pend_line_v;
wire mshr_has_slot    = |(~mshr_valid);
wire mshr_alloc_ok    = !mshr_line_match && mshr_has_slot && alloc_way_ok;

// 完成端口选择: 匹配 LSU in_flight 队首 tag 的 done 条目
// (load 可乱序进入 LSU, MSHR 完成顺序未必等于队列顺序,
//  必须按队首 tag 交付, 否则队首未完成的条目会挡住后续 done 条目 → 死锁)
wire [MSHR_DEPTH-1:0] ret_tag_match;
genvar grt;
generate
    for (grt = 0; grt < MSHR_DEPTH; grt = grt + 1) begin : gen_ret_match
        assign ret_tag_match[grt] = (mshr_tag[grt] == lsu_head_tag);
    end
endgenerate
wire [MSHR_DEPTH-1:0] ret_sel = mshr_valid & mshr_done & {MSHR_DEPTH{lsu_head_valid}} & ret_tag_match;
reg [MSHR_IDX_W-1:0] ret_idx;
integer ri;
always @(*) begin
    ret_idx = {(MSHR_IDX_W > 0) ? MSHR_IDX_W : 1{1'b0}};
    for (ri = 0; ri < MSHR_DEPTH; ri = ri + 1) begin
        if (ret_sel[ri]) begin
            ret_idx = ri[MSHR_IDX_W-1:0];
            ri = MSHR_DEPTH;
        end
    end
end
assign lsu_ret_valid = |ret_sel;
assign lsu_ret_tag   = mshr_tag[ret_idx];
// 交付数据直接组合读缓存行: 与命中路径 (lsu_rdata) 同一表达式, 保证语义一致。
// fill 完成拍写入行的最后一个 word, ret 在下一拍, 此时行数据已完整。
assign lsu_ret_data  = data_array[mshr_pend_idx[ret_idx]][mshr_woff[ret_idx]*8 +: DATA_WIDTH];

// flush 精确冲刷: 条目比 flush_id 年轻 (错误路径) 才清除
wire [MSHR_DEPTH-1:0] mshr_is_older;
genvar gmi;
generate
    for (gmi = 0; gmi < MSHR_DEPTH; gmi = gmi + 1) begin : gen_mshr_older
        assign mshr_is_older[gmi] =
            (flush_id[ID_WIDTH-1] ^ mshr_tag[gmi][ID_WIDTH-1]) ?
              (mshr_tag[gmi][ID_WIDTH-2:0] > flush_id[ID_WIDTH-2:0]) :
              (mshr_tag[gmi][ID_WIDTH-2:0] < flush_id[ID_WIDTH-2:0]);
    end
endgenerate
// ============================================================================

wire dcache_hit0 = valid_array[index0] && (tag_array[index0] == tag);
wire dcache_hit1 = valid_array[index1] && (tag_array[index1] == tag);
wire dcache_hit  = dcache_hit0 | dcache_hit1;
// 两 way 同 tag 都命中时选 MRU: 同行的 MSHR 后台 fill 与前台 store fill
// 可能同时填充两个 way (内容不同步), 硬优先 way1 会读到旧数据
// (如 wanshu 的 lw ra 读 0: store 新数据在 way0, way1 是旧 fill)。
wire hit_way     = (dcache_hit0 & dcache_hit1) ? ~lru[index] : dcache_hit1;
wire [INDEX_WIDTH + WAYS_LOG - 1:0] hit_index = hit_way ? index1 : index0;

reg [1:0]  state, next_state;
reg [1:0]  burst_cnt;

reg [INDEX_WIDTH + WAYS_LOG - 1:0] fence_index;
reg        fence_ing;
reg        write_done;

// victim way selection for 2-way set-associative
// 避开被在飞 MSHR 条目占用的物理行 (防止前台 fill 与后台 fill 写同一位置)
reg                alloc_way;
wire [INDEX_WIDTH + WAYS_LOG - 1:0] alloc_index = {index, alloc_way};
wire [INDEX_WIDTH + WAYS_LOG - 1:0] alloc_idx_w0 = {index, 1'b0};
wire [INDEX_WIDTH + WAYS_LOG - 1:0] alloc_idx_w1 = {index, 1'b1};
wire [MSHR_DEPTH-1:0] mshr_occupy_w0;
wire [MSHR_DEPTH-1:0] mshr_occupy_w1;
genvar goc;
generate
    for (goc = 0; goc < MSHR_DEPTH; goc = goc + 1) begin : gen_mshr_occupy
        // done 条目也占行: 其数据仍在 data_array 等待 ret 交付,
        // 新分配若复用同一物理行会覆盖交付数据 (ret 读 data_array)。
        assign mshr_occupy_w0[goc] = mshr_valid[goc] &&
                                     (mshr_pend_idx[goc] == alloc_idx_w0);
        assign mshr_occupy_w1[goc] = mshr_valid[goc] &&
                                     (mshr_pend_idx[goc] == alloc_idx_w1);
    end
endgenerate
wire w0_free = !(|mshr_occupy_w0);
wire w1_free = !(|mshr_occupy_w1);
// 前台 store 事务正占用的物理行 (pend_index) 也不能分配给 MSHR,
// 防止 load miss 的后台填充与 store 的前台填充写同一位置。
// 占用须含 front_txn_pending/front_rd_active: 反压拍 state 回 IDLE 但
// pend 已锁存, 若 MSHR 分到该行, fill 完成后置 valid 会让前台状态机
// 误判 fill 完成提前回 IDLE → front 事务丢在 IDLE 无人处理死锁;
// 且两个 fill 写同一 data_array 行互相覆盖数据。
wire front_pend_occupy = (front_txn_pending | front_rd_active | front_valid_set | (state == MEM_BUSY) | (state == WB)) &&
                         ((pend_index == alloc_idx_w0) | (pend_index == alloc_idx_w1));
wire alloc_way_ok = (w0_free && !(front_pend_occupy && pend_index == alloc_idx_w0)) |
                    (w1_free && !(front_pend_occupy && pend_index == alloc_idx_w1));
always @(*) begin
    if      (!valid_array[index0] && w0_free) alloc_way = 1'b0;
    else if (!valid_array[index1] && w1_free) alloc_way = 1'b1;
    else if ( lru[index] && w1_free)           alloc_way = 1'b1;
    else if (!lru[index] && w0_free)           alloc_way = 1'b0;
    else if (w0_free)                          alloc_way = 1'b0;
    else if (w1_free)                          alloc_way = 1'b1;
    else                                       alloc_way = lru[index];
end

reg [31:0] device_rdata;
reg        device_done;
reg        device_done_we;
reg [31:0] pend_mmio_addr;

// 统计
reg [63:0] dcache_access_cnt /*verilator public*/;
reg [63:0] dcache_mmio_cnt   /*verilator public*/;  // MMIO/非缓存访问计数 (不计入缓存命中率)
reg [63:0] dcache_hit_cnt    /*verilator public*/;
reg [63:0] dcache_miss_cnt   /*verilator public*/;
reg [63:0] dcache_load_access_cnt  /*verilator public*/;
reg [63:0] dcache_load_hit_cnt     /*verilator public*/;
reg [63:0] dcache_load_miss_cnt    /*verilator public*/;
reg [63:0] dcache_store_access_cnt /*verilator public*/;
reg [63:0] dcache_store_hit_cnt    /*verilator public*/;
reg [63:0] dcache_store_miss_cnt   /*verilator public*/;
// Per-request bookkeeping for statistics.  LSU keeps a miss request asserted
// while it waits for an MSHR/front-end fill; without this tag filter the same
// request would be counted once per retry (and a store miss would later be
// misclassified as a hit after the line is filled).
reg                  stat_req_valid;
reg [ID_WIDTH-1:0]   stat_req_tag;

// 前台 AXI 事务归属: 前台读/写在飞标志 (与后台 MSHR fill/WB 互斥)
reg        front_rd_active;
reg        front_wr_active;
reg        front_txn_pending;  // 前台事务已锁存但尚未发起

// AXI 通道忙: 任一事务 (读或写) 进行中, SRAM 一次只支持一个
// rd_end 不要求 rready: discard 路径 (flush 后在飞 fill) 的最后一个
// AR 握手与 rlast 同拍, 同拍 rready 被清 0, 若 rd_end 依赖 rready 则
// 永远无法检测到事务结束 → ax_busy 永久卡 1 → 后台事务死锁。
wire rd_begin = arvalid && arready;
wire rd_end   = rvalid && rlast;
wire wr_begin = awvalid && awready && wvalid && wready;
wire wr_end   = bvalid && bready;
reg  ax_busy;
always @(posedge clk) begin
    if (rst)              ax_busy <= 1'b0;
    // begin 优先: begin 与 end 同拍 (逐 beat 读的下一 AR 握手与上一 beat
    // 的 rlast 同拍) 时新事务在飞, busy 保持 1
    else if (rd_begin || wr_begin) ax_busy <= 1'b1;
    else if (rd_end   || wr_end)   ax_busy <= 1'b0;
end

wire load_req  = lsu_valid && !lsu_we;
wire store_req = lsu_valid && lsu_we;
wire front_busy = (state == MEM_BUSY) | (state == WB) | (state == FENCE);

// 前台状态机: 只处理 store 写 / MMIO / fence (阻塞式);
// load miss 通过 MSHR 后台完成, 不进入前台状态机。
always @(*) begin
    case (state)
        IDLE    : begin
            if (fence_en | fence_ing) begin
                // fence 需要先等 MSHR 全部完成 (在飞 load 填充必须交付)。
                // fence_en 是脉冲, 用 fence_ing 锁存保持, 否则 MSHR 未空时
                // fence 请求会在下一拍丢失。
                next_state = (mshr_valid != {MSHR_DEPTH{1'b0}}) ? IDLE : FENCE;
            end
            else if (~lsu_valid) next_state = IDLE;
            else if (load_req) begin
                // load miss 由 MSHR 后台填充, 不进前台状态机;
                // 未接受 (MSHR 满/同行在飞/无可用 way) 时保持 IDLE 反压重试
                next_state = (~is_mem) ? MEM_BUSY :
                             (dcache_hit | mshr_alloc_ok) ? IDLE : IDLE;
            end
            else begin // store_req
                next_state = (~is_mem) ? MEM_BUSY :          // MMIO 写 (阻塞)
                             dcache_hit ? IDLE :
                             mshr_line_match ? IDLE :        // 等同行 fill 完成 (行 valid 后命中)
                             !alloc_way_ok ? IDLE :          // 两 way 均被在飞 MSHR 占用: 反压重试
                             (dirty_array[alloc_index] ? WB : MEM_BUSY);
            end
        end
        // 完成条件须排除 front 事务仍活跃的情形: 同物理行的 MSHR fill
        // 完成后会提前置 valid_array[pend_index], 若仅凭 valid 判断则
        // front 事务在飞/待发起时 state 提前回 IDLE, 其 AR/beat 处理
        // 逻辑 (在 MEM_BUSY case 内) 不再执行 → AR 永久挂起死锁。
        MEM_BUSY: next_state = ((valid_array[pend_index] && pend_is_mem && !front_rd_active && !front_txn_pending) |
                                (device_done && (device_done_we == pend_we) && !front_rd_active)) ? IDLE : MEM_BUSY;
        FENCE   : next_state = fence_done ? IDLE : (dirty_array[fence_index] ? WB : FENCE);
        WB      : next_state = write_done ? (fence_ing ? FENCE : MEM_BUSY) : WB;
        default : next_state = IDLE;
    endcase
end

wire [31: 0] wdata_mask;
wire [31: 0] dcache_wdata;

assign wdata_mask   = {{8{lsu_wstrb[3]}},{8{lsu_wstrb[2]}},{8{lsu_wstrb[1]}},{8{lsu_wstrb[0]}}};
assign dcache_wdata = lsu_wdata | (data_array[hit_index][32*offset/4 +: 32] & ~wdata_mask);
assign lsu_rdata    = is_mem    ? data_array[hit_index][offset*8 +: DATA_WIDTH] : device_rdata;

wire addr_changed = (lsu_addr != pend_mmio_addr);
wire device_ready = device_done && !addr_changed && (device_done_we == lsu_we);

// lsu_ready 语义:
//   load  : 命中 -> 数据同拍有效 (lsu_hit=1); miss -> 已分配 MSHR (被接受,
//           数据稍后经完成端口返回); MMIO 读 -> 设备完成。
//   store : 命中 -> 写缓存行完成; miss 前台填充完成后 -> 写入完成。
//   反压  : MSHR 满 / 同行 fill 在飞 / 前台忙 / fence 中 -> ready=0, LSU 保持请求。
// 后台 MSHR WB 完成脉冲: 该拍 store 命中写行被抑制 (行即将失效,
// 避免 store 写入刚被写回失效的行后数据丢失), store 重试走 miss 路径。
wire wb_complete_pulse = cur_wb_valid && bvalid && bready;

wire load_hit_ok   = load_req && is_mem && dcache_hit;
// 不用 load_fill_ok/store_fill_ok (v9 也没有): fill 完成拍 valid 置位后,
// 请求在下一拍 state 回 IDLE 时命中完成。若在 MEM_BUSY 期间 ready=1,
// 会把「当前 drain 的 store」误判为「pend 的 store」完成并弹出
// (a[1] 的 store 在 a[0] 的 fill 完成拍被弹、数据丢失, div 的 a[4]=0)。
// load miss 立即接受 (非阻塞): 分配 MSHR 条目, 数据稍后经完成端口返回。
// 同行已有在飞填充 (mshr_line_match 含 done 条目, 交付前阻挡同行新分配,
// 避免 fill 完成拍的 done 置位竞态导致慢路径双重完成) / MSHR 满 /
// 无可用 way / 前台忙时反压重试。
// flush 拍不分配: 该拍请求来自 flush 前的残留 (年轻指令), 分配块位于
// flush 清除块之后会覆盖清除, 造成 MSHR 条目泄漏 (占坑至满)。
// store miss 锁存拍不分配 MSHR: 该拍 pend_index 尚未锁存 (时序),
// front_pend_occupy 组合看不到新 pend 行, MSHR 可能分到同一物理行
// (与 front fill 互踩数据 / 误置 valid 使前台提前回 IDLE)。
wire store_miss_lock = lsu_valid && store_req && is_mem && !dcache_hit && !mshr_line_match && alloc_way_ok;
// front fill 完成拍 (front_valid_set, valid 下一拍置位): 同拍对该行的
// miss 请求 (load 或 store) 必须反压重试, 否则 MSHR/前台会再次填充
// 同一行 (valid 旧值 0) → data_array 双填覆盖 store 数据 (dinic)。
wire front_vset_lock = front_valid_set && (pend_block_addr == block_addr);
wire load_mshr_ok  = load_req && is_mem && !dcache_hit && mshr_alloc_ok &&
                     (state == IDLE) && !fence_en && !wb_complete_pulse && !flush &&
                     !store_miss_lock && !front_vset_lock &&
                     !(front_txn_pending && (pend_block_addr == block_addr));
wire load_mmio_ok  = load_req && !is_mem && device_ready;
wire store_hit_ok  = store_req && is_mem && dcache_hit && !wb_complete_pulse;

wire store_mmio_ok = store_req && !is_mem && device_ready && device_done_we;

assign lsu_ready = fence_ing ? 1'b0 :
                   !lsu_valid ? 1'b1 :
                   load_req  ? (load_hit_ok | load_mshr_ok | load_mmio_ok) :
                   store_req ? (store_hit_ok | store_mmio_ok) : 1'b1;

// lsu_hit 涵盖 MMIO 完成: 慢路径 load 的 done_r 完成条件要求命中,
// MMIO 读 (如 microbench 初始化读 CLINT mtime) 完成拍 dcache_hit=0,
// 若 lsu_hit 只认缓存命中, 慢路径永不完成 → 每拍重读设备死锁。
assign lsu_hit = load_req && (is_mem ? dcache_hit : device_ready);

// 统计事件: each cacheable LSU demand is counted once when its tag first
// appears, regardless of ready/反压.  LSU keeps a blocked miss asserted while
// waiting for an MSHR or front-end fill, so counting only ready handshakes both
// loses store misses and can classify the eventual post-fill retry as a hit.
// MMIO accesses are deliberately excluded from D-cache hit/miss statistics.
wire stat_new_req = lsu_valid && is_mem &&
                    (!stat_req_valid || (stat_req_tag != lsu_tag));

// 统计
always @(posedge clk or posedge rst) begin
    if (rst) begin
        dcache_access_cnt <= 64'd0;
        dcache_hit_cnt    <= 64'd0;
        dcache_miss_cnt   <= 64'd0;
        dcache_load_access_cnt  <= 64'd0;
        dcache_load_hit_cnt     <= 64'd0;
        dcache_load_miss_cnt    <= 64'd0;
        dcache_store_access_cnt <= 64'd0;
        dcache_store_hit_cnt    <= 64'd0;
        dcache_store_miss_cnt   <= 64'd0;
        dcache_mmio_cnt         <= 64'd0;
        stat_req_valid    <= 1'b0;
        stat_req_tag      <= {ID_WIDTH{1'b0}};
        end else begin
        // A deasserted valid marks the end of the LSU request; the next
        // request (even if it reuses a wrapped tag) must be counted anew.
        if (!lsu_valid) begin
            stat_req_valid <= 1'b0;
        end else if (stat_new_req) begin
            stat_req_valid <= 1'b1;
            stat_req_tag   <= lsu_tag;
            dcache_access_cnt <= dcache_access_cnt + 64'd1;
            if (dcache_hit)
                dcache_hit_cnt  <= dcache_hit_cnt + 64'd1;
            else
                dcache_miss_cnt <= dcache_miss_cnt + 64'd1;
            if (!lsu_we) begin
                dcache_load_access_cnt <= dcache_load_access_cnt + 64'd1;
                if (dcache_hit)
                    dcache_load_hit_cnt  <= dcache_load_hit_cnt + 64'd1;
                else
                    dcache_load_miss_cnt <= dcache_load_miss_cnt + 64'd1;
            end else begin
                dcache_store_access_cnt <= dcache_store_access_cnt + 64'd1;
                if (dcache_hit)
                    dcache_store_hit_cnt  <= dcache_store_hit_cnt + 64'd1;
                else
                    dcache_store_miss_cnt <= dcache_store_miss_cnt + 64'd1;
            end
        end else if (lsu_valid && !is_mem &&
                     (!stat_req_valid || (stat_req_tag != lsu_tag))) begin
            // MMIO / 非缓存访问: 独立计数, 不计入缓存命中率
            stat_req_valid <= 1'b1;
            stat_req_tag   <= lsu_tag;
            dcache_mmio_cnt <= dcache_mmio_cnt + 64'd1;
        end
    end
end

always @(posedge clk or posedge rst) begin
    if (rst) begin
        state              <= IDLE;
        valid_array        <= 'b0;
        dirty_array        <= 'b0;
        burst_cnt          <= 2'd0;
        write_done         <= 1'b0;
        fence_index        <= 'b0;
        fence_done         <= 1'b1;
        fence_ing          <= 1'b0;
        is_sdram_fence_reg <= 1'b0;
        device_done        <= 1'b0;
        device_done_we     <= 1'b0;
        pend_mmio_addr     <= 32'b0;
        mshr_valid         <= {MSHR_DEPTH{1'b0}};
        mshr_done          <= {MSHR_DEPTH{1'b0}};
        mshr_sdram         <= {MSHR_DEPTH{1'b0}};
        mshr_wait_wb       <= {MSHR_DEPTH{1'b0}};
        cur_fill_valid     <= 1'b0;
        cur_wb_valid       <= 1'b0;
        cur_fill_idx       <= {(MSHR_IDX_W > 0) ? MSHR_IDX_W : 1{1'b0}};
        cur_wb_idx         <= {(MSHR_IDX_W > 0) ? MSHR_IDX_W : 1{1'b0}};
        discard_fill       <= 1'b0;
        discard_wb         <= 1'b0;
        mshr_valid_set     <= 1'b0;
        front_valid_set    <= 1'b0;
        front_rd_active    <= 1'b0;
        front_wr_active    <= 1'b0;
        front_txn_pending  <= 1'b0;
        pend_index         <= 'b0;
        pend_offset        <= 4'b0;
        pend_wdata         <= 32'b0;
        pend_wstrb         <= 4'b0;
        pend_we            <= 1'b0;
        pend_is_sdram      <= 1'b0;
        pend_is_mem        <= 1'b0;
        pend_mem_addr      <= 32'b0;

        arvalid <= 1'b0;
        awvalid <= 1'b0;
        wvalid  <= 1'b0;
        bready  <= 1'b0;
        rready  <= 1'b0;
    end else begin
        state       <= next_state;
        valid_array <= fence_en ? 'b0 : valid_array;
        device_done    <= 1'b0;
        device_done_we <= 1'b0;
        write_done     <= 1'b0;
        // front_rd_active/front_wr_active 在整个前台 AXI 事务期间保持,
        // 仅在事务完成 (rlast / bvalid&&bready) 时由完成逻辑清除。

        // ── flush: 清除年轻 MSHR 条目 (在飞 AXI 事务只收数据不交付) ──
        if (flush) begin
            for (msi = 0; msi < MSHR_DEPTH; msi = msi + 1) begin
                if (mshr_valid[msi] && !mshr_is_older[msi]) begin
                    mshr_valid[msi]   <= 1'b0;
                    mshr_done[msi]    <= 1'b0;
                    mshr_wait_wb[msi] <= 1'b0;
                end
            end
            if (cur_fill_valid) discard_fill <= 1'b1;
            if (cur_wb_valid)   discard_wb   <= 1'b1;
        end

        // ── 完成端口交付 (ret) ──
        if (lsu_ret_valid && lsu_ret_ready) begin
            mshr_valid[ret_idx] <= 1'b0;
            mshr_done[ret_idx]  <= 1'b0;
        end

        case (state)
            IDLE: begin
                fence_done <= ~fence_en;
                if (fence_en) fence_ing <= 1'b1;   // 锁存 fence 请求 (FENCE 状态完成时清除)
                if (lsu_valid && dcache_hit && !wb_complete_pulse && !lsu_we) begin
                    // load hit: 数据组合读出 (lsu_rdata), 无需写行
                end else if (lsu_valid && !dcache_hit && (store_req | !is_mem) && !front_vset_lock) begin
                    // store miss / MMIO: 只锁存前台事务上下文,
                    // AXI 事务在 MEM_BUSY/WB 状态等待 AXI 空闲后发起
                    // (避免与后台 MSHR 事务冲突)。
                    // load miss 不进前台 (MSHR 处理), 不锁存。
                    pend_index    <= alloc_index;
                    pend_offset   <= offset;
                    pend_wdata    <= lsu_wdata;
                    pend_wstrb    <= lsu_wstrb;
                    pend_we       <= lsu_we;
                    pend_is_sdram <= is_sdram;
                    pend_is_mem   <= is_mem;
                    pend_mem_addr <= lsu_addr;
                    if (!is_mem) pend_mmio_addr <= lsu_addr;
                    front_txn_pending <= 1'b1;   // 事务待发起
                end

                // ── MSHR 分配 (load miss 立即接受, 非阻塞) ──
                if (load_mshr_ok) begin
                    mshr_valid[mshr_alloc_slot]    <= 1'b1;
                    mshr_done[mshr_alloc_slot]     <= 1'b0;
                    mshr_line[mshr_alloc_slot]     <= block_addr;
                    mshr_pend_idx[mshr_alloc_slot] <= alloc_index;
                    mshr_woff[mshr_alloc_slot]     <= offset;
                    mshr_tag[mshr_alloc_slot]      <= lsu_tag;
                    mshr_sdram[mshr_alloc_slot]    <= is_sdram;
                    mshr_wait_wb[mshr_alloc_slot]  <= dirty_array[alloc_index];
                    // 立即失效目标行: 否则 fill 期间旧行 (2-way 替换残留)
                    // 仍 valid, 同行后续 load 会"命中"旧数据读到错值;
                    // store 命中旧行写入的数据也会在 fill 完成时被覆盖丢失。
                    // victim dirty 时 WB 读 data_array 不受 valid 影响。
                    valid_array[alloc_index]       <= 1'b0;
                end

                // ── 后台 MSHR 事务发起 (前台空闲且 AXI 空闲时) ──
                // 排除同拍将启动前台 AXI 事务的情况 (store miss 填充/WB、MMIO),
                // 避免前后台同时在飞两个事务 (SRAM 仅支持单 outstanding)。
                // store miss 反压 (等同行 fill / way 被占用) 时前台不占 AXI, 后台可继续。
                if (!front_busy && !ax_busy && !cur_wb_valid && !cur_fill_valid &&
                    !(lsu_valid && !dcache_hit && store_req &&
                      (is_mem ? !mshr_line_match && alloc_way_ok : 1'b1))) begin
                    // 优先 WB (victim dirty), 其次 fill
                    if (|(mshr_valid & mshr_wait_wb & ~mshr_done)) begin
                        for (msi = 0; msi < MSHR_DEPTH; msi = msi + 1) begin
                            if (mshr_valid[msi] && mshr_wait_wb[msi] && !mshr_done[msi]) begin
                                burst_cnt <= 2'b0;
                                cur_wb_valid <= 1'b1;
                                cur_wb_idx   <= msi[MSHR_IDX_W-1:0];
                                awaddr  <= {tag_array[mshr_pend_idx[msi]], mshr_pend_idx[msi][INDEX_WIDTH+WAYS_LOG-1:WAYS_LOG], {OFFSET_WIDTH{1'b0}}};
                                awvalid <= 1'b1;
                                wdata   <= data_array[mshr_pend_idx[msi]][0 +: 32];
                                wstrb   <= 4'hf;
                                wvalid  <= 1'b1;
                                // 统一 4-beat burst 写 (SRAM/PMEM 模型均支持 awlen=3):
                                // 非 sdram 逐 beat 单拍 (4 次 aw/b 往返) 严重拖慢 miss 路径。
                                wlast   <= 1'b0;
                                awid    <= 4'h0;
                                awsize  <= 3'h2;
                                awlen   <= 8'h3;
                                awburst <= 2'h1;
                                msi = MSHR_DEPTH;
                            end
                        end
                    end else if (|(mshr_valid & ~mshr_done & ~mshr_wait_wb)) begin
                        for (msi = 0; msi < MSHR_DEPTH; msi = msi + 1) begin
                            if (mshr_valid[msi] && !mshr_done[msi] && !mshr_wait_wb[msi]) begin
                                burst_cnt <= 2'b0;
                                cur_fill_valid <= 1'b1;
                                cur_fill_idx   <= msi[MSHR_IDX_W-1:0];
                                araddr  <= mshr_line[msi];
                                arvalid <= 1'b1;
                                arid    <= 4'h0;
                                arsize  <= 3'h2;
                                arlen   <= 8'h3;
                                arburst <= 2'b1;
                                msi = MSHR_DEPTH;
                            end
                        end
                    end
                end
            end

            MEM_BUSY: begin
                // 前台写事务握手 (MMIO 写) — 由 front_wr_active 门控, 不与后台 WB 混淆
                if (front_wr_active) begin
                    if (awvalid && awready && wvalid && wready) begin
                        awvalid <= 1'b0;
                        wvalid  <= 1'b0;
                        bready  <= 1'b1;
                    end
                    if (bvalid && bready) begin
                        device_done    <= 1'b1;
                        device_done_we <= 1'b1;
                        bready      <= 1'b0;
                        wlast       <= 1'b0;
                        front_wr_active <= 1'b0;
                    end
                end
                // 前台读事务握手 — 由 front_rd_active 门控, 不与后台 fill 混淆
                if (front_rd_active) begin
                    if (arvalid && arready) begin
                        arvalid <= 1'b0;
                        rready  <= 1'b1;
                    end
                    if (rvalid && rready) begin
                        if (pend_is_mem) begin
                            case(burst_cnt)
                                2'd0: data_array[pend_index][ 31: 0] <= rdata;
                                2'd1: data_array[pend_index][ 63:32] <= rdata;
                                2'd2: data_array[pend_index][ 95:64] <= rdata;
                                2'd3: data_array[pend_index][127:96] <= rdata;
                            endcase
                            burst_cnt <= burst_cnt + 2'b1;
                            if (pend_is_sdram) begin
                                if (rlast) begin
                                    // valid 推迟一拍置位 (front_valid_set):
                                    // 同拍置位会让重试在边沿前采样旧数据
                                    rready             <= 1'b0;
                                    tag_array[pend_index]   <= pend_mem_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];
                                    front_rd_active <= 1'b0;
                                    front_valid_set  <= 1'b1;
                                end
                            end else begin
                                if (burst_cnt == 2'b11) begin
                                    rready             <= 1'b0;
                                    tag_array[pend_index]   <= pend_mem_addr[ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];
                                    front_rd_active <= 1'b0;
                                    front_valid_set  <= 1'b1;
                                end else begin
                                    araddr  <= araddr + 32'h4;
                                    arvalid <= 1'b1;
                                end
                            end
                        end else begin
                            device_rdata <= rdata;
                            device_done  <= 1'b1;
                            device_done_we <= 1'b0;
                            rready       <= 1'b0;
                            front_rd_active <= 1'b0;
                        end
                    end
                end
                // 前台事务发起 (等待 AXI 空闲; 若 MSHR 后台正占用则等待其完成)
                if (front_txn_pending && !ax_busy && !cur_wb_valid && !cur_fill_valid && !arvalid && !awvalid && !mshr_pend_line) begin
                    front_txn_pending <= 1'b0;
                    if (pend_is_mem) begin
                        // store miss 填充
                        burst_cnt <= 2'b0;
                        valid_array[pend_index] <= 1'b0;
                        araddr  <= {pend_mem_addr[31:OFFSET_WIDTH], {OFFSET_WIDTH{1'b0}}};
                        arvalid <= 1'b1;
                        arid    <= 4'h0;
                        arsize  <= 3'h2;
                        arlen   <= pend_is_sdram ? 8'h3 : 8'h0;
                        arburst <= pend_is_sdram ? 2'h1 : 2'b0;
                        front_rd_active <= 1'b1;
                    end else if (pend_we) begin
                        // MMIO 写
                        burst_cnt <= 2'b0;
                        awaddr  <= pend_mem_addr;
                        awvalid <= 1'b1;
                        wdata   <= pend_wdata;
                        wstrb   <= pend_wstrb;
                        wvalid  <= 1'b1;
                        wlast   <= 1'b1;
                        awid    <= 4'h0;
                        awsize  <= 3'b0;
                        awlen   <= 8'b0;
                        awburst <= 2'b0;
                        front_wr_active <= 1'b1;
                    end else begin
                        // MMIO 读
                        burst_cnt <= 2'b0;
                        araddr  <= pend_mem_addr;
                        arvalid <= 1'b1;
                        arid    <= 4'h0;
                        arsize  <= 3'b0;
                        arlen   <= 8'b0;
                        arburst <= 2'b0;
                        front_rd_active <= 1'b1;
                    end
                end
                // 存储写入: 使用锁存的事务上下文 (store miss 填充完成后写 store 数据)
                // store 数据写行提前到 front_valid_set 周期 (fill 完成拍置位,
                // valid 在其下一拍置位): 若等 valid 置位拍再写, 慢路径 load
                // 在同一拍 (边沿前) 采样 data_array 拿到 fill 的旧数据
                // (recursion 的 lw ra 读 0)。
                if(front_valid_set && pend_is_mem) begin
                    dirty_array[pend_index] <= pend_we;
                    if (pend_we) begin
                        case (pend_offset)
                            4'h0: data_array[pend_index][ 31: 0] <= pend_wdata | (data_array[pend_index][ 31: 0] & ~{{8{pend_wstrb[3]}},{8{pend_wstrb[2]}},{8{pend_wstrb[1]}},{8{pend_wstrb[0]}}});
                            4'h4: data_array[pend_index][ 63:32] <= pend_wdata | (data_array[pend_index][ 63:32] & ~{{8{pend_wstrb[3]}},{8{pend_wstrb[2]}},{8{pend_wstrb[1]}},{8{pend_wstrb[0]}}});
                            4'h8: data_array[pend_index][ 95:64] <= pend_wdata | (data_array[pend_index][ 95:64] & ~{{8{pend_wstrb[3]}},{8{pend_wstrb[2]}},{8{pend_wstrb[1]}},{8{pend_wstrb[0]}}});
                            4'hc: data_array[pend_index][127:96] <= pend_wdata | (data_array[pend_index][127:96] & ~{{8{pend_wstrb[3]}},{8{pend_wstrb[2]}},{8{pend_wstrb[1]}},{8{pend_wstrb[0]}}});
                            default: data_array[pend_index] <= data_array[pend_index];
                        endcase
                    end
                end
            end

            FENCE: begin
                if(fence_done) begin
                    fence_ing <= 1'b0;
                end else begin
                    fence_index <= fence_index + 1;
                end
                if (dirty_array[fence_index] && !ax_busy && !cur_wb_valid && !cur_fill_valid && !awvalid) begin
                    is_sdram_fence_reg <= is_sdram_fence;
                    awaddr  <= {tag_array[fence_index], fence_index[INDEX_WIDTH+WAYS_LOG-1:WAYS_LOG], {OFFSET_WIDTH{1'b0}}};
                    awvalid <= 1'b1;
                    wdata   <= data_array[fence_index][0 +: 32];
                    wstrb   <= 4'hf;
                    wvalid  <= 1'b1;
                    // 统一 4-beat burst 写 (SRAM/PMEM 模型均支持 awlen=3)。
                    wlast   <= 1'b0;
                    awid    <= 4'h0;
                    awsize  <= 3'h2;
                    awlen   <= 8'h3;
                    awburst <= 2'h1;
                    burst_cnt <= 2'b0;
                    front_wr_active <= 1'b1;
                end
                if(&fence_index) begin
                    dirty_array <= 'b0;
                    fence_done  <= 1'b1;
                end
            end

            WB: begin
                // 前台 WB 发起 (store miss victim 写回 / fence 写回):
                // 等待 AXI 空闲, 与后台 MSHR 事务互斥。
                // Fix: !write_done 防止 WB 完成拍后重入发起——完成拍
                // (bvalid&&bready) 置 front_txn_pending<=1 供 MEM_BUSY
                // 发起 fill, 但 state 下一拍才离开 WB; 该拍发起块若再次
                // 命中会把同一 victim 又发起一次 WB (awvalid/wvalid=1、
                // front_wr_active=1), 随后 state=MEM_BUSY 时 MEM_BUSY 的
                // MMIO 写握手块 (门控仅 front_wr_active) 把它当 MMIO 写
                // 处理: 握手一拍即清 awvalid/wvalid, awlen=3 只发了 1 拍
                // W 且 wlast=0, AXI 桥等待剩余 3 拍 → bvalid 永不来 →
                // ax_busy 卡 1 → STB drain 卡死 → ROB 停提 → rename_full
                // → PC 冻结 (bf 死锁根因)。
                if (front_txn_pending && !ax_busy && !cur_wb_valid && !cur_fill_valid && !awvalid && !write_done) begin
                    front_txn_pending <= 1'b0;
                    burst_cnt <= 2'b0;
                    awaddr  <= fence_ing ? {tag_array[fence_index], fence_index[INDEX_WIDTH+WAYS_LOG-1:WAYS_LOG], {OFFSET_WIDTH{1'b0}}}
                                         : {tag_array[pend_index], pend_index[INDEX_WIDTH+WAYS_LOG-1:WAYS_LOG], {OFFSET_WIDTH{1'b0}}};
                    awvalid <= 1'b1;
                    wdata   <= fence_ing ? data_array[fence_index][0 +: 32] : data_array[pend_index][0 +: 32];
                    wstrb   <= 4'hf;
                    wvalid  <= 1'b1;
                    // 统一 4-beat burst 写 (SRAM/PMEM 模型均支持 awlen=3),
                    // 非 sdram 逐 beat 单拍 (4 次 aw/b 往返) 严重拖慢 miss 路径。
                    wlast   <= 1'b0;
                    awid    <= 4'h0;
                    awsize  <= 3'h2;
                    awlen   <= 8'h3;
                    awburst <= 2'h1;
                    front_wr_active <= 1'b1;
                    if (fence_ing) is_sdram_fence_reg <= is_sdram_fence;
                end
                // 前台 WB: store miss 的 victim 写回 (以及 fence 写回)。
                // 必须用 front_wr_active 门控: MSHR 后台 WB (cur_wb_valid)
                // 与前台 WB 共享 aw/w/b 通道信号, 若前台 WB 尚未发起
                // (front_wr_active=0, 等待 MSHR WB 完成) 时误响应 MSHR
                // 的握手, 会把 MSHR 的 beat 计为前台 burst_cnt, 第 4 个
                // b 拍误判前台 WB 完成 (write_done/清 valid+dirty),
                // victim 数据从未写回内存 → store 数据丢失 (dinic)。
                if (awvalid && awready && front_wr_active) begin
                    awvalid <= 1'b0;
                    bready  <= 1'b1;
                end
                if (wvalid && wready && front_wr_active) begin
                    wvalid    <= ~wlast;
                    burst_cnt <= burst_cnt + 2'b1;
                    wdata     <= fence_ing ? data_array[fence_index-1][((burst_cnt)*32+32) +: 32] : data_array[pend_index][((burst_cnt)*32+32) +: 32];
                    wlast     <= (burst_cnt == 2'b10);
                end
                if(bvalid && bready && front_wr_active) begin
                    bready             <= 1'b0;
                    valid_array[pend_index] <= fence_ing ? valid_array[pend_index] : 1'b0;
                    dirty_array[pend_index] <= fence_ing ? dirty_array[pend_index] : 1'b0;
                    write_done         <= 1'b1;
                    is_sdram_fence_reg <= 1'b0;
                    front_wr_active    <= 1'b0;
                    if (!fence_ing) front_txn_pending <= 1'b1;   // 供 MEM_BUSY fill
                end
            end
        endcase

        // ── store hit 写行 (任何状态, 与完成 ready 解耦):
        //    front fill (MEM_BUSY/WB) 期间 store 可命中其他行 (hit-under-miss),
        //    写行不能依赖 IDLE 状态块, 否则 drain 弹出但数据未写行 → store 丢失。
        if (store_req && is_mem && dcache_hit && !wb_complete_pulse) begin
            case (offset)
                4'h0: data_array[hit_index][ 31: 0] <= dcache_wdata;
                4'h4: data_array[hit_index][ 63:32] <= dcache_wdata;
                4'h8: data_array[hit_index][ 95:64] <= dcache_wdata;
                4'hc: data_array[hit_index][127:96] <= dcache_wdata;
                default: data_array[hit_index] <= data_array[hit_index];
            endcase
            dirty_array[hit_index] <= 1'b1;
            if (hit_way) lru[index] <= 1'b0;
            else         lru[index] <= 1'b1;
            // 命中即完成: 作废此前同行反压时锁存的 pend 事务,
            // 否则残留 front_txn_pending 会在之后进入 MEM_BUSY
            // 时发起旧 fill (与 MSHR fill 同行双填, 数据分裂)。
            // 必须只清同行: 无条件清会覆盖前台 WB 完成拍置的
            // front_txn_pending<=1 (供 MEM_BUSY 发起 fill), 使
            // victim 写回后 fill 永不发起, store 数据丢失
            // (dinic 的行 0x8000ffa0 word1=6 在 WB 完成拍被丢弃)。
            if (pend_block_addr == block_addr)
                front_txn_pending <= 1'b0;
        end

        // ── 填充完成后的 valid 置位 (推迟一拍: 数据已完整) ──
        // lru 更新: 若另一 way 同 tag 且 dirty (fill 期间 store 写过更新数据),
        // 保持另一 way 为 MRU, 否则读会走 fill 的旧数据 (div 的 a[1] 丢失)。
        if (mshr_valid_set) begin
            valid_array[mshr_pend_idx[cur_fill_idx]] <= 1'b1;
            if (valid_array[mshr_pend_idx[cur_fill_idx] ^ 10'd1] &&
                (tag_array[mshr_pend_idx[cur_fill_idx] ^ 10'd1] == tag_array[mshr_pend_idx[cur_fill_idx]]) &&
                dirty_array[mshr_pend_idx[cur_fill_idx] ^ 10'd1])
                lru[mshr_pend_idx[cur_fill_idx][INDEX_WIDTH+WAYS_LOG-1:WAYS_LOG]] <= mshr_pend_idx[cur_fill_idx][0];
            else if (mshr_pend_idx[cur_fill_idx][0]) lru[mshr_pend_idx[cur_fill_idx][INDEX_WIDTH+WAYS_LOG-1:WAYS_LOG]] <= 1'b0;
            else                                   lru[mshr_pend_idx[cur_fill_idx][INDEX_WIDTH+WAYS_LOG-1:WAYS_LOG]] <= 1'b1;
            mshr_valid_set <= 1'b0;
        end
        if (front_valid_set) begin
            valid_array[pend_index] <= 1'b1;
            if (valid_array[pend_index ^ 10'd1] &&
                (tag_array[pend_index ^ 10'd1] == tag_array[pend_index]) &&
                dirty_array[pend_index ^ 10'd1]) begin
                lru[pend_set] <= pend_way;
            end
            else begin
                if (pend_way) lru[pend_set] <= 1'b0;
                else          lru[pend_set] <= 1'b1;
            end
            front_valid_set <= 1'b0;
        end

        // ══════════ 后台 MSHR 事务处理 (不受前台状态机约束) ══════════
        // 在飞 fill: AR 握手后置 rready
        if (cur_fill_valid && arvalid && arready) begin
            arvalid <= 1'b0;
            rready  <= 1'b1;
        end

        // 在飞 WB: 握手完成 -> 写回行失效 + 清除 wait_wb, 下拍可发起 fill
        // 统一 4-beat burst 写 (awlen=3, 每拍 wdata 从 data_array 取下一 word):
        // 非 sdram 逐 beat 单拍 (4 次 aw/b 往返) 严重拖慢 miss 路径。
        if (cur_wb_valid) begin
            if (awvalid && awready) begin
                awvalid <= 1'b0;
                bready  <= 1'b1;
            end
            if (wvalid && wready) begin
                wvalid    <= ~wlast;
                burst_cnt <= burst_cnt + 2'b1;
                // 偏移须 +32: 握手拍 burst_cnt 为旧值 (beat0 握手后仍为 0),
                // 下一 beat 的数据应为 word1 = [32+:32]。
                wdata     <= data_array[mshr_pend_idx[cur_wb_idx]][((burst_cnt)*32+32) +: 32];
                wlast     <= (burst_cnt == 2'b10);
            end
            if (bvalid && bready) begin
                bready <= 1'b0;
                wlast  <= 1'b0;
                if (!discard_wb) begin
                    mshr_wait_wb[cur_wb_idx]                <= 1'b0;
                    valid_array[mshr_pend_idx[cur_wb_idx]] <= 1'b0;
                    dirty_array[mshr_pend_idx[cur_wb_idx]] <= 1'b0;
                end
                cur_wb_valid <= 1'b0;
                discard_wb   <= 1'b0;
            end
        end

        // 在飞 fill: 接收数据, 写缓存行; 条目被 flush 时只收数据不写行
        if (cur_fill_valid && rvalid && rready) begin
            if (discard_fill || !mshr_valid[cur_fill_idx] || mshr_done[cur_fill_idx]) begin
                // 条目被 flush 或已 done: 只收数据, 完成在飞事务。
                // 后台 fill 一律发起 burst (arlen=3), discard 只需收完
                // 等 rlast, 不可逐 beat 重发 AR: 多余的 AR 握手与 rlast
                // 同拍会令 rd_begin 抢占 rd_end, ax_busy 永不清除 → 死锁。
                if (rlast) begin
                    rready          <= 1'b0;
                    cur_fill_valid  <= 1'b0;
                    discard_fill    <= 1'b0;
                end
            end else begin
                case(burst_cnt)
                    2'd0: data_array[mshr_pend_idx[cur_fill_idx]][ 31: 0] <= rdata;
                    2'd1: data_array[mshr_pend_idx[cur_fill_idx]][ 63:32] <= rdata;
                    2'd2: data_array[mshr_pend_idx[cur_fill_idx]][ 95:64] <= rdata;
                    2'd3: data_array[mshr_pend_idx[cur_fill_idx]][127:96] <= rdata;
                endcase
                burst_cnt <= burst_cnt + 2'b1;
                if (rlast) begin
                    // valid 不在本拍置位: 同拍置位会让慢路径重试在边沿前
                    // 采样到旧数据 (最后一个 word 本拍才写入) → 锁存垃圾。
                    // 由 mshr_valid_set 在下一拍 (数据已完整) 置 valid+lru。
                    // flush 拍不置 done/valid_set: 该拍条目被 flush 清除,
                    // 若同拍完成写入会覆盖清除 → done 残留条目泄漏。
                    rready             <= 1'b0;
                    tag_array[mshr_pend_idx[cur_fill_idx]]   <= mshr_line[cur_fill_idx][ADDR_WIDTH-1 : OFFSET_WIDTH + INDEX_WIDTH];
                    mshr_done[cur_fill_idx] <= !flush;
                    cur_fill_valid <= 1'b0;
                    mshr_valid_set  <= !flush;
                end
            end
        end
        // ══════════════════════════════════════════════════════════════
    end
end



endmodule
