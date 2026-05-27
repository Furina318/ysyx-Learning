`include "defines.vh"

module rob #(
    parameter ARCH_REG_NUM  = 32,
    parameter PHY_REG_NUM   = 64,
    parameter ROB_DEPTH     = 16,
    parameter ID_WIDTH      = 4,
    parameter PHY_REG_WIDTH = $clog2(PHY_REG_NUM),
    parameter ROB_PTR_WIDTH = $clog2(ROB_DEPTH)
)(
    input  wire                     clk              ,
    input  wire                     rst              ,

    input  wire                     flush            , // 1周期脉冲异常/预测错误刷新信号
    input  wire [ID_WIDTH-1:0]      flush_id         ,

    // from reg_rename (Dispatch - 双发射)
    input  wire                     rename_valid_1   ,
    input  wire [    ID_WIDTH-1:0]  rename_id_1      ,
    input  wire                     rename_valid_2   ,
    input  wire [    ID_WIDTH-1:0]  rename_id_2      ,
    
    // from exu (Writeback - 双执行单元写回)
    input  wire                    commit_valid_1    ,
    input  wire [    ID_WIDTH-1:0] commit_id_1       ,
    input  wire [`EU_TO_RO_WD-1:0] eu_to_ro_bus_1    ,
    
    input  wire                    commit_valid_2    ,
    input  wire [    ID_WIDTH-1:0] commit_id_2       ,
    input  wire [`EU_TO_RO_WD-1:0] eu_to_ro_bus_2    ,
    
    // to wbu (Retire/Commit - 双提交)
    output reg                     rob_cmt_valid_1   ,
    output reg  [`RO_TO_WU_WD-1:0] ro_to_wu_bus_1    ,
    output reg                     rob_cmt_valid_2   ,
    output reg  [`RO_TO_WU_WD-1:0] ro_to_wu_bus_2    ,

    // to rename
    output wire                        rob_full 
);

reg [        ID_WIDTH-1:0] rob_id_buf  [ROB_DEPTH-1:0]; // 存储每个ROB槽位对应的指令ID
reg [    `EU_TO_RO_WD-1:0] rob_bus_buf [ROB_DEPTH-1:0]; // 存储每个ROB槽位对应的执行结果总线数据
reg [   ROB_DEPTH-1:0] rob_valid;
reg [   ROB_DEPTH-1:0] rob_done ;

reg [ROB_PTR_WIDTH-1:0] rob_tail;
reg [ROB_PTR_WIDTH-1:0] rob_head;

// 空间容量检测
wire full  = &rob_valid;
wire empty = ~(|rob_valid);

// 计算当前已使用的槽位数量
wire [ROB_PTR_WIDTH:0] used_slots = full                  ? ROB_DEPTH :
                                    empty                 ? 0 :
                                    (rob_head > rob_tail) ? (rob_head - rob_tail) :
                                    (ROB_DEPTH - rob_tail + rob_head);

wire [ROB_PTR_WIDTH:0] free_slots = ROB_DEPTH - used_slots; // 可用槽位数量

wire rob_ready_for_1 = (free_slots >= 1);
wire rob_ready_for_2 = (free_slots >= 2);

assign rob_full = ~rob_ready_for_1;

// 保证按序派发：指令1有效必须建立在指令0有效且有空间的前提下
wire do_write_1 = rename_valid_1 && rob_ready_for_1;
wire do_write_2 = rename_valid_2 && rob_ready_for_2 && rename_valid_1;

wire [ROB_PTR_WIDTH-1:0] head_plus_1 = rob_head + 1'b1; // 指向指令1将要写入的位置
wire [              1:0] dispatch_cnt = do_write_2 ? 2'd2 : (do_write_1 ? 2'd1 : 2'd0); // 本周期实际派发的指令数量

wire [ROB_DEPTH-1:0] flush_match;
wire [ROB_DEPTH-1:0] match_1;   // 匹配提交指令1
wire [ROB_DEPTH-1:0] match_2;

