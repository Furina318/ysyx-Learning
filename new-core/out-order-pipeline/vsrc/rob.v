`include "defines.vh"

module rob #(
    parameter ARCH_REG_NUM  = 32,
    parameter PHY_REG_NUM   = 64,
    parameter ROB_DEPTH     = 16,
    parameter ID_WIDTH      = 4,
    parameter PHY_REG_WIDTH = $clog2(PHY_REG_NUM),
    parameter ROB_PTR_WIDTH = $clog2(ROB_DEPTH)
)(
    input  wire                      clk              ,
    input  wire                      rst              ,

    input  wire                      flush            , // 保证到来的flush为1周期脉冲信号
    input  wire [     ID_WIDTH-1:0]  flush_id         ,

    input  wire                      rename_valid_1   ,
    input  wire [     ID_WIDTH-1:0]  rename_id_1      ,
    input  wire                      rename_valid_2   ,
    input  wire [     ID_WIDTH-1:0]  rename_id_2      ,

    // from exu
    input  wire                     commit_valid_1    ,
    input  wire                     commit_valid_2    ,
    input  wire [     ID_WIDTH-1:0] commit_id_1       ,
    input  wire [     ID_WIDTH-1:0] commit_id_2       ,
    input  wire [`EX_TO_RO_WD -1:0] eu_to_ro_bus_1    ,
    input  wire [`EX_TO_RO_WD -1:0] eu_to_ro_bus_2    ,

    output reg                      rob_cmt_valid_1   , // 提交通路1
    output reg  [     ID_WIDTH-1:0] rob_cmt_id_1      ,
    output reg  [`RO_TO_WB_WD -1:0] ro_to_wu_bus_1    ,

    output reg                      rob_cmt_valid_2   , // 提交通路2
    output reg  [     ID_WIDTH-1:0] rob_cmt_id_2      ,
    output reg  [`RO_TO_WB_WD -1:0] ro_to_wu_bus_2    ,

    // to rename
    output wire                         rob_full
);

// ROB 存储内容
reg [        ID_WIDTH-1:0] rob_id_buf  [ROB_DEPTH-1:0];
reg [    `EX_TO_RO_WD-1:0] rob_bus_buf [ROB_DEPTH-1:0];
reg [       ROB_DEPTH-1:0] rob_valid;
reg [       ROB_DEPTH-1:0] rob_done ;

// 指针
reg [ROB_PTR_WIDTH-1:0]    rob_tail;
reg [ROB_PTR_WIDTH-1:0]    rob_head;

// ========== 提取 ROB 队列中 tail / tail+1 两个待提交项状态 ==========
wire [ROB_PTR_WIDTH-1:0] rob_tail_plus1 = rob_tail + 1;

wire cur0_valid    = rob_valid[rob_tail];
wire cur0_done     = rob_done[rob_tail];
wire [        ID_WIDTH-1:0] cur0_id    = rob_id_buf[rob_tail];
wire [    `EX_TO_RO_WD-1:0] cur0_bus   = rob_bus_buf[rob_tail];

wire cur1_valid    = rob_valid[rob_tail_plus1];
wire cur1_done     = rob_done[rob_tail_plus1];
wire [        ID_WIDTH-1:0] cur1_id    = rob_id_buf[rob_tail_plus1];
wire [    `EX_TO_RO_WD-1:0] cur1_bus   = rob_bus_buf[rob_tail_plus1];

// 冲刷周期内, tail 处待提交项若比 flush_id 年轻则不允许提交
wire cur0_washed = flush & ((flush_id[ID_WIDTH-1]   ^ cur0_id[ID_WIDTH-1])   ?
                            (flush_id[ID_WIDTH-2:0] > cur0_id[ID_WIDTH-2:0]) :
                            (flush_id[ID_WIDTH-2:0] < cur0_id[ID_WIDTH-2:0]));
wire cur1_washed = flush & ((flush_id[ID_WIDTH-1]   ^ cur1_id[ID_WIDTH-1])   ?
                            (flush_id[ID_WIDTH-2:0] > cur1_id[ID_WIDTH-2:0]) :
                            (flush_id[ID_WIDTH-2:0] < cur1_id[ID_WIDTH-2:0]));

