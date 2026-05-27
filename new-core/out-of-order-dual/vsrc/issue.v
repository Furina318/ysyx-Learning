`include "defines.vh"

module issue #(
    parameter RS_DEPTH      = 16,
    parameter RS_WIDTH      = $clog2(RS_DEPTH),
    parameter ID_WIDTH      = 5,
    parameter PHY_REG_WIDTH = 6
)(
    input  wire                     clk               ,
    input  wire                     rst               ,
    
    input  wire                     rename_valid_1    ,
    input  wire [     ID_WIDTH-1:0] inst_id_1         ,
    input  wire [ `RE_TO_IS_WD-1:0] rename_to_is_bus_1,
    input  wire [ `FU_TO_IS_WD-1:0] fu_to_is_bus_1    ,

    input  wire                     rename_valid_2    ,
    input  wire [     ID_WIDTH-1:0] inst_id_2         ,
    input  wire [ `RE_TO_IS_WD-1:0] rename_to_is_bus_2,
    input  wire [ `FU_TO_IS_WD-1:0] fu_to_is_bus_2    ,

    output wire                     iq_full           ,

    input  wire                     flush             ,
    input  wire [ID_WIDTH-1:0]      flush_id          ,
    
    // 双路CDB唤醒
    input  wire                     cdb_valid_1       ,
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_1         ,
    input  wire                     cdb_valid_2       ,
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_2         ,

    // 执行单元状态反馈
    input  wire                     mdu_free          ,
    input  wire                     lsu_free          ,
    input  wire                     ctrl_done         ,

    output reg                      issue_valid_1     ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rs1_1       ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rs2_1       ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rd_1        ,
    output reg  [ID_WIDTH-1:0]      issue_id_1        ,
    output reg  [`IS_TO_EU_WD -1:0] is_to_eu_bus_1    ,
    
    output reg                      issue_valid_2     ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rs1_2       ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rs2_2       ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rd_2        ,
    output reg  [ID_WIDTH-1:0]      issue_id_2        ,
    output reg  [`IS_TO_EU_WD -1:0] is_to_eu_bus_2
);

wire [PHY_REG_WIDTH-1:0] phy_rs1_1     ;
wire [PHY_REG_WIDTH-1:0] phy_rs2_1     ;
wire [PHY_REG_WIDTH-1:0] phy_rd_1      ;
wire                     phy_rs1_rdy_1 ;
wire                     phy_rs2_rdy_1 ;
wire                     ctrl_type_1   ;
wire                     lsu_type_1    ;
wire                     mdu_type_1    ;
wire                     quick_wake_1  ;

wire [PHY_REG_WIDTH-1:0] phy_rs1_2     ;
wire [PHY_REG_WIDTH-1:0] phy_rs2_2     ;
wire [PHY_REG_WIDTH-1:0] phy_rd_2      ;
wire                     phy_rs1_rdy_2 ;
wire                     phy_rs2_rdy_2 ;
wire                     ctrl_type_2   ;
wire                     lsu_type_2    ;
wire                     mdu_type_2    ;
wire                     quick_wake_2  ;

assign {
    phy_rs1_1     ,
    phy_rs2_1     ,
    phy_rd_1      ,
    phy_rs1_rdy_1 ,
    phy_rs2_rdy_1 ,
    ctrl_type_1   ,
    lsu_type_1    ,
    mdu_type_1    ,
    quick_wake_1  
} = rename_to_is_bus_1;

assign {
    phy_rs1_2     ,
    phy_rs2_2     ,
    phy_rd_2      ,
    phy_rs1_rdy_2 ,
    phy_rs2_rdy_2 ,
    ctrl_type_2   ,
    lsu_type_2    ,
    mdu_type_2    ,
    quick_wake_2  
} = rename_to_is_bus_2;

reg  [        RS_DEPTH-1:0] rs_mdu_type    ;
reg  [        RS_DEPTH-1:0] rs_lsu_type    ;
reg  [        RS_DEPTH-1:0] rs_ctrl_type   ;
reg  [        RS_DEPTH-1:0] rs_quick_wake  ;
reg  [        RS_DEPTH-1:0] rs_valid       ;
reg  [   PHY_REG_WIDTH-1:0] rs_rs1  [RS_DEPTH-1:0];
reg  [   PHY_REG_WIDTH-1:0] rs_rs2  [RS_DEPTH-1:0];
reg  [   PHY_REG_WIDTH-1:0] rs_rd  [RS_DEPTH-1:0];
reg  [        ID_WIDTH-1:0] rs_id  [RS_DEPTH-1:0];
reg  [`FU_TO_IS_BUS_WD-1:0] rs_bus [RS_DEPTH-1:0];

