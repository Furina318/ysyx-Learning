`include "defines.vh"

module rename #(
    parameter ARCH_REG_NUM  = 32,
    parameter PHY_REG_NUM   = 64,
    parameter ROB_DEPTH     = 64,
    parameter INST_WIDTH    = 32,
    parameter ID_WIDTH      = $clog2(ROB_DEPTH), 
    parameter PHY_REG_WIDTH = $clog2(PHY_REG_NUM),
    parameter FRP_PTR_WIDTH = $clog2(PHY_REG_NUM) + 1 // 增加1位用于满空判断
)(
    input  wire                     clk              ,
    input  wire                     rst              ,
    input  wire                     flush            ,
    input  wire [    ID_WIDTH-1:0]  flush_id         ,
    input  wire                     issue_full       ,
    input  wire                     rob_full         ,
 
    input  wire                     ifu_valid1       ,
    input  wire [ `FU_TO_RE_WD-1:0] fu_to_re_bus1    ,
    input  wire                     ifu_valid2       ,
    input  wire [ `FU_TO_RE_WD-1:0] fu_to_re_bus2    ,

    output reg                      rename_valid_1   ,
    output reg  [     ID_WIDTH-1:0] inst_id_1       ,
    output wire [ `RE_TO_IS_WD-1:0] rename_to_is_bus1,
    output reg                      rename_valid_2   ,
    output reg  [     ID_WIDTH-1:0] inst_id_2       ,
    output wire [ `RE_TO_IS_WD-1:0] rename_to_is_bus2,

    //================== CDB & Commit ===================
    // 双发射架构需要支持双CDB唤醒
    input  wire                     cdb_valid_1      ,
    input  wire [    ID_WIDTH-1:0]  cdb_id_1         , 
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_1        , 
    input  wire                     cdb_valid_2      ,
    input  wire [    ID_WIDTH-1:0]  cdb_id_2         , 
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_2        , 

    input  wire                     commit_valid_1   ,
    input  wire                     commit_valid_2   ,

    output wire                     rename_full      ,
    output wire [PHY_REG_WIDTH-1:0] commit_rat [ARCH_REG_NUM-1:0]
);

localparam HIST_DEPTH     = ROB_DEPTH; 
localparam HIST_CNT_WIDTH = $clog2(HIST_DEPTH);
localparam HIST_PTR_WIDTH = HIST_CNT_WIDTH + 1;

wire [             4:0]  rs1_1        ;
wire [             4:0]  rs2_1        ;
wire [             4:0]  rd_1         ;
wire                     wen_1        ;
wire                     ctrl_inst_1  ;
wire                     lsu_inst_1   ;
wire                     mdu_inst_1   ;
wire                     quick_inst_1 ;
wire [             4:0]  rs1_2        ;
wire [             4:0]  rs2_2        ;
wire [             4:0]  rd_2         ;
wire                     wen_2        ;
wire                     ctrl_inst_2  ;
wire                     lsu_inst_2   ;
wire                     mdu_inst_2   ;
wire                     quick_inst_2 ;

assign {
    rs1_1, rs2_1, rd_1, wen_1, ctrl_inst_1, lsu_inst_1, mdu_inst_1, quick_inst_1
} = fu_to_re_bus1;

assign {
    rs1_2, rs2_2, rd_2, wen_2, ctrl_inst_2, lsu_inst_2, mdu_inst_2, quick_inst_2
} = fu_to_re_bus2;

reg  [PHY_REG_WIDTH-1:0] phy_rs1_1     ;
reg  [PHY_REG_WIDTH-1:0] phy_rs2_1     ;
reg  [PHY_REG_WIDTH-1:0] phy_rd_1      ;
reg                      phy_rs1_rdy_1 ; 
reg                      phy_rs2_rdy_1 ; 
reg                      ctrl_type_1   ;
reg                      lsu_type_1    ;
reg                      mdu_type_1    ;
reg                      quick_wake_1  ;

reg  [PHY_REG_WIDTH-1:0] phy_rs1_2     ;
reg  [PHY_REG_WIDTH-1:0] phy_rs2_2     ;
reg  [PHY_REG_WIDTH-1:0] phy_rd_2      ;
reg                      phy_rs1_rdy_2 ; 
reg                      phy_rs2_rdy_2 ; 
reg                      ctrl_type_2   ;
reg                      lsu_type_2    ;
reg                      mdu_type_2    ;
reg                      quick_wake_2  ;

reg [  PHY_REG_NUM-1:0] phy_ready; // 物理寄存器就绪状态跟踪
reg [PHY_REG_WIDTH-1:0] arch_rat       [ARCH_REG_NUM-1:0]; // 重命名表
reg [PHY_REG_WIDTH-1:0] commit_rat_reg [ARCH_REG_NUM-1:0];
assign commit_rat = commit_rat_reg;

reg [    ID_WIDTH-1:0] id_pool; 
reg [    ID_WIDTH-1:0] cmt_id_reg;

// 记录容量，防止超发
assign rename_full = (cmt_id_reg[ID_WIDTH-1] ^ id_pool[ID_WIDTH-1]) && 
                     (cmt_id_reg[ID_WIDTH-2:0] == id_pool[ID_WIDTH-2:0]);

// 历史映射 FIFO
reg [ PHY_REG_WIDTH-1:0] hist_ophy  [HIST_DEPTH-1:0];
reg [ PHY_REG_WIDTH-1:0] hist_nphy  [HIST_DEPTH-1:0];
reg [               4:0] hist_rd    [HIST_DEPTH-1:0];
reg [      ID_WIDTH-1:0] hist_id    [HIST_DEPTH-1:0];
reg [HIST_PTR_WIDTH-1:0] hist_head, hist_tail;
reg [    HIST_DEPTH-1:0] hist_valid, hist_store;

// 空闲物理寄存器池 FRP 
reg [PHY_REG_WIDTH-1:0] frp [PHY_REG_NUM-1:0];
reg [FRP_PTR_WIDTH-1:0] frp_wr_ptr;
reg [FRP_PTR_WIDTH-1:0] frp_rd_ptr;

wire [FRP_PTR_WIDTH-1:0] frp_avail  = frp_wr_ptr - frp_rd_ptr; 
wire [HIST_PTR_WIDTH-1:0] hist_avail = HIST_DEPTH - (hist_head - hist_tail);

wire write_en_1 = ifu_valid1 && wen_1 && (rd_1 != 5'b0);
wire write_en_2 = ifu_valid2 && wen_2 && (rd_2 != 5'b0);
wire [1:0] total_phy_need  = write_en_1 + write_en_2;
wire [1:0] total_hist_need = ifu_valid1 + ifu_valid2;

wire stall = issue_full | rob_full | rename_full | 
             (frp_avail < total_phy_need) | (hist_avail < total_hist_need);

wire rename_en_1 = ifu_valid1 && !stall;
wire rename_en_2 = ifu_valid2 && rename_en_1 && !stall; // 严格按序，1能发2才能发

// CDB唤醒
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

// 重命名，处理包含双发射组内前递/旁路
wire [PHY_REG_WIDTH-1:0] new_phy_1 = frp[frp_rd_ptr[PHY_REG_WIDTH-1:0]];
wire [PHY_REG_WIDTH-1:0] new_phy_2 = frp[(frp_rd_ptr + write_en_1) % PHY_REG_NUM];

wire [PHY_REG_WIDTH-1:0] old_phy_1 = arch_rat[rd_1];
wire [PHY_REG_WIDTH-1:0] old_phy_2 = (rd_2 == rd_1 && write_en_1) ? new_phy_1 : arch_rat[rd_2];

// 组内 RAW 旁路映射
wire [PHY_REG_WIDTH-1:0] mapped_rs1_1 = (rs1_1 == 5'b0) ? 0 : arch_rat[rs1_1];
wire [PHY_REG_WIDTH-1:0] mapped_rs2_1 = (rs2_1 == 5'b0) ? 0 : arch_rat[rs2_1];

wire [PHY_REG_WIDTH-1:0] mapped_rs1_2 = (rs1_2 == 5'b0) ? 0 : 
                                       (rs1_2 == rd_1 && write_en_1) ? new_phy_1 : arch_rat[rs1_2];
wire [PHY_REG_WIDTH-1:0] mapped_rs2_2 = (rs2_2 == 5'b0) ? 0 : 
                                       (rs2_2 == rd_1 && write_en_1) ? new_phy_1 : arch_rat[rs2_2];

// 物理寄存器就绪状态判定
wire rs1_1_rdy = (rs1_1 == 5'b0) ? 1'b1 : phy_ready[mapped_rs1_1] | 
                (mapped_rs1_1 == cdb_tag_1 && cdb_valid_true_1) | 
                (mapped_rs1_1 == cdb_tag_2 && cdb_valid_true_2);
wire rs2_1_rdy = (rs2_1 == 5'b0) ? 1'b1 : phy_ready[mapped_rs2_1] | 
                (mapped_rs2_1 == cdb_tag_1 && cdb_valid_true_1) | 
                (mapped_rs2_1 == cdb_tag_2 && cdb_valid_true_2);

// 如果 Inst 2 依赖 Inst 1 刚分配的物理寄存器，必然未就绪
wire rs1_2_rdy = (rs1_2 == 5'b0) ? 1'b1 :
                (rs1_2 == rd_1 && write_en_1) ? 1'b0 : 
                phy_ready[mapped_rs1_2] | 
                (mapped_rs1_2 == cdb_tag_1 && cdb_valid_true_1) | 
                (mapped_rs1_2 == cdb_tag_2 && cdb_valid_true_2);
wire rs2_2_rdy = (rs2_2 == 5'b0) ? 1'b1 :
                (rs2_2 == rd_1 && write_en_1) ? 1'b0 :
                phy_ready[mapped_rs2_2] | 
                (mapped_rs2_2 == cdb_tag_1 && cdb_valid_true_1) | 
                (mapped_rs2_2 == cdb_tag_2 && cdb_valid_true_2);

// 冲刷回滚
reg [HIST_CNT_WIDTH-1:0] flush_ptr;
always @(*) begin
    flush_ptr = 0;
    for (i = 0; i < HIST_DEPTH; i = i + 1) begin
        if (hist_valid[i] && (hist_id[i] == flush_id)) begin
            flush_ptr = i[HIST_CNT_WIDTH-1:0];
        end
    end
end

wire [HIST_CNT_WIDTH-1:0] real_flush_ptr = (flush_ptr + 1'b1);
wire [HIST_CNT_WIDTH-1:0] h_idx = hist_head[HIST_CNT_WIDTH-1:0];

wire [HIST_DEPTH-1:0] mask_head = (1 << h_idx) - 1'b1;
wire [HIST_DEPTH-1:0] mask_tail = (1 << real_flush_ptr) - 1'b1;
wire [HIST_DEPTH-1:0] flush_mask = (h_idx >= real_flush_ptr) ?
                                   (mask_head & ~mask_tail) :
                                   (mask_head | ~mask_tail);

wire [HIST_DEPTH-1:0] active_flush_mask = flush_mask & hist_valid & hist_store;

reg [ PHY_REG_WIDTH-1:0] temp_arch_rat [ARCH_REG_NUM-1:0];
reg [    HIST_DEPTH-1:0] temp_hist_store;
reg [    HIST_DEPTH-1:0] temp_hist_valid;
reg [ FRP_PTR_WIDTH-1:0] rst_cnt;       
reg [  ARCH_REG_NUM-1:0] reg_restored;  
reg [HIST_CNT_WIDTH-1:0] idx;

always @(*) begin
    for (i = 0; i < ARCH_REG_NUM; i = i + 1) temp_arch_rat[i] = arch_rat[i];
    temp_hist_store = hist_store & ~flush_mask;
    temp_hist_valid = hist_valid & ~flush_mask;
    rst_cnt         = 0;
    reg_restored    = {ARCH_REG_NUM{1'b0}};

    // 必须从旧到新遍历才能保证回滚正确
    for (i = 0; i < HIST_DEPTH; i = i + 1) begin
        idx = real_flush_ptr + i; 
        if (active_flush_mask[idx]) begin
            if (!reg_restored[hist_rd[idx]]) begin
                temp_arch_rat[hist_rd[idx]] = hist_ophy[idx];
                reg_restored[hist_rd[idx]]  = 1'b1;
            end
            rst_cnt = rst_cnt + 1;
        end
    end
end

wire [HIST_CNT_WIDTH-1:0] next_hist_head_1 = hist_head[HIST_CNT_WIDTH-1:0] + rename_en_1;
wire [HIST_CNT_WIDTH-1:0] commit_tail_1    = hist_tail[HIST_CNT_WIDTH-1:0] + commit_valid_1;

always @(posedge clk) begin
    if (rst) begin
        for (i = 0; i < ARCH_REG_NUM; i = i + 1) begin
            arch_rat[i] <= i;
            commit_rat_reg[i] <= i;
        end
        for (i = 0; i < PHY_REG_NUM - ARCH_REG_NUM; i = i + 1) begin
            frp[i] <= i + ARCH_REG_NUM;
        end
        for (i = 0; i < PHY_REG_NUM; i = i + 1) begin
            phy_ready[i] <= (i < ARCH_REG_NUM) ? 1'b1 : 1'b0;
        end
        id_pool    <= 0;
        cmt_id_reg <= 0;
        frp_wr_ptr <= PHY_REG_NUM - ARCH_REG_NUM;
        frp_rd_ptr <= 0;
        hist_head  <= 0;
        hist_tail  <= 0;
        hist_valid <= 0;
        hist_store <= 0;
        
        rename_valid_1 <= 1'b0; rename_valid_2 <= 1'b0;
    end else begin
        
        // 记录最新提交或快进的 ID
        cmt_id_reg <= commit_valid_2 ? hist_id[commit_tail_1] :
                      commit_valid_1 ? hist_id[hist_tail[HIST_CNT_WIDTH-1:0]] :
                      cmt_id_reg;

        // 异常冲刷
        if (flush) begin
            for (i = 0; i < ARCH_REG_NUM; i = i + 1) arch_rat[i] <= temp_arch_rat[i];
            hist_store <= temp_hist_store;
            hist_valid <= temp_hist_valid;
            
            // hist_head 回滚 (保留满空状态位，重置低位索引)
            hist_head <= {hist_head[HIST_PTR_WIDTH-1], real_flush_ptr};
            // 归还被投机占用的物理寄存器
            frp_rd_ptr <= frp_rd_ptr - rst_cnt;
            
            rename_valid_1 <= 1'b0;
            rename_valid_2 <= 1'b0;
        end else begin

            // CDB 唤醒就绪标记
            if (cdb_valid_true_1) phy_ready[cdb_tag_1] <= 1'b1;
            if (cdb_valid_true_2) phy_ready[cdb_tag_2] <= 1'b1;

            // 架构提交 (双通道释放)
            if (commit_valid_1) begin
                hist_valid[hist_tail[HIST_CNT_WIDTH-1:0]] <= 1'b0;
                if (hist_store[hist_tail[HIST_CNT_WIDTH-1:0]]) begin
                    commit_rat_reg[hist_rd[hist_tail[HIST_CNT_WIDTH-1:0]]] <= hist_nphy[hist_tail[HIST_CNT_WIDTH-1:0]];
                    frp[frp_wr_ptr[PHY_REG_WIDTH-1:0]] <= hist_ophy[hist_tail[HIST_CNT_WIDTH-1:0]];
                    phy_ready[hist_ophy[hist_tail[HIST_CNT_WIDTH-1:0]]] <= 1'b0; // 旧寄存器收回FRP，标为未就绪
                end
            end
            
            if (commit_valid_2) begin
                hist_valid[commit_tail_1] <= 1'b0;
                if (hist_store[commit_tail_1]) begin
                    commit_rat_reg[hist_rd[commit_tail_1]] <= hist_nphy[commit_tail_1];
                    frp[(frp_wr_ptr + hist_store[hist_tail[HIST_CNT_WIDTH-1:0]]) % PHY_REG_NUM] <= hist_ophy[commit_tail_1];
                    phy_ready[hist_ophy[commit_tail_1]] <= 1'b0;
                end
            end
            
            frp_wr_ptr <= frp_wr_ptr + 
                          (commit_valid_1 & hist_store[hist_tail[HIST_CNT_WIDTH-1:0]]) + 
                          (commit_valid_2 & hist_store[commit_tail_1]);
            hist_tail  <= hist_tail + commit_valid_1 + commit_valid_2;

            // 派发重命名 (双路分配)
            if (rename_en_1) begin
                rename_valid_1 <= 1'b1;
                inst_id_1      <= id_pool;
                phy_rs1_1      <= mapped_rs1_1;
                phy_rs2_1      <= mapped_rs2_1;
                phy_rs1_rdy_1  <= rs1_1_rdy;
                phy_rs2_rdy_1  <= rs2_1_rdy;
                quick_wake_1   <= quick_inst_1;
                ctrl_type_1    <= ctrl_inst_1;
                mdu_type_1     <= mdu_inst_1;
                lsu_type_1     <= lsu_inst_1;

                hist_id[h_idx]    <= id_pool;
                hist_valid[h_idx] <= 1'b1;

                if (write_en_1) begin
                    phy_rd_1         <= new_phy_1;
                    arch_rat[rd_1]   <= new_phy_1;
                    phy_ready[new_phy_1] <= 1'b0; // 新分配的一定未就绪
                    
                    hist_ophy[h_idx]  <= old_phy_1;
                    hist_nphy[h_idx]  <= new_phy_1;
                    hist_rd[h_idx]    <= rd_1;
                    hist_store[h_idx] <= 1'b1;
                end else begin
                    phy_rd_1          <= 0;
                    quick_wake_1      <= 1'b0;
                    hist_store[h_idx] <= 1'b0;
                end
            end else begin
                rename_valid_1 <= 1'b0;
            end

            if (rename_en_2) begin
                rename_valid_2 <= 1'b1;
                inst_id_2      <= id_pool + rename_en_1;
                phy_rs1_2      <= mapped_rs1_2;
                phy_rs2_2      <= mapped_rs2_2;
                phy_rs1_rdy_2  <= rs1_2_rdy;
                phy_rs2_rdy_2  <= rs2_2_rdy;
                quick_wake_2   <= quick_inst_2;
                ctrl_type_2    <= ctrl_inst_2;
                mdu_type_2     <= mdu_inst_2;
                lsu_type_2     <= lsu_inst_2;

                hist_id[next_hist_head_1]    <= id_pool + rename_en_1;
                hist_valid[next_hist_head_1] <= 1'b1;

                if (write_en_2) begin
                    phy_rd_2         <= new_phy_2;
                    arch_rat[rd_2]   <= new_phy_2;
                    phy_ready[new_phy_2] <= 1'b0;

                    hist_ophy[next_hist_head_1]  <= old_phy_2;
                    hist_nphy[next_hist_head_1]  <= new_phy_2;
                    hist_rd[next_hist_head_1]    <= rd_2;
                    hist_store[next_hist_head_1] <= 1'b1;
                end else begin
                    phy_rd_2                     <= 0;
                    quick_wake_2                 <= 1'b0;
                    hist_store[next_hist_head_1] <= 1'b0;
                end
            end else begin
                rename_valid_2 <= 1'b0;
            end

            id_pool    <= id_pool + rename_en_1 + rename_en_2;
            hist_head  <= hist_head + rename_en_1 + rename_en_2;
            frp_rd_ptr <= frp_rd_ptr + write_en_1 + write_en_2;
        end
    end
end

assign rename_to_is_bus1 = {
    phy_rs1_1     ,
    phy_rs2_1     ,
    phy_rd_1      ,
    phy_rs1_rdy_1 ,
    phy_rs2_rdy_1 ,
    ctrl_type_1   ,
    lsu_type_1    ,
    mdu_type_1    ,
    quick_wake_1  
};

assign rename_to_is_bus2 = {
    phy_rs1_2     ,
    phy_rs2_2     ,
    phy_rd_2      ,
    phy_rs1_rdy_2 ,
    phy_rs2_rdy_2 ,
    ctrl_type_2   ,
    lsu_type_2    ,
    mdu_type_2    ,
    quick_wake_2 
};

endmodule
