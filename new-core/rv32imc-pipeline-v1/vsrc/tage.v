module tage #(
    parameter PC_WIDTH     = 32,
    parameter GHR_WIDTH    = 64, 
    parameter TAG_WIDTH    = 9 ,
    parameter COUNTER_WIDTH= 3 , // 3-bit饱和计数器提供更高的预测鲁棒性
    parameter USEFUL_WIDTH = 2
)(
    input  wire                 clk             ,
    input  wire                 rst             ,
  
    input  wire [ PC_WIDTH-1:0] pred_pc         ,
    input  wire [GHR_WIDTH-1:0] pred_ghr        ,
    output wire                 pred_taken      ,
    output wire [          2:0] pred_provider   , // 哪一张表提供了最终预测
    output wire                 pred_alt_taken  , // 次优表的预测结果

    input  wire                 update_en       ,
    input  wire [ PC_WIDTH-1:0] update_pc       ,
    input  wire                 update_taken    ,
    input  wire [          2:0] update_provider ,
    input  wire                 update_alt_taken,
    input  wire                 update_pred_taken,
    input  wire [GHR_WIDTH-1:0] update_ghr
);

    // 几何级数历史长度定义
    localparam L1 = 4;
    localparam L2 = 11;
    localparam L3 = 28;
    localparam L4 = 64;

    localparam BASE_SETS = 512;
    localparam T_SETS    = 256;
    localparam BASE_IDX_W= $clog2(BASE_SETS);
    localparam T_IDX_W   = $clog2(T_SETS);

    reg [2:0] base_table [0:BASE_SETS-1];

    reg [COUNTER_WIDTH-1:0] c_table_t1 [0:T_SETS-1]; reg [TAG_WIDTH-1:0] tag_table_t1 [0:T_SETS-1]; reg [USEFUL_WIDTH-1:0] u_table_t1 [0:T_SETS-1];
    reg [COUNTER_WIDTH-1:0] c_table_t2 [0:T_SETS-1]; reg [TAG_WIDTH-1:0] tag_table_t2 [0:T_SETS-1]; reg [USEFUL_WIDTH-1:0] u_table_t2 [0:T_SETS-1];
    reg [COUNTER_WIDTH-1:0] c_table_t3 [0:T_SETS-1]; reg [TAG_WIDTH-1:0] tag_table_t3 [0:T_SETS-1]; reg [USEFUL_WIDTH-1:0] u_table_t3 [0:T_SETS-1];
    reg [COUNTER_WIDTH-1:0] c_table_t4 [0:T_SETS-1]; reg [TAG_WIDTH-1:0] tag_table_t4 [0:T_SETS-1]; reg [USEFUL_WIDTH-1:0] u_table_t4 [0:T_SETS-1];


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
        begin
            f_fold_tag = 0;
            for (j = 0; j < GHR_WIDTH; j = j + 1) begin
                if (j < len) begin
                    // Tag 折叠使用反向比特位，确保它计算出的哈希与 Index 完全不同
                    f_fold_tag[j % TAG_WIDTH] = f_fold_tag[j % TAG_WIDTH] ^ hist[len - 1 - j];
                end
            end
        end
    endfunction

    wire [BASE_IDX_W-1:0] base_pred_idx = pred_pc[2 +: BASE_IDX_W];

    wire [T_IDX_W-1:0] t1_pred_idx = pred_pc[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L1);
    wire [T_IDX_W-1:0] t2_pred_idx = pred_pc[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L2);
    wire [T_IDX_W-1:0] t3_pred_idx = pred_pc[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L3);
    wire [T_IDX_W-1:0] t4_pred_idx = pred_pc[2 +: T_IDX_W] ^ f_fold_idx(pred_ghr, L4);

    wire [TAG_WIDTH-1:0] t1_pred_tag = pred_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L1);
    wire [TAG_WIDTH-1:0] t2_pred_tag = pred_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L2);
    wire [TAG_WIDTH-1:0] t3_pred_tag = pred_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L3);
    wire [TAG_WIDTH-1:0] t4_pred_tag = pred_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(pred_ghr, L4);

    wire hit_t1 = (tag_table_t1[t1_pred_idx] == t1_pred_tag);
    wire hit_t2 = (tag_table_t2[t2_pred_idx] == t2_pred_tag);
    wire hit_t3 = (tag_table_t3[t3_pred_idx] == t3_pred_tag);
    wire hit_t4 = (tag_table_t4[t4_pred_idx] == t4_pred_tag);

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

    wire base_dir = base_table[base_pred_idx][2];
    wire t1_dir   = c_table_t1[t1_pred_idx][COUNTER_WIDTH-1];
    wire t2_dir   = c_table_t2[t2_pred_idx][COUNTER_WIDTH-1];
    wire t3_dir   = c_table_t3[t3_pred_idx][COUNTER_WIDTH-1];
    wire t4_dir   = c_table_t4[t4_pred_idx][COUNTER_WIDTH-1];

    assign pred_taken     = (provider == 3'd4) ? t4_dir : (provider == 3'd3) ? t3_dir : (provider == 3'd2) ? t2_dir : (provider == 3'd1) ? t1_dir : base_dir;
    assign pred_alt_taken = (alt_provider == 3'd4) ? t4_dir : (alt_provider == 3'd3) ? t3_dir : (alt_provider == 3'd2) ? t2_dir : (alt_provider == 3'd1) ? t1_dir : base_dir;

    wire [BASE_IDX_W-1:0] base_up_idx = update_pc[2 +: BASE_IDX_W];
    wire [T_IDX_W-1:0]    t1_up_idx   = update_pc[2 +: T_IDX_W] ^ f_fold_idx(update_ghr, L1);
    wire [T_IDX_W-1:0]    t2_up_idx   = update_pc[2 +: T_IDX_W] ^ f_fold_idx(update_ghr, L2);
    wire [T_IDX_W-1:0]    t3_up_idx   = update_pc[2 +: T_IDX_W] ^ f_fold_idx(update_ghr, L3);
    wire [T_IDX_W-1:0]    t4_up_idx   = update_pc[2 +: T_IDX_W] ^ f_fold_idx(update_ghr, L4);

    wire [TAG_WIDTH-1:0]  t1_up_tag   = update_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr, L1);
    wire [TAG_WIDTH-1:0]  t2_up_tag   = update_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr, L2);
    wire [TAG_WIDTH-1:0]  t3_up_tag   = update_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr, L3);
    wire [TAG_WIDTH-1:0]  t4_up_tag   = update_pc[2+T_IDX_W +: TAG_WIDTH] ^ f_fold_tag(update_ghr, L4);

    integer idx;
    reg alloc_success;

    always @(posedge clk) begin
        if (rst) begin
            for (idx = 0; idx < BASE_SETS; idx = idx + 1) base_table[idx] = 3'b011; 
            for (idx = 0; idx < T_SETS; idx = idx + 1) begin
                c_table_t1[idx] = 3'b011; tag_table_t1[idx] = 0; u_table_t1[idx] = 0;
                c_table_t2[idx] = 3'b011; tag_table_t2[idx] = 0; u_table_t2[idx] = 0;
                c_table_t3[idx] = 3'b011; tag_table_t3[idx] = 0; u_table_t3[idx] = 0;
                c_table_t4[idx] = 3'b011; tag_table_t4[idx] = 0; u_table_t4[idx] = 0;
            end
        end else if (update_en) begin
            
            // 更新 Provider 饱和计数器
            case (update_provider)
                3'd0: begin
                    if (update_taken && base_table[base_up_idx] != 3'b111) base_table[base_up_idx] <= base_table[base_up_idx] + 1'b1;
                    if (!update_taken && base_table[base_up_idx] != 3'b000) base_table[base_up_idx] <= base_table[base_up_idx] - 1'b1;
                end
                3'd1: begin
                    if (update_taken && c_table_t1[t1_up_idx] != 3'b111) c_table_t1[t1_up_idx] <= c_table_t1[t1_up_idx] + 1'b1;
                    if (!update_taken && c_table_t1[t1_up_idx] != 3'b000) c_table_t1[t1_up_idx] <= c_table_t1[t1_up_idx] - 1'b1;
                end
                3'd2: begin
                    if (update_taken && c_table_t2[t2_up_idx] != 3'b111) c_table_t2[t2_up_idx] <= c_table_t2[t2_up_idx] + 1'b1;
                    if (!update_taken && c_table_t2[t2_up_idx] != 3'b000) c_table_t2[t2_up_idx] <= c_table_t2[t2_up_idx] - 1'b1;
                end
                3'd3: begin
                    if (update_taken && c_table_t3[t3_up_idx] != 3'b111) c_table_t3[t3_up_idx] <= c_table_t3[t3_up_idx] + 1'b1;
                    if (!update_taken && c_table_t3[t3_up_idx] != 3'b000) c_table_t3[t3_up_idx] <= c_table_t3[t3_up_idx] - 1'b1;
                end
                3'd4: begin
                    if (update_taken && c_table_t4[t4_up_idx] != 3'b111) c_table_t4[t4_up_idx] <= c_table_t4[t4_up_idx] + 1'b1;
                    if (!update_taken && c_table_t4[t4_up_idx] != 3'b000) c_table_t4[t4_up_idx] <= c_table_t4[t4_up_idx] - 1'b1;
                end
                default: begin end
            endcase

            // 维护 Useful 标志位
            if (update_provider != 3'd0 && (update_taken == update_pred_taken) && (update_alt_taken != update_pred_taken)) begin
                case (update_provider)
                    3'd1: if (u_table_t1[t1_up_idx] != 2'b11) u_table_t1[t1_up_idx] <= u_table_t1[t1_up_idx] + 1'b1;
                    3'd2: if (u_table_t2[t2_up_idx] != 2'b11) u_table_t2[t2_up_idx] <= u_table_t2[t2_up_idx] + 1'b1;
                    3'd3: if (u_table_t3[t3_up_idx] != 2'b11) u_table_t3[t3_up_idx] <= u_table_t3[t3_up_idx] + 1'b1;
                    3'd4: if (u_table_t4[t4_up_idx] != 2'b11) u_table_t4[t4_up_idx] <= u_table_t4[t4_up_idx] + 1'b1;
                    default: begin end
                endcase
            end else if (update_provider != 3'd0 && (update_taken != update_pred_taken) && (update_alt_taken == update_pred_taken)) begin
                case (update_provider)
                    3'd1: if (u_table_t1[t1_up_idx] != 2'b00) u_table_t1[t1_up_idx] <= u_table_t1[t1_up_idx] - 1'b1;
                    3'd2: if (u_table_t2[t2_up_idx] != 2'b00) u_table_t2[t2_up_idx] <= u_table_t2[t2_up_idx] - 1'b1;
                    3'd3: if (u_table_t3[t3_up_idx] != 2'b00) u_table_t3[t3_up_idx] <= u_table_t3[t3_up_idx] - 1'b1;
                    3'd4: if (u_table_t4[t4_up_idx] != 2'b00) u_table_t4[t4_up_idx] <= u_table_t4[t4_up_idx] - 1'b1;
                    default: begin end
                endcase
            end

            // 全新槽位分配与窃取控制
            if (update_taken != update_pred_taken && update_provider < 3'd4) begin
                alloc_success = 1'b0;
                
                if (!alloc_success && (update_provider < 3'd1) && (u_table_t1[t1_up_idx] == 2'b00)) begin
                    tag_table_t1[t1_up_idx] <= t1_up_tag; 
                    c_table_t1[t1_up_idx]   <= update_taken ? 3'b100 : 3'b011; 
                    u_table_t1[t1_up_idx]   <= 2'b00;
                    alloc_success = 1'b1;
                end 
                if (!alloc_success && (update_provider < 3'd2) && (u_table_t2[t2_up_idx] == 2'b00)) begin
                    tag_table_t2[t2_up_idx] <= t2_up_tag; 
                    c_table_t2[t2_up_idx]   <= update_taken ? 3'b100 : 3'b011; 
                    u_table_t2[t2_up_idx]   <= 2'b00;
                    alloc_success = 1'b1;
                end 
                if (!alloc_success && (update_provider < 3'd3) && (u_table_t3[t3_up_idx] == 2'b00)) begin
                    tag_table_t3[t3_up_idx] <= t3_up_tag; 
                    c_table_t3[t3_up_idx]   <= update_taken ? 3'b100 : 3'b011; 
                    u_table_t3[t3_up_idx]   <= 2'b00;
                    alloc_success = 1'b1;
                end 
                if (!alloc_success && (update_provider < 3'd4) && (u_table_t4[t4_up_idx] == 2'b00)) begin
                    tag_table_t4[t4_up_idx] <= t4_up_tag; 
                    c_table_t4[t4_up_idx]   <= update_taken ? 3'b100 : 3'b011; 
                    u_table_t4[t4_up_idx]   <= 2'b00;
                    alloc_success = 1'b1;
                end

                // 抢占失败（高位表的有用位都不为0），则全员衰减老化
                if (!alloc_success) begin
                    if (update_provider < 3'd1 && u_table_t1[t1_up_idx] != 2'b00) u_table_t1[t1_up_idx] <= u_table_t1[t1_up_idx] - 1'b1;
                    if (update_provider < 3'd2 && u_table_t2[t2_up_idx] != 2'b00) u_table_t2[t2_up_idx] <= u_table_t2[t2_up_idx] - 1'b1;
                    if (update_provider < 3'd3 && u_table_t3[t3_up_idx] != 2'b00) u_table_t3[t3_up_idx] <= u_table_t3[t3_up_idx] - 1'b1;
                    if (update_provider < 3'd4 && u_table_t4[t4_up_idx] != 2'b00) u_table_t4[t4_up_idx] <= u_table_t4[t4_up_idx] - 1'b1;
                end
            end
        end
    end
endmodule