reg  [        RS_DEPTH-1:0] rs1_rdy;
reg  [        RS_DEPTH-1:0] rs2_rdy;
reg  [        RS_WIDTH:0]   tail_ptr; // 尾指针，拓展1位防止溢出

// 严格指令执行状态
reg                 strict_busy;
reg  [RS_DEPTH-1:0] strict_ready; 
wire [RS_DEPTH-1:0] strict_free = strict_ready - 1;

// 发射推测唤醒
reg issue_cdb_1;
reg issue_cdb_2;

wire [RS_DEPTH-1:0] rs1_rdy_w;
wire [RS_DEPTH-1:0] rs2_rdy_w;

genvar g;
generate
    for (g = 0; g < RS_DEPTH; g = g + 1) begin : gen_wakeup
        assign rs1_rdy_w[g] = rs1_rdy[g] | (cdb_valid_1 & (rs_rs1[g] == cdb_tag_1))
                                         | (cdb_valid_2 & (rs_rs1[g] == cdb_tag_2))
                                         | (issue_cdb_1 & (rs_rs1[g] == issue_rd_1))
                                         | (issue_cdb_2 & (rs_rs1[g] == issue_rd_2));
                                       
        assign rs2_rdy_w[g] = rs2_rdy[g] | (cdb_valid_1 & (rs_rs2[g] == cdb_tag_1))
                                         | (cdb_valid_2 & (rs_rs2[g] == cdb_tag_2))
                                         | (issue_cdb_1 & (rs_rs2[g] == issue_rd_1))
                                         | (issue_cdb_2 & (rs_rs2[g] == issue_rd_2));
    end
endgenerate

wire [RS_DEPTH-1:0] base_ready = rs_valid & rs1_rdy_w & rs2_rdy_w;

// 栅栏与就绪
reg [RS_DEPTH-1:0] normal_ready, mdu_ready, lsu_ready, ctrl_ready;
reg barrier_ctrl, barrier_lsu;

