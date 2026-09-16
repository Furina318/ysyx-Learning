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

    // 预测时刻元数据快照输出 (随指令携带到执行端, 再反馈回训练/恢复)
    output wire [DATA_WIDTH-1:0]    bpu_ghr1        ,
    output wire [DATA_WIDTH-1:0]    bpu_ghr2        ,
    output wire [           2:0]    bpu_prov1       ,
    output wire [           2:0]    bpu_prov2       ,
    output wire                     bpu_alt1        ,
    output wire                     bpu_alt2        ,
    output wire                     bpu_dir1        ,
    output wire                     bpu_dir2        ,
    output wire [RAS_PTR_WIDTH-1:0] bpu_ras_ptr1    ,
    output wire [RAS_PTR_WIDTH-1:0] bpu_ras_ptr2    ,
    output wire [  RAS_PTR_WIDTH:0] bpu_ras_cnt1    ,
    output wire [  RAS_PTR_WIDTH:0] bpu_ras_cnt2    ,
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
    input  wire [DATA_WIDTH-1:0]    bru_pred_dnpc_1  ,  // 该指令发射时的预测目标
    input  wire                     bru_dnpc_valid_1 ,
    input  wire                     bru_taken_1      ,
    input  wire                     bru_is_jal_1     ,
    input  wire                     bru_is_jalr_1    ,
    input  wire                     bru_is_call_1    ,
    input  wire                     bru_is_ret_1     ,
    input  wire                     bru_is_indirect_1,

    // 该指令发射时预测时刻的元数据快照 (随指令携带, 替代按 pc 索引的 meta 表)
    input  wire [DATA_WIDTH-1:0]    bru_ghr_1        ,
    input  wire [           2:0]    bru_provider_1   ,
    input  wire                     bru_alt_taken_1  ,
    input  wire                     bru_dir_1        ,
    input  wire [RAS_PTR_WIDTH-1:0] bru_ras_ptr_1    ,
    input  wire [  RAS_PTR_WIDTH:0] bru_ras_cnt_1    
);

    localparam FTB_SETS        = FTB_BLOCKS / FTB_WAYS;
    localparam INDEX_WIDTH     = $clog2(FTB_SETS);
    localparam TARGET_WIDTH    = DATA_WIDTH - 2;
    localparam RAS_PTR_WIDTH   = $clog2(RAS_DEPTH);
    localparam WAY_WIDTH       = $clog2(FTB_WAYS);

    // 元数据快照由流水级随指令携带 (bru_ghr_*/bru_provider_*/...), 避免按 pc 索引被覆盖

    reg                        ftb_valid   [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg [   TAG_WIDTH-1:0]     ftb_tag     [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg [TARGET_WIDTH-1:0]     ftb_target  [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg                        ftb_is_jal  [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg                        ftb_is_jalr [0:FTB_SETS-1][0:FTB_WAYS-1];
    reg [     WAY_WIDTH:0]     ftb_lru     [0:FTB_SETS-1][0:FTB_WAYS-1];

    reg [   GHR_WIDTH-1:0]     ghr;

    // 分支预测统计 (public 供仿真结束打印)
    reg [63:0] bp_cond_cnt     /*verilator public*/;
    reg [63:0] bp_cond_misp_cnt/*verilator public*/;
    reg [63:0] bp_all_cnt      /*verilator public*/;
    reg [63:0] bp_all_misp_cnt /*verilator public*/;

    reg [   DATA_WIDTH-1:0]    ras_stack [0:RAS_DEPTH-1];
    reg [RAS_PTR_WIDTH-1:0]    ras_ptr;
    reg [  RAS_PTR_WIDTH:0]    ras_cnt;

    integer i, w;

    // ===================== 预测: slot 1 (pc) =====================
    wire [INDEX_WIDTH-1:0]     pred_set_idx_1  = pc[2 +: INDEX_WIDTH];
    wire [  TAG_WIDTH-1:0]     pred_pc_tag_1   = pc[2 + INDEX_WIDTH +: TAG_WIDTH];

    // ===================== 预测: slot 2 (pc+4) =====================
    wire [DATA_WIDTH-1:0]      pc_plus_4        = pc + 32'h4;
    wire [INDEX_WIDTH-1:0]     pred_set_idx_2   = pc_plus_4[2 +: INDEX_WIDTH];
    wire [  TAG_WIDTH-1:0]     pred_pc_tag_2    = pc_plus_4[2 + INDEX_WIDTH +: TAG_WIDTH];

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

    // ==== 该指令发射时预测时刻的元数据快照 (随指令携带) ====
    // 训练使能
    wire tage_update_en_1 = bru_dnpc_valid_1 && !bru_is_jal_1 && !bru_is_jalr_1;

    wire [GHR_WIDTH-1:0] ghr_s2;  // slot2 预测使用的 GHR: 包含 slot1 条件分支的投机结果

    tage #(.PC_WIDTH(DATA_WIDTH), .GHR_WIDTH(GHR_WIDTH)) u_tage_core (
        .clk              (clk                                           ),
        .rst              (rst                                           ),
        // slot 1 预测读端口
        .pred_pc          (pc                                            ),
        .pred_ghr         (ghr                                           ),
        .pred_ghr2        (ghr_s2                                        ),
        .pred_taken       (tage_pred_taken_1                             ),
        .pred_provider    (tage_pred_provider_1                          ),
        .pred_alt_taken   (tage_pred_alt_taken_1                         ),
        // slot 2 预测读端口 (pc+4)
        .pred_pc2         (pc_plus_4                                     ),
        .pred_taken2      (tage_pred_taken_2                             ),
        .pred_provider2   (tage_pred_provider_2                          ),
        .pred_alt_taken2  (tage_pred_alt_taken_2                         ),
        // slot 1 (older) 更新端口 — 用执行时携带的预测时刻快照, 抗同行覆盖竞态
        .update_en1       (tage_update_en_1                              ),
        .update_pc1       (bru_pc_1                                      ),
        .update_taken1    (bru_taken_1                                   ),
        .update_provider1 (bru_provider_1                                ),
        .update_alt_taken1(bru_alt_taken_1                               ),
        .update_pred_taken1(bru_dir_1                                    ),
        .update_ghr1      (bru_ghr_1                                     ),
        // slot 2 (younger) 更新端口 — 通道2不在顶层接线, 恒不训练
        .update_en2       (1'b0                                           ),
        .update_pc2       (32'b0                                          ),
        .update_taken2    (1'b0                                           ),
        .update_provider2 (3'b0                                           ),
        .update_alt_taken2(1'b0                                           ),
        .update_pred_taken2(1'b0                                          ),
        .update_ghr2      (32'b0                                          )
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
    // Fix: 真实目标为 0 时不训练 (错路径 jalr 可能算出 target=0), 否则该表项
    //      后续被命中时会把取指重定向到地址 0 → 越界访问卡死。
    wire ittage_update_en_1 = bru_dnpc_valid_1 && (bru_is_indirect_1 || bru_is_jalr_1)
                              && (bru_dnpc_1 != 32'h0);

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
        // slot 2 (younger) 更新端口 — 通道2不在顶层接线, 恒不训练
        .update_en2   (1'b0                 ),
        .update_pc2   (32'b0                ),
        .real_target2 (32'b0                ),
        .br_taken2    (1'b0                 )
    );

    // Slot 1 (pc) 预测结果
    wire ftb_cond_branch_pred_1 = ftb_hit_1 && tage_pred_taken_1
                                  && !is_jal_1 && !is_jalr_1
                                  && !ftb_hit_is_jal_1 && !ftb_hit_is_jalr_1;
    // 最终对条件分支实际采用的预测方向: 只有 FTB 命中且目标有效时才预测 taken
    wire cond_pred_taken_1 = ftb_cond_branch_pred_1 && (ftb_target_selected_1 != 30'h0);
    wire actual_taken_pred_1 = ftb_hit_1 && (is_jal_1 || is_jalr_1 || ftb_hit_is_jal_1 || ftb_hit_is_jalr_1 || tage_pred_taken_1);
    wire [DATA_WIDTH-1:0] ftb_predicted_target_1 = {ftb_target_selected_1, 2'b00};
    wire [DATA_WIDTH-1:0] ras_pop_addr_base      = ras_stack[ras_ptr - 1'b1];
    wire                  ras_empty_base         = (ras_cnt == 0);
    wire                  ras_pop_valid_base     = (ras_pop_addr_base != 32'h0);
    wire                  ftb_target_valid_1     = (ftb_target_selected_1 != 30'h0);
    // Fix: ITTAGE 表项可能存有 target=0 (历史训练数据), 视为无效预测
    wire                  ittage_target_valid_1  = ittage_pred_valid_1 && (ittage_pred_target_1 != 32'h0);

    wire slot1_need_redirect = bpu_en_1 && (
        (is_ret_1 && !ras_empty_base && ras_pop_valid_base)        ||
        ((is_jalr_1 || is_indirect_1) && ittage_target_valid_1)    ||
        (actual_taken_pred_1 && !ftb_cond_branch_pred_1 && ftb_target_valid_1) ||
        (ftb_cond_branch_pred_1 && ftb_target_valid_1)
    );

    assign dnpc_slot1 = (is_ret_1 && !ras_empty_base && ras_pop_valid_base                   ) ? ras_pop_addr_base      :
                        ((is_jalr_1 || is_indirect_1) && ittage_target_valid_1               ) ? ittage_pred_target_1   :
                        (actual_taken_pred_1 && !ftb_cond_branch_pred_1 && ftb_target_valid_1) ? ftb_predicted_target_1 :
                        (ftb_cond_branch_pred_1 && ftb_target_valid_1                        ) ? ftb_predicted_target_1 :
                        pc + 32'h4;

    // Slot 2 (pc+4) RAS 可见性 (slot1 投机操作后)
    wire s1_valid_no_redirect = !slot1_need_redirect;

    // slot2 的 TAGE 预测/训练应基于 slot1 条件分支已经投机移位后的 GHR
    assign ghr_s2 = (bpu_en_1 && is_cond_branch_1 && s1_valid_no_redirect) ?
                    {ghr[GHR_WIDTH-2:0], cond_pred_taken_1} : ghr;

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
    wire cond_pred_taken_2 = ftb_cond_branch_pred_2 && (ftb_target_selected_2 != 30'h0);
    wire actual_taken_pred_2 = ftb_hit_2 && (is_jal_2 || is_jalr_2 || ftb_hit_is_jal_2 || ftb_hit_is_jalr_2 || tage_pred_taken_2);
    wire [DATA_WIDTH-1:0] ftb_predicted_target_2 = {ftb_target_selected_2, 2'b00};
    wire                  ftb_target_valid_2     = (ftb_target_selected_2 != 30'h0);
    // Fix: ITTAGE 表项可能存有 target=0 (历史训练数据), 视为无效预测
    wire                  ittage_target_valid_2  = ittage_pred_valid_2 && (ittage_pred_target_2 != 32'h0);

    wire slot2_need_redirect = bpu_en_2 && s1_valid_no_redirect && (
        (is_ret_2 && !ras_empty_2 && ras_pop_valid_2)          ||
        ((is_jalr_2 || is_indirect_2) && ittage_target_valid_2)||
        (actual_taken_pred_2 && !ftb_cond_branch_pred_2 && ftb_target_valid_2) ||
        (ftb_cond_branch_pred_2 && ftb_target_valid_2)
    );

    assign dnpc_slot2 = (is_ret_2 && !ras_empty_2 && ras_pop_valid_2                         ) ? ras_pop_addr_2         :
                        ((is_jalr_2 || is_indirect_2) && ittage_target_valid_2               ) ? ittage_pred_target_2   :
                        (actual_taken_pred_2 && !ftb_cond_branch_pred_2 && ftb_target_valid_2) ? ftb_predicted_target_2 :
                        (ftb_cond_branch_pred_2 && ftb_target_valid_2                        ) ? ftb_predicted_target_2 :
                        pc + 32'h8;

    wire [1:0] pre_way_sel = (bpu_en_1 && slot1_need_redirect                        ) ? 2'b01 :
                             (bpu_en_2 && slot2_need_redirect && s1_valid_no_redirect) ? 2'b10 :
                             2'b00;

    wire [DATA_WIDTH-1:0] dnpc_sel = (bpu_en_1 && slot1_need_redirect                        ) ? dnpc_slot1 :
                                     (bpu_en_2 && slot2_need_redirect && s1_valid_no_redirect) ? dnpc_slot2 :
                                     pc + 32'h8;

    // Fix (兜底): 预测目标绝不允许为 0, 否则取指会跳到地址 0 (越界) 并因
    // icache miss 永不返回而卡死。任何路径算出 0 都退回顺序取指 pc+8,
    // 由 BRU 后续冲刷到真实目标兜底。
    assign dnpc     = (dnpc_sel != 32'h0) ? dnpc_sel : (pc + 32'h8);
    assign pre_way  = (dnpc_sel != 32'h0) ? pre_way_sel : 2'b00;

    // ===================== FTB 更新相关 (仅通道1) =====================
    wire [INDEX_WIDTH-1:0] update_set_idx_1  = bru_pc_1[2 +: INDEX_WIDTH];
    wire [  TAG_WIDTH-1:0] update_pc_tag_1   = bru_pc_1[2 + INDEX_WIDTH +: TAG_WIDTH];

    // ===================== 误预测检测 =====================
    wire [GHR_WIDTH-1:0]   hist_ghr_1       = bru_ghr_1;
    wire                   bru_mispredict_1 = bru_dnpc_valid_1 && (bru_dnpc_1 != bru_pred_dnpc_1);

    // ===================== 预测时刻元数据快照输出 (随指令携带) =====================
    // 组合输出, 与同拍的 dnpc_slot/inst 一起进入流水, 供后端 TAGE 训练与 GHR/RAS 恢复。
    // 曾用按 pc 索引的 meta 表: 同类地址多实例在飞时后写覆盖前写, 竞态导致
    // 训练用错 GHR/方向且无法恢复 — padding 实验证实。
    assign bpu_ghr1       = ghr;
    assign bpu_ghr2       = ghr_s2;
    assign bpu_prov1      = tage_pred_provider_1;
    assign bpu_prov2      = tage_pred_provider_2;
    assign bpu_alt1       = tage_pred_alt_taken_1;
    assign bpu_alt2       = tage_pred_alt_taken_2;
    assign bpu_dir1       = cond_pred_taken_1;
    assign bpu_dir2       = cond_pred_taken_2;
    assign bpu_ras_ptr1   = ras_ptr;
    assign bpu_ras_cnt1   = ras_cnt;
    assign bpu_ras_ptr2   = bpu_en_1 ? ras_ptr_after_s1 : ras_ptr;
    assign bpu_ras_cnt2   = bpu_en_1 ? ras_cnt_after_s1 : ras_cnt;

    // 仅 slot 1 存在训练反馈; slot 1 误预测时 slot 2 的指令也会被冲刷
    wire mispredict_active   = bru_dnpc_valid_1 && bru_mispredict_1;

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

    // ============ 前端投机更新 GHR ============
    // slot 1 条件分支更新使能: 仅真正的分支指令 (opcode 0x14-0x1b) 才更新 GHR
    wire ghr_update_s1 = bpu_en_1 && is_cond_branch_1;
    // slot 2 条件分支更新使能: 仅真正的分支指令且 slot1 不重定向时才更新
    wire ghr_update_s2 = bpu_en_2 && s1_valid_no_redirect && is_cond_branch_2;
        
    always @(posedge clk) begin
        if (rst) begin
            ras_ptr <= 'b0; ras_cnt <= 'b0; ghr <= 'b0;
            bp_cond_cnt <= 64'd0; bp_cond_misp_cnt <= 64'd0;
            bp_all_cnt <= 64'd0;  bp_all_misp_cnt <= 64'd0;
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

            // 预测时刻元数据快照: 由 bpu_ghr1/2 等组合输出, 随指令携带 (见上方 assign)
            // ============ GHR/RAS 后端恢复 ============
            // 原则: GHR/RAS 仅在前端投机更新 & mispredict 恢复时修改
            // 非 mispredict 时投机更新已正确, 无需后端追加
            // 仅通道1存在训练反馈; slot1 误预测时 slot2 的指令也会被冲刷
            if (mispredict_active) begin
                // slot 1 (older) 误预测: 用 slot 1 的快照恢复
                if (bru_is_jal_1 || bru_is_jalr_1) begin
                    ghr <= hist_ghr_1;
                end else begin
                    ghr <= {hist_ghr_1[GHR_WIDTH-2:0], bru_taken_1};
                end

                // RAS 回滚: slot 1 (携带的预测时刻快照)
                if (bru_is_call_1) begin
                    ras_stack[bru_ras_ptr_1] <= bru_pc_1 + 32'h4;
                    ras_ptr <= bru_ras_ptr_1 + 1'b1;
                    if (bru_ras_cnt_1 < RAS_DEPTH)
                        ras_cnt <= bru_ras_cnt_1 + 1'b1;
                    else
                        ras_cnt <= bru_ras_cnt_1;
                end else if (bru_is_ret_1 && (bru_ras_cnt_1 != 0)) begin
                    ras_ptr <= bru_ras_ptr_1 - 1'b1;
                    ras_cnt <= bru_ras_cnt_1 - 1'b1;
                end else begin
                    ras_ptr <= bru_ras_ptr_1;
                    ras_cnt <= bru_ras_cnt_1;
                end
            end else begin
                if (ghr_update_s1 || ghr_update_s2) begin
                    if (ghr_update_s1 && ghr_update_s2)
                        // 双路顺序移位: 先 slot1 方向, 再 slot2 方向
                        ghr <= {{ghr[GHR_WIDTH-3:0], cond_pred_taken_1}, cond_pred_taken_2};
                    else if (ghr_update_s1)
                        ghr <= {ghr[GHR_WIDTH-2:0], cond_pred_taken_1};
                    else
                        ghr <= {ghr[GHR_WIDTH-2:0], cond_pred_taken_2};
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
                    // Fix: 目标为 0 不写 (错路径可能算出 target=0, 写进 FTB 无意义)
                    if ((bru_taken_1 || bru_is_jal_1 || bru_is_jalr_1) && (bru_dnpc_1 != 32'h0)) begin
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
                    // Fix: 目标为 0 不写 (错路径可能算出 target=0, 写进 FTB 无意义)
                    if ((bru_taken_1 || bru_is_jal_1 || bru_is_jalr_1) && (bru_dnpc_1 != 32'h0)) begin
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

            // ============ 分支预测统计 ============
            if (bru_dnpc_valid_1) begin
                bp_all_cnt <= bp_all_cnt + 64'd1;
                if (bru_dnpc_1 != bru_pred_dnpc_1)
                    bp_all_misp_cnt <= bp_all_misp_cnt + 64'd1;
                if (!bru_is_jal_1 && !bru_is_jalr_1) begin
                    bp_cond_cnt <= bp_cond_cnt + 64'd1;
                    if (bru_dnpc_1 != bru_pred_dnpc_1)
                        bp_cond_misp_cnt <= bp_cond_misp_cnt + 64'd1;
                end
            end
        end
    end
endmodule
