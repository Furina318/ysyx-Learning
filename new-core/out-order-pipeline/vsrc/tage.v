module tage #(
    parameter PC_WIDTH     = 32,
    parameter GHR_WIDTH    = 64,
    parameter TAG_WIDTH    = 8 ,
    parameter COUNTER_WIDTH= 3 , // 3-bit饱和计数器提供更高的预测鲁棒性
    parameter USEFUL_WIDTH = 2 ,
    parameter BASE_SETS    = 512,
    parameter T_SETS       = 256
)(
    input  wire                 clk             ,
    input  wire                 rst             ,

    input  wire [ PC_WIDTH-1:0] pred_pc         ,
    input  wire [GHR_WIDTH-1:0] pred_ghr        ,
    output wire                 pred_taken      ,
    output wire [          2:0] pred_provider   , // 哪一张表提供了最终预测
    output wire                 pred_alt_taken  , // 次优表的预测结果

    // slot 2 预测读端口 (pc+4 双发射)
    input  wire [ PC_WIDTH-1:0] pred_pc2        ,
    output wire                 pred_taken2     ,
    output wire [          2:0] pred_provider2  ,
    output wire                 pred_alt_taken2 ,

    // slot 1 (older) 训练端口
    input  wire                 update_en1       ,
    input  wire [ PC_WIDTH-1:0] update_pc1       ,
    input  wire                 update_taken1    ,
    input  wire [          2:0] update_provider1 ,
    input  wire                 update_alt_taken1,
    input  wire                 update_pred_taken1,
    input  wire [GHR_WIDTH-1:0] update_ghr1      ,

    // slot 2 (younger) 训练端口
    input  wire                 update_en2       ,
    input  wire [ PC_WIDTH-1:0] update_pc2       ,
    input  wire                 update_taken2    ,
    input  wire [          2:0] update_provider2 ,
    input  wire                 update_alt_taken2,
    input  wire                 update_pred_taken2,
    input  wire [GHR_WIDTH-1:0] update_ghr2
);

    // 几何级数历史长度定义
    localparam L1 = 4;
    localparam L2 = 11;
    localparam L3 = 28;
    localparam L4 = 64;

    localparam BASE_IDX_W= $clog2(BASE_SETS);
    localparam T_IDX_W   = $clog2(T_SETS);
    localparam EPOCH_WIDTH = 2;

    localparam [COUNTER_WIDTH-1:0] COUNTER_ZERO       = {COUNTER_WIDTH{1'b0}};
    localparam [COUNTER_WIDTH-1:0] COUNTER_MAX        = {COUNTER_WIDTH{1'b1}};
    localparam [COUNTER_WIDTH-1:0] COUNTER_INIT       = {1'b0, {(COUNTER_WIDTH-1){1'b1}}};
    localparam [COUNTER_WIDTH-1:0] COUNTER_ALLOC_TAKEN= {1'b1, {(COUNTER_WIDTH-1){1'b0}}};
    localparam [USEFUL_WIDTH-1:0]  USEFUL_ZERO        = {USEFUL_WIDTH{1'b0}};
    localparam [USEFUL_WIDTH-1:0]  USEFUL_MAX         = {USEFUL_WIDTH{1'b1}};

    (* ram_style = "distributed" *) reg [COUNTER_WIDTH-1:0] base_table [0:BASE_SETS-1];

    (* ram_style = "distributed" *) reg [COUNTER_WIDTH-1:0] c_table_t1     [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [TAG_WIDTH-1:0]     tag_table_t1   [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [USEFUL_WIDTH-1:0]  u_table_t1     [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [EPOCH_WIDTH-1:0]   epoch_table_t1 [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [COUNTER_WIDTH-1:0] c_table_t2     [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [TAG_WIDTH-1:0]     tag_table_t2   [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [USEFUL_WIDTH-1:0]  u_table_t2     [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [EPOCH_WIDTH-1:0]   epoch_table_t2 [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [COUNTER_WIDTH-1:0] c_table_t3     [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [TAG_WIDTH-1:0]     tag_table_t3   [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [USEFUL_WIDTH-1:0]  u_table_t3     [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [EPOCH_WIDTH-1:0]   epoch_table_t3 [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [COUNTER_WIDTH-1:0] c_table_t4     [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [TAG_WIDTH-1:0]     tag_table_t4   [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [USEFUL_WIDTH-1:0]  u_table_t4     [0:T_SETS-1];
    (* ram_style = "distributed" *) reg [EPOCH_WIDTH-1:0]   epoch_table_t4 [0:T_SETS-1];

    reg [EPOCH_WIDTH-1:0] active_epoch;
    reg                   rst_seen;

    integer init_idx;

    initial begin
        active_epoch = {EPOCH_WIDTH{1'b0}};
        rst_seen     = 1'b0;
        for (init_idx = 0; init_idx < BASE_SETS; init_idx = init_idx + 1) begin
            base_table[init_idx] = COUNTER_INIT;
        end
        for (init_idx = 0; init_idx < T_SETS; init_idx = init_idx + 1) begin
            c_table_t1[init_idx]     = COUNTER_INIT;
            tag_table_t1[init_idx]   = {TAG_WIDTH{1'b0}};
            u_table_t1[init_idx]     = USEFUL_ZERO;
            epoch_table_t1[init_idx] = {EPOCH_WIDTH{1'b0}};
            c_table_t2[init_idx]     = COUNTER_INIT;
            tag_table_t2[init_idx]   = {TAG_WIDTH{1'b0}};
            u_table_t2[init_idx]     = USEFUL_ZERO;
            epoch_table_t2[init_idx] = {EPOCH_WIDTH{1'b0}};
            c_table_t3[init_idx]     = COUNTER_INIT;
            tag_table_t3[init_idx]   = {TAG_WIDTH{1'b0}};
            u_table_t3[init_idx]     = USEFUL_ZERO;
            epoch_table_t3[init_idx] = {EPOCH_WIDTH{1'b0}};
            c_table_t4[init_idx]     = COUNTER_INIT;
            tag_table_t4[init_idx]   = {TAG_WIDTH{1'b0}};
            u_table_t4[init_idx]     = USEFUL_ZERO;
            epoch_table_t4[init_idx] = {EPOCH_WIDTH{1'b0}};
        end
    end

    function [T_IDX_W-1:0] f_fold_idx;
        input [GHR_WIDTH-1:0] hist;
        input integer len;
        integer j;
        begin
            f_fold_idx = 0;
            for (j = 0; j < GHR_WIDTH; j = j + 1) begin
                if (j < len) begin
                    f_fold_idx[j % T_IDX_W] = f_fold_idx[j % T_IDX_W] ^ hist[j];
                end
            end
        end
    endfunction

    function [TAG_WIDTH-1:0] f_fold_tag;
        input [GHR_WIDTH-1:0] hist;
        input integer len;
        integer j;
        integer effective_len;
        begin
            effective_len = (len < GHR_WIDTH) ? len : GHR_WIDTH;
            f_fold_tag = 0;
            for (j = 0; j < GHR_WIDTH; j = j + 1) begin
                if (j < effective_len) begin
                    // Tag 折叠使用反向比特位，确保它计算出的哈希与 Index 完全不同
                    f_fold_tag[j % TAG_WIDTH] = f_fold_tag[j % TAG_WIDTH] ^ hist[effective_len - 1 - j];
                end
            end
        end
    endfunction

    // ==================== 预测逻辑 (不变) ====================
    wire [BASE_IDX_W-1:0] base_pred_idx = pred_pc[2 +: BASE_IDX_W];

    wire [T_IDX_W-1:0] t1_pred_idx = pred_pc[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L1);
    wire [T_IDX_W-1:0] t2_pred_idx = pred_pc[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L2);
    wire [T_IDX_W-1:0] t3_pred_idx = pred_pc[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L3);
    wire [T_IDX_W-1:0] t4_pred_idx = pred_pc[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L4);

    wire [TAG_WIDTH-1:0] t1_pred_tag = pred_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L1);
    wire [TAG_WIDTH-1:0] t2_pred_tag = pred_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L2);
    wire [TAG_WIDTH-1:0] t3_pred_tag = pred_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L3);
    wire [TAG_WIDTH-1:0] t4_pred_tag = pred_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L4);

    wire live_t1 = (epoch_table_t1[t1_pred_idx] == active_epoch);
    wire live_t2 = (epoch_table_t2[t2_pred_idx] == active_epoch);
    wire live_t3 = (epoch_table_t3[t3_pred_idx] == active_epoch);
    wire live_t4 = (epoch_table_t4[t4_pred_idx] == active_epoch);

    wire hit_t1 = live_t1 && (tag_table_t1[t1_pred_idx] == t1_pred_tag);
    wire hit_t2 = live_t2 && (tag_table_t2[t2_pred_idx] == t2_pred_tag);
    wire hit_t3 = live_t3 && (tag_table_t3[t3_pred_idx] == t3_pred_tag);
    wire hit_t4 = live_t4 && (tag_table_t4[t4_pred_idx] == t4_pred_tag);

    reg [2:0] provider;
    reg [2:0] alt_provider;

    always @(*) begin
        provider     = 3'd0;
        alt_provider = 3'd0;
        if (hit_t4) begin
            provider     = 3'd4;
            alt_provider = hit_t3 ? 3'd3 : hit_t2 ? 3'd2 : hit_t1 ? 3'd1 : 3'd0;
        end else if (hit_t3) begin
            provider     = 3'd3;
            alt_provider = hit_t2 ? 3'd2 : hit_t1 ? 3'd1 : 3'd0;
        end else if (hit_t2) begin
            provider     = 3'd2;
            alt_provider = hit_t1 ? 3'd1 : 3'd0;
        end else if (hit_t1) begin
            provider     = 3'd1;
            alt_provider = 3'd0;
        end
    end

    assign pred_provider = provider;

    wire base_dir = base_table[base_pred_idx][COUNTER_WIDTH-1];
    wire t1_dir   = c_table_t1[t1_pred_idx][COUNTER_WIDTH-1];
    wire t2_dir   = c_table_t2[t2_pred_idx][COUNTER_WIDTH-1];
    wire t3_dir   = c_table_t3[t3_pred_idx][COUNTER_WIDTH-1];
    wire t4_dir   = c_table_t4[t4_pred_idx][COUNTER_WIDTH-1];

    assign pred_taken     = (provider == 3'd4) ? t4_dir : (provider == 3'd3) ? t3_dir : (provider == 3'd2) ? t2_dir : (provider == 3'd1) ? t1_dir : base_dir;
    assign pred_alt_taken = (alt_provider == 3'd4) ? t4_dir : (alt_provider == 3'd3) ? t3_dir : (alt_provider == 3'd2) ? t2_dir : (alt_provider == 3'd1) ? t1_dir : base_dir;

    // ==================== slot 2 预测逻辑 (pc+4) ====================
    wire [BASE_IDX_W-1:0] base_pred_idx_2 = pred_pc2[2 +: BASE_IDX_W];

    wire [T_IDX_W-1:0] t1_pred_idx_2 = pred_pc2[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L1);
    wire [T_IDX_W-1:0] t2_pred_idx_2 = pred_pc2[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L2);
    wire [T_IDX_W-1:0] t3_pred_idx_2 = pred_pc2[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L3);
    wire [T_IDX_W-1:0] t4_pred_idx_2 = pred_pc2[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L4);

    wire [TAG_WIDTH-1:0] t1_pred_tag_2 = pred_pc2[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L1);
    wire [TAG_WIDTH-1:0] t2_pred_tag_2 = pred_pc2[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L2);
    wire [TAG_WIDTH-1:0] t3_pred_tag_2 = pred_pc2[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L3);
    wire [TAG_WIDTH-1:0] t4_pred_tag_2 = pred_pc2[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L4);

    wire live_t1_2 = (epoch_table_t1[t1_pred_idx_2] == active_epoch);
    wire live_t2_2 = (epoch_table_t2[t2_pred_idx_2] == active_epoch);
    wire live_t3_2 = (epoch_table_t3[t3_pred_idx_2] == active_epoch);
    wire live_t4_2 = (epoch_table_t4[t4_pred_idx_2] == active_epoch);

    wire hit_t1_2 = live_t1_2 && (tag_table_t1[t1_pred_idx_2] == t1_pred_tag_2);
    wire hit_t2_2 = live_t2_2 && (tag_table_t2[t2_pred_idx_2] == t2_pred_tag_2);
    wire hit_t3_2 = live_t3_2 && (tag_table_t3[t3_pred_idx_2] == t3_pred_tag_2);
    wire hit_t4_2 = live_t4_2 && (tag_table_t4[t4_pred_idx_2] == t4_pred_tag_2);

    reg [2:0] provider_2;
    reg [2:0] alt_provider_2;

    always @(*) begin
        provider_2     = 3'd0;
        alt_provider_2 = 3'd0;
        if (hit_t4_2) begin
            provider_2     = 3'd4;
            alt_provider_2 = hit_t3_2 ? 3'd3 : hit_t2_2 ? 3'd2 : hit_t1_2 ? 3'd1 : 3'd0;
        end else if (hit_t3_2) begin
            provider_2     = 3'd3;
            alt_provider_2 = hit_t2_2 ? 3'd2 : hit_t1_2 ? 3'd1 : 3'd0;
        end else if (hit_t2_2) begin
            provider_2     = 3'd2;
            alt_provider_2 = hit_t1_2 ? 3'd1 : 3'd0;
        end else if (hit_t1_2) begin
            provider_2     = 3'd1;
            alt_provider_2 = 3'd0;
        end
    end

    wire base_dir_2 = base_table[base_pred_idx_2][COUNTER_WIDTH-1];
    wire t1_dir_2   = c_table_t1[t1_pred_idx_2][COUNTER_WIDTH-1];
    wire t2_dir_2   = c_table_t2[t2_pred_idx_2][COUNTER_WIDTH-1];
    wire t3_dir_2   = c_table_t3[t3_pred_idx_2][COUNTER_WIDTH-1];
    wire t4_dir_2   = c_table_t4[t4_pred_idx_2][COUNTER_WIDTH-1];

    assign pred_taken2      = (provider_2 == 3'd4) ? t4_dir_2 : (provider_2 == 3'd3) ? t3_dir_2 : (provider_2 == 3'd2) ? t2_dir_2 : (provider_2 == 3'd1) ? t1_dir_2 : base_dir_2;
    assign pred_provider2   = provider_2;
    assign pred_alt_taken2  = (alt_provider_2 == 3'd4) ? t4_dir_2 : (alt_provider_2 == 3'd3) ? t3_dir_2 : (alt_provider_2 == 3'd2) ? t2_dir_2 : (alt_provider_2 == 3'd1) ? t1_dir_2 : base_dir_2;

    // ==================== slot 1 更新索引/标签计算 ====================
    wire [BASE_IDX_W-1:0] base_up_idx_1 = update_pc1[2 +: BASE_IDX_W];
    wire [T_IDX_W-1:0]    t1_up_idx_1   = update_pc1[2 +: T_IDX_W] ^ f_fold_idx(update_ghr1, L1);
    wire [T_IDX_W-1:0]    t2_up_idx_1   = update_pc1[2 +: T_IDX_W] ^ f_fold_idx(update_ghr1, L2);
    wire [T_IDX_W-1:0]    t3_up_idx_1   = update_pc1[2 +: T_IDX_W] ^ f_fold_idx(update_ghr1, L3);
    wire [T_IDX_W-1:0]    t4_up_idx_1   = update_pc1[2 +: T_IDX_W] ^ f_fold_idx(update_ghr1, L4);

    wire [TAG_WIDTH-1:0]  t1_up_tag_1   = update_pc1[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr1, L1);
    wire [TAG_WIDTH-1:0]  t2_up_tag_1   = update_pc1[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr1, L2);
    wire [TAG_WIDTH-1:0]  t3_up_tag_1   = update_pc1[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr1, L3);
    wire [TAG_WIDTH-1:0]  t4_up_tag_1   = update_pc1[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr1, L4);

    wire up_live_t1_1 = (epoch_table_t1[t1_up_idx_1] == active_epoch);
    wire up_live_t2_1 = (epoch_table_t2[t2_up_idx_1] == active_epoch);
    wire up_live_t3_1 = (epoch_table_t3[t3_up_idx_1] == active_epoch);
    wire up_live_t4_1 = (epoch_table_t4[t4_up_idx_1] == active_epoch);

    // ==================== slot 2 更新索引/标签计算 ====================
    wire [BASE_IDX_W-1:0] base_up_idx_2 = update_pc2[2 +: BASE_IDX_W];
    wire [T_IDX_W-1:0]    t1_up_idx_2   = update_pc2[2 +: T_IDX_W] ^ f_fold_idx(update_ghr2, L1);
    wire [T_IDX_W-1:0]    t2_up_idx_2   = update_pc2[2 +: T_IDX_W] ^ f_fold_idx(update_ghr2, L2);
    wire [T_IDX_W-1:0]    t3_up_idx_2   = update_pc2[2 +: T_IDX_W] ^ f_fold_idx(update_ghr2, L3);
    wire [T_IDX_W-1:0]    t4_up_idx_2   = update_pc2[2 +: T_IDX_W] ^ f_fold_idx(update_ghr2, L4);

    wire [TAG_WIDTH-1:0]  t1_up_tag_2   = update_pc2[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr2, L1);
    wire [TAG_WIDTH-1:0]  t2_up_tag_2   = update_pc2[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr2, L2);
    wire [TAG_WIDTH-1:0]  t3_up_tag_2   = update_pc2[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr2, L3);
    wire [TAG_WIDTH-1:0]  t4_up_tag_2   = update_pc2[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr2, L4);

    wire up_live_t1_2 = (epoch_table_t1[t1_up_idx_2] == active_epoch);
    wire up_live_t2_2 = (epoch_table_t2[t2_up_idx_2] == active_epoch);
    wire up_live_t3_2 = (epoch_table_t3[t3_up_idx_2] == active_epoch);
    wire up_live_t4_2 = (epoch_table_t4[t4_up_idx_2] == active_epoch);

    // ==================== slot 1 分配逻辑 ====================
    wire alloc_req_1      = update_en1 && (update_taken1 != update_pred_taken1) && update_provider1 < 3'd4;
    wire alloc_avail_t1_1 = update_provider1 < 3'd1 && (!up_live_t1_1 || u_table_t1[t1_up_idx_1] == USEFUL_ZERO);
    wire alloc_avail_t2_1 = update_provider1 < 3'd2 && (!up_live_t2_1 || u_table_t2[t2_up_idx_1] == USEFUL_ZERO);
    wire alloc_avail_t3_1 = update_provider1 < 3'd3 && (!up_live_t3_1 || u_table_t3[t3_up_idx_1] == USEFUL_ZERO);
    wire alloc_avail_t4_1 = update_provider1 < 3'd4 && (!up_live_t4_1 || u_table_t4[t4_up_idx_1] == USEFUL_ZERO);

    reg [2:0] alloc_provider_1;
    always @(*) begin
        alloc_provider_1 = 3'd0;
        if (alloc_req_1) begin
            if (alloc_avail_t1_1)            alloc_provider_1 = 3'd1;
            else if (alloc_avail_t2_1)       alloc_provider_1 = 3'd2;
            else if (alloc_avail_t3_1)       alloc_provider_1 = 3'd3;
            else if (alloc_avail_t4_1)       alloc_provider_1 = 3'd4;
        end
    end

    // ==================== slot 2 分配逻辑 ====================
    wire alloc_req_2      = update_en2 && (update_taken2 != update_pred_taken2) && update_provider2 < 3'd4;
    wire alloc_avail_t1_2 = update_provider2 < 3'd1 && (!up_live_t1_2 || u_table_t1[t1_up_idx_2] == USEFUL_ZERO);
    wire alloc_avail_t2_2 = update_provider2 < 3'd2 && (!up_live_t2_2 || u_table_t2[t2_up_idx_2] == USEFUL_ZERO);
    wire alloc_avail_t3_2 = update_provider2 < 3'd3 && (!up_live_t3_2 || u_table_t3[t3_up_idx_2] == USEFUL_ZERO);
    wire alloc_avail_t4_2 = update_provider2 < 3'd4 && (!up_live_t4_2 || u_table_t4[t4_up_idx_2] == USEFUL_ZERO);

    reg [2:0] alloc_provider_2;
    always @(*) begin
        alloc_provider_2 = 3'd0;
        if (alloc_req_2) begin
            if (alloc_avail_t1_2)            alloc_provider_2 = 3'd1;
            else if (alloc_avail_t2_2)       alloc_provider_2 = 3'd2;
            else if (alloc_avail_t3_2)       alloc_provider_2 = 3'd3;
            else if (alloc_avail_t4_2)       alloc_provider_2 = 3'd4;
        end
    end

    // ==================== slot 1 计数器/Useful 更新 ====================
    wire [COUNTER_WIDTH-1:0] c_t1_cur_1 = c_table_t1[t1_up_idx_1];
    wire [COUNTER_WIDTH-1:0] c_t2_cur_1 = c_table_t2[t2_up_idx_1];
    wire [COUNTER_WIDTH-1:0] c_t3_cur_1 = c_table_t3[t3_up_idx_1];
    wire [COUNTER_WIDTH-1:0] c_t4_cur_1 = c_table_t4[t4_up_idx_1];

    wire [USEFUL_WIDTH-1:0] u_t1_cur_1 = u_table_t1[t1_up_idx_1];
    wire [USEFUL_WIDTH-1:0] u_t2_cur_1 = u_table_t2[t2_up_idx_1];
    wire [USEFUL_WIDTH-1:0] u_t3_cur_1 = u_table_t3[t3_up_idx_1];
    wire [USEFUL_WIDTH-1:0] u_t4_cur_1 = u_table_t4[t4_up_idx_1];

    wire c_update_t1_1 = update_en1 && update_provider1 == 3'd1 && up_live_t1_1 &&
                         ((update_taken1 && c_t1_cur_1 != COUNTER_MAX) || (!update_taken1 && c_t1_cur_1 != COUNTER_ZERO));
    wire c_update_t2_1 = update_en1 && update_provider1 == 3'd2 && up_live_t2_1 &&
                         ((update_taken1 && c_t2_cur_1 != COUNTER_MAX) || (!update_taken1 && c_t2_cur_1 != COUNTER_ZERO));
    wire c_update_t3_1 = update_en1 && update_provider1 == 3'd3 && up_live_t3_1 &&
                         ((update_taken1 && c_t3_cur_1 != COUNTER_MAX) || (!update_taken1 && c_t3_cur_1 != COUNTER_ZERO));
    wire c_update_t4_1 = update_en1 && update_provider1 == 3'd4 && up_live_t4_1 &&
                         ((update_taken1 && c_t4_cur_1 != COUNTER_MAX) || (!update_taken1 && c_t4_cur_1 != COUNTER_ZERO));

    wire c_alloc_t1_1 = update_en1 && alloc_provider_1 == 3'd1;
    wire c_alloc_t2_1 = update_en1 && alloc_provider_1 == 3'd2;
    wire c_alloc_t3_1 = update_en1 && alloc_provider_1 == 3'd3;
    wire c_alloc_t4_1 = update_en1 && alloc_provider_1 == 3'd4;

    wire c_we_t1_1 = c_update_t1_1 || c_alloc_t1_1;
    wire c_we_t2_1 = c_update_t2_1 || c_alloc_t2_1;
    wire c_we_t3_1 = c_update_t3_1 || c_alloc_t3_1;
    wire c_we_t4_1 = c_update_t4_1 || c_alloc_t4_1;

    wire [COUNTER_WIDTH-1:0] c_update_data_t1_1 = update_taken1 ? c_t1_cur_1 + 1'b1 : c_t1_cur_1 - 1'b1;
    wire [COUNTER_WIDTH-1:0] c_update_data_t2_1 = update_taken1 ? c_t2_cur_1 + 1'b1 : c_t2_cur_1 - 1'b1;
    wire [COUNTER_WIDTH-1:0] c_update_data_t3_1 = update_taken1 ? c_t3_cur_1 + 1'b1 : c_t3_cur_1 - 1'b1;
    wire [COUNTER_WIDTH-1:0] c_update_data_t4_1 = update_taken1 ? c_t4_cur_1 + 1'b1 : c_t4_cur_1 - 1'b1;
    wire [COUNTER_WIDTH-1:0] c_alloc_data_1     = update_taken1 ? COUNTER_ALLOC_TAKEN : COUNTER_INIT;

    wire [COUNTER_WIDTH-1:0] c_wdata_t1_1 = c_alloc_t1_1 ? c_alloc_data_1 : c_update_data_t1_1;
    wire [COUNTER_WIDTH-1:0] c_wdata_t2_1 = c_alloc_t2_1 ? c_alloc_data_1 : c_update_data_t2_1;
    wire [COUNTER_WIDTH-1:0] c_wdata_t3_1 = c_alloc_t3_1 ? c_alloc_data_1 : c_update_data_t3_1;
    wire [COUNTER_WIDTH-1:0] c_wdata_t4_1 = c_alloc_t4_1 ? c_alloc_data_1 : c_update_data_t4_1;

    wire useful_inc_req_1 = update_en1 && update_provider1 != 3'd0 &&
                            (update_taken1 == update_pred_taken1) && (update_alt_taken1 != update_pred_taken1);
    wire useful_dec_req_1 = update_en1 && update_provider1 != 3'd0 &&
                            (update_taken1 != update_pred_taken1) && (update_alt_taken1 == update_pred_taken1);
    wire useful_age_req_1 = update_en1 && alloc_req_1 && alloc_provider_1 == 3'd0;

    wire u_inc_t1_1 = useful_inc_req_1 && update_provider1 == 3'd1 && up_live_t1_1 && u_t1_cur_1 != USEFUL_MAX;
    wire u_inc_t2_1 = useful_inc_req_1 && update_provider1 == 3'd2 && up_live_t2_1 && u_t2_cur_1 != USEFUL_MAX;
    wire u_inc_t3_1 = useful_inc_req_1 && update_provider1 == 3'd3 && up_live_t3_1 && u_t3_cur_1 != USEFUL_MAX;
    wire u_inc_t4_1 = useful_inc_req_1 && update_provider1 == 3'd4 && up_live_t4_1 && u_t4_cur_1 != USEFUL_MAX;

    wire u_dec_t1_1 = useful_dec_req_1 && update_provider1 == 3'd1 && up_live_t1_1 && u_t1_cur_1 != USEFUL_ZERO;
    wire u_dec_t2_1 = useful_dec_req_1 && update_provider1 == 3'd2 && up_live_t2_1 && u_t2_cur_1 != USEFUL_ZERO;
    wire u_dec_t3_1 = useful_dec_req_1 && update_provider1 == 3'd3 && up_live_t3_1 && u_t3_cur_1 != USEFUL_ZERO;
    wire u_dec_t4_1 = useful_dec_req_1 && update_provider1 == 3'd4 && up_live_t4_1 && u_t4_cur_1 != USEFUL_ZERO;

    wire u_age_t1_1 = useful_age_req_1 && update_provider1 < 3'd1 && up_live_t1_1 && u_t1_cur_1 != USEFUL_ZERO;
    wire u_age_t2_1 = useful_age_req_1 && update_provider1 < 3'd2 && up_live_t2_1 && u_t2_cur_1 != USEFUL_ZERO;
    wire u_age_t3_1 = useful_age_req_1 && update_provider1 < 3'd3 && up_live_t3_1 && u_t3_cur_1 != USEFUL_ZERO;
    wire u_age_t4_1 = useful_age_req_1 && update_provider1 < 3'd4 && up_live_t4_1 && u_t4_cur_1 != USEFUL_ZERO;

    wire u_alloc_t1_1 = update_en1 && alloc_provider_1 == 3'd1;
    wire u_alloc_t2_1 = update_en1 && alloc_provider_1 == 3'd2;
    wire u_alloc_t3_1 = update_en1 && alloc_provider_1 == 3'd3;
    wire u_alloc_t4_1 = update_en1 && alloc_provider_1 == 3'd4;

    wire u_we_t1_1 = u_alloc_t1_1 || u_inc_t1_1 || u_dec_t1_1 || u_age_t1_1;
    wire u_we_t2_1 = u_alloc_t2_1 || u_inc_t2_1 || u_dec_t2_1 || u_age_t2_1;
    wire u_we_t3_1 = u_alloc_t3_1 || u_inc_t3_1 || u_dec_t3_1 || u_age_t3_1;
    wire u_we_t4_1 = u_alloc_t4_1 || u_inc_t4_1 || u_dec_t4_1 || u_age_t4_1;

    wire [USEFUL_WIDTH-1:0] u_wdata_t1_1 = u_alloc_t1_1 ? USEFUL_ZERO : u_inc_t1_1 ? u_t1_cur_1 + 1'b1 : u_t1_cur_1 - 1'b1;
    wire [USEFUL_WIDTH-1:0] u_wdata_t2_1 = u_alloc_t2_1 ? USEFUL_ZERO : u_inc_t2_1 ? u_t2_cur_1 + 1'b1 : u_t2_cur_1 - 1'b1;
    wire [USEFUL_WIDTH-1:0] u_wdata_t3_1 = u_alloc_t3_1 ? USEFUL_ZERO : u_inc_t3_1 ? u_t3_cur_1 + 1'b1 : u_t3_cur_1 - 1'b1;
    wire [USEFUL_WIDTH-1:0] u_wdata_t4_1 = u_alloc_t4_1 ? USEFUL_ZERO : u_inc_t4_1 ? u_t4_cur_1 + 1'b1 : u_t4_cur_1 - 1'b1;

    // ==================== slot 2 计数器/Useful 更新 ====================
    wire [COUNTER_WIDTH-1:0] c_t1_cur_2 = c_table_t1[t1_up_idx_2];
    wire [COUNTER_WIDTH-1:0] c_t2_cur_2 = c_table_t2[t2_up_idx_2];
    wire [COUNTER_WIDTH-1:0] c_t3_cur_2 = c_table_t3[t3_up_idx_2];
    wire [COUNTER_WIDTH-1:0] c_t4_cur_2 = c_table_t4[t4_up_idx_2];

    wire [USEFUL_WIDTH-1:0] u_t1_cur_2 = u_table_t1[t1_up_idx_2];
    wire [USEFUL_WIDTH-1:0] u_t2_cur_2 = u_table_t2[t2_up_idx_2];
    wire [USEFUL_WIDTH-1:0] u_t3_cur_2 = u_table_t3[t3_up_idx_2];
    wire [USEFUL_WIDTH-1:0] u_t4_cur_2 = u_table_t4[t4_up_idx_2];

    wire c_update_t1_2 = update_en2 && update_provider2 == 3'd1 && up_live_t1_2 &&
                         ((update_taken2 && c_t1_cur_2 != COUNTER_MAX) || (!update_taken2 && c_t1_cur_2 != COUNTER_ZERO));
    wire c_update_t2_2 = update_en2 && update_provider2 == 3'd2 && up_live_t2_2 &&
                         ((update_taken2 && c_t2_cur_2 != COUNTER_MAX) || (!update_taken2 && c_t2_cur_2 != COUNTER_ZERO));
    wire c_update_t3_2 = update_en2 && update_provider2 == 3'd3 && up_live_t3_2 &&
                         ((update_taken2 && c_t3_cur_2 != COUNTER_MAX) || (!update_taken2 && c_t3_cur_2 != COUNTER_ZERO));
    wire c_update_t4_2 = update_en2 && update_provider2 == 3'd4 && up_live_t4_2 &&
                         ((update_taken2 && c_t4_cur_2 != COUNTER_MAX) || (!update_taken2 && c_t4_cur_2 != COUNTER_ZERO));

    wire c_alloc_t1_2 = update_en2 && alloc_provider_2 == 3'd1;
    wire c_alloc_t2_2 = update_en2 && alloc_provider_2 == 3'd2;
    wire c_alloc_t3_2 = update_en2 && alloc_provider_2 == 3'd3;
    wire c_alloc_t4_2 = update_en2 && alloc_provider_2 == 3'd4;

    wire c_we_t1_2 = c_update_t1_2 || c_alloc_t1_2;
    wire c_we_t2_2 = c_update_t2_2 || c_alloc_t2_2;
    wire c_we_t3_2 = c_update_t3_2 || c_alloc_t3_2;
    wire c_we_t4_2 = c_update_t4_2 || c_alloc_t4_2;

    wire [COUNTER_WIDTH-1:0] c_update_data_t1_2 = update_taken2 ? c_t1_cur_2 + 1'b1 : c_t1_cur_2 - 1'b1;
    wire [COUNTER_WIDTH-1:0] c_update_data_t2_2 = update_taken2 ? c_t2_cur_2 + 1'b1 : c_t2_cur_2 - 1'b1;
    wire [COUNTER_WIDTH-1:0] c_update_data_t3_2 = update_taken2 ? c_t3_cur_2 + 1'b1 : c_t3_cur_2 - 1'b1;
    wire [COUNTER_WIDTH-1:0] c_update_data_t4_2 = update_taken2 ? c_t4_cur_2 + 1'b1 : c_t4_cur_2 - 1'b1;
    wire [COUNTER_WIDTH-1:0] c_alloc_data_2     = update_taken2 ? COUNTER_ALLOC_TAKEN : COUNTER_INIT;

    wire [COUNTER_WIDTH-1:0] c_wdata_t1_2 = c_alloc_t1_2 ? c_alloc_data_2 : c_update_data_t1_2;
    wire [COUNTER_WIDTH-1:0] c_wdata_t2_2 = c_alloc_t2_2 ? c_alloc_data_2 : c_update_data_t2_2;
    wire [COUNTER_WIDTH-1:0] c_wdata_t3_2 = c_alloc_t3_2 ? c_alloc_data_2 : c_update_data_t3_2;
    wire [COUNTER_WIDTH-1:0] c_wdata_t4_2 = c_alloc_t4_2 ? c_alloc_data_2 : c_update_data_t4_2;

    wire useful_inc_req_2 = update_en2 && update_provider2 != 3'd0 &&
                            (update_taken2 == update_pred_taken2) && (update_alt_taken2 != update_pred_taken2);
    wire useful_dec_req_2 = update_en2 && update_provider2 != 3'd0 &&
                            (update_taken2 != update_pred_taken2) && (update_alt_taken2 == update_pred_taken2);
    wire useful_age_req_2 = update_en2 && alloc_req_2 && alloc_provider_2 == 3'd0;

    wire u_inc_t1_2 = useful_inc_req_2 && update_provider2 == 3'd1 && up_live_t1_2 && u_t1_cur_2 != USEFUL_MAX;
    wire u_inc_t2_2 = useful_inc_req_2 && update_provider2 == 3'd2 && up_live_t2_2 && u_t2_cur_2 != USEFUL_MAX;
    wire u_inc_t3_2 = useful_inc_req_2 && update_provider2 == 3'd3 && up_live_t3_2 && u_t3_cur_2 != USEFUL_MAX;
    wire u_inc_t4_2 = useful_inc_req_2 && update_provider2 == 3'd4 && up_live_t4_2 && u_t4_cur_2 != USEFUL_MAX;

    wire u_dec_t1_2 = useful_dec_req_2 && update_provider2 == 3'd1 && up_live_t1_2 && u_t1_cur_2 != USEFUL_ZERO;
    wire u_dec_t2_2 = useful_dec_req_2 && update_provider2 == 3'd2 && up_live_t2_2 && u_t2_cur_2 != USEFUL_ZERO;
    wire u_dec_t3_2 = useful_dec_req_2 && update_provider2 == 3'd3 && up_live_t3_2 && u_t3_cur_2 != USEFUL_ZERO;
    wire u_dec_t4_2 = useful_dec_req_2 && update_provider2 == 3'd4 && up_live_t4_2 && u_t4_cur_2 != USEFUL_ZERO;

    wire u_age_t1_2 = useful_age_req_2 && update_provider2 < 3'd1 && up_live_t1_2 && u_t1_cur_2 != USEFUL_ZERO;
    wire u_age_t2_2 = useful_age_req_2 && update_provider2 < 3'd2 && up_live_t2_2 && u_t2_cur_2 != USEFUL_ZERO;
    wire u_age_t3_2 = useful_age_req_2 && update_provider2 < 3'd3 && up_live_t3_2 && u_t3_cur_2 != USEFUL_ZERO;
    wire u_age_t4_2 = useful_age_req_2 && update_provider2 < 3'd4 && up_live_t4_2 && u_t4_cur_2 != USEFUL_ZERO;

    wire u_alloc_t1_2 = update_en2 && alloc_provider_2 == 3'd1;
    wire u_alloc_t2_2 = update_en2 && alloc_provider_2 == 3'd2;
    wire u_alloc_t3_2 = update_en2 && alloc_provider_2 == 3'd3;
    wire u_alloc_t4_2 = update_en2 && alloc_provider_2 == 3'd4;

    wire u_we_t1_2 = u_alloc_t1_2 || u_inc_t1_2 || u_dec_t1_2 || u_age_t1_2;
    wire u_we_t2_2 = u_alloc_t2_2 || u_inc_t2_2 || u_dec_t2_2 || u_age_t2_2;
    wire u_we_t3_2 = u_alloc_t3_2 || u_inc_t3_2 || u_dec_t3_2 || u_age_t3_2;
    wire u_we_t4_2 = u_alloc_t4_2 || u_inc_t4_2 || u_dec_t4_2 || u_age_t4_2;

    wire [USEFUL_WIDTH-1:0] u_wdata_t1_2 = u_alloc_t1_2 ? USEFUL_ZERO : u_inc_t1_2 ? u_t1_cur_2 + 1'b1 : u_t1_cur_2 - 1'b1;
    wire [USEFUL_WIDTH-1:0] u_wdata_t2_2 = u_alloc_t2_2 ? USEFUL_ZERO : u_inc_t2_2 ? u_t2_cur_2 + 1'b1 : u_t2_cur_2 - 1'b1;
    wire [USEFUL_WIDTH-1:0] u_wdata_t3_2 = u_alloc_t3_2 ? USEFUL_ZERO : u_inc_t3_2 ? u_t3_cur_2 + 1'b1 : u_t3_cur_2 - 1'b1;
    wire [USEFUL_WIDTH-1:0] u_wdata_t4_2 = u_alloc_t4_2 ? USEFUL_ZERO : u_inc_t4_2 ? u_t4_cur_2 + 1'b1 : u_t4_cur_2 - 1'b1;

    // ==================== 冲突检测 (同表同索引) ====================
    wire conflict_t1 = c_we_t1_1 && c_we_t1_2 && (t1_up_idx_1 == t1_up_idx_2);
    wire conflict_t2 = c_we_t2_1 && c_we_t2_2 && (t2_up_idx_1 == t2_up_idx_2);
    wire conflict_t3 = c_we_t3_1 && c_we_t3_2 && (t3_up_idx_1 == t3_up_idx_2);
    wire conflict_t4 = c_we_t4_1 && c_we_t4_2 && (t4_up_idx_1 == t4_up_idx_2);

    // 冲突时 slot 2 优先; slot 1 仅在无冲突或不同索引时写入
    wire c_we_t1_final_1 = c_we_t1_1 && !conflict_t1;
    wire c_we_t2_final_1 = c_we_t2_1 && !conflict_t2;
    wire c_we_t3_final_1 = c_we_t3_1 && !conflict_t3;
    wire c_we_t4_final_1 = c_we_t4_1 && !conflict_t4;

    wire u_we_t1_final_1 = u_we_t1_1 && !conflict_t1;
    wire u_we_t2_final_1 = u_we_t2_1 && !conflict_t2;
    wire u_we_t3_final_1 = u_we_t3_1 && !conflict_t3;
    wire u_we_t4_final_1 = u_we_t4_1 && !conflict_t4;

    // slot 2 总是写入 (冲突时覆盖 slot 1)
    wire c_we_t1_final_2 = c_we_t1_2;
    wire c_we_t2_final_2 = c_we_t2_2;
    wire c_we_t3_final_2 = c_we_t3_2;
    wire c_we_t4_final_2 = c_we_t4_2;

    wire u_we_t1_final_2 = u_we_t1_2;
    wire u_we_t2_final_2 = u_we_t2_2;
    wire u_we_t3_final_2 = u_we_t3_2;
    wire u_we_t4_final_2 = u_we_t4_2;

    // ==================== 时序更新逻辑 ====================
    always @(posedge clk) begin
        if (rst) begin
            if (!rst_seen) begin
                active_epoch <= active_epoch + 1'b1;
            end
            rst_seen <= 1'b1;
        end else begin
            rst_seen <= 1'b0;

            // --- Base 表更新 ---
            if (update_en1) begin
                if (update_provider1 == 3'd0) begin
                    if (update_taken1 && base_table[base_up_idx_1] != COUNTER_MAX)
                        base_table[base_up_idx_1] <= base_table[base_up_idx_1] + 1'b1;
                    if (!update_taken1 && base_table[base_up_idx_1] != COUNTER_ZERO)
                        base_table[base_up_idx_1] <= base_table[base_up_idx_1] - 1'b1;
                end
            end
            if (update_en2) begin
                if (update_provider2 == 3'd0) begin
                    // slot 2 base 更新: 仅在索引不同时独立写入, 同索引时 slot 2 覆盖
                    if (update_taken2 && base_table[base_up_idx_2] != COUNTER_MAX)
                        base_table[base_up_idx_2] <= base_table[base_up_idx_2] + 1'b1;
                    if (!update_taken2 && base_table[base_up_idx_2] != COUNTER_ZERO)
                        base_table[base_up_idx_2] <= base_table[base_up_idx_2] - 1'b1;
                end
            end

            // --- slot 1 表写入 (仅在无冲突时) ---
            if (c_we_t1_final_1) c_table_t1[t1_up_idx_1] <= c_wdata_t1_1;
            if (c_we_t2_final_1) c_table_t2[t2_up_idx_1] <= c_wdata_t2_1;
            if (c_we_t3_final_1) c_table_t3[t3_up_idx_1] <= c_wdata_t3_1;
            if (c_we_t4_final_1) c_table_t4[t4_up_idx_1] <= c_wdata_t4_1;

            if (u_we_t1_final_1) u_table_t1[t1_up_idx_1] <= u_wdata_t1_1;
            if (u_we_t2_final_1) u_table_t2[t2_up_idx_1] <= u_wdata_t2_1;
            if (u_we_t3_final_1) u_table_t3[t3_up_idx_1] <= u_wdata_t3_1;
            if (u_we_t4_final_1) u_table_t4[t4_up_idx_1] <= u_wdata_t4_1;

            // --- slot 2 表写入 (总是执行, 冲突时覆盖 slot 1) ---
            if (c_we_t1_final_2) c_table_t1[t1_up_idx_2] <= c_wdata_t1_2;
            if (c_we_t2_final_2) c_table_t2[t2_up_idx_2] <= c_wdata_t2_2;
            if (c_we_t3_final_2) c_table_t3[t3_up_idx_2] <= c_wdata_t3_2;
            if (c_we_t4_final_2) c_table_t4[t4_up_idx_2] <= c_wdata_t4_2;

            if (u_we_t1_final_2) u_table_t1[t1_up_idx_2] <= u_wdata_t1_2;
            if (u_we_t2_final_2) u_table_t2[t2_up_idx_2] <= u_wdata_t2_2;
            if (u_we_t3_final_2) u_table_t3[t3_up_idx_2] <= u_wdata_t3_2;
            if (u_we_t4_final_2) u_table_t4[t4_up_idx_2] <= u_wdata_t4_2;

            // --- slot 1 Tag/Epoch 分配 ---
            if (alloc_provider_1 == 3'd1) begin
                tag_table_t1[t1_up_idx_1]   <= t1_up_tag_1;
                epoch_table_t1[t1_up_idx_1] <= active_epoch;
            end
            if (alloc_provider_1 == 3'd2) begin
                tag_table_t2[t2_up_idx_1]   <= t2_up_tag_1;
                epoch_table_t2[t2_up_idx_1] <= active_epoch;
            end
            if (alloc_provider_1 == 3'd3) begin
                tag_table_t3[t3_up_idx_1]   <= t3_up_tag_1;
                epoch_table_t3[t3_up_idx_1] <= active_epoch;
            end
            if (alloc_provider_1 == 3'd4) begin
                tag_table_t4[t4_up_idx_1]   <= t4_up_tag_1;
                epoch_table_t4[t4_up_idx_1] <= active_epoch;
            end

            // --- slot 2 Tag/Epoch 分配 (always writes, overrides slot 1 on conflict) ---
            if (alloc_provider_2 == 3'd1) begin
                tag_table_t1[t1_up_idx_2]   <= t1_up_tag_2;
                epoch_table_t1[t1_up_idx_2] <= active_epoch;
            end
            if (alloc_provider_2 == 3'd2) begin
                tag_table_t2[t2_up_idx_2]   <= t2_up_tag_2;
                epoch_table_t2[t2_up_idx_2] <= active_epoch;
            end
            if (alloc_provider_2 == 3'd3) begin
                tag_table_t3[t3_up_idx_2]   <= t3_up_tag_2;
                epoch_table_t3[t3_up_idx_2] <= active_epoch;
            end
            if (alloc_provider_2 == 3'd4) begin
                tag_table_t4[t4_up_idx_2]   <= t4_up_tag_2;
                epoch_table_t4[t4_up_idx_2] <= active_epoch;
            end
        end
    end
endmodule
