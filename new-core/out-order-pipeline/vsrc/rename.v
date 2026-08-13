`include "defines.vh"

module rename #(
    parameter ARCH_REG_NUM  = 32,
    parameter PHY_REG_NUM   = 64,
    parameter HIST_DEPTH    = 16,
    parameter INST_WIDTH    = 32,
    parameter ID_WIDTH      = 4,
    parameter PHY_REG_WIDTH = $clog2(PHY_REG_NUM),
    parameter FRP_PTR_WIDTH = $clog2(PHY_REG_NUM)
)(
    input  wire                     clk              ,
    input  wire                     rst              ,
    input  wire                     flush            , // 保证到来的flush为1周期脉冲信号
    input  wire [     ID_WIDTH-1:0] flush_id         ,
    input  wire                     iq_full          , // issue队列满，阻塞rename防止指令丢失
    
    // 分发通道 1
    input  wire                     ifu_valid_1      ,
    input  wire [              4:0] rs1_1            ,
    input  wire [              4:0] rs2_1            ,
    input  wire [              4:0] rd_1             ,
    input  wire                     wen_1            ,
    input  wire                     mdu_type_1       ,
    input  wire                     special_type_1   ,
    input  wire                     quick_type_1     ,
    input  wire                     ctrl_type_1      ,
    input  wire                     st_ld_type_1     ,
    
    output reg                      rename_valid_1   ,
    output reg  [PHY_REG_WIDTH-1:0] phy_rs1_1        ,
    output reg  [PHY_REG_WIDTH-1:0] phy_rs2_1        ,
    output reg  [PHY_REG_WIDTH-1:0] phy_rd_1         ,
    output reg                      phy_rs1_rdy_1    , // 源操作数rs1就绪
    output reg                      phy_rs2_rdy_1    , // 源操作数rs2就绪
    output reg  [     ID_WIDTH-1:0] rename_id_1      ,
    output reg                      mdu_type_o_1     ,
    output reg                      special_type_o_1 ,
    output reg                      quick_type_o_1   ,
    output reg                      ctrl_type_o_1    ,
    output reg                      st_ld_type_o_1   ,

    // 分发通道 2
    input  wire                     ifu_valid_2      ,
    input  wire [              4:0] rs1_2            ,
    input  wire [              4:0] rs2_2            ,
    input  wire [              4:0] rd_2             ,
    input  wire                     wen_2            ,    
    input  wire                     mdu_type_2       ,
    input  wire                     special_type_2   ,
    input  wire                     quick_type_2     ,
    input  wire                     ctrl_type_2      ,
    input  wire                     st_ld_type_2     ,
    
    output reg                      rename_valid_2   ,
    output reg  [PHY_REG_WIDTH-1:0] phy_rs1_2        ,
    output reg  [PHY_REG_WIDTH-1:0] phy_rs2_2        ,
    output reg  [PHY_REG_WIDTH-1:0] phy_rd_2         ,
    output reg                      phy_rs1_rdy_2    , 
    output reg                      phy_rs2_rdy_2    , 
    output reg  [     ID_WIDTH-1:0] rename_id_2      ,
    output reg                      mdu_type_o_2     ,
    output reg                      special_type_o_2 ,
    output reg                      quick_type_o_2   ,
    output reg                      ctrl_type_o_2    ,
    output reg                      st_ld_type_o_2   ,

    // du_bus 透传 (与rename输出对齐)
    input  wire [`ID_TO_IS_WD-1:0] du_bus_1         ,
    input  wire [`ID_TO_IS_WD-1:0] du_bus_2         ,
    output reg  [`ID_TO_IS_WD-1:0] du_bus_o_1       ,
    output reg  [`ID_TO_IS_WD-1:0] du_bus_o_2       ,

    // 双 CDB 唤醒
    input  wire                     cdb_valid_1      ,
    input  wire [     ID_WIDTH-1:0] cdb_id_1         , // 提交cdb的指令id
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_1        , // 写回的目的寄存器标签
    input  wire                     cdb_valid_2      ,
    input  wire [     ID_WIDTH-1:0] cdb_id_2         , 
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_2        , 

    // 双提交入口
    input  wire                     commit_valid_1   ,
    input  wire                     commit_valid_2   ,
    output wire                     rename_full      

    ,output wire [ARCH_REG_NUM*PHY_REG_WIDTH-1:0] commit_rat // for difftest
    ,output wire [PHY_REG_NUM-1:0] phy_ready_o
);

assign phy_ready_o = phy_ready;

wire [31:0] trace_pc1 = du_bus_o_1[196:165];
wire [31:0] trace_pc2 = du_bus_o_2[196:165];

// 物理寄存器就绪状态跟踪
reg [PHY_REG_NUM-1:0] phy_ready;

localparam HIST_CNT_WIDTH = $clog2(HIST_DEPTH);
localparam [PHY_REG_WIDTH-1:0] ARCH_REG_NUM_PHY = ARCH_REG_NUM;
localparam [FRP_PTR_WIDTH:0  ] FRP_INIT_PTR_EXT = PHY_REG_NUM - ARCH_REG_NUM;
localparam [FRP_PTR_WIDTH-1:0] FRP_INIT_PTR     = FRP_INIT_PTR_EXT[FRP_PTR_WIDTH-1:0];

// 前端投机RAT
reg [PHY_REG_WIDTH-1:0] arch_rat [ARCH_REG_NUM-1:0];

// for difftest 真实rat
reg [PHY_REG_WIDTH-1:0] commit_rat_reg [ARCH_REG_NUM-1:0];
genvar commit_rat_idx;
generate
    for (commit_rat_idx = 0; commit_rat_idx < ARCH_REG_NUM; commit_rat_idx = commit_rat_idx + 1) begin : gen_commit_rat
        assign commit_rat[commit_rat_idx*PHY_REG_WIDTH +: PHY_REG_WIDTH] = commit_rat_reg[commit_rat_idx];
    end
endgenerate

reg  [     ID_WIDTH-1:0] id_pool;

// 历史映射FIFO：保存被替换掉的旧物理寄存器
reg [ PHY_REG_WIDTH-1:0] hist_ophy[HIST_DEPTH-1:0];
reg [ PHY_REG_WIDTH-1:0] hist_nphy[HIST_DEPTH-1:0];
reg [               4:0] hist_rd  [HIST_DEPTH-1:0];
reg [      ID_WIDTH-1:0] hist_id  [HIST_DEPTH-1:0];
reg [HIST_CNT_WIDTH-1:0] hist_head, hist_tail;
reg [    HIST_DEPTH-1:0] hist_valid, hist_store;  

// 空闲物理寄存器池 FRP
reg [PHY_REG_WIDTH-1:0] frp         [PHY_REG_NUM-1:0];
reg [FRP_PTR_WIDTH-1:0] frp_wr_ptr;
reg [FRP_PTR_WIDTH-1:0] frp_rd_ptr;

reg [ID_WIDTH-1:0] cmt_id_reg;

    // 满判断逻辑（保留至少 2 个空槽以支持双发射）
    // Fix: 使用 $countones 精确统计有效条目数, 防止 flush 后 hist_valid 被清零
    // 但指针距离仍计入 hist_used, 导致 rename_full 误判为满.
    wire [HIST_CNT_WIDTH:0] hist_used;
    wire [HIST_CNT_WIDTH:0] hist_valid_cnt;
    assign hist_valid_cnt = $countones(hist_valid);
    assign hist_used = (hist_head == hist_tail) ?
                       (hist_valid[hist_tail] ? HIST_DEPTH[HIST_CNT_WIDTH:0] : 0) :
                       hist_valid_cnt;
    assign rename_full = (hist_used >= (HIST_DEPTH - 2));

wire   rename_en_1 = ifu_valid_1 && !rename_full && !iq_full;
wire   rename_en_2 = ifu_valid_2 && !rename_full && !iq_full;
wire   write_en_1  = rename_en_1 && wen_1 && (rd_1 != 5'b0);
wire   write_en_2  = rename_en_2 && wen_2 && (rd_2 != 5'b0);

// 从FRP分配新的物理寄存器
wire [PHY_REG_WIDTH-1:0] new_phy_1 = frp[frp_rd_ptr];
wire [PHY_REG_WIDTH-1:0] new_phy_2 = frp[frp_rd_ptr + {{FRP_PTR_WIDTH-1{1'b0}}, write_en_1}];

// === 组内相关性检测 (Intra-Group RAW / WAW Dependency) ===
wire raw_rs1_2 = rename_en_1 && write_en_1 && (rs1_2 == rd_1) && (rs1_2 != 5'b0);
wire raw_rs2_2 = rename_en_1 && write_en_1 && (rs2_2 == rd_1) && (rs2_2 != 5'b0);
wire waw_rd_2  = rename_en_1 && write_en_1 && rename_en_2 && write_en_2 && (rd_1 == rd_2);

// 通道1映射
wire [PHY_REG_WIDTH-1:0] mapped_rs1_1 = (rs1_1 == 5'b0) ? 0 : arch_rat[rs1_1];
wire [PHY_REG_WIDTH-1:0] mapped_rs2_1 = (rs2_1 == 5'b0) ? 0 : arch_rat[rs2_1];

// 通道2映射 (如果触发RAW，直接旁路通道1分配的新寄存器)
wire [PHY_REG_WIDTH-1:0] mapped_rs1_2 = (rs1_2 == 5'b0) ? 0 : (raw_rs1_2 ? new_phy_1 : arch_rat[rs1_2]);
wire [PHY_REG_WIDTH-1:0] mapped_rs2_2 = (rs2_2 == 5'b0) ? 0 : (raw_rs2_2 ? new_phy_1 : arch_rat[rs2_2]);

// === CDB广播与Ready信号生成 ===
integer i;
reg cdb_valid_true_1, cdb_valid_true_2; 
always @(*) begin
    cdb_valid_true_1 = 1'b0;
    cdb_valid_true_2 = 1'b0;
    for (i = 0; i < HIST_DEPTH; i = i + 1) begin
        if (cdb_valid_1 && hist_valid[i] && (hist_id[i] == cdb_id_1)) cdb_valid_true_1 = 1'b1;
        if (cdb_valid_2 && hist_valid[i] && (hist_id[i] == cdb_id_2)) cdb_valid_true_2 = 1'b1;
    end
end

wire cdb1_m_rs1_1 = cdb_valid_true_1 && (cdb_tag_1 == mapped_rs1_1);
wire cdb2_m_rs1_1 = cdb_valid_true_2 && (cdb_tag_2 == mapped_rs1_1);
wire rs1_rdy_1_comb = (rs1_1 == 5'b0) ? 1'b1 : (phy_ready[mapped_rs1_1] | cdb1_m_rs1_1 | cdb2_m_rs1_1); 

wire cdb1_m_rs2_1 = cdb_valid_true_1 && (cdb_tag_1 == mapped_rs2_1);
wire cdb2_m_rs2_1 = cdb_valid_true_2 && (cdb_tag_2 == mapped_rs2_1);
wire rs2_rdy_1_comb = (rs2_1 == 5'b0) ? 1'b1 : (phy_ready[mapped_rs2_1] | cdb1_m_rs2_1 | cdb2_m_rs2_1);

// 注意：如果通道2触发RAW相关，则意味着数据在这一周期才刚刚准备被生产，所以一定未就绪 (1'b0)
wire cdb1_m_rs1_2 = cdb_valid_true_1 && (cdb_tag_1 == mapped_rs1_2);
wire cdb2_m_rs1_2 = cdb_valid_true_2 && (cdb_tag_2 == mapped_rs1_2);
wire rs1_rdy_2_comb = (rs1_2 == 5'b0) ? 1'b1 : (raw_rs1_2 ? 1'b0 : (phy_ready[mapped_rs1_2] | cdb1_m_rs1_2 | cdb2_m_rs1_2));

wire cdb1_m_rs2_2 = cdb_valid_true_1 && (cdb_tag_1 == mapped_rs2_2);
wire cdb2_m_rs2_2 = cdb_valid_true_2 && (cdb_tag_2 == mapped_rs2_2);
wire rs2_rdy_2_comb = (rs2_2 == 5'b0) ? 1'b1 : (raw_rs2_2 ? 1'b0 : (phy_ready[mapped_rs2_2] | cdb1_m_rs2_2 | cdb2_m_rs2_2));


// === 冲刷状态恢复运算组合逻辑 ===
reg [HIST_CNT_WIDTH-1:0] flush_ptr;
always @(*) begin
    flush_ptr = 0;
    for (i = 0; i < HIST_DEPTH; i = i + 1) begin
        if ((hist_valid[i]) && (hist_id[i] == flush_id)) begin
            flush_ptr = i[HIST_CNT_WIDTH-1:0];
        end
    end
end

reg [ PHY_REG_WIDTH-1:0] temp_arch_rat [ARCH_REG_NUM-1:0];
reg [    HIST_DEPTH-1:0] temp_hist_store;
reg [    HIST_DEPTH-1:0] temp_hist_valid;
reg [HIST_CNT_WIDTH-1:0] temp_hist_head;
reg [ FRP_PTR_WIDTH-1:0] rst_cnt;       
reg [  ARCH_REG_NUM-1:0] reg_restored;  

wire [HIST_CNT_WIDTH-1:0] real_flush_ptr = (flush_ptr + 1'b1);
wire [HIST_DEPTH-1:0] mask_head = (1 << hist_head)      - 1'b1;
wire [HIST_DEPTH-1:0] mask_tail = (1 << real_flush_ptr) - 1'b1;
wire [HIST_DEPTH-1:0] flush_mask = (hist_head >= real_flush_ptr) ? 
                                   (mask_head & ~mask_tail) : 
                                   (mask_head | ~mask_tail);
wire [HIST_DEPTH-1:0] active_flush_mask = flush_mask & hist_valid & hist_store;

reg [HIST_CNT_WIDTH-1:0] idx; 
always @(*) begin
    for (i = 0; i < ARCH_REG_NUM; i = i + 1) begin
        temp_arch_rat[i] = arch_rat[i];
    end
    reg_restored = {ARCH_REG_NUM{1'b0}};
    rst_cnt      = 0;
    
    temp_hist_store = hist_store & ~flush_mask;
    temp_hist_valid = hist_valid & ~flush_mask;
    temp_hist_head  = real_flush_ptr;

    for (i = 0; i < HIST_DEPTH; i = i + 1) begin
        idx = real_flush_ptr + i[HIST_CNT_WIDTH-1:0]; 
        if (active_flush_mask[idx]) begin
            if (!reg_restored[hist_rd[idx]]) begin
                temp_arch_rat[hist_rd[idx]] = hist_ophy[idx];
                reg_restored[hist_rd[idx]]  = 1'b1; 
            end
            rst_cnt = rst_cnt + 1'b1;
        end
    end
end

// === 时序逻辑状态更新 ===
wire [HIST_CNT_WIDTH-1:0] h_idx_0 = hist_head;
wire [HIST_CNT_WIDTH-1:0] h_idx_1 = hist_head + {{HIST_CNT_WIDTH-1{1'b0}}, rename_en_1};
wire [HIST_CNT_WIDTH-1:0] t_idx_0 = hist_tail;
wire [HIST_CNT_WIDTH-1:0] t_idx_1 = hist_tail + {{HIST_CNT_WIDTH-1{1'b0}}, commit_valid_1};
wire [HIST_CNT_WIDTH-1:0] hist_tail_adv = hist_tail
    + {{HIST_CNT_WIDTH-1{1'b0}}, commit_valid_1}
    + {{HIST_CNT_WIDTH-1{1'b0}}, commit_valid_2};

always @(posedge clk) begin
    if (rst) begin
        for (i = 0; i < ARCH_REG_NUM; i = i + 1) begin
            arch_rat[i] <= i[PHY_REG_WIDTH-1:0];
            commit_rat_reg[i] <= i[PHY_REG_WIDTH-1:0];
        end
        for (i = 0; i < PHY_REG_NUM - ARCH_REG_NUM; i = i + 1) begin
            frp[i] <= i[PHY_REG_WIDTH-1:0] + ARCH_REG_NUM_PHY;
        end
        for (i = 0; i < PHY_REG_NUM; i = i + 1) begin
            phy_ready[i] <= (i < ARCH_REG_NUM) ? 1'b1 : 1'b0;
        end

        id_pool    <= 0;
        cmt_id_reg <= 0;
        frp_wr_ptr <= FRP_INIT_PTR;
        frp_rd_ptr <= 0;
        hist_head  <= 0;
        hist_tail  <= 0;
        hist_valid <= 0;
        hist_store <= 0;

        rename_valid_1 <= 0; rename_valid_2 <= 0;
        du_bus_o_1     <= 0; du_bus_o_2     <= 0;
    end else begin
        if (flush) begin
            // Fix: 冲刷期间存活指令的 CDB 写回不能被丢弃.
            // rob.v 的 rob_done 标记不受 flush 影响 (存活指令完成照常记录),
            // 但此处 phy_ready 更新若只在非 flush 分支执行, 存活指令完成时的
            // cdb 写回会被整体丢弃 → 其 new_phy 永远 ready=0 →
            // 依赖该 phy 的指令永不唤醒 → RS/ROB 死锁.
            // 被冲刷指令的 cdb 写回置 phy_ready=1 亦无害: 其 new_phy 正在
            // 经 frp_rd_ptr 回退回收, 重新分配时 phy_ready 会再被清零.
            if (cdb_valid_true_1) phy_ready[cdb_tag_1] <= 1'b1;
            if (cdb_valid_true_2) phy_ready[cdb_tag_2] <= 1'b1;
            for (i = 0; i < ARCH_REG_NUM; i = i + 1) arch_rat[i] <= temp_arch_rat[i];
            hist_store <= temp_hist_store;
            hist_valid <= temp_hist_valid;
            hist_head  <= temp_hist_head;
            id_pool    <= flush_id + 1'b1;
            frp_rd_ptr <= frp_rd_ptr - rst_cnt;
            rename_valid_1 <= 1'b0;
            rename_valid_2 <= 1'b0;
            // Fix: ROB 的 rob_cmt_valid 是寄存器输出, 冲刷脉冲到达当拍仍会携带上一拍已授权的退役.
            // 该退役在 ROB 内已生效 (rob_tail/rob_valid 已更新), 若冲刷分支跳过退役处理,
            // hist 对应条目将永久泄漏, hist_used 逐次累积直至 rename_full 卡死流水线.
            // 因此冲刷分支也必须同步处理退役 (推进 hist_tail 并释放 hist_valid), 再叠加冲刷恢复.
            cmt_id_reg <= commit_valid_2 ? hist_id[t_idx_1] :
                          commit_valid_1 ? hist_id[t_idx_0] : cmt_id_reg;
            if (commit_valid_1) begin
                hist_valid[t_idx_0] <= 1'b0;
                if (hist_store[t_idx_0]) begin
                    hist_store[t_idx_0] <= 1'b0;
                    commit_rat_reg[hist_rd[t_idx_0]] <= hist_nphy[t_idx_0];
                    frp[frp_wr_ptr] <= hist_ophy[t_idx_0];
                    phy_ready[hist_ophy[t_idx_0]] <= 1'b1;
                end
            end
            if (commit_valid_2) begin
                hist_valid[t_idx_1] <= 1'b0;
                if (hist_store[t_idx_1]) begin
                    hist_store[t_idx_1] <= 1'b0;
                    commit_rat_reg[hist_rd[t_idx_1]] <= hist_nphy[t_idx_1];
                    frp[frp_wr_ptr + {{FRP_PTR_WIDTH-1{1'b0}}, (commit_valid_1 && hist_store[t_idx_0])}] <= hist_ophy[t_idx_1];
                    phy_ready[hist_ophy[t_idx_1]] <= 1'b1;
                end
            end
            frp_wr_ptr <= frp_wr_ptr + {{FRP_PTR_WIDTH-1{1'b0}}, (commit_valid_1 && hist_store[t_idx_0])} + {{FRP_PTR_WIDTH-1{1'b0}}, (commit_valid_2 && hist_store[t_idx_1])};
            if (flush_mask[hist_tail_adv])
                hist_tail <= real_flush_ptr;
            else
                hist_tail <= hist_tail_adv;
        end else begin
            // 更新最近提交的 ID (移至非冲刷路径，避免冲刷周期内与 hist_tail 失配)
            cmt_id_reg <= commit_valid_2 ? hist_id[t_idx_1] :
                          commit_valid_1 ? hist_id[t_idx_0] : cmt_id_reg;
            // 1. 处理 CDB 唤醒
            if (cdb_valid_true_1) phy_ready[cdb_tag_1] <= 1'b1;
            if (cdb_valid_true_2) phy_ready[cdb_tag_2] <= 1'b1;
            
            // 2. 处理双 Commit 退役机制
            if (commit_valid_1) begin
                hist_valid[t_idx_0] <= 1'b0;
                if (hist_store[t_idx_0]) begin
                    hist_store[t_idx_0] <= 1'b0;
                    commit_rat_reg[hist_rd[t_idx_0]] <= hist_nphy[t_idx_0];
                    frp[frp_wr_ptr] <= hist_ophy[t_idx_0];
                    phy_ready[hist_ophy[t_idx_0]] <= 1'b1;
                end
            end
            if (commit_valid_2) begin
                hist_valid[t_idx_1] <= 1'b0;
                if (hist_store[t_idx_1]) begin
                    hist_store[t_idx_1] <= 1'b0;
                    commit_rat_reg[hist_rd[t_idx_1]] <= hist_nphy[t_idx_1];
                    frp[frp_wr_ptr + {{FRP_PTR_WIDTH-1{1'b0}}, (commit_valid_1 && hist_store[t_idx_0])}] <= hist_ophy[t_idx_1];
                    phy_ready[hist_ophy[t_idx_1]] <= 1'b1;
                end
            end
            // 双提交计数: 本周期 ROB 真实提交的数量
            // 若 ROB 没有真实提交且 hist_tail 指向无效条目 (被冲刷的 zombie),
            hist_tail <= hist_tail
                + {{HIST_CNT_WIDTH-1{1'b0}}, commit_valid_1}
                + {{HIST_CNT_WIDTH-1{1'b0}}, commit_valid_2}
                + {{HIST_CNT_WIDTH-1{1'b0}}, (~commit_valid_1 && ~commit_valid_2 && ~hist_valid[hist_tail] && (hist_tail != hist_head))};
            frp_wr_ptr <= frp_wr_ptr + {{FRP_PTR_WIDTH-1{1'b0}}, (commit_valid_1 && hist_store[t_idx_0])} + {{FRP_PTR_WIDTH-1{1'b0}}, (commit_valid_2 && hist_store[t_idx_1])};

            // 3. 处理双分发 Rename 阶段机制
            if (rename_en_1) begin
                rename_valid_1 <= 1'b1;
                rename_id_1    <= id_pool;
                phy_rs1_1      <= mapped_rs1_1;
                phy_rs2_1      <= mapped_rs2_1;
                phy_rs1_rdy_1  <= rs1_rdy_1_comb;
                phy_rs2_rdy_1  <= rs2_rdy_1_comb;

                mdu_type_o_1     <= mdu_type_1;
                special_type_o_1 <= special_type_1;
                quick_type_o_1   <= quick_type_1;
                ctrl_type_o_1    <= ctrl_type_1;
                st_ld_type_o_1   <= st_ld_type_1;
                du_bus_o_1       <= du_bus_1;

                hist_id[h_idx_0]    <= id_pool;
                hist_valid[h_idx_0] <= 1'b1;

                if (write_en_1) begin
                    phy_rd_1            <= new_phy_1;
                    hist_ophy[h_idx_0]  <= arch_rat[rd_1];
                    hist_nphy[h_idx_0]  <= new_phy_1;
                    hist_rd[h_idx_0]    <= rd_1;
                    hist_store[h_idx_0] <= 1'b1;
                    
                    arch_rat[rd_1]      <= new_phy_1;
                    phy_ready[new_phy_1]<= 1'b0;
                end else begin
                    phy_rd_1            <= 6'b0;
                    hist_store[h_idx_0] <= 1'b0;
                end
            end else begin
                rename_valid_1 <= 1'b0;
                du_bus_o_1     <= 'b0;
            end

            if (rename_en_2) begin
                rename_valid_2 <= 1'b1;
                rename_id_2    <= id_pool + {{ID_WIDTH-1{1'b0}}, rename_en_1};
                phy_rs1_2      <= mapped_rs1_2;
                phy_rs2_2      <= mapped_rs2_2;
                phy_rs1_rdy_2  <= rs1_rdy_2_comb;
                phy_rs2_rdy_2  <= rs2_rdy_2_comb;

                mdu_type_o_2     <= mdu_type_2;
                special_type_o_2 <= special_type_2;
                quick_type_o_2   <= quick_type_2;
                ctrl_type_o_2    <= ctrl_type_2;
                st_ld_type_o_2   <= st_ld_type_2;
                du_bus_o_2       <= du_bus_2;

                hist_id[h_idx_1]    <= id_pool + {{ID_WIDTH-1{1'b0}}, rename_en_1};
                hist_valid[h_idx_1] <= 1'b1;

                if (write_en_2) begin
                    phy_rd_2            <= new_phy_2;
                    // 处理组内 WAW（Write-After-Write）: 若指令 1、2 写入同一目标寄存器，
                    // 则指令 2 将被替换入历史堆栈的 "旧物理寄存器" 实际上是指令 1 的 "新物理寄存器"
                    hist_ophy[h_idx_1]  <= waw_rd_2 ? new_phy_1 : arch_rat[rd_2];
                    hist_nphy[h_idx_1]  <= new_phy_2;
                    hist_rd[h_idx_1]    <= rd_2;
                    hist_store[h_idx_1] <= 1'b1;
                    
                    arch_rat[rd_2]      <= new_phy_2;
                    phy_ready[new_phy_2]<= 1'b0;
                end else begin
                    phy_rd_2            <= 6'b0;
                    hist_store[h_idx_1] <= 1'b0;
                end
            end else begin
                rename_valid_2 <= 1'b0;
                du_bus_o_2     <= 'b0;
            end

            // 更新指针
            id_pool    <= id_pool + {{ID_WIDTH-1{1'b0}}, rename_en_1} + {{ID_WIDTH-1{1'b0}}, rename_en_2};
            hist_head  <= hist_head + {{HIST_CNT_WIDTH-1{1'b0}}, rename_en_1} + {{HIST_CNT_WIDTH-1{1'b0}}, rename_en_2};
            frp_rd_ptr <= frp_rd_ptr + {{FRP_PTR_WIDTH-1{1'b0}}, write_en_1} + {{FRP_PTR_WIDTH-1{1'b0}}, write_en_2};
        end
    end
end

endmodule