integer i;
always @(*) begin
    normal_ready  = {RS_DEPTH{1'b0}};
    mdu_ready     = {RS_DEPTH{1'b0}};
    lsu_ready     = {RS_DEPTH{1'b0}};
    ctrl_ready    = {RS_DEPTH{1'b0}};
    barrier_ctrl  = 1'b0;
    barrier_lsu   = 1'b0;

    for(i = 0; i < RS_DEPTH; i = i + 1) begin
        if(rs_valid[i]) begin
            if(!rs_mdu_type[i] && !rs_lsu_type[i] && !rs_ctrl_type[i]) begin
                normal_ready[i] = base_ready[i];
            end
            else if(rs_mdu_type[i]) begin
                mdu_ready[i] = base_ready[i] & mdu_free;
            end
            else if(rs_lsu_type[i]) begin
                if(!barrier_ctrl && !barrier_lsu)
                    lsu_ready[i] = base_ready[i] & lsu_free & strict_free[i];
                barrier_lsu = 1'b1;
            end
            else if(rs_ctrl_type[i]) begin
                if(!barrier_ctrl)
                    ctrl_ready[i] = base_ready[i] & strict_free[i];
                barrier_ctrl = 1'b1;
            end
        end
    end
end

wire [RS_DEPTH-1:0] inst_ready = normal_ready | mdu_ready | lsu_ready | ctrl_ready;

// 双发射仲裁
// 选择最老的可发射指令为 grant0
wire [RS_DEPTH-1:0] grant0 = inst_ready & (~inst_ready + 1'b1);

// 提取 grant0 占用的关键端口类型（防止 grant1 竞争独占端口）
wire g0_mdu     = |(grant0 & rs_mdu_type);
wire g0_lsu     = |(grant0 & rs_lsu_type);
wire g0_ctrl    = |(grant0 & rs_ctrl_type);

// 计算次老的可发射指令 grant1（屏蔽已发射的同类独占指令）
wire [RS_DEPTH-1:0] inst_ready_1 = inst_ready & ~grant0
                                 & (g0_mdu     ? ~rs_mdu_type     : {RS_DEPTH{1'b1}})
                                 & (g0_lsu     ? ~rs_lsu_type     : {RS_DEPTH{1'b1}})
                                 & (g0_ctrl    ? ~rs_ctrl_type    : {RS_DEPTH{1'b1}});

wire [RS_DEPTH-1:0] grant1        = inst_ready_1 & (~inst_ready_1 + 1'b1);
wire [RS_DEPTH-1:0] grant_any     = grant0 | grant1;
wire [  RS_WIDTH:0] issue_cnt_ext = {{(RS_WIDTH-1){1'b0}}, issue_cnt};
wire [  RS_WIDTH:0] disp_cnt_ext  = {{(RS_WIDTH-1){1'b0}}, disp_cnt};
wire [RS_WIDTH-1:0] insert_offset = tail_ptr[RS_WIDTH-1:0] - issue_cnt_ext[RS_WIDTH-1:0];
wire [RS_DEPTH-1:0] strict_mask   = strict_ready & grant_any;

wire [1:0] issue_cnt = {1'b0, |grant0} + {1'b0, |grant1};
wire [1:0] disp_cnt  = {1'b0, rename_valid_1} + {1'b0, rename_valid_2};
assign iq_full = (tail_ptr > (RS_DEPTH - 2));

// 队列移位与压缩
reg [1:0] shift_amt [RS_DEPTH-1:0];
always @(*) begin
    shift_amt[0] = 2'b00;
    for (i = 1; i < RS_DEPTH; i = i + 1) begin
        shift_amt[i] = shift_amt[i-1] + grant0[i-1] + grant1[i-1];
    end
end

// 内部状态维护
reg  [        RS_DEPTH-1:0] next_valid;
reg  [   PHY_REG_WIDTH-1:0] next_rs1 [RS_DEPTH-1:0];
reg  [   PHY_REG_WIDTH-1:0] next_rs2 [RS_DEPTH-1:0];
reg  [   PHY_REG_WIDTH-1:0] next_rd [RS_DEPTH-1:0];
reg  [        ID_WIDTH-1:0] next_id [RS_DEPTH-1:0];
reg  [        RS_DEPTH-1:0] next_rs1_rdy;
reg  [        RS_DEPTH-1:0] next_rs2_rdy;
reg  [        RS_DEPTH-1:0] next_quick_wake;
reg  [`FU_TO_IS_BUS_WD-1:0] next_bus [RS_DEPTH-1:0];
reg  [          RS_WIDTH:0] next_ptr;
reg  [        RS_DEPTH-1:0] next_mdu_type, next_lsu_type, next_ctrl_type;
reg  [        RS_DEPTH-1:0] next_strict_ready;

reg  [RS_WIDTH-1:0] insert_ptr_0;
reg  [RS_WIDTH-1:0] insert_ptr_1;
reg  [RS_WIDTH-1:0] new_idx;
reg  [RS_WIDTH-1:0] idx;

always @(*) begin
    next_valid        = {RS_DEPTH{1'b0}};
    next_rs1_rdy      = {RS_DEPTH{1'b0}};
    next_rs2_rdy      = {RS_DEPTH{1'b0}};
    next_quick_wake   = {RS_DEPTH{1'b0}};
    next_mdu_type     = {RS_DEPTH{1'b0}};
    next_lsu_type     = {RS_DEPTH{1'b0}};
    next_ctrl_type    = {RS_DEPTH{1'b0}};
    next_ptr          = tail_ptr;
    next_strict_ready = strict_ready;

    for (i = 0; i < RS_DEPTH; i = i + 1) begin
        next_rs1[i]  = {PHY_REG_WIDTH{1'b0}};
        next_rs2[i]  = {PHY_REG_WIDTH{1'b0}};
        next_rd[i]   = {PHY_REG_WIDTH{1'b0}};
        next_id[i]   = 'b0;
        next_bus[i]  = {`FU_TO_IS_BUS_WD{1'b0}};
    end

    // 压缩存活条目
    new_idx = 'b0;
    for (i = 0; i < RS_DEPTH; i = i + 1) begin
        idx = i[RS_WIDTH-1:0];
        if (rs_valid[i] && !grant_any[i]) begin
            new_idx = idx - {{(RS_WIDTH-2){1'b0}}, shift_amt[i]};
            next_valid       [new_idx] = 1'b1;
            next_rs1         [new_idx] = rs_rs1[i];
            next_rs2         [new_idx] = rs_rs2[i];
            next_rd          [new_idx] = rs_rd[i];
            next_id          [new_idx] = rs_id[i];
            next_rs1_rdy     [new_idx] = rs1_rdy_w[i];
            next_rs2_rdy     [new_idx] = rs2_rdy_w[i];
            next_quick_wake  [new_idx] = rs_quick_wake[i];
            next_bus         [new_idx] = rs_bus[i];
            next_mdu_type    [new_idx] = rs_mdu_type[i];
            next_lsu_type    [new_idx] = rs_lsu_type[i];
            next_ctrl_type   [new_idx] = rs_ctrl_type[i];
            next_strict_ready[new_idx] = strict_ready[i];
        end
    end

    insert_ptr_0 = insert_offset;
    insert_ptr_1 = insert_ptr_0 + {{(RS_WIDTH-1){1'b0}}, rename_valid_1};

    // 双路插入
    if (!iq_full) begin
        if (rename_valid_1) begin
            next_valid       [insert_ptr_0] = 1'b1;
            next_rs1         [insert_ptr_0] = phy_rs1_1;
            next_rs2         [insert_ptr_0] = phy_rs2_1;
            next_rd          [insert_ptr_0] = phy_rd_1;
            next_id          [insert_ptr_0] = inst_id_1;
            next_rs1_rdy     [insert_ptr_0] = phy_rs1_rdy_1 | (cdb_valid_1 & (phy_rs1_1 == cdb_tag_1)) | (cdb_valid_2 & (phy_rs1_1 == cdb_tag_2));
            next_rs2_rdy     [insert_ptr_0] = phy_rs2_rdy_1 | (cdb_valid_1 & (phy_rs2_1 == cdb_tag_1)) | (cdb_valid_2 & (phy_rs2_1 == cdb_tag_2));
            next_quick_wake  [insert_ptr_0] = quick_wake_1;
            next_bus         [insert_ptr_0] = fu_to_is_bus_1;
            next_mdu_type    [insert_ptr_0] = mdu_type_1;
            next_lsu_type    [insert_ptr_0] = lsu_type_1;
            next_ctrl_type   [insert_ptr_0] = ctrl_type_1;
        end
        if (rename_valid_2) begin
            next_valid       [insert_ptr_1] = 1'b1;
            next_rs1         [insert_ptr_1] = phy_rs1_2;
            next_rs2         [insert_ptr_1] = phy_rs2_2;
            next_rd          [insert_ptr_1] = phy_rd_2;
            next_id          [insert_ptr_1] = inst_id_2;
            next_rs1_rdy     [insert_ptr_1] = phy_rs1_rdy_2 | (cdb_valid_1 & (phy_rs1_2 == cdb_tag_1)) | (cdb_valid_2 & (phy_rs1_2 == cdb_tag_2));
            next_rs2_rdy     [insert_ptr_1] = phy_rs2_rdy_2 | (cdb_valid_1 & (phy_rs2_2 == cdb_tag_1)) | (cdb_valid_2 & (phy_rs2_2 == cdb_tag_2));
            next_quick_wake  [insert_ptr_1] = quick_wake_2;
            next_bus         [insert_ptr_1] = fu_to_is_bus_2;
            next_mdu_type    [insert_ptr_1] = mdu_type_2;
            next_lsu_type    [insert_ptr_1] = lsu_type_2;
            next_ctrl_type   [insert_ptr_1] = ctrl_type_2;
        end
        next_ptr = tail_ptr - issue_cnt_ext + disp_cnt_ext;
    end else begin
        next_ptr = tail_ptr - issue_cnt_ext;
    end
end

// 冲刷恢复
reg  [RS_DEPTH-1:0] flush_rs_valid;
reg  [RS_WIDTH:0]   flush_tail_ptr;
always @(*) begin
    flush_rs_valid = 'b0;
    flush_tail_ptr = 'b0;
    for(i = 0; i < RS_DEPTH; i = i + 1) begin
        if(rs_valid[i]) begin
            if( (rs_id[i][4] ^ flush_id[4]) ? (rs_id[i][3:0] > flush_id[3:0]) : (rs_id[i][3:0] < flush_id[3:0]) ) begin
                flush_rs_valid[i] = 1'b1;
                flush_tail_ptr = flush_tail_ptr + 1'b1;
            end
        end
    end
end

always @(posedge clk) begin
    if (rst) begin
        rs_valid        <= {RS_DEPTH{1'b0}};
        rs1_rdy         <= {RS_DEPTH{1'b0}};
        rs2_rdy         <= {RS_DEPTH{1'b0}};
        rs_quick_wake   <= {RS_DEPTH{1'b0}};
        rs_mdu_type     <= {RS_DEPTH{1'b0}};
        rs_lsu_type     <= {RS_DEPTH{1'b0}};
        rs_ctrl_type    <= {RS_DEPTH{1'b0}};
        tail_ptr        <= {(RS_WIDTH+1){1'b0}};
        issue_valid_1   <= 'b0;
        issue_valid_2   <= 'b0;
        issue_cdb_1     <= 'b0;
        issue_cdb_2     <= 'b0;
        strict_busy     <= 'b0;
        strict_ready    <= 'b0;
    end else begin
        if (flush) begin
            rs_valid        <= flush_rs_valid;
            tail_ptr        <= flush_tail_ptr;
            issue_valid_1   <= 'b0;
            issue_valid_2   <= 'b0;
            strict_busy     <= 'b0;
            strict_ready    <= 'b0;
        end else begin
            rs_valid        <= next_valid;
            rs1_rdy         <= next_rs1_rdy;
            rs2_rdy         <= next_rs2_rdy;
            rs_quick_wake   <= next_quick_wake;
            rs_mdu_type     <= next_mdu_type;
            rs_lsu_type     <= next_lsu_type;
            rs_ctrl_type    <= next_ctrl_type;
            tail_ptr        <= next_ptr;
            
            for (i = 0; i < RS_DEPTH; i = i + 1) begin
                rs_rs1[i]  <= next_rs1[i];
                rs_rs2[i]  <= next_rs2[i];
                rs_rd[i]   <= next_rd[i];
                rs_id[i]   <= next_id[i];
                rs_bus[i]  <= next_bus[i];
            end

            // 保持压制位掩码
            strict_ready <= |strict_mask ? strict_ready : next_strict_ready;

            // 严格指令执行完成释放
            if (strict_busy && ctrl_done) begin
                strict_busy  <= 'b0;
                strict_ready <= 'b0;
            end

            // 缺省状态复位
            issue_valid_1 <= 1'b0; issue_valid_2 <= 1'b0;
            issue_cdb_1   <= 1'b0; issue_cdb_2   <= 1'b0;

            // 发射输出映射
            for (i = 0; i < RS_DEPTH; i = i + 1) begin
                if (grant0[i]) begin
                    issue_valid_1  <= 1'b1;
                    issue_rs1_1    <= rs_rs1[i];
                    issue_rs2_1    <= rs_rs2[i];
                    issue_rd_1     <= rs_rd[i];
                    issue_id_1     <= rs_id[i];
                    is_to_eu_bus_1 <= rs_bus[i];
                    issue_cdb_1    <= rs_quick_wake[i];
                end
                
                if (grant1[i]) begin
                    issue_valid_2  <= 1'b1;
                    issue_rs1_2    <= rs_rs1[i];
                    issue_rs2_2    <= rs_rs2[i];
                    issue_rd_2     <= rs_rd[i];
                    issue_id_2     <= rs_id[i];
                    is_to_eu_bus_2 <= rs_bus[i];
                    issue_cdb_2    <= rs_quick_wake[i];
                end

                // 重叠压制位
                if (grant_any[i] && rs_ctrl_type[i]) begin
                    strict_busy     <= 1'b1;
                    strict_ready[i] <= 1'b1;
                end
            end
        end
    end
end

endmodule