wire allow_double_cmt = cur0_valid & cur0_done & ~cur0_washed
                      & cur1_valid & cur1_done & ~cur1_washed;

wire allow_single_cmt = cur0_valid & cur0_done & ~cur0_washed;

wire cmt1_en = allow_single_cmt;
wire cmt2_en = allow_double_cmt;

wire cmt_washed_1 = flush & ((flush_id[ID_WIDTH-1]   ^ commit_id_1[ID_WIDTH-1])   ?
                             (flush_id[ID_WIDTH-2:0] > commit_id_1[ID_WIDTH-2:0]) :
                             (flush_id[ID_WIDTH-2:0] < commit_id_1[ID_WIDTH-2:0]));
wire cmt_washed_2 = flush & ((flush_id[ID_WIDTH-1]   ^ commit_id_2[ID_WIDTH-1])   ?
                             (flush_id[ID_WIDTH-2:0] > commit_id_2[ID_WIDTH-2:0]) :
                             (flush_id[ID_WIDTH-2:0] < commit_id_2[ID_WIDTH-2:0]));

wire do_commit_1 = commit_valid_1 & ~cmt_washed_1;
wire do_commit_2 = commit_valid_2 & ~cmt_washed_2;
wire do_write_1  = rename_valid_1 && !rob_full;
wire do_write_2  = rename_valid_2 && !rob_full;

assign rob_full = &rob_valid;

wire [ROB_DEPTH-1:0] flush_match;
wire [ROB_DEPTH-1:0] commit_match_1;
wire [ROB_DEPTH-1:0] commit_match_2;
genvar gi;
generate
    for (gi = 0; gi < ROB_DEPTH; gi = gi + 1) begin : gen_match
        assign flush_match[gi]     = rob_valid[gi] & (rob_id_buf[gi] == flush_id);
        assign commit_match_1[gi]  = rob_valid[gi] & (rob_id_buf[gi] == commit_id_1);
        assign commit_match_2[gi]  = rob_valid[gi] & (rob_id_buf[gi] == commit_id_2);
    end
endgenerate

reg [ROB_PTR_WIDTH-1:0] flush_ptr;
integer j;
always @(*) begin
    flush_ptr = {ROB_PTR_WIDTH{1'b0}};
    for (j = 0; j < ROB_DEPTH; j = j + 1) begin
        flush_ptr = flush_ptr | ({ROB_PTR_WIDTH{flush_match[j]}} & j[ROB_PTR_WIDTH-1:0]);
    end
end

wire [ROB_PTR_WIDTH:0] flush_next = flush_ptr + 1'b1;

wire [  ROB_DEPTH:0] head_mask_ext       = ~({1'b0, {ROB_DEPTH{1'b1}}} << rob_head);
wire [  ROB_DEPTH:0] flush_next_mask_ext = ~({1'b0, {ROB_DEPTH{1'b1}}} << flush_next);
wire [ROB_DEPTH-1:0] head_mask         = head_mask_ext[ROB_DEPTH-1:0];
wire [ROB_DEPTH-1:0] flush_next_mask   = flush_next_mask_ext[ROB_DEPTH-1:0];

wire [ROB_DEPTH-1:0] flush_clear_mask;
assign flush_clear_mask = (rob_head > flush_ptr) ?
                          (head_mask ^ flush_next_mask) :
                          ~(head_mask ^ flush_next_mask);