genvar gi;
generate
    for (gi = 0; gi < ROB_DEPTH; gi = gi + 1) begin : gen_match
        assign flush_match[gi] = rob_valid[gi] & (rob_id_buf[gi] == flush_id);
        assign match_1[gi] = rob_valid[gi] & (rob_id_buf[gi] == commit_id_1);
        assign match_2[gi] = rob_valid[gi] & (rob_id_buf[gi] == commit_id_2);
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

wire [ROB_DEPTH-1:0] head_mask       = ~({1'b0, {ROB_DEPTH{1'b1}}} << rob_head);
wire [ROB_DEPTH-1:0] flush_next_mask = ~({1'b0, {ROB_DEPTH{1'b1}}} << flush_next);

wire [ROB_DEPTH-1:0] flush_clear_mask = (rob_head > flush_ptr) ? 
                                        (head_mask ^ flush_next_mask) :   // 非卷绕
                                        ~(head_mask ^ flush_next_mask);   // 卷绕

wire [ROB_DEPTH-1:0]     temp_rob_valid = rob_valid & ~flush_clear_mask;
wire [ROB_DEPTH-1:0]     temp_rob_done  = rob_done  & ~flush_clear_mask;
wire [ROB_PTR_WIDTH-1:0] temp_rob_head  = flush_ptr + 1'b1;

// 架构提交逻辑
wire [ROB_PTR_WIDTH-1:0] tail_plus_1 = rob_tail + 1'b1;

// 指令 1 是否可以提交（队列中最老）
wire can_retire_1 = rob_done[rob_tail] & rob_valid[rob_tail];
// 指令 2 是否可以提交（队列中次老，必须跟着指令0一起提交）
wire can_retire_2 = can_retire_1 & rob_done[tail_plus_1] & rob_valid[tail_plus_1];

wire [1:0] retire_cnt = can_retire_2 ? 2'd2 : (can_retire_1 ? 2'd1 : 2'd0);

integer i;
always @(posedge clk) begin
    if (rst) begin
        rob_tail <= 0; 
        rob_head <= 0;
        rob_valid <= 'b0;
        rob_done  <= 'b0;
        rob_cmt_valid_1 <= 1'b0;
        rob_cmt_valid_2 <= 1'b0;
    end else begin
        // 优先处理flush
        if (flush) begin
            rob_valid <= temp_rob_valid;
            rob_done  <= temp_rob_done;
            rob_head  <= temp_rob_head;
            rob_cmt_valid_1 <= 1'b0;
            rob_cmt_valid_2 <= 1'b0;
        end 
        else begin
            for (i = 0; i < ROB_DEPTH; i = i + 1) begin
                if (commit_valid_1 && match_1[i]) begin
                    rob_done[i]    <= 1'b1;
                    rob_bus_buf[i] <= eu_to_ro_bus_1;
                end
                if (commit_valid_2 && match_2[i]) begin
                    rob_done[i]    <= 1'b1;
                    rob_bus_buf[i] <= eu_to_ro_bus_2;
                end
            end
            
            if (do_write_1) begin
                rob_id_buf[rob_head] <= rename_id_1;
                rob_valid[rob_head]  <= 1'b1;
                // 派发时刚写入的指令不可能是 done 的状态
                rob_done[rob_head]   <= 1'b0; 
            end
            if (do_write_2) begin
                rob_id_buf[head_plus_1] <= rename_id_2;
                rob_valid[head_plus_1]  <= 1'b1;
                rob_done[head_plus_1]   <= 1'b0;
            end
            rob_head <= rob_head + dispatch_cnt;

            // 每周期最多提交两条指令，必须保证指令0先提交
            if (retire_cnt >= 2'd1) begin
                rob_cmt_valid_1 <= 1'b1;
                ro_to_wu_bus_1  <= rob_bus_buf[rob_tail];
                rob_valid[rob_tail] <= 1'b0; // 提交后有效位清零
            end else begin
                rob_cmt_valid_1 <= 1'b0;
            end
            if (retire_cnt == 2'd2) begin
                rob_cmt_valid_2 <= 1'b1;
                ro_to_wu_bus_2  <= rob_bus_buf[tail_plus_1];
                rob_valid[tail_plus_1] <= 1'b0;
            end else begin
                rob_cmt_valid_2 <= 1'b0;
            end
            
            rob_tail <= rob_tail + retire_cnt;
            
        end
    end
end

endmodule
