module ittage #(
    parameter T1_SIZE      = 32  ,
    parameter T2_SIZE      = 64  ,
    parameter T3_SIZE      = 128 ,
    parameter T4_SIZE      = 256 ,
    parameter PC_WIDTH     = 32  ,
    parameter TARGET_WIDTH = 32  ,
    parameter TAG_WIDTH    = 14  ,
    parameter GHR_WIDTH    = 128 ,
    parameter U_WIDTH      = 2
)(
    input  wire                         clk            ,
    input  wire                         reset          ,

    // 预测 bundle 1
    input  wire [    PC_WIDTH-1:0]      fetch_pc1      ,
    output wire [TARGET_WIDTH-1:0]      pred_target1   ,
    output wire                         pred_valid1    ,
    output wire [             1:0]      pred_conf1     ,

    // 训练 bundle 1
    input  wire                         update_en1     ,
    input  wire [    PC_WIDTH-1:0]      update_pc1     ,
    input  wire [TARGET_WIDTH-1:0]      real_target1   ,
    input  wire                         br_taken1      ,

    // 预测 bundle 2
    input  wire [    PC_WIDTH-1:0]      fetch_pc2      ,
    output wire [TARGET_WIDTH-1:0]      pred_target2   ,
    output wire                         pred_valid2    ,
    output wire [             1:0]      pred_conf2     ,

    // 训练 bundle 2
    input  wire                         update_en2     ,
    input  wire [    PC_WIDTH-1:0]      update_pc2     ,
    input  wire [TARGET_WIDTH-1:0]      real_target2   ,
    input  wire                         br_taken2
);

    // ========================= GHR ======================================
    reg [GHR_WIDTH-1:0] ghr;

    // ========================= Hash 函数 ================================
    function [31:0] hash_pc_ghr;
        input [PC_WIDTH-1:0]    pc;
        input [GHR_WIDTH-1:0]   history;
        input integer           history_length;
        integer i;
        begin
            hash_pc_ghr = pc[31:0];
            for (i = 0; i < history_length; i = i + 1) begin
                if (i < GHR_WIDTH)
                    hash_pc_ghr = hash_pc_ghr ^ {31'b0, history[i]};
                hash_pc_ghr = {hash_pc_ghr[30:0], hash_pc_ghr[31]};
            end
        end
    endfunction

    // ========================= 表存储 ===================================
    // T1
    reg [TAG_WIDTH-1:0]    tag_t1    [T1_SIZE-1:0];
    reg [TARGET_WIDTH-1:0] target_t1 [T1_SIZE-1:0];
    reg [U_WIDTH-1:0]      useful_t1 [T1_SIZE-1:0];
    reg                    valid_t1  [T1_SIZE-1:0];
    // T2
    reg [TAG_WIDTH-1:0]    tag_t2    [T2_SIZE-1:0];
    reg [TARGET_WIDTH-1:0] target_t2 [T2_SIZE-1:0];
    reg [U_WIDTH-1:0]      useful_t2 [T2_SIZE-1:0];
    reg                    valid_t2  [T2_SIZE-1:0];
    // T3
    reg [TAG_WIDTH-1:0]    tag_t3    [T3_SIZE-1:0];
    reg [TARGET_WIDTH-1:0] target_t3 [T3_SIZE-1:0];
    reg [U_WIDTH-1:0]      useful_t3 [T3_SIZE-1:0];
    reg                    valid_t3  [T3_SIZE-1:0];
    // T4
    reg [TAG_WIDTH-1:0]    tag_t4    [T4_SIZE-1:0];
    reg [TARGET_WIDTH-1:0] target_t4 [T4_SIZE-1:0];
    reg [U_WIDTH-1:0]      useful_t4 [T4_SIZE-1:0];
    reg                    valid_t4  [T4_SIZE-1:0];

    integer reset_i;

    // ======================= bundle 1 预测 ==============================
    wire [TAG_WIDTH-1:0] t1_tag_1, t2_tag_1, t3_tag_1, t4_tag_1;
    wire [$clog2(T1_SIZE)-1:0] t1_idx_1;
    wire [$clog2(T2_SIZE)-1:0] t2_idx_1;
    wire [$clog2(T3_SIZE)-1:0] t3_idx_1;
    wire [$clog2(T4_SIZE)-1:0] t4_idx_1;

    wire [31:0] _t1_idx_1 = hash_pc_ghr(fetch_pc1, ghr, 16);
    wire [31:0] _t2_idx_1 = hash_pc_ghr(fetch_pc1, ghr, 32);
    wire [31:0] _t3_idx_1 = hash_pc_ghr(fetch_pc1, ghr, 64);
    wire [31:0] _t4_idx_1 = hash_pc_ghr(fetch_pc1, ghr, 128);

    assign t1_idx_1 = _t1_idx_1[$clog2(T1_SIZE)-1:0];
    assign t2_idx_1 = _t2_idx_1[$clog2(T2_SIZE)-1:0];
    assign t3_idx_1 = _t3_idx_1[$clog2(T3_SIZE)-1:0];
    assign t4_idx_1 = _t4_idx_1[$clog2(T4_SIZE)-1:0];

    wire [31:0] _t1_tag_1 = hash_pc_ghr(fetch_pc1, ghr, 32);
    wire [31:0] _t2_tag_1 = hash_pc_ghr(fetch_pc1, ghr, 64);
    wire [31:0] _t3_tag_1 = hash_pc_ghr(fetch_pc1, ghr, 128);
    wire [31:0] _t4_tag_1 = hash_pc_ghr(fetch_pc1, ghr, 256);

    assign t1_tag_1 = _t1_tag_1[TAG_WIDTH-1:0];
    assign t2_tag_1 = _t2_tag_1[TAG_WIDTH-1:0];
    assign t3_tag_1 = _t3_tag_1[TAG_WIDTH-1:0];
    assign t4_tag_1 = _t4_tag_1[TAG_WIDTH-1:0];

    // 预测选择 (最长历史匹配优先)
    assign pred_target1 = (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1) ? target_t4[t4_idx_1] :
                          (valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1) ? target_t3[t3_idx_1] :
                          (valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1) ? target_t2[t2_idx_1] :
                          (valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1) ? target_t1[t1_idx_1] : 0;

    assign pred_valid1 = (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1)
                       | (valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1)
                       | (valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1)
                       | (valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1);

    assign pred_conf1 = (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1) ? useful_t4[t4_idx_1] :
                        (valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1) ? useful_t3[t3_idx_1] :
                        (valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1) ? useful_t2[t2_idx_1] :
                        (valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1) ? useful_t1[t1_idx_1] : 2'b00;

    wire provider_valid_1 = pred_valid1;
    wire [3:0] provider_table_1 =
        (valid_t4[t4_idx_1] && tag_t4[t4_idx_1] == t4_tag_1) ? 4 :
        (valid_t3[t3_idx_1] && tag_t3[t3_idx_1] == t3_tag_1) ? 3 :
        (valid_t2[t2_idx_1] && tag_t2[t2_idx_1] == t2_tag_1) ? 2 :
        (valid_t1[t1_idx_1] && tag_t1[t1_idx_1] == t1_tag_1) ? 1 : 0;

    // bundle 1 更新索引/标签
    wire [31:0] _ut1_idx_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 4)  : 0;
    wire [31:0] _ut2_idx_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 8)  : 0;
    wire [31:0] _ut3_idx_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 16) : 0;
    wire [31:0] _ut4_idx_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 32) : 0;

    wire [$clog2(T1_SIZE)-1:0] update_t1_idx_1 = _ut1_idx_1[$clog2(T1_SIZE)-1:0];
    wire [$clog2(T2_SIZE)-1:0] update_t2_idx_1 = _ut2_idx_1[$clog2(T2_SIZE)-1:0];
    wire [$clog2(T3_SIZE)-1:0] update_t3_idx_1 = _ut3_idx_1[$clog2(T3_SIZE)-1:0];
    wire [$clog2(T4_SIZE)-1:0] update_t4_idx_1 = _ut4_idx_1[$clog2(T4_SIZE)-1:0];

    wire [31:0] _ut1_tag_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 8)  : 0;
    wire [31:0] _ut2_tag_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 16) : 0;
    wire [31:0] _ut3_tag_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 32) : 0;
    wire [31:0] _ut4_tag_1 = update_en1 ? hash_pc_ghr(update_pc1, ghr, 64) : 0;

    wire [TAG_WIDTH-1:0] update_t1_tag_1 = _ut1_tag_1[TAG_WIDTH-1:0];
    wire [TAG_WIDTH-1:0] update_t2_tag_1 = _ut2_tag_1[TAG_WIDTH-1:0];
    wire [TAG_WIDTH-1:0] update_t3_tag_1 = _ut3_tag_1[TAG_WIDTH-1:0];
    wire [TAG_WIDTH-1:0] update_t4_tag_1 = _ut4_tag_1[TAG_WIDTH-1:0];

    // ======================= bundle 2 预测 ==============================
    wire [$clog2(T1_SIZE)-1:0] t1_idx_2;
    wire [$clog2(T2_SIZE)-1:0] t2_idx_2;
    wire [$clog2(T3_SIZE)-1:0] t3_idx_2;
    wire [$clog2(T4_SIZE)-1:0] t4_idx_2;

    wire [31:0] _t1_idx_2 = hash_pc_ghr(fetch_pc2, ghr, 16);
    wire [31:0] _t2_idx_2 = hash_pc_ghr(fetch_pc2, ghr, 32);
    wire [31:0] _t3_idx_2 = hash_pc_ghr(fetch_pc2, ghr, 64);
    wire [31:0] _t4_idx_2 = hash_pc_ghr(fetch_pc2, ghr, 128);

    assign t1_idx_2 = _t1_idx_2[$clog2(T1_SIZE)-1:0];
    assign t2_idx_2 = _t2_idx_2[$clog2(T2_SIZE)-1:0];
    assign t3_idx_2 = _t3_idx_2[$clog2(T3_SIZE)-1:0];
    assign t4_idx_2 = _t4_idx_2[$clog2(T4_SIZE)-1:0];

    wire [TAG_WIDTH-1:0] t1_tag_2, t2_tag_2, t3_tag_2, t4_tag_2;

    wire [31:0] _t1_tag_2 = hash_pc_ghr(fetch_pc2, ghr, 32);
    wire [31:0] _t2_tag_2 = hash_pc_ghr(fetch_pc2, ghr, 64);
    wire [31:0] _t3_tag_2 = hash_pc_ghr(fetch_pc2, ghr, 128);
    wire [31:0] _t4_tag_2 = hash_pc_ghr(fetch_pc2, ghr, 256);

    assign t1_tag_2 = _t1_tag_2[TAG_WIDTH-1:0];
    assign t2_tag_2 = _t2_tag_2[TAG_WIDTH-1:0];
    assign t3_tag_2 = _t3_tag_2[TAG_WIDTH-1:0];
    assign t4_tag_2 = _t4_tag_2[TAG_WIDTH-1:0];

    assign pred_target2 = (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2) ? target_t4[t4_idx_2] :
                          (valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2) ? target_t3[t3_idx_2] :
                          (valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2) ? target_t2[t2_idx_2] :
                          (valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2) ? target_t1[t1_idx_2] : 0;

    assign pred_valid2 = (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2)
                       | (valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2)
                       | (valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2)
                       | (valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2);

    assign pred_conf2 = (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2) ? useful_t4[t4_idx_2] :
                        (valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2) ? useful_t3[t3_idx_2] :
                        (valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2) ? useful_t2[t2_idx_2] :
                        (valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2) ? useful_t1[t1_idx_2] : 2'b00;

    wire provider_valid_2 = pred_valid2;
    wire [3:0] provider_table_2 =
        (valid_t4[t4_idx_2] && tag_t4[t4_idx_2] == t4_tag_2) ? 4 :
        (valid_t3[t3_idx_2] && tag_t3[t3_idx_2] == t3_tag_2) ? 3 :
        (valid_t2[t2_idx_2] && tag_t2[t2_idx_2] == t2_tag_2) ? 2 :
        (valid_t1[t1_idx_2] && tag_t1[t1_idx_2] == t1_tag_2) ? 1 : 0;

    // bundle 2 更新索引/标签
    wire [31:0] _ut1_idx_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 4)  : 0;
    wire [31:0] _ut2_idx_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 8)  : 0;
    wire [31:0] _ut3_idx_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 16) : 0;
    wire [31:0] _ut4_idx_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 32) : 0;

    wire [$clog2(T1_SIZE)-1:0] update_t1_idx_2 = _ut1_idx_2[$clog2(T1_SIZE)-1:0];
    wire [$clog2(T2_SIZE)-1:0] update_t2_idx_2 = _ut2_idx_2[$clog2(T2_SIZE)-1:0];
    wire [$clog2(T3_SIZE)-1:0] update_t3_idx_2 = _ut3_idx_2[$clog2(T3_SIZE)-1:0];
    wire [$clog2(T4_SIZE)-1:0] update_t4_idx_2 = _ut4_idx_2[$clog2(T4_SIZE)-1:0];

    wire [31:0] _ut1_tag_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 8)  : 0;
    wire [31:0] _ut2_tag_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 16) : 0;
    wire [31:0] _ut3_tag_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 32) : 0;
    wire [31:0] _ut4_tag_2 = update_en2 ? hash_pc_ghr(update_pc2, ghr, 64) : 0;

    wire [TAG_WIDTH-1:0] update_t1_tag_2 = _ut1_tag_2[TAG_WIDTH-1:0];
    wire [TAG_WIDTH-1:0] update_t2_tag_2 = _ut2_tag_2[TAG_WIDTH-1:0];
    wire [TAG_WIDTH-1:0] update_t3_tag_2 = _ut3_tag_2[TAG_WIDTH-1:0];
    wire [TAG_WIDTH-1:0] update_t4_tag_2 = _ut4_tag_2[TAG_WIDTH-1:0];

    // ====================== 训练 (GHR + 表更新) =========================
    always @(posedge clk) begin
        if (reset) begin
            ghr <= 0;
            for (reset_i = 0; reset_i < T1_SIZE; reset_i = reset_i + 1) begin
                useful_t1[reset_i] = 0;
                valid_t1[reset_i]  = 0;
                tag_t1[reset_i]    = 0;
                target_t1[reset_i] = 0;
            end
            for (reset_i = 0; reset_i < T2_SIZE; reset_i = reset_i + 1) begin
                useful_t2[reset_i] = 0;
                valid_t2[reset_i]  = 0;
                tag_t2[reset_i]    = 0;
                target_t2[reset_i] = 0;
            end
            for (reset_i = 0; reset_i < T3_SIZE; reset_i = reset_i + 1) begin
                useful_t3[reset_i] = 0;
                valid_t3[reset_i]  = 0;
                tag_t3[reset_i]    = 0;
                target_t3[reset_i] = 0;
            end
            for (reset_i = 0; reset_i < T4_SIZE; reset_i = reset_i + 1) begin
                useful_t4[reset_i] = 0;
                valid_t4[reset_i]  = 0;
                tag_t4[reset_i]    = 0;
                target_t4[reset_i] = 0;
            end
        end else begin
            // GHR 更新 (单发射: 仅 bundle 1)
            if (update_en1 && br_taken1 && !update_en2)
                ghr <= {ghr[GHR_WIDTH-2:0], 1'b1};
            else if (update_en1 && !br_taken1 && !update_en2)
                ghr <= {ghr[GHR_WIDTH-2:0], 1'b0};

            // --- bundle 1 表训练 ---
            if (update_en1) begin
                if (provider_valid_1) begin
                    case (provider_table_1)
                        1: begin
                            target_t1[update_t1_idx_1] <= real_target1;
                            useful_t1[update_t1_idx_1] <= br_taken1 ?
                                ((useful_t1[update_t1_idx_1] == 2'b11) ? useful_t1[update_t1_idx_1] : useful_t1[update_t1_idx_1] + 1) :
                                ((useful_t1[update_t1_idx_1] == 2'b00) ? useful_t1[update_t1_idx_1] : useful_t1[update_t1_idx_1] - 1);
                        end
                        2: begin
                            target_t2[update_t2_idx_1] <= real_target1;
                            useful_t2[update_t2_idx_1] <= br_taken1 ?
                                ((useful_t2[update_t2_idx_1] == 2'b11) ? useful_t2[update_t2_idx_1] : useful_t2[update_t2_idx_1] + 1) :
                                ((useful_t2[update_t2_idx_1] == 2'b00) ? useful_t2[update_t2_idx_1] : useful_t2[update_t2_idx_1] - 1);
                        end
                        3: begin
                            target_t3[update_t3_idx_1] <= real_target1;
                            useful_t3[update_t3_idx_1] <= br_taken1 ?
                                ((useful_t3[update_t3_idx_1] == 2'b11) ? useful_t3[update_t3_idx_1] : useful_t3[update_t3_idx_1] + 1) :
                                ((useful_t3[update_t3_idx_1] == 2'b00) ? useful_t3[update_t3_idx_1] : useful_t3[update_t3_idx_1] - 1);
                        end
                        4: begin
                            target_t4[update_t4_idx_1] <= real_target1;
                            useful_t4[update_t4_idx_1] <= br_taken1 ?
                                ((useful_t4[update_t4_idx_1] == 2'b11) ? useful_t4[update_t4_idx_1] : useful_t4[update_t4_idx_1] + 1) :
                                ((useful_t4[update_t4_idx_1] == 2'b00) ? useful_t4[update_t4_idx_1] : useful_t4[update_t4_idx_1] - 1);
                        end
                    endcase
                end else begin
                    // 分配新条目: 优先最大表
                    if (!valid_t4[update_t4_idx_1] || useful_t4[update_t4_idx_1] == 0) begin
                        tag_t4[update_t4_idx_1]    <= update_t4_tag_1;
                        target_t4[update_t4_idx_1] <= real_target1;
                        useful_t4[update_t4_idx_1] <= br_taken1 ? 2'b11 : 2'b10;
                        valid_t4[update_t4_idx_1]  <= 1;
                    end else if (!valid_t3[update_t3_idx_1] || useful_t3[update_t3_idx_1] == 0) begin
                        tag_t3[update_t3_idx_1]    <= update_t3_tag_1;
                        target_t3[update_t3_idx_1] <= real_target1;
                        useful_t3[update_t3_idx_1] <= br_taken1 ? 2'b10 : 2'b01;
                        valid_t3[update_t3_idx_1]  <= 1;
                    end else if (!valid_t2[update_t2_idx_1] || useful_t2[update_t2_idx_1] == 0) begin
                        tag_t2[update_t2_idx_1]    <= update_t2_tag_1;
                        target_t2[update_t2_idx_1] <= real_target1;
                        useful_t2[update_t2_idx_1] <= br_taken1 ? 2'b01 : 2'b00;
                        valid_t2[update_t2_idx_1]  <= 1;
                    end else if (!valid_t1[update_t1_idx_1] || useful_t1[update_t1_idx_1] == 0) begin
                        tag_t1[update_t1_idx_1]    <= update_t1_tag_1;
                        target_t1[update_t1_idx_1] <= real_target1;
                        useful_t1[update_t1_idx_1] <= 2'b00;
                        valid_t1[update_t1_idx_1]  <= 1;
                    end
                end
            end

            // --- bundle 2 表训练 ---
            if (update_en2) begin
                if (provider_valid_2) begin
                    case (provider_table_2)
                        1: begin
                            target_t1[update_t1_idx_2] <= real_target2;
                            useful_t1[update_t1_idx_2] <= br_taken2 ?
                                ((useful_t1[update_t1_idx_2] == 2'b11) ? useful_t1[update_t1_idx_2] : useful_t1[update_t1_idx_2] + 1) :
                                ((useful_t1[update_t1_idx_2] == 2'b00) ? useful_t1[update_t1_idx_2] : useful_t1[update_t1_idx_2] - 1);
                        end
                        2: begin
                            target_t2[update_t2_idx_2] <= real_target2;
                            useful_t2[update_t2_idx_2] <= br_taken2 ?
                                ((useful_t2[update_t2_idx_2] == 2'b11) ? useful_t2[update_t2_idx_2] : useful_t2[update_t2_idx_2] + 1) :
                                ((useful_t2[update_t2_idx_2] == 2'b00) ? useful_t2[update_t2_idx_2] : useful_t2[update_t2_idx_2] - 1);
                        end
                        3: begin
                            target_t3[update_t3_idx_2] <= real_target2;
                            useful_t3[update_t3_idx_2] <= br_taken2 ?
                                ((useful_t3[update_t3_idx_2] == 2'b11) ? useful_t3[update_t3_idx_2] : useful_t3[update_t3_idx_2] + 1) :
                                ((useful_t3[update_t3_idx_2] == 2'b00) ? useful_t3[update_t3_idx_2] : useful_t3[update_t3_idx_2] - 1);
                        end
                        4: begin
                            target_t4[update_t4_idx_2] <= real_target2;
                            useful_t4[update_t4_idx_2] <= br_taken2 ?
                                ((useful_t4[update_t4_idx_2] == 2'b11) ? useful_t4[update_t4_idx_2] : useful_t4[update_t4_idx_2] + 1) :
                                ((useful_t4[update_t4_idx_2] == 2'b00) ? useful_t4[update_t4_idx_2] : useful_t4[update_t4_idx_2] - 1);
                        end
                    endcase
                end else begin
                    if (!valid_t4[update_t4_idx_2] || useful_t4[update_t4_idx_2] == 0) begin
                        tag_t4[update_t4_idx_2]    <= update_t4_tag_2;
                        target_t4[update_t4_idx_2] <= real_target2;
                        useful_t4[update_t4_idx_2] <= br_taken1 ? 2'b11 : 2'b10;
                        valid_t4[update_t4_idx_2]  <= 1;
                    end else if (!valid_t3[update_t3_idx_2] || useful_t3[update_t3_idx_2] == 0) begin
                        tag_t3[update_t3_idx_2]    <= update_t3_tag_2;
                        target_t3[update_t3_idx_2] <= real_target2;
                        useful_t3[update_t3_idx_2] <= br_taken1 ? 2'b10 : 2'b01;
                        valid_t3[update_t3_idx_2]  <= 1;
                    end else if (!valid_t2[update_t2_idx_2] || useful_t2[update_t2_idx_2] == 0) begin
                        tag_t2[update_t2_idx_2]    <= update_t2_tag_2;
                        target_t2[update_t2_idx_2] <= real_target2;
                        useful_t2[update_t2_idx_2] <= br_taken1 ? 2'b01 : 2'b00;
                        valid_t2[update_t2_idx_2]  <= 1;
                    end else if (!valid_t1[update_t1_idx_2] || useful_t1[update_t1_idx_2] == 0) begin
                        tag_t1[update_t1_idx_2]    <= update_t1_tag_2;
                        target_t1[update_t1_idx_2] <= real_target2;
                        useful_t1[update_t1_idx_2] <= 2'b00;
                        valid_t1[update_t1_idx_2]  <= 1;
                    end
                end
            end
        end
    end

endmodule