integer i;
always @(posedge clk) begin
    if (rst) begin
        rob_tail        <= 0;
        rob_head        <= 0;
        rob_valid       <= 'b0;
        rob_done        <= 'b0;
        rob_cmt_valid_1 <= 1'b0;
        rob_cmt_valid_2 <= 1'b0;
    end else begin
        // Flush 更新
        // Fix: 使用 ID 比较清除 (与 RS 一致), 防止 position-based mask
        // 在循环缓冲 wrap 后与 ID 顺序不一致, 导致 flush_clear_mask
        // 遗漏某些 should-flush 条目 → rob_valid 残留 → 死锁.
        if (flush) begin
            for (i = 0; i < ROB_DEPTH; i = i + 1) begin
                if (rob_valid[i]) begin
                    if ((flush_id[ID_WIDTH-1] ^ rob_id_buf[i][ID_WIDTH-1]) ?
                        (flush_id[ID_WIDTH-2:0] > rob_id_buf[i][ID_WIDTH-2:0]) :
                        (flush_id[ID_WIDTH-2:0] < rob_id_buf[i][ID_WIDTH-2:0])) begin
                        rob_valid[i] <= 1'b0;
                        rob_done[i]  <= 1'b0;
                    end
                end
            end
            rob_head  <= flush_ptr + 1'b1;
        end

        // EXU 两路指令完成，标记 ROB done
        for (i = 0; i < ROB_DEPTH; i = i + 1) begin
            if (do_commit_1 && commit_match_1[i]) begin
                rob_done[i]     <= 1'b1;
                rob_bus_buf[i]  <= eu_to_ro_bus_1;
            end
            if (do_commit_2 && commit_match_2[i]) begin
                rob_done[i]     <= 1'b1;
                rob_bus_buf[i]  <= eu_to_ro_bus_2;
            end
        end
        if ((do_write_1 | do_write_2) & ~flush) begin
            if (do_write_1) begin
                rob_id_buf[rob_head] <= rename_id_1;
                rob_valid[rob_head]  <= 1'b1;
            end
            if (do_write_2) begin
                rob_id_buf[rob_head + {{ROB_PTR_WIDTH-1{1'b0}}, do_write_1}] <= rename_id_2;
                rob_valid[rob_head + {{ROB_PTR_WIDTH-1{1'b0}}, do_write_1}]  <= 1'b1;
            end
            rob_head <= rob_head + {{ROB_PTR_WIDTH-1{1'b0}}, do_write_1} + {{ROB_PTR_WIDTH-1{1'b0}}, do_write_2};
        end

        // 默认输出拉低
        rob_cmt_valid_1 <= 1'b0;
        rob_cmt_valid_2 <= 1'b0;

        // 正常提交通路 (冲刷期间阻止)
        if(allow_double_cmt & ~flush) begin
            rob_cmt_valid_1 <= 1'b1;
            rob_cmt_id_1    <= cur0_id;
            ro_to_wu_bus_1  <= cur0_bus;

            rob_cmt_valid_2 <= 1'b1;
            rob_cmt_id_2    <= cur1_id;
            ro_to_wu_bus_2  <= cur1_bus;

            rob_done[rob_tail]       <= 1'b0;
            rob_valid[rob_tail]      <= 1'b0;
            rob_done[rob_tail_plus1] <= 1'b0;
            rob_valid[rob_tail_plus1]<= 1'b0;

            rob_tail <= rob_tail + 2;
        end
        else if(allow_single_cmt & ~flush) begin
            rob_cmt_valid_1 <= 1'b1;
            rob_cmt_id_1    <= cur0_id;
            ro_to_wu_bus_1  <= cur0_bus;

            rob_done[rob_tail]  <= 1'b0;
            rob_valid[rob_tail] <= 1'b0;

            rob_tail <= rob_tail + 1'b1;
        end
        // Fix: zombie skip 时发送 gpr_we=0 的伪提交给 rename,
        // 使其同步推进 hist_tail, 防止 flush 后 hist/ROB 位置漂移
        // 导致 hist_used 虚高 → rename_full 误判 → 死锁.
        // ro_to_wu_bus_1: gpr_we=0, rd=0 确保 WBU 不会误写寄存器.
        // rename 中 hist_store 已由 flush 清零, 不会误释放物理寄存器.
        else if (~flush && ~rob_valid[rob_tail] && (rob_tail != rob_head)) begin
            rob_cmt_valid_1 <= 1'b1;
            rob_cmt_id_1    <= cur0_id;
            ro_to_wu_bus_1  <= {`RO_TO_WB_WD{1'b0}};  // gpr_we=0, rd=0, 安全空操作
            rob_done[rob_tail]  <= 1'b0;
            rob_valid[rob_tail] <= 1'b0;
            rob_tail <= rob_tail + 1'b1;
        end
    end
end

endmodule
