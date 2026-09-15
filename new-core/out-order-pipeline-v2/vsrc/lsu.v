`include "defines.vh"

// lsu: 单请求接口的 Load/Store 单元, 对接非阻塞 dcache (MSHR)
//
// 非阻塞语义 (load):
//   - dcache_ready 表示"请求被接受": 命中 -> 数据同拍有效 (lsu_hit=1),
//     请求完成; miss -> 已登记 MSHR, 数据稍后经完成端口返回。
//   - 被接受的 miss load 记录在本模块的 in_flight 队列 (FIFO) 中,
//     dcache 完成端口 (lsu_ret_valid/tag/data) 按入队顺序交付数据,
//     本模块匹配队首条目后输出 lsu_done_* 给 EXU 广播。
//   - 未接受 (MSHR 满 / 忙) 时 dcache_ready=0, LSU 保持请求重试。
//   - 完成时用入队时刻锁存的 STB 转发 (fwd_mask/fwd_data) 合成最终数据,
//     保证 store-to-load forwarding 语义不受乱序完成影响。
//
// store (STB drain) 保持阻塞: dcache_ready 即写入完成。
module lsu #(
    parameter ID_WIDTH = 6
)(
    input  wire                    clk          ,
    input  wire                    rst          ,
    input  wire                    lsu_en       ,
    output wire                    lsu_ready    ,
    output reg                     lsu_valid    ,

    input  wire [`EX_TO_LS_WD-1:0] ex_to_ls_bus ,
    output wire [            31:0] lsu_data     ,

    output wire [            31:0] dcache_addr  ,
    output wire                    dcache_valid ,
    output wire                    dcache_we    ,
    output wire [            31:0] dcache_wdata ,
    output wire [             3:0] dcache_wstrb ,
    input  wire [            31:0] dcache_rdata ,
    input  wire                    dcache_ready ,
    input  wire                    dcache_hit   ,
    input  wire [            31:0] dcache_ret_data  ,
    input  wire                    dcache_ret_valid ,
    input  wire [ID_WIDTH-1:0]     dcache_ret_tag   ,
    output wire                    dcache_ret_ready ,
    output wire                    lsu_head_valid  ,  // in_flight 队列非空 (dcache 完成端口匹配用)
    output wire [ID_WIDTH-1:0]     lsu_head_tag    ,  // in_flight 队首 tag
    output wire                    lsu_load_active ,  // 慢路径 load 重试中 (dcache: 此类请求只走命中路径)


    input  wire [ID_WIDTH-1:0]     lsu_tag      ,
    input  wire [             5:0] lsu_phy_rd   ,
    input  wire [            31:0] lsu_pc       ,
    input  wire [            31:0] lsu_inst     ,
    input  wire                    lsu_gpr_we   ,
    input  wire                    flush        ,
    input  wire [ID_WIDTH-1:0]     flush_id     ,

    output wire                    lsu_hit      ,
    output wire                    lsu_done_valid,
    output wire [            31:0] lsu_done_data,
    output wire [             5:0] lsu_done_phy_rd,
    output wire [             4:0] lsu_done_rd  ,
    output wire                    lsu_done_gpr_we,
    output wire [            31:0] lsu_done_pc  ,
    output wire [            31:0] lsu_done_inst,
    output wire [ID_WIDTH-1:0]     lsu_done_id  ,
    output wire [            31:0] lsu_done_addr,
    input  wire                    lsu_done_ack ,

    // stb allocate
    output wire                       stb_alloc_valid,
    output wire [               31:0] stb_alloc_addr ,
    output wire [               31:0] stb_alloc_data ,
    output wire [                3:0] stb_alloc_wstrb,
    input  wire                       stb_ready      ,
    input  wire [`STB_DEPTH_LOG2-1:0] stb_alloc_id   ,
    output wire [`STB_DEPTH_LOG2-1:0] lsu_stb_id     ,

    // stb forwarding
    output wire [            31:0] stb_forward_addr,
    input  wire [ID_WIDTH-1:0]     stb_forward_inst_id,
    input  wire [             3:0] stb_forward_mask,
    input  wire [            31:0] stb_forward_data,

    output wire                    stb_forward_full_hit ,

    // stb drain
    input  wire                    stb_drain_valid,
    input  wire [            31:0] stb_drain_addr ,
    input  wire [            31:0] stb_drain_data ,
    input  wire [             3:0] stb_drain_wstrb,
    output wire                    stb_drain_ready
);

    wire [ 4:0] rd          ;
    wire [ 1:0] lw_lh_lb    ;
    wire [ 1:0] sw_sh_sb    ;
    wire        is_load_sign;
    wire        is_write    ;
    wire        is_read     ;
    wire [31:0] src1        ;
    wire [31:0] src2        ;
    wire [31:0] imm         ;
    assign {
        rd          ,
        lw_lh_lb    ,
        sw_sh_sb    ,
        is_load_sign,
        is_write    ,
        is_read     ,
        src1        ,
        src2        ,
        imm
    } = ex_to_ls_bus;

    wire [31:0] addr        = src1 + imm;
    wire [31:0] addr_off    = addr & 32'b11;
    wire [31:0] align_wdata = src2 << (addr_off << 3);
    
    wire [ 3:0] wstrb = ({4{sw_sh_sb == 2'b00}} & (4'b0001 << addr_off))
                      | ({4{sw_sh_sb == 2'b01}} & (4'b0011 << addr_off))
                      | ({4{sw_sh_sb == 2'b10}} & (4'b1111 << addr_off));
    wire [31:0] wdata = {{8{wstrb[3]}},{8{wstrb[2]}},{8{wstrb[1]}},{8{wstrb[0]}}} & align_wdata;

    assign stb_forward_addr = addr;
    wire [ 3:0] read_mask = ({4{lw_lh_lb == 2'b00}} & (4'b0001 << addr_off)) |
                            ({4{lw_lh_lb == 2'b01}} & (4'b0011 << addr_off)) |
                            ({4{lw_lh_lb == 2'b10}} & (4'b1111 << addr_off));
    wire [ 3:0] stb_forward_read_mask = read_mask;
    // 只有当 STB 提供的掩码 包含了所有 Load 需要的掩码，才算完全命中
    assign stb_forward_full_hit = ((stb_forward_mask & stb_forward_read_mask) == stb_forward_read_mask) && (|stb_forward_read_mask);

    assign stb_alloc_valid = lsu_en & is_write;
    assign stb_alloc_addr  = addr;
    assign stb_alloc_data  = wdata;
    assign stb_alloc_wstrb = wstrb;
    assign lsu_stb_id      = stb_alloc_id; 

    // 当请求已经发出且 DCache 未完成时，锁定仲裁
    reg drain_active;
    reg load_active;
    always @(posedge clk) begin
        if (rst) begin
            drain_active <= 1'b0;
            load_active  <= 1'b0;
        end
        else begin
            if (flush) begin
                // 冲刷拍直接清除: lsu_en 降到 0 与 load_active 清除之间
                // 有一拍延迟, 该拍 grant_load 仍为 1 且总线已是垃圾
                // (地址 0x0), 会被 dcache 当作 MMIO 读锁存 → 持续投机读
                // 0x0 死循环 (AXI_Bridge Invalid read)。
                drain_active <= 1'b0;
                load_active  <= 1'b0;
            end else begin
            if (grant_drain && !dcache_ready) begin
                drain_active <= 1'b1;  // 写回操作进入多周期流程，锁定通道
            end
            else if (dcache_ready) begin
                drain_active <= 1'b0;  // DCache 响应完成，解锁
            end

            if (!lsu_en) begin
                // EXU 已取消本 load (如被冲刷), 清除残留的 load_active,
                // 防止 D-Cache 对垃圾总线地址 (如 0x0) 发起投机读
                load_active <= 1'b0;
            end
            else if (grant_load && !dcache_ready) begin
                load_active <= 1'b1;
            end
            else if (dcache_ready) begin
                load_active <= 1'b0;
            end
            end
        end
    end

    wire exu_load_req = lsu_en & is_read;

    // 仲裁核心：如果处于 Drain 锁定状态，必须强制保持；否则，Load 具有更高优先级
    wire grant_drain  = drain_active || (stb_drain_valid && !exu_load_req && !load_active);
    wire grant_load   = load_active  || (exu_load_req && !drain_active);

    // 只有在被选中（grant_drain）时，D-cache的回应才属于STB。
    // flush 拍不完成 drain: 该拍 dcache_valid 被屏蔽 (防 0x0 垃圾读),
    // dcache_ready 因 !lsu_valid 恒 1, 若同拍完成 drain 会弹出 STB 条目
    // 但 dcache 写行块 (store_req=0) 不执行 → store 数据丢失
    // (hello-str 的 0xb7c '\n' 缺失)。
    assign stb_drain_ready = grant_drain && dcache_ready && !flush;

    // flush 拍屏蔽 dcache 请求: load_active 的清除要一拍后才生效,
    // 该拍 grant_load 仍为 1 且总线已是垃圾 (地址 0x0), 会被 dcache
    // 当作 MMIO 读锁存 → 持续投机读 0x0 死循环。
    assign dcache_valid = ((grant_load & !stb_forward_full_hit) || grant_drain) & !flush;
    assign dcache_we    = grant_drain; // Load 不会产生写使能，只有 STB Drain 才是写操作
    assign dcache_addr  = grant_load ? addr : stb_drain_addr;
    assign dcache_wdata = stb_drain_data;
    assign dcache_wstrb = grant_drain ? stb_drain_wstrb : 4'b0;

    wire [31:0] dcache_rdata_final;

    assign dcache_rdata_final[ 7: 0] = stb_forward_mask[0] ? stb_forward_data[ 7: 0] : dcache_rdata[ 7: 0];
    assign dcache_rdata_final[15: 8] = stb_forward_mask[1] ? stb_forward_data[15: 8] : dcache_rdata[15: 8];
    assign dcache_rdata_final[23:16] = stb_forward_mask[2] ? stb_forward_data[23:16] : dcache_rdata[23:16];
    assign dcache_rdata_final[31:24] = stb_forward_mask[3] ? stb_forward_data[31:24] : dcache_rdata[31:24];    

    wire [31:0] lsu_rdata = (dcache_rdata_final >> (addr_off << 3));

    reg [31:0] rdata_processed;
    always @(*) begin
        case (lw_lh_lb)
            2'b00: rdata_processed = is_load_sign ? {{24{lsu_rdata[ 7]}}, lsu_rdata[ 7:0]} : {24'b0, lsu_rdata[ 7:0]};
            2'b01: rdata_processed = is_load_sign ? {{16{lsu_rdata[15]}}, lsu_rdata[15:0]} : {16'b0, lsu_rdata[15:0]};
            default: rdata_processed = lsu_rdata;
        endcase
    end

    // load 完成 = 接受且命中 (数据同拍有效)
    assign lsu_hit = grant_load && dcache_hit;

    assign lsu_ready = (!lsu_en                       ) ? 1'b1      : 
                       (is_write                      ) ? stb_ready : 
                       (is_read  | load_active) ? (stb_forward_full_hit || (grant_load && dcache_ready)) : 1'b1;
                       
    assign lsu_data  = (grant_load | stb_forward_full_hit) ? rdata_processed : addr;

    // ══════════════ in_flight load 队列 (非阻塞 miss 的完成跟踪) ══════════════
    localparam IQ_DEPTH = 8;
    localparam IQ_W = $clog2(IQ_DEPTH);
    reg [IQ_DEPTH-1:0]      iq_valid;
    reg [ID_WIDTH-1:0]      iq_tag      [0:IQ_DEPTH-1];
    reg [            5:0]   iq_phy_rd   [0:IQ_DEPTH-1];
    reg [            4:0]   iq_rd       [0:IQ_DEPTH-1];
    reg                     iq_gpr_we   [0:IQ_DEPTH-1];
    reg [           31:0]   iq_pc       [0:IQ_DEPTH-1];
    reg [           31:0]   iq_inst     [0:IQ_DEPTH-1];
    reg [`EX_TO_LS_WD-1:0]  iq_bus      [0:IQ_DEPTH-1];
    reg [           31:0]   iq_addr     [0:IQ_DEPTH-1];  // 入队拍锁存的访存地址
    reg [            3:0]   iq_fwd_mask [0:IQ_DEPTH-1];
    reg [           31:0]   iq_fwd_data [0:IQ_DEPTH-1];
    reg [IQ_W-1:0]          iq_head;
    reg [IQ_W-1:0]          iq_tail;
    reg [IQ_W:0]            iq_cnt;
    reg                     iq_pending;     // 队首完成数据待交付 (电平保持)
    reg [           31:0]   iq_pend_data;   // 待交付数据 (ret 拍锁存)

    // 入队: 请求被 dcache 接受且为 miss (非 STB 全转发)。
    // flush 拍不入队: 该拍请求来自 flush 前的残留 (年轻指令),
    // dcache 同拍不会分配 MSHR (load_mshr_ok 含 !flush)。
    wire iq_push = grant_load && dcache_ready && !dcache_hit && !stb_forward_full_hit && !flush;

    // 完成匹配: dcache 完成端口按 FIFO 顺序匹配队首 (1 拍脉冲)
    wire iq_match = dcache_ret_valid && (iq_cnt != 0) && (iq_tag[iq_head] == dcache_ret_tag);
    // 反压完成端口: 只有队首匹配且当前没有未交付的完成结果时才接收。
    // dcache 在 lsu_ret_valid && lsu_ret_ready 握手成功后才清除 MSHR done 条目,
    // 因此较年轻的 MSHR 完成会一直保持到其成为队首, 保证交付顺序与程序序一致。
    assign dcache_ret_ready = iq_match && !iq_pending && !flush;

    // 完成数据的字节处理 (与命中路径 lsu_rdata 同一语义):
    //   1) 用入队时刻锁存的 STB 转发覆盖 dcache 返回的 word
    //   2) 按访问宽度/符号处理 (lw/lh/lb)
    // done_addr 用入队拍锁存的地址: ex_to_ls_bus 的 src1 可能因发射/接受
    // 跨拍 (rs1 旁路与 req 保持的错位) 携带旧值, 而 addr 组合同拍总是对的
    // (char-test 的 lbu 0xb1 经 IQ 交付读成 0xb0 的 'L')。
    wire [31:0] done_addr     = iq_addr[iq_head];
    wire [ 1:0] done_addr_off = done_addr[1:0];
    wire [ 4:0] done_rd       = iq_bus[iq_head][107:103];
    wire [ 1:0] done_lw_lh_lb = iq_bus[iq_head][102:101];
    // 总线位域: {rd[107:103], lw_lh_lb[102:101], sw_sh_sb[100:99],
    //            is_load_sign[98], is_write[97], is_read[96], src1, src2, imm}
    wire        done_is_sign  = iq_bus[iq_head][98];

    wire [31:0] done_word_final;
    assign done_word_final[ 7: 0] = iq_fwd_mask[iq_head][0] ? iq_fwd_data[iq_head][ 7: 0] : dcache_ret_data[ 7: 0];
    assign done_word_final[15: 8] = iq_fwd_mask[iq_head][1] ? iq_fwd_data[iq_head][15: 8] : dcache_ret_data[15: 8];
    assign done_word_final[23:16] = iq_fwd_mask[iq_head][2] ? iq_fwd_data[iq_head][23:16] : dcache_ret_data[23:16];
    assign done_word_final[31:24] = iq_fwd_mask[iq_head][3] ? iq_fwd_data[iq_head][31:24] : dcache_ret_data[31:24];
    // done_addr_off 是 2 位宽, 直接 << 3 会溢出截断为 0 → 字节选择恒取
    // 最低字节 (char-test 的 lbu 0xb1 读成 0xb0 的 'L')。乘 8 自动扩展位宽。
    // 乘法位宽须为 32 位: 2 位 off * 3'd8 的结果仍是 3 位, 8 溢出截断为 0。
    wire [31:0] done_rdata = done_word_final >> ({30'b0, done_addr_off} * 32'd8);

    reg [31:0] done_processed;
    always @(*) begin
        case (done_lw_lh_lb)
            2'b00: done_processed = done_is_sign ? {{24{done_rdata[ 7]}}, done_rdata[ 7:0]} : {24'b0, done_rdata[ 7:0]};
            2'b01: done_processed = done_is_sign ? {{16{done_rdata[15]}}, done_rdata[15:0]} : {16'b0, done_rdata[15:0]};
            default: done_processed = done_rdata;
        endcase
    end

    // 精确冲刷: 保留所有比 flush_id 老的条目并压实到队首连续区。
    // load 可乱序进入 LSU (issue 对 load 间不保序), 队列并非严格程序序,
    // 前缀扫描会在遇到年轻条目时丢弃其后更老的条目 → 其 MSHR ret 永远无法
    // 匹配队首 → 完成端口死锁。故必须保留全部 older 条目。
    wire [IQ_DEPTH-1:0] iq_is_older;
    genvar gqi;
    generate
        for (gqi = 0; gqi < IQ_DEPTH; gqi = gqi + 1) begin : gen_iq_older
            assign iq_is_older[gqi] =
                (flush_id[ID_WIDTH-1] ^ iq_tag[gqi][ID_WIDTH-1]) ?
                  (iq_tag[gqi][ID_WIDTH-2:0] > flush_id[ID_WIDTH-2:0]) :
                  (iq_tag[gqi][ID_WIDTH-2:0] < flush_id[ID_WIDTH-2:0]);
        end
    endgenerate

    // flush 压实后的新队列内容 (组合): 按原索引顺序收集所有 older 条目
    integer fj;
    reg [IQ_W:0] flush_keep;
    reg [IQ_DEPTH-1:0]        f_iq_valid;
    reg [ID_WIDTH-1:0]        f_iq_tag      [0:IQ_DEPTH-1];
    reg [            5:0]     f_iq_phy_rd   [0:IQ_DEPTH-1];
    reg [            4:0]     f_iq_rd       [0:IQ_DEPTH-1];
    reg                       f_iq_gpr_we   [0:IQ_DEPTH-1];
    reg [           31:0]     f_iq_pc       [0:IQ_DEPTH-1];
    reg [           31:0]     f_iq_inst     [0:IQ_DEPTH-1];
    reg [`EX_TO_LS_WD-1:0]    f_iq_bus      [0:IQ_DEPTH-1];
    reg [           31:0]     f_iq_addr     [0:IQ_DEPTH-1];
    reg [            3:0]     f_iq_fwd_mask [0:IQ_DEPTH-1];
    reg [           31:0]     f_iq_fwd_data [0:IQ_DEPTH-1];
    always @(*) begin
        flush_keep = 0;
        f_iq_valid = {IQ_DEPTH{1'b0}};
        for (fj = 0; fj < IQ_DEPTH; fj = fj + 1) begin
            f_iq_tag[fj]      = {ID_WIDTH{1'b0}};
            f_iq_phy_rd[fj]   = 6'b0;
            f_iq_rd[fj]       = 5'b0;
            f_iq_gpr_we[fj]   = 1'b0;
            f_iq_pc[fj]       = 32'b0;
            f_iq_inst[fj]     = 32'b0;
            f_iq_bus[fj]      = {`EX_TO_LS_WD{1'b0}};
            f_iq_addr[fj]     = 32'b0;
            f_iq_fwd_mask[fj] = 4'b0;
            f_iq_fwd_data[fj] = 32'b0;
        end
        // 压实必须按队列序 (从队首 iq_head 起), 不能按位置序 0..IQ_DEPTH-1:
        // 队列回绕时 (head > tail) 位置序会把最年轻的条目放到新队首,
        // 而 iq_pending 锁存的是原队首的数据 → ack 弹掉错误的新队首,
        // 原队首条目滞留且其 MSHR 槽已被弹 (ret 只匹配队首 tag) → 死锁
        // (lzip train: 冲刷后 40/50/56 顺序颠倒, 40 永久等 ret).
        for (fj = 0; fj < IQ_DEPTH; fj = fj + 1) begin
            if (fj < iq_cnt) begin
                if (iq_valid[iq_head + fj[IQ_W-1:0]] && iq_is_older[iq_head + fj[IQ_W-1:0]]) begin
                    f_iq_valid[flush_keep[IQ_W-1:0]]      = 1'b1;
                    f_iq_tag[flush_keep[IQ_W-1:0]]        = iq_tag[iq_head + fj[IQ_W-1:0]];
                    f_iq_phy_rd[flush_keep[IQ_W-1:0]]     = iq_phy_rd[iq_head + fj[IQ_W-1:0]];
                    f_iq_rd[flush_keep[IQ_W-1:0]]         = iq_rd[iq_head + fj[IQ_W-1:0]];
                    f_iq_gpr_we[flush_keep[IQ_W-1:0]]     = iq_gpr_we[iq_head + fj[IQ_W-1:0]];
                    f_iq_pc[flush_keep[IQ_W-1:0]]         = iq_pc[iq_head + fj[IQ_W-1:0]];
                    f_iq_inst[flush_keep[IQ_W-1:0]]       = iq_inst[iq_head + fj[IQ_W-1:0]];
                    f_iq_bus[flush_keep[IQ_W-1:0]]        = iq_bus[iq_head + fj[IQ_W-1:0]];
                    f_iq_addr[flush_keep[IQ_W-1:0]]       = iq_addr[iq_head + fj[IQ_W-1:0]];
                    f_iq_fwd_mask[flush_keep[IQ_W-1:0]]   = iq_fwd_mask[iq_head + fj[IQ_W-1:0]];
                    f_iq_fwd_data[flush_keep[IQ_W-1:0]]   = iq_fwd_data[iq_head + fj[IQ_W-1:0]];
                    flush_keep = flush_keep + 1'b1;
                end
            end
        end
    end

    integer ii;
    always @(posedge clk) begin
        if (rst) begin
            iq_valid    <= 0;
            iq_head     <= 0;
            iq_tail     <= 0;
            iq_cnt      <= 0;
            iq_pending  <= 0;
            iq_pend_data<= 32'b0;
        end
        else if (flush) begin
            iq_valid    <= f_iq_valid;
            for (ii = 0; ii < IQ_DEPTH; ii = ii + 1) begin
                iq_tag[ii]      <= f_iq_tag[ii];
                iq_phy_rd[ii]   <= f_iq_phy_rd[ii];
                iq_rd[ii]       <= f_iq_rd[ii];
                iq_gpr_we[ii]   <= f_iq_gpr_we[ii];
                iq_pc[ii]       <= f_iq_pc[ii];
                iq_inst[ii]     <= f_iq_inst[ii];
                iq_bus[ii]      <= f_iq_bus[ii];
                iq_addr[ii]     <= f_iq_addr[ii];
                iq_fwd_mask[ii] <= f_iq_fwd_mask[ii];
                iq_fwd_data[ii] <= f_iq_fwd_data[ii];
            end
            iq_head     <= 0;
            iq_tail     <= flush_keep[IQ_W-1:0];
            iq_cnt      <= flush_keep;
            // 队首 (原 head 位置) 被冲刷则清除 pending; 原 head 条目若保留
            // 则压实后位于新队首 (位置 0), pending 数据不变继续有效。
            if (iq_pending && !(iq_valid[iq_head] && iq_is_older[iq_head]))
                iq_pending <= 1'b0;
        end
        else begin
            if (iq_pending && lsu_done_ack) begin
                iq_valid[iq_head] <= 1'b0;
                iq_head  <= iq_head + 1'b1;
                iq_pending <= 1'b0;
            end
            if (iq_match) begin
                iq_pending  <= 1'b1;
                iq_pend_data <= done_processed;   // ret 拍锁存最终数据
            end
            if (iq_push && (iq_cnt < IQ_DEPTH)) begin
                iq_valid[iq_tail]   <= 1'b1;
                iq_tag[iq_tail]     <= lsu_tag;
                iq_phy_rd[iq_tail]  <= lsu_phy_rd;
                iq_rd[iq_tail]      <= rd;
                iq_gpr_we[iq_tail]  <= lsu_gpr_we;
                iq_pc[iq_tail]      <= lsu_pc;
                iq_inst[iq_tail]    <= lsu_inst;
                iq_bus[iq_tail]     <= ex_to_ls_bus;
                iq_addr[iq_tail]    <= addr;
                iq_fwd_mask[iq_tail] <= stb_forward_mask;
                iq_fwd_data[iq_tail] <= stb_forward_data;
                iq_tail             <= iq_tail + 1'b1;
            end
            if (iq_pending && lsu_done_ack && iq_push && (iq_cnt < IQ_DEPTH)) begin
                iq_cnt <= iq_cnt;
            end else if (iq_pending && lsu_done_ack) begin
                iq_cnt <= iq_cnt - 1'b1;
            end else if (iq_push && (iq_cnt < IQ_DEPTH)) begin
                iq_cnt <= iq_cnt + 1'b1;
            end
        end
    end

    wire iq_done_out = iq_pending && lsu_done_ack;
        // dcache 完成端口按队首 tag 匹配交付 (load 乱序进入 LSU 时也成立)
    assign lsu_head_valid = (iq_cnt != 0) || iq_pending;
    assign lsu_load_active = load_active;
    assign lsu_head_tag   = iq_tag[iq_head];
    // 完成输出: 电平保持 (等待 exu_slot2 ack), 数据为 ret 拍锁存值
    assign lsu_done_valid   = iq_pending;
    assign lsu_done_data    = iq_pend_data;
    assign lsu_done_phy_rd  = iq_phy_rd[iq_head];
    assign lsu_done_rd      = done_rd;
    assign lsu_done_gpr_we  = iq_gpr_we[iq_head];
    assign lsu_done_pc      = iq_pc[iq_head];
    assign lsu_done_inst    = iq_inst[iq_head];
    assign lsu_done_id      = iq_tag[iq_head];
    assign lsu_done_addr    = done_addr;


    always @(posedge clk) begin
        if (rst) begin
            lsu_valid <= 1'b0;
        end
        else begin
            if (lsu_en && ((is_write && stb_ready) || (is_read && grant_load && dcache_ready))) begin
                lsu_valid <= 1'b1;
            end
            else if (!lsu_en) begin
                lsu_valid <= 1'b1;
            end
            else begin
                lsu_valid <= 1'b0;
            end
        end
    end


endmodule
