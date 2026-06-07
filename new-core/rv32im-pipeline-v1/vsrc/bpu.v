module bpu #(
    parameter DATA_WIDTH        = 32  ,
    parameter FTB_WAYS          = 4   ,     
    parameter FTB_BLOCKS        = 128 ,  
    parameter TAG_WIDTH         = 16  ,
    parameter GHR_WIDTH         = 64  ,  
    parameter PHT_WIDE          = 2   ,
    parameter RAS_DEPTH         = 16
)(
    input  wire                     clk            ,
    input  wire                     rst            ,
    
    input  wire [DATA_WIDTH-1:0]    pc             ,
    output wire [DATA_WIDTH-1:0]    dnpc           ,
    input  wire                     is_jal         , 
    input  wire                     is_jalr        , 
    input  wire                     is_call        , 
    input  wire                     is_ret         , 
    input  wire                     is_indirect    ,  

    input  wire                     is_c_inst      ,
    input  wire                     bru_is_c_inst  ,

    input  wire [DATA_WIDTH-1:0]    bru_pc         ,
    input  wire [DATA_WIDTH-1:0]    bru_dnpc       ,
    input  wire                     bru_dnpc_valid ,
    input  wire                     bru_taken      ,
    input  wire                     bru_is_jal     ,
    input  wire                     bru_is_jalr    ,
    input  wire                     bru_is_call    ,
    input  wire                     bru_is_ret     ,
    input  wire                     bru_is_indirect
);

    localparam FTB_SETS        = FTB_BLOCKS / FTB_WAYS;
    localparam INDEX_WIDTH     = $clog2(FTB_SETS);
    localparam TARGET_WIDTH    = DATA_WIDTH - 2;
    localparam RAS_PTR_WIDTH   = $clog2(RAS_DEPTH);
    localparam WAY_WIDTH       = $clog2(FTB_WAYS);
    
    // 建立更大深度的元数据快照存储，降低不同流水指令的快照碰撞率
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

    wire [INDEX_WIDTH-1:0]     pred_set_idx  = pc[2 +: INDEX_WIDTH];
    wire [  TAG_WIDTH-1:0]     pred_pc_tag   = pc[2 + INDEX_WIDTH +: TAG_WIDTH];
    wire [ META_IDX_W-1:0]     pred_meta_idx = pc[2 +: META_IDX_W];

    // FTB 命中与路选择匹配
    reg                        ftb_hit;
    reg [   WAY_WIDTH-1:0]     hit_way_idx;
    reg [TARGET_WIDTH-1:0]     ftb_target_selected;
    reg                        ftb_hit_is_jal;
    reg                        ftb_hit_is_jalr;

    always @(*) begin
        ftb_hit             = 1'b0;
        hit_way_idx         = 'b0;
        ftb_target_selected = 'b0;
        ftb_hit_is_jal      = 1'b0;
        ftb_hit_is_jalr     = 1'b0;
        
        for (i = 0; i < FTB_WAYS; i = i + 1) begin
            if (ftb_valid[pred_set_idx][i] && (ftb_tag[pred_set_idx][i] == pred_pc_tag)) begin
                ftb_hit             = 1'b1;
                hit_way_idx         = i[WAY_WIDTH-1:0];
                ftb_target_selected = ftb_target[pred_set_idx][i];
                ftb_hit_is_jal      = ftb_is_jal[pred_set_idx][i];
                ftb_hit_is_jalr     = ftb_is_jalr[pred_set_idx][i];
            end
        end
    end

    wire        tage_pred_taken;
    wire [2:0]  tage_pred_provider;
    wire        tage_pred_alt_taken;

    wire [META_IDX_W-1:0] update_meta_idx = bru_pc[2 +: META_IDX_W];

    tage #(.PC_WIDTH(DATA_WIDTH), .GHR_WIDTH(GHR_WIDTH)) u_tage_core (
        .clk             (clk                                           ),
        .rst             (rst                                           ),
        .pred_pc         (pc                                            ),
        .pred_ghr        (ghr                                           ),
        .pred_taken      (tage_pred_taken                               ),
        .pred_provider   (tage_pred_provider                            ),
        .pred_alt_taken  (tage_pred_alt_taken                           ),
        .update_en       (bru_dnpc_valid && !bru_is_jal && !bru_is_jalr ),
        .update_pc       (bru_pc                                        ),
        .update_taken    (bru_taken                                     ),
        .update_provider (meta_tage_provider[update_meta_idx]           ),
        .update_alt_taken(meta_tage_alt_taken[update_meta_idx]          ),
        .update_pred_taken(meta_dir[update_meta_idx]                    ), 
        .update_ghr      (meta_ghr[update_meta_idx]                     )
    );

    // 合并条件与无条件使能
    wire actual_taken_pred = ftb_hit && (is_jal || is_jalr || ftb_hit_is_jal || ftb_hit_is_jalr || tage_pred_taken);

    wire [DATA_WIDTH-1:0] ittage_pred_target;
    wire                  ittage_pred_valid;
    wire [1:0]            ittage_pred_conf1;

    ittage #(
        .T1_SIZE(32), .T2_SIZE(64), .T3_SIZE(128), .T4_SIZE(256),
        .PC_WIDTH(DATA_WIDTH), .TARGET_WIDTH(DATA_WIDTH), .TAG_WIDTH(14)
    ) u_ittage (
        .clk          (clk                                               ), 
        .reset        (rst                                               ),
        .fetch_pc1    (pc                                                ),
        .pred_target1 (ittage_pred_target                                ),
        .pred_valid1  (ittage_pred_valid                                 ),
        .pred_conf1   (ittage_pred_conf1                                 ),
        .update_en1   (bru_dnpc_valid && (bru_is_indirect || bru_is_jalr)), 
        .update_pc1   (bru_pc                                            ),
        .real_target1 (bru_dnpc                                          ),
        .br_taken1    (bru_taken                                         ),
        .fetch_pc2    ('b0                                               ),
        .pred_target2 (                                                  ),
        .pred_valid2  (                                                  ),
        .pred_conf2   (                                                  ),
        .update_en2   (1'b0                                              ),
        .update_pc2   ('b0                                               ), 
        .real_target2 ('b0                                               ), 
        .br_taken2    (1'b0                                              )
    );

    wire [DATA_WIDTH-1:0] ftb_predicted_target = {ftb_target_selected, 2'b00};
    wire [DATA_WIDTH-1:0] ras_pop_addr         = ras_stack[ras_ptr - 1'b1];
    wire                  ras_empty            = (ras_cnt == 0);

    assign dnpc = (is_ret && !ras_empty)                          ? ras_pop_addr :
                  ((is_jalr || is_indirect) && ittage_pred_valid) ? ittage_pred_target :
                  actual_taken_pred                               ? ftb_predicted_target :
                  pc + 32'h4;

    wire [INDEX_WIDTH-1:0] update_set_idx  = bru_pc[2 +: INDEX_WIDTH];
    wire [TAG_WIDTH-1:0]   update_pc_tag   = bru_pc[2 + INDEX_WIDTH +: TAG_WIDTH];
    
    // 直接通过真实的下一周期 bru_dnpc 与当初预测生成的 meta_pred_dnpc 比对
    wire [GHR_WIDTH-1:0]   hist_ghr        = meta_ghr[update_meta_idx];
    wire                   bru_mispredict  = bru_dnpc_valid && (bru_dnpc != meta_pred_dnpc[update_meta_idx]); 

    reg                    update_ftb_hit;
    reg [WAY_WIDTH-1:0]    update_hit_way;
    reg [WAY_WIDTH-1:0]    update_alloc_way;

    always @(*) begin
        update_ftb_hit   = 1'b0;
        update_hit_way   = 'b0;
        update_alloc_way = 'b0;
        for (w = 0; w < FTB_WAYS; w = w + 1) begin
            if (ftb_valid[update_set_idx][w] && (ftb_tag[update_set_idx][w] == update_pc_tag)) begin
                update_ftb_hit = 1'b1;
                update_hit_way = w[WAY_WIDTH-1:0];
            end
        end
        if (!update_ftb_hit) begin
            for (w = 0; w < FTB_WAYS; w = w + 1) begin
                if (!ftb_valid[update_set_idx][w]) update_alloc_way = w[WAY_WIDTH-1:0];
            end
            if (ftb_valid[update_set_idx][update_alloc_way]) begin
                for (w = 0; w < FTB_WAYS; w = w + 1) begin
                    if (ftb_lru[update_set_idx][w] == 0) update_alloc_way = w[WAY_WIDTH-1:0];
                end
            end
        end
    end

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
            if (is_call) begin
                ras_stack[ras_ptr] <= is_c_inst ? (pc + 32'h2) : (pc + 32'h4);
                ras_ptr <= ras_ptr + 1'b1;
                if (ras_cnt < RAS_DEPTH) ras_cnt <= ras_cnt + 1'b1;
            end else if (is_ret && !ras_empty) begin
                ras_ptr <= ras_ptr - 1'b1;
                ras_cnt <= ras_cnt - 1'b1;
            end

            // 锁存当前预测周期的相关元数据状态机快照
            meta_ghr[pred_meta_idx]            <= ghr;
            meta_dir[pred_meta_idx]            <= tage_pred_taken;
            meta_tage_provider[pred_meta_idx]  <= tage_pred_provider;
            meta_tage_alt_taken[pred_meta_idx] <= tage_pred_alt_taken;
            meta_pred_dnpc[pred_meta_idx]      <= dnpc;
            meta_ras_ptr[pred_meta_idx]        <= ras_ptr;
            meta_ras_cnt[pred_meta_idx]        <= ras_cnt;

            // 后端控制器的 GHR 恢复与更新过滤
            if (bru_dnpc_valid && bru_mispredict) begin
                if (bru_is_jal || bru_is_jalr) begin
                    ghr <= hist_ghr; // 无条件跳转发生目标误判时恢复历史，但不压入多余内容
                end else begin
                    ghr <= {hist_ghr[GHR_WIDTH-2:0], bru_taken}; // 条件分支恢复并追加真实跳转行为
                end
                
                // RAS 回滚逻辑。一旦发生 Mispredict，用当初的快照完全恢复指针并根据当前真实指令补偿行为
                if (bru_is_call) begin
                    ras_stack[meta_ras_ptr[update_meta_idx]] <= bru_is_c_inst ? (bru_pc + 32'h2) : (bru_pc + 32'h4);
                    ras_ptr <= meta_ras_ptr[update_meta_idx] + 1'b1;
                    if (meta_ras_cnt[update_meta_idx] < RAS_DEPTH)
                        ras_cnt <= meta_ras_cnt[update_meta_idx] + 1'b1;
                    else
                        ras_cnt <= meta_ras_cnt[update_meta_idx];
                end else if (bru_is_ret && (meta_ras_cnt[update_meta_idx] != 0)) begin
                    ras_ptr <= meta_ras_ptr[update_meta_idx] - 1'b1;
                    ras_cnt <= meta_ras_cnt[update_meta_idx] - 1'b1;
                end else begin
                    ras_ptr <= meta_ras_ptr[update_meta_idx];
                    ras_cnt <= meta_ras_cnt[update_meta_idx];
                end
            end else if (ftb_hit) begin
                // 前端投机更新 GHR (仅针对正常的条件分支)
                if (!is_jal && !is_jalr && !ftb_hit_is_jal && !ftb_hit_is_jalr) begin
                    ghr <= {ghr[GHR_WIDTH-2:0], tage_pred_taken};
                end
                
                // 击中时的 LRU 更新
                for (w = 0; w < FTB_WAYS; w = w + 1) begin
                    if (w[WAY_WIDTH-1:0] == hit_way_idx)
                        ftb_lru[pred_set_idx][w] <= FTB_WAYS - 1;
                    else if (ftb_lru[pred_set_idx][w] > ftb_lru[pred_set_idx][hit_way_idx])
                        ftb_lru[pred_set_idx][w] <= ftb_lru[pred_set_idx][w] - 1'b1;
                end
            end

            // FTB 槽位分配与训练机制
            if (bru_dnpc_valid) begin
                if (update_ftb_hit) begin
                    ftb_valid[update_set_idx][update_hit_way] <= 1'b1;
                    if (bru_is_jal)  ftb_is_jal[update_set_idx][update_hit_way]  <= 1'b1;
                    if (bru_is_jalr) ftb_is_jalr[update_set_idx][update_hit_way] <= 1'b1;
                    if (bru_taken || bru_is_jal || bru_is_jalr) begin
                        ftb_target[update_set_idx][update_hit_way] <= bru_dnpc[2 +: TARGET_WIDTH];
                    end
                end else if (bru_taken | bru_is_jal | bru_is_jalr) begin
                    ftb_valid[update_set_idx][update_alloc_way]  <= 1'b1;
                    ftb_tag[update_set_idx][update_alloc_way]    <= update_pc_tag;
                    ftb_is_jal[update_set_idx][update_alloc_way] <= bru_is_jal;
                    ftb_is_jalr[update_set_idx][update_alloc_way]<= bru_is_jalr;
                    if (bru_taken || bru_is_jal || bru_is_jalr) begin
                        ftb_target[update_set_idx][update_alloc_way] <= bru_dnpc[2 +: TARGET_WIDTH];
                    end
                    for (w = 0; w < FTB_WAYS; w = w + 1) begin
                        if (w[WAY_WIDTH-1:0] == update_alloc_way)
                            ftb_lru[update_set_idx][w] <= FTB_WAYS - 1;
                        else if (ftb_lru[update_set_idx][w] > 0)
                            ftb_lru[update_set_idx][w] <= ftb_lru[update_set_idx][w] - 1'b1;
                    end
                end
            end
        end
    end
endmodule
