module bpu #(
    parameter DATA_WIDTH        = 32  ,
    parameter FTB_WAYS          = 4   ,
    parameter FTB_BLOCKS        = 64  ,
    parameter TAG_WIDTH         = 16  ,
    parameter GHR_WIDTH         = 32  ,
    parameter RAS_DEPTH         = 16
)(
    input  wire                     clk            ,
    input  wire                     rst            ,

    input  wire [DATA_WIDTH-1:0]    pc             ,
    output wire [DATA_WIDTH-1:0]    dnpc           ,

    output wire [           1:0]    pre_way        , // 一路优先：01->target1,10->target2,00->pc+8
    input  wire                     bpu_en_1       ,
    input  wire                     bpu_en_2       ,
    output wire [DATA_WIDTH-1:0]    dnpc_slot1     , // pre_dnpc1
    output wire [DATA_WIDTH-1:0]    dnpc_slot2     , // pre_dnpc2

    input  wire                     is_jal_1       ,
    input  wire                     is_jalr_1      ,
    input  wire                     is_call_1      ,
    input  wire                     is_ret_1       ,
    input  wire                     is_indirect_1  ,
    input  wire                     is_cond_branch_1,

    input  wire                     is_jal_2       ,
    input  wire                     is_jalr_2      ,
    input  wire                     is_call_2      ,
    input  wire                     is_ret_2       ,
    input  wire                     is_indirect_2  ,
    input  wire                     is_cond_branch_2,

    // 双发射训练接口: slot 1 = older, slot 2 = younger
    input  wire [DATA_WIDTH-1:0]    bru_pc_1         ,
    input  wire [DATA_WIDTH-1:0]    bru_dnpc_1       ,
    input  wire                     bru_dnpc_valid_1 ,
    input  wire                     bru_taken_1      ,
    input  wire                     bru_is_jal_1     ,
    input  wire                     bru_is_jalr_1    ,
    input  wire                     bru_is_call_1    ,
    input  wire                     bru_is_ret_1     ,
    input  wire                     bru_is_indirect_1,

    input  wire [DATA_WIDTH-1:0]    bru_pc_2         ,
    input  wire [DATA_WIDTH-1:0]    bru_dnpc_2       ,
    input  wire                     bru_dnpc_valid_2 ,
    input  wire                     bru_taken_2      ,
    input  wire                     bru_is_jal_2     ,
    input  wire                     bru_is_jalr_2    ,
    input  wire                     bru_is_call_2    ,
    input  wire                     bru_is_ret_2     ,
    input  wire                     bru_is_indirect_2
);

    localparam FTB_SETS        = FTB_BLOCKS / FTB_WAYS;
    localparam INDEX_WIDTH     = $clog2(FTB_SETS);
    localparam TARGET_WIDTH    = DATA_WIDTH - 2;
    localparam RAS_PTR_WIDTH   = $clog2(RAS_DEPTH);
    localparam WAY_WIDTH       = $clog2(FTB_WAYS);

    // 元数据快照存储，降低不同流水指令的快照碰撞率
    localparam META_SETS       = 512;  
    localparam META_IDX_W      = $clog2(META_SETS);

    reg                        ftb_valid   [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg [   TAG_WIDTH-1:0]     ftb_tag     [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg [TARGET_WIDTH-1:0]     ftb_target  [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg                        ftb_is_jal  [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg                        ftb_is_jalr [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg [     WAY_WIDTH:0]     ftb_lru     [0:FTB_SETS-1][0:FTB_WAYS-1];

    reg [   GHR_WIDTH-1:0]     ghr;

    reg [   DATA_WIDTH-1:0]    ras_stack [0:RAS_DEPTH-1];
    reg [RAS_PTR_WIDTH-1:0]    ras_ptr;
    reg [  RAS_PTR_WIDTH:0]    ras_cnt;

    reg [    GHR_WIDTH-1:0]    meta_ghr            [0:META_SETS-1];
    reg [              2:0]    meta_tage_provider  [0:META_SETS-1];
    reg                        meta_tage_alt_taken [0:META_SETS-1];
    reg                        meta_dir            [0:META_SETS-1];
    reg [   DATA_WIDTH-1:0]    meta_pred_dnpc      [0:META_SETS-1]; // 保存预测的 DNPC 结果
    reg [RAS_PTR_WIDTH-1:0]    meta_ras_ptr        [0:META_SETS-1]; // 保存预测时的 RAS 栈顶指针
    reg [  RAS_PTR_WIDTH:0]    meta_ras_cnt        [0:META_SETS-1]; // 保存预测时的 RAS 计数

    integer i, w;

    // ===================== 预测: slot 1 (pc) =====================
    wire [INDEX_WIDTH-1:0]     pred_set_idx_1  = pc[2 +: INDEX_WIDTH];
    wire [  TAG_WIDTH-1:0]     pred_pc_tag_1   = pc[2 + INDEX_WIDTH +: TAG_WIDTH];
    wire [ META_IDX_W-1:0]     pred_meta_idx_1 = pc[2 +: META_IDX_W];

    // ===================== 预测: slot 2 (pc+4) =====================
    wire [DATA_WIDTH-1:0]      pc_plus_4        = pc + 32'h4;
    wire [INDEX_WIDTH-1:0]     pred_set_idx_2   = pc_plus_4[2 +: INDEX_WIDTH];
    wire [  TAG_WIDTH-1:0]     pred_pc_tag_2    = pc_plus_4[2 + INDEX_WIDTH +: TAG_WIDTH];
    wire [ META_IDX_W-1:0]     pred_meta_idx_2  = pc_plus_4[2 +: META_IDX_W];

    // FTB slot 1 命中与路选择匹配
    reg                        ftb_hit_1;
    reg [   WAY_WIDTH-1:0]     hit_way_idx_1;
    reg [TARGET_WIDTH-1:0]     ftb_target_selected_1;
    reg                        ftb_hit_is_jal_1;
    reg                        ftb_hit_is_jalr_1;

    // FTB slot 2 命中与路选择匹配
    reg                        ftb_hit_2;
    reg [   WAY_WIDTH-1:0]     hit_way_idx_2;
    reg [TARGET_WIDTH-1:0]     ftb_target_selected_2;
    reg                        ftb_hit_is_jal_2;
    reg                        ftb_hit_is_jalr_2;

    always @(*) begin
        ftb_hit_1             = 1'b0;
        hit_way_idx_1         = 'b0;
        ftb_target_selected_1 = 'b0;
        ftb_hit_is_jal_1      = 1'b0;
        ftb_hit_is_jalr_1     = 1'b0;

        for (i = 0; i < FTB_WAYS; i = i + 1) begin
            if (ftb_valid[pred_set_idx_1][i] && (ftb_tag[pred_set_idx_1][i] == pred_pc_tag_1)) begin
                ftb_hit_1             = 1'b1;
                hit_way_idx_1         = i[WAY_WIDTH-1:0];
                ftb_target_selected_1 = ftb_target[pred_set_idx_1][i];
                ftb_hit_is_jal_1      = ftb_is_jal[pred_set_idx_1][i];
                ftb_hit_is_jalr_1     = ftb_is_jalr[pred_set_idx_1][i];
            end
        end
    end

    always @(*) begin
        ftb_hit_2             = 1'b0;
        hit_way_idx_2         = 'b0;
        ftb_target_selected_2 = 'b0;
        ftb_hit_is_jal_2      = 1'b0;
        ftb_hit_is_jalr_2     = 1'b0;

        for (i = 0; i < FTB_WAYS; i = i + 1) begin
            if (ftb_valid[pred_set_idx_2][i] && (ftb_tag[pred_set_idx_2][i] == pred_pc_tag_2)) begin
                ftb_hit_2             = 1'b1;
                hit_way_idx_2         = i[WAY_WIDTH-1:0];
                ftb_target_selected_2 = ftb_target[pred_set_idx_2][i];
                ftb_hit_is_jal_2      = ftb_is_jal[pred_set_idx_2][i];
                ftb_hit_is_jalr_2     = ftb_is_jalr[pred_set_idx_2][i];
            end
        end
    end

    // TAGE slot 1 预测输出
    wire        tage_pred_taken_1;
    wire [2:0]  tage_pred_provider_1;
    wire        tage_pred_alt_taken_1;
    // TAGE slot 2 预测输出
    wire        tage_pred_taken_2;
    wire [2:0]  tage_pred_provider_2;
    wire        tage_pred_alt_taken_2;

    // ===================== 双槽 META 索引 =====================
    wire [META_IDX_W-1:0] update_meta_idx_1 = bru_pc_1[2 +: META_IDX_W];
    wire [META_IDX_W-1:0] update_meta_idx_2 = bru_pc_2[2 +: META_IDX_W];

    // 训练使能
    wire tage_update_en_1 = bru_dnpc_valid_1 && !bru_is_jal_1 && !bru_is_jalr_1;
    wire tage_update_en_2 = bru_dnpc_valid_2 && !bru_is_jal_2 && !bru_is_jalr_2;

    tage #(.PC_WIDTH(DATA_WIDTH), .GHR_WIDTH(GHR_WIDTH)) u_tage_core (
        .clk              (clk                                           ),
        .rst              (rst                                           ),
        // slot 1 预测读端口
        .pred_pc          (pc                                            ),
        .pred_ghr         (ghr                                           ),
        .pred_taken       (tage_pred_taken_1                             ),
        .pred_provider    (tage_pred_provider_1                          ),
        .pred_alt_taken   (tage_pred_alt_taken_1                         ),
        // slot 2 预测读端口 (pc+4)
        .pred_pc2         (pc_plus_4                                     ),
        .pred_taken2      (tage_pred_taken_2                             ),
        .pred_provider2   (tage_pred_provider_2                          ),
        .pred_alt_taken2  (tage_pred_alt_taken_2                         ),
        // slot 1 (older) 更新端口
        .update_en1       (tage_update_en_1                              ),
        .update_pc1       (bru_pc_1                                      ),
        .update_taken1    (bru_taken_1                                   ),
        .update_provider1 (meta_tage_provider[update_meta_idx_1]         ),
        .update_alt_taken1(meta_tage_alt_taken[update_meta_idx_1]        ),
        .update_pred_taken1(meta_dir[update_meta_idx_1]                  ),
        .update_ghr1      (meta_ghr[update_meta_idx_1]                   ),
        // slot 2 (younger) 更新端口
        .update_en2       (tage_update_en_2                              ),
        .update_pc2       (bru_pc_2                                      ),
        .update_taken2    (bru_taken_2                                   ),
        .update_provider2 (meta_tage_provider[update_meta_idx_2]         ),
        .update_alt_taken2(meta_tage_alt_taken[update_meta_idx_2]        ),
        .update_pred_taken2(meta_dir[update_meta_idx_2]                  ),
        .update_ghr2      (meta_ghr[update_meta_idx_2]                   )
    );

    // ITTAGE slot 1 预测输出
    wire [DATA_WIDTH-1:0] ittage_pred_target_1;
    wire                  ittage_pred_valid_1;
    wire [1:0]            ittage_pred_conf1;

    // ITTAGE slot 2 预测输出
    wire [DATA_WIDTH-1:0] ittage_pred_target_2;
    wire                  ittage_pred_valid_2;
    wire [1:0]            ittage_pred_conf2;

    // ===================== ITTAGE 双更新端口 =====================
    // slot 1 (older) 训练使能: 间接跳转或 jalr
    wire ittage_update_en_1 = bru_dnpc_valid_1 && (bru_is_indirect_1 || bru_is_jalr_1);
    // slot 2 (younger) 训练使能
    wire ittage_update_en_2 = bru_dnpc_valid_2 && (bru_is_indirect_2 || bru_is_jalr_2);

    ittage #(
        .T1_SIZE(32), .T2_SIZE(64), .T3_SIZE(128), .T4_SIZE(256),
        .PC_WIDTH(DATA_WIDTH), .TARGET_WIDTH(DATA_WIDTH), .TAG_WIDTH(14)
    ) u_ittage (
        .clk          (clk                  ),
        .reset        (rst                  ),
        // slot 1 预测读端口
        .fetch_pc1    (pc                   ),
        .pred_target1 (ittage_pred_target_1 ),
        .pred_valid1  (ittage_pred_valid_1  ),
        .pred_conf1   (ittage_pred_conf1    ),
        // slot 2 预测读端口 (pc+4)
        .fetch_pc2    (pc_plus_4            ),
        .pred_target2 (ittage_pred_target_2 ),
        .pred_valid2  (ittage_pred_valid_2  ),
        .pred_conf2   (ittage_pred_conf2    ),
        // slot 1 (older)
        .update_en1   (ittage_update_en_1   ),
        .update_pc1   (bru_pc_1             ),
        .real_target1 (bru_dnpc_1           ),
        .br_taken1    (bru_taken_1          ),
        // slot 2 (younger)
        .update_en2   (ittage_update_en_2   ),
        .update_pc2   (bru_pc_2             ),
        .real_target2 (bru_dnpc_2           ),
        .br_taken2    (bru_taken_2          )
    );

    // Slot 1 (pc) 预测结果
    wire ftb_cond_branch_pred_1 = ftb_hit_1 && tage_pred_taken_1
                                  && !is_jal_1 && !is_jalr_1
                                  && !ftb_hit_is_jal_1 && !ftb_hit_is_jalr_1;
    wire actual_taken_pred_1 = ftb_hit_1 && (is_jal_1 || is_jalr_1 || ftb_hit_is_jal_1 || ftb_hit_is_jalr_1 || tage_pred_taken_1);
    wire [DATA_WIDTH-1:0] ftb_predicted_target_1 = {ftb_target_selected_1, 2'b00};
    wire [DATA_WIDTH-1:0] ras_pop_addr_base      = ras_stack[ras_ptr - 1'b1];
    wire                  ras_empty_base         = (ras_cnt == 0);
    wire                  ras_pop_valid_base     = (ras_pop_addr_base != 32'h0);
    wire                  ftb_target_valid_1     = (ftb_target_selected_1 != 30'h0);

    wire slot1_need_redirect = bpu_en_1 && (
        (is_ret_1 && !ras_empty_base && ras_pop_valid_base)        ||
        ((is_jalr_1 || is_indirect_1) && ittage_pred_valid_1)      ||
        (actual_taken_pred_1 && !ftb_cond_branch_pred_1)           ||
        (ftb_cond_branch_pred_1 && ftb_target_valid_1)
    );

    assign dnpc_slot1 = (is_ret_1 && !ras_empty_base && ras_pop_valid_base)      ? ras_pop_addr_base :
                        ((is_jalr_1 || is_indirect_1) && ittage_pred_valid_1)   ? ittage_pred_target_1 :
                        (actual_taken_pred_1 && !ftb_cond_branch_pred_1)         ? ftb_predicted_target_1 :
                        (ftb_cond_branch_pred_1 && ftb_target_valid_1)           ? ftb_predicted_target_1 :
                        pc + 32'h4;

    // Slot 2 (pc+4) RAS 可见性 (slot1 投机操作后)
    wire s1_valid_no_redirect = !slot1_need_redirect;

    wire [RAS_PTR_WIDTH-1:0] ras_ptr_after_s1;
    wire [  RAS_PTR_WIDTH:0] ras_cnt_after_s1;
    wire                      ras_s1_is_call = s1_valid_no_redirect && is_call_1;
    wire                      ras_s1_is_ret  = s1_valid_no_redirect && is_ret_1 && !ras_empty_base;

    assign ras_ptr_after_s1 = ras_s1_is_call ? (ras_ptr + 1'b1) :
                               ras_s1_is_ret ? (ras_ptr - 1'b1) : ras_ptr;
    assign ras_cnt_after_s1 = ras_s1_is_call ? (ras_cnt + 1'b1) :
                               ras_s1_is_ret ? (ras_cnt - 1'b1) : ras_cnt;

    wire [DATA_WIDTH-1:0] ras_pop_addr_2 = ras_stack[ras_ptr_after_s1 - 1'b1];
    wire                  ras_empty_2    = (ras_cnt_after_s1 == 0);
    wire                  ras_pop_valid_2 = (ras_pop_addr_2 != 32'h0);

    // Slot 2 (pc+4) 预测结果
    wire ftb_cond_branch_pred_2 = ftb_hit_2 && tage_pred_taken_2
                                  && !is_jal_2 && !is_jalr_2
                                  && !ftb_hit_is_jal_2 && !ftb_hit_is_jalr_2;
    wire actual_taken_pred_2 = ftb_hit_2 && (is_jal_2 || is_jalr_2 || ftb_hit_is_jal_2 || ftb_hit_is_jalr_2 || tage_pred_taken_2);
    wire [DATA_WIDTH-1:0] ftb_predicted_target_2 = {ftb_target_selected_2, 2'b00};
    wire                  ftb_target_valid_2     = (ftb_target_selected_2 != 30'h0);

    wire slot2_need_redirect = bpu_en_2 && s1_valid_no_redirect && (
        (is_ret_2 && !ras_empty_2 && ras_pop_valid_2)          ||
        ((is_jalr_2 || is_indirect_2) && ittage_pred_valid_2)  ||
        (actual_taken_pred_2 && !ftb_cond_branch_pred_2)       ||
        (ftb_cond_branch_pred_2 && ftb_target_valid_2)
    );

    assign dnpc_slot2 = (is_ret_2 && !ras_empty_2 && ras_pop_valid_2)           ? ras_pop_addr_2         :
                        ((is_jalr_2 || is_indirect_2) && ittage_pred_valid_2)  ? ittage_pred_target_2   :
                        (actual_taken_pred_2 && !ftb_cond_branch_pred_2)         ? ftb_predicted_target_2 :
                        (ftb_cond_branch_pred_2 && ftb_target_valid_2)           ? ftb_predicted_target_2 :
                        pc + 32'h8;

    assign pre_way = (bpu_en_1 && slot1_need_redirect                        ) ? 2'b01 :
                     (bpu_en_2 && slot2_need_redirect && s1_valid_no_redirect) ? 2'b10 :
                     2'b00;

    assign dnpc = (bpu_en_1 && slot1_need_redirect                        ) ? dnpc_slot1 :
                  (bpu_en_2 && slot2_need_redirect && s1_valid_no_redirect) ? dnpc_slot2 :
                  pc + 32'h8;

    // ===================== 双槽 FTB 更新相关 =====================
    wire [INDEX_WIDTH-1:0] update_set_idx_1  = bru_pc_1[2 +: INDEX_WIDTH];
    wire [  TAG_WIDTH-1:0] update_pc_tag_1   = bru_pc_1[2 + INDEX_WIDTH +: TAG_WIDTH];
    wire [INDEX_WIDTH-1:0] update_set_idx_2  = bru_pc_2[2 +: INDEX_WIDTH];
    wire [  TAG_WIDTH-1:0] update_pc_tag_2   = bru_pc_2[2 + INDEX_WIDTH +: TAG_WIDTH];

    // ===================== 双槽误预测检测 =====================
    wire [GHR_WIDTH-1:0]   hist_ghr_1       = meta_ghr[update_meta_idx_1];
    wire [GHR_WIDTH-1:0]   hist_ghr_2       = meta_ghr[update_meta_idx_2];
    wire                   bru_mispredict_1 = bru_dnpc_valid_1 && (bru_dnpc_1 != meta_pred_dnpc[update_meta_idx_1]);
    wire                   bru_mispredict_2 = bru_dnpc_valid_2 && (bru_dnpc_2 != meta_pred_dnpc[update_meta_idx_2]);

    // slot 1 (older) 优先: slot 1 误预测时 slot 2 的指令也会被冲刷, 无需处理
    wire mispredict_active   = (bru_dnpc_valid_1 && bru_mispredict_1)
                            || (bru_dnpc_valid_2 && bru_mispredict_2 && !bru_dnpc_valid_1);
    wire mispredict_from_slot1 = bru_dnpc_valid_1 && bru_mispredict_1;

    // ===================== FTB slot 1 更新查找 =====================
    reg                    update_ftb_hit_1;
    reg [WAY_WIDTH-1:0]    update_hit_way_1;
    reg [WAY_WIDTH-1:0]    update_alloc_way_1;

    always @(*) begin
        update_ftb_hit_1   = 1'b0;
        update_hit_way_1   = 'b0;
        update_alloc_way_1 = 'b0;
        for (w = 0; w < FTB_WAYS; w = w + 1) begin
            if (ftb_valid[update_set_idx_1][w] && (ftb_tag[update_set_idx_1][w] == update_pc_tag_1)) begin
                update_ftb_hit_1 = 1'b1;
                update_hit_way_1 = w[WAY_WIDTH-1:0];
            end
        end
        if (!update_ftb_hit_1) begin
            for (w = 0; w < FTB_WAYS; w = w + 1) begin
                if (!ftb_valid[update_set_idx_1][w]) update_alloc_way_1 = w[WAY_WIDTH-1:0];
            end
            if (ftb_valid[update_set_idx_1][update_alloc_way_1]) begin
                for (w = 0; w < FTB_WAYS; w = w + 1) begin
                    if (ftb_lru[update_set_idx_1][w] == 0) update_alloc_way_1 = w[WAY_WIDTH-1:0];
                end
            end
        end
    end

    // ===================== FTB slot 2 更新查找 =====================
    // 需要考虑 slot 1 可能在同一 set 中分配了新路, 但写入尚未发生 (在同一时钟沿)
    // 当同 set 时, slot 1 的 alloc_way 视为 "即将有效"
    reg                    update_ftb_hit_2;
    reg [WAY_WIDTH-1:0]    update_hit_way_2;
    reg [WAY_WIDTH-1:0]    update_alloc_way_2;

    always @(*) begin
        update_ftb_hit_2   = 1'b0;
        update_hit_way_2   = 'b0;
        update_alloc_way_2 = 'b0;
        for (w = 0; w < FTB_WAYS; w = w + 1) begin
            if (ftb_valid[update_set_idx_2][w] && (ftb_tag[update_set_idx_2][w] == update_pc_tag_2)) begin
                update_ftb_hit_2 = 1'b1;
                update_hit_way_2 = w[WAY_WIDTH-1:0];
            end
        end
        if (!update_ftb_hit_2) begin
            for (w = 0; w < FTB_WAYS; w = w + 1) begin
                if (!ftb_valid[update_set_idx_2][w]) begin
                    // 排除 slot 1 即将在同 set 同 way 分配的情况
                    if (!(bru_dnpc_valid_1 && (update_set_idx_1 == update_set_idx_2) && (w[WAY_WIDTH-1:0] == update_alloc_way_1) && !update_ftb_hit_1))
                        update_alloc_way_2 = w[WAY_WIDTH-1:0];
                end
            end
            if (ftb_valid[update_set_idx_2][update_alloc_way_2] ||
                (bru_dnpc_valid_1 && (update_set_idx_1 == update_set_idx_2) && (update_alloc_way_2 == update_alloc_way_1) && !update_ftb_hit_1)) begin
                for (w = 0; w < FTB_WAYS; w = w + 1) begin
                    if (ftb_lru[update_set_idx_2][w] == 0) update_alloc_way_2 = w[WAY_WIDTH-1:0];
                end
            end
        end
    end

    // FTB slot 1 与 slot 2 写冲突检测 (同 set 同 way)
    wire ftb_conflict = bru_dnpc_valid_1 && bru_dnpc_valid_2
                     && (update_set_idx_1 == update_set_idx_2)
                     && (update_alloc_way_1 == update_alloc_way_2)
                     && !update_ftb_hit_1 && !update_ftb_hit_2;

    // ============ 前端投机更新 GHR ============
    // slot 1 条件分支更新使能: 仅真正的分支指令 (opcode 0x14-0x1b) 才更新 GHR
    wire ghr_update_s1 = bpu_en_1 && is_cond_branch_1;
    // slot 2 条件分支更新使能: 仅真正的分支指令且 slot1 不重定向时才更新
    wire ghr_update_s2 = bpu_en_2 && s1_valid_no_redirect && is_cond_branch_2;
        
    always @(posedge clk) begin
        if (rst) begin
            ras_ptr <= 'b0; ras_cnt <= 'b0; ghr <= 'b0;
            for (i = 0; i < META_SETS; i = i + 1) begin
                meta_ghr[i] = 'b0;
                meta_dir[i] = 1'b0;
                meta_tage_provider[i] = 0;
                meta_tage_alt_taken[i] = 0;
                meta_pred_dnpc[i] = 'b0;
                meta_ras_ptr[i] = 'b0;
                meta_ras_cnt[i] = 'b0;
            end
            for (i = 0; i < FTB_SETS; i = i + 1) begin
                for (w = 0; w < FTB_WAYS; w = w + 1) begin
                    ftb_valid[i][w]   <= 1'b0;
                    ftb_tag[i][w]     <= 'b0;
                    ftb_target[i][w]  <= 'b0;
                    ftb_is_jal[i][w]  <= 1'b0;
                    ftb_is_jalr[i][w] <= 1'b0;
                    ftb_lru[i][w]     <= w[WAY_WIDTH:0];
                end
            end
            for (i = 0; i < RAS_DEPTH; i = i + 1) ras_stack[i] <= 'b0;
        end else begin

            // RAS 前端投机更新维护
            // slot 1: 总是应用 (若有效)
            if (bpu_en_1) begin
                if (is_call_1) begin
                    ras_stack[ras_ptr] <= pc + 32'h4;
                    ras_ptr <= ras_ptr + 1'b1;
                    if (ras_cnt < RAS_DEPTH) ras_cnt <= ras_cnt + 1'b1;
                end else if (is_ret_1 && !ras_empty_base) begin
                    ras_ptr <= ras_ptr - 1'b1;
                    ras_cnt <= ras_cnt - 1'b1;
                end
            end
            // slot 2: 仅当 slot1 不重定向且 slot2 有效时应用
            if (bpu_en_2 && s1_valid_no_redirect) begin
                // 使用 slot1 更新后的 RAS 指针/计数 (此时 ras_ptr 已被 slot1 更新)
                if (is_call_2) begin
                    if (is_call_1 && bpu_en_1)
                        ras_stack[ras_ptr + 1'b1] <= pc_plus_4 + 32'h4;  // slot1 push 后, 栈顶在 ras_ptr
                    else if (is_ret_1 && !ras_empty_base && bpu_en_1)
                        ras_stack[ras_ptr] <= pc_plus_4 + 32'h4;         // slot1 pop 后, 栈顶在 ras_ptr
                    else
                        ras_stack[ras_ptr] <= pc_plus_4 + 32'h4;
                    ras_ptr <= ras_ptr_after_s1 + 1'b1;
                    if (ras_cnt_after_s1 < RAS_DEPTH) ras_cnt <= ras_cnt_after_s1 + 1'b1;
                end else if (is_ret_2 && !ras_empty_2) begin
                    ras_ptr <= ras_ptr_after_s1 - 1'b1;
                    ras_cnt <= ras_cnt_after_s1 - 1'b1;
                end
            end

            // 锁存当前预测周期的相关元数据快照 
            // slot 1
            meta_ghr[pred_meta_idx_1]            <= ghr;
            meta_dir[pred_meta_idx_1]            <= tage_pred_taken_1;
            meta_tage_provider[pred_meta_idx_1]  <= tage_pred_provider_1;
            meta_tage_alt_taken[pred_meta_idx_1] <= tage_pred_alt_taken_1;
            meta_pred_dnpc[pred_meta_idx_1]      <= dnpc_slot1;
            meta_ras_ptr[pred_meta_idx_1]        <= ras_ptr;
            meta_ras_cnt[pred_meta_idx_1]        <= ras_cnt;
            // slot 2
            if (bpu_en_2) begin
                meta_ghr[pred_meta_idx_2]            <= ghr;
                meta_dir[pred_meta_idx_2]            <= tage_pred_taken_2;
                meta_tage_provider[pred_meta_idx_2]  <= tage_pred_provider_2;
                meta_tage_alt_taken[pred_meta_idx_2] <= tage_pred_alt_taken_2;
                meta_pred_dnpc[pred_meta_idx_2]      <= dnpc_slot2;
                meta_ras_ptr[pred_meta_idx_2]        <= bpu_en_1 ? ras_ptr_after_s1 : ras_ptr;
                meta_ras_cnt[pred_meta_idx_2]        <= bpu_en_1 ? ras_cnt_after_s1 : ras_cnt;
            end

            // ============ GHR/RAS 后端恢复 ============
            // 原则: GHR/RAS 仅在前端投机更新 & mispredict 恢复时修改
            // 非 mispredict 时投机更新已正确, 无需后端追加
            if (mispredict_active) begin
                // --- mispredict 恢复 (slot 1 优先) ---
                if (mispredict_from_slot1) begin
                    // slot 1 (older) 误预测: 用 slot 1 的快照恢复
                    if (bru_is_jal_1 || bru_is_jalr_1) begin
                        ghr <= hist_ghr_1;
                    end else begin
                        ghr <= {hist_ghr_1[GHR_WIDTH-2:0], bru_taken_1};
                    end

                    // RAS 回滚: slot 1
                    if (bru_is_call_1) begin
                        ras_stack[meta_ras_ptr[update_meta_idx_1]] <= bru_pc_1 + 32'h4;
                        ras_ptr <= meta_ras_ptr[update_meta_idx_1] + 1'b1;
                        if (meta_ras_cnt[update_meta_idx_1] < RAS_DEPTH)
                            ras_cnt <= meta_ras_cnt[update_meta_idx_1] + 1'b1;
                        else
                            ras_cnt <= meta_ras_cnt[update_meta_idx_1];
                    end else if (bru_is_ret_1 && (meta_ras_cnt[update_meta_idx_1] != 0)) begin
                        ras_ptr <= meta_ras_ptr[update_meta_idx_1] - 1'b1;
                        ras_cnt <= meta_ras_cnt[update_meta_idx_1] - 1'b1;
                    end else begin
                        ras_ptr <= meta_ras_ptr[update_meta_idx_1];
                        ras_cnt <= meta_ras_cnt[update_meta_idx_1];
                    end

                end else begin
                    // 仅 slot 2 (younger) 误预测: 用 slot 2 的快照恢复
                    if (bru_is_jal_2 || bru_is_jalr_2) begin
                        ghr <= hist_ghr_2;
                    end else begin
                        ghr <= {hist_ghr_2[GHR_WIDTH-2:0], bru_taken_2};
                    end

                    // RAS 回滚: slot 2
                    if (bru_is_call_2) begin
                        ras_stack[meta_ras_ptr[update_meta_idx_2]] <= bru_pc_2 + 32'h4;
                        ras_ptr <= meta_ras_ptr[update_meta_idx_2] + 1'b1;
                        if (meta_ras_cnt[update_meta_idx_2] < RAS_DEPTH)
                            ras_cnt <= meta_ras_cnt[update_meta_idx_2] + 1'b1;
                        else
                            ras_cnt <= meta_ras_cnt[update_meta_idx_2];
                    end else if (bru_is_ret_2 && (meta_ras_cnt[update_meta_idx_2] != 0)) begin
                        ras_ptr <= meta_ras_ptr[update_meta_idx_2] - 1'b1;
                        ras_cnt <= meta_ras_cnt[update_meta_idx_2] - 1'b1;
                    end else begin
                        ras_ptr <= meta_ras_ptr[update_meta_idx_2];
                        ras_cnt <= meta_ras_cnt[update_meta_idx_2];
                    end
                end

            end else begin
                if (ghr_update_s1 || ghr_update_s2) begin
                    if (ghr_update_s1 && ghr_update_s2)
                        // 双路顺序移位: 先 slot1 方向, 再 slot2 方向
                        ghr <= {{ghr[GHR_WIDTH-3:0], tage_pred_taken_1}, tage_pred_taken_2};
                    else if (ghr_update_s1)
                        ghr <= {ghr[GHR_WIDTH-2:0], tage_pred_taken_1};
                    else
                        ghr <= {ghr[GHR_WIDTH-2:0], tage_pred_taken_2};
                end

                // ============ 击中时的 LRU 更新 ============
                // slot 1 LRU
                if (ftb_hit_1) begin
                    for (w = 0; w < FTB_WAYS; w = w + 1) begin
                        if (w[WAY_WIDTH-1:0] == hit_way_idx_1)
                            ftb_lru[pred_set_idx_1][w] <= FTB_WAYS - 1;
                        else if (ftb_lru[pred_set_idx_1][w] > ftb_lru[pred_set_idx_1][hit_way_idx_1])
                            ftb_lru[pred_set_idx_1][w] <= ftb_lru[pred_set_idx_1][w] - 1'b1;
                    end
                end
                // slot 2 LRU (仅当 slot1 不重定向且 slot2 有效时)
                if (ftb_hit_2 && bpu_en_2 && s1_valid_no_redirect) begin
                    for (w = 0; w < FTB_WAYS; w = w + 1) begin
                        if (w[WAY_WIDTH-1:0] == hit_way_idx_2)
                            ftb_lru[pred_set_idx_2][w] <= FTB_WAYS - 1;
                        else if (ftb_lru[pred_set_idx_2][w] > ftb_lru[pred_set_idx_2][hit_way_idx_2])
                            ftb_lru[pred_set_idx_2][w] <= ftb_lru[pred_set_idx_2][w] - 1'b1;
                    end
                end
            end

            // ============ FTB 槽位分配与训练 ============
            // slot 1 (older) — 总是执行
            if (bru_dnpc_valid_1) begin
                if (update_ftb_hit_1) begin
                    ftb_valid[update_set_idx_1][update_hit_way_1] <= 1'b1;
                    if (bru_is_jal_1)  ftb_is_jal[update_set_idx_1][update_hit_way_1]  <= 1'b1;
                    if (bru_is_jalr_1) ftb_is_jalr[update_set_idx_1][update_hit_way_1] <= 1'b1;
                    if (bru_taken_1 || bru_is_jal_1 || bru_is_jalr_1) begin
                        ftb_target[update_set_idx_1][update_hit_way_1] <= bru_dnpc_1[2 +: TARGET_WIDTH];
                    end
                    // LRU 更新: slot 1 hit
                    for (w = 0; w < FTB_WAYS; w = w + 1) begin
                        if (w[WAY_WIDTH-1:0] == update_hit_way_1)
                            ftb_lru[update_set_idx_1][w] <= FTB_WAYS - 1;
                        else if (ftb_lru[update_set_idx_1][w] > ftb_lru[update_set_idx_1][update_hit_way_1])
                            ftb_lru[update_set_idx_1][w] <= ftb_lru[update_set_idx_1][w] - 1'b1;
                    end
                end else begin
                    ftb_valid[update_set_idx_1][update_alloc_way_1]   <= 1'b1;
                    ftb_tag[update_set_idx_1][update_alloc_way_1]     <= update_pc_tag_1;
                    ftb_is_jal[update_set_idx_1][update_alloc_way_1]  <= bru_is_jal_1;
                    ftb_is_jalr[update_set_idx_1][update_alloc_way_1] <= bru_is_jalr_1;
                    if (bru_taken_1 || bru_is_jal_1 || bru_is_jalr_1) begin
                        ftb_target[update_set_idx_1][update_alloc_way_1] <= bru_dnpc_1[2 +: TARGET_WIDTH];
                    end
                    for (w = 0; w < FTB_WAYS; w = w + 1) begin
                        if (w[WAY_WIDTH-1:0] == update_alloc_way_1)
                            ftb_lru[update_set_idx_1][w] <= FTB_WAYS - 1;
                        else if (ftb_lru[update_set_idx_1][w] > 0)
                            ftb_lru[update_set_idx_1][w] <= ftb_lru[update_set_idx_1][w] - 1'b1;
                    end
                end
            end

            // slot 2 (younger) — 存在同 set 同 way 冲突时跳过
            if (bru_dnpc_valid_2 && !ftb_conflict) begin
                if (update_ftb_hit_2) begin
                    ftb_valid[update_set_idx_2][update_hit_way_2] <= 1'b1;
                    if (bru_is_jal_2)  ftb_is_jal[update_set_idx_2][update_hit_way_2]  <= 1'b1;
                    if (bru_is_jalr_2) ftb_is_jalr[update_set_idx_2][update_hit_way_2] <= 1'b1;
                    if (bru_taken_2 || bru_is_jal_2 || bru_is_jalr_2) begin
                        ftb_target[update_set_idx_2][update_hit_way_2] <= bru_dnpc_2[2 +: TARGET_WIDTH];
                    end
                    // LRU 更新: slot 2 hit
                    for (w = 0; w < FTB_WAYS; w = w + 1) begin
                        if (w[WAY_WIDTH-1:0] == update_hit_way_2)
                            ftb_lru[update_set_idx_2][w] <= FTB_WAYS - 1;
                        else if (ftb_lru[update_set_idx_2][w] > ftb_lru[update_set_idx_2][update_hit_way_2])
                            ftb_lru[update_set_idx_2][w] <= ftb_lru[update_set_idx_2][w] - 1'b1;
                    end
                end else begin
                    ftb_valid[update_set_idx_2][update_alloc_way_2]   <= 1'b1;
                    ftb_tag[update_set_idx_2][update_alloc_way_2]     <= update_pc_tag_2;
                    ftb_is_jal[update_set_idx_2][update_alloc_way_2]  <= bru_is_jal_2;
                    ftb_is_jalr[update_set_idx_2][update_alloc_way_2] <= bru_is_jalr_2;
                    if (bru_taken_2 || bru_is_jal_2 || bru_is_jalr_2) begin
                        ftb_target[update_set_idx_2][update_alloc_way_2] <= bru_dnpc_2[2 +: TARGET_WIDTH];
                    end
                    for (w = 0; w < FTB_WAYS; w = w + 1) begin
                        if (w[WAY_WIDTH-1:0] == update_alloc_way_2)
                            ftb_lru[update_set_idx_2][w] <= FTB_WAYS - 1;
                        else if (ftb_lru[update_set_idx_2][w] > 0)
                            ftb_lru[update_set_idx_2][w] <= ftb_lru[update_set_idx_2][w] - 1'b1;
                    end
                end
            end
        end
    end
endmodule
