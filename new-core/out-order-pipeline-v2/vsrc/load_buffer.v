`include "defines.vh"

module load_buffer #(
    parameter DEPTH          = 8,
    parameter ID_WIDTH       = 6,
    parameter PHY_REG_WIDTH  = 6,
    parameter LB_WIDTH       = $clog2(DEPTH)
)(
    input  wire                      clk              ,
    input  wire                      rst              ,
    input  wire                      flush            ,
    input  wire [     ID_WIDTH-1:0]  flush_id         ,

    input  wire                      alloc_valid      ,
    input  wire [     ID_WIDTH-1:0]  alloc_inst_id    ,
    input  wire [PHY_REG_WIDTH-1:0]  alloc_phy_rd     ,
    input  wire [              4:0]  alloc_rd         ,
    input  wire                      alloc_gpr_we     ,
    input  wire [             31:0]  alloc_pc         ,
    input  wire [             31:0]  alloc_inst       ,
    input  wire [`EX_TO_LS_WD-1:0]   alloc_bus        ,
    output wire                      lb_ready         ,
    output wire                      lb_empty         ,

    output wire                      req_valid        ,
    output wire [     ID_WIDTH-1:0]  req_inst_id      ,
    output wire [PHY_REG_WIDTH-1:0]  req_phy_rd       ,
    output wire [              4:0]  req_rd           ,
    output wire                      req_gpr_we       ,
    output wire [             31:0]  req_pc           ,
    output wire [             31:0]  req_inst         ,
    output wire [`EX_TO_LS_WD-1:0]   req_bus          ,
    input  wire                      req_granted      ,

    input  wire                      rob_oldest_valid ,
    input  wire [     ID_WIDTH-1:0]  rob_oldest_id
);

    reg [DEPTH-1:0]      entry_valid;
    reg [     ID_WIDTH-1:0] entry_inst_id [0:DEPTH-1];
    reg [PHY_REG_WIDTH-1:0] entry_phy_rd  [0:DEPTH-1];
    reg [              4:0] entry_rd      [0:DEPTH-1];
    reg                    entry_gpr_we  [0:DEPTH-1];
    reg [             31:0] entry_pc      [0:DEPTH-1];
    reg [             31:0] entry_inst    [0:DEPTH-1];
    reg [`EX_TO_LS_WD-1:0]  entry_bus     [0:DEPTH-1];

    reg [LB_WIDTH-1:0] head;
    reg [LB_WIDTH-1:0] tail;
    reg [LB_WIDTH:0]   count;

    reg [LB_WIDTH-1:0] req_idx;
    reg                req_found;

    assign lb_ready   = (count < DEPTH);
    assign lb_empty   = (count == 0);
    assign req_valid  = req_found;

    assign req_inst_id = entry_inst_id[req_idx];
    assign req_phy_rd  = entry_phy_rd[req_idx];
    assign req_rd      = entry_rd[req_idx];
    assign req_gpr_we  = entry_gpr_we[req_idx];
    assign req_pc      = entry_pc[req_idx];
    assign req_inst    = entry_inst[req_idx];
    assign req_bus     = entry_bus[req_idx];

    integer si;
    reg [31:0] si_addr;
    reg        si_mem;
    reg        si_oldest;
    always @(*) begin
        req_found = 1'b0;
        req_idx   = head;
        si_addr   = 32'b0;
        si_mem    = 1'b0;
        si_oldest = 1'b0;
        for (si = 0; si < DEPTH; si = si + 1) begin
            if (si < count) begin
                req_idx = head + si[LB_WIDTH-1:0];
                if (entry_valid[req_idx]) begin
                    si_addr   = entry_bus[req_idx][95:64] + entry_bus[req_idx][31:0];
                    si_mem    = (si_addr[31:28] == 4'h8) || (si_addr[31:28] == 4'h9);
                    si_oldest = rob_oldest_valid && (rob_oldest_id == entry_inst_id[req_idx]);
                    if (si_mem || si_oldest) begin
                        req_found = 1'b1;
                        si = DEPTH;
                    end
                end
            end
        end
    end

    wire [DEPTH-1:0] entry_is_older;
    genvar gi;
    generate
        for (gi = 0; gi < DEPTH; gi = gi + 1) begin : gen_lb_flush
            assign entry_is_older[gi] =
                (flush_id[ID_WIDTH-1] ^ entry_inst_id[gi][ID_WIDTH-1]) ?
                  (entry_inst_id[gi][ID_WIDTH-2:0] > flush_id[ID_WIDTH-2:0]) :
                  (entry_inst_id[gi][ID_WIDTH-2:0] < flush_id[ID_WIDTH-2:0]);
        end
    endgenerate

    // 冲刷压实: 存活条目按程序序搬移到位置 0..flush_new_count-1.
    // 原实现只移动 head/tail/count 指针 (FIFO 连续假定位). 但 req 选择可
    // 挑中非队首条目 (si_oldest: ROB 最老的 MMIO 负载), 经 swap-pop 后
    // 队列可能出现空洞; 冲刷又只保留 [head, head+count) 内的存活项,
    // 空洞后的存活条目被留在扫描范围之外 → req_found 永远为 0, 该 load
    // 的结果永远无法交付 (dinic train: lw a2 滞留位置 7, ROB 头卡死,
    // hist_used 泄漏 → rename_full 死锁).
    // 故冲刷必须与 lsu.v 的 IQ 一致: 压实重建队列.
    reg [LB_WIDTH-1:0] flush_dst [0:DEPTH-1];   // 存活条目压实后的目标位置
    reg [DEPTH-1:0]    flush_survive;           // 存活条目原位掩码
    reg [LB_WIDTH:0]   flush_new_count;
    integer fi;
    always @(*) begin
        flush_new_count = 0;
        flush_survive   = 0;
        // 默认值清零与 dst 计算必须分开: 若在同一循环内做 flush_dst[fi]=0,
        // 循环扫过 fi=count..DEPTH-1 时会把已算好的目标位置 (位置 >= count
        // 的存活条目) 再次清零 → 所有存活条目 dst 都变成 0, 后写覆盖先写,
        // 前一条目永久丢失 (dinic train: lw a5 被 lw s9 覆盖).
        for (fi = 0; fi < DEPTH; fi = fi + 1)
            flush_dst[fi] = {LB_WIDTH{1'b0}};
        for (fi = 0; fi < count; fi = fi + 1) begin
            if (entry_valid[head + fi[LB_WIDTH-1:0]] &&
                entry_is_older[head + fi[LB_WIDTH-1:0]]) begin
                flush_dst[head + fi[LB_WIDTH-1:0]] = flush_new_count[LB_WIDTH-1:0];
                flush_survive[head + fi[LB_WIDTH-1:0]] = 1'b1;
                flush_new_count = flush_new_count + 1'b1;
            end
        end
    end

    integer i;
        always @(posedge clk) begin
        if (rst) begin
            entry_valid <= 0;
            head        <= 0;
            tail        <= 0;
            count       <= 0;
        end
        else if (flush) begin
            // 全部清有效位, 存活条目按 flush_dst 压实写回.
            // (先清后写, 目标位置不会与旧位置冲突; 非阻塞赋值后写优先,
            // 目标位置最终为 1, 其余位置保持 0.)
            for (i = 0; i < DEPTH; i = i + 1)
                entry_valid[i] <= 1'b0;
            for (i = 0; i < DEPTH; i = i + 1) begin
                if (flush_survive[i]) begin
                    entry_valid[flush_dst[i]]    <= 1'b1;
                    entry_inst_id[flush_dst[i]]  <= entry_inst_id[i];
                    entry_phy_rd[flush_dst[i]]   <= entry_phy_rd[i];
                    entry_rd[flush_dst[i]]       <= entry_rd[i];
                    entry_gpr_we[flush_dst[i]]   <= entry_gpr_we[i];
                    entry_pc[flush_dst[i]]       <= entry_pc[i];
                    entry_inst[flush_dst[i]]     <= entry_inst[i];
                    entry_bus[flush_dst[i]]      <= entry_bus[i];
                end
            end
            head  <= 0;
            tail  <= flush_new_count[LB_WIDTH-1:0];
            count <= flush_new_count;
        end
        else begin
            if (req_granted) begin
                if (req_idx != head) begin
                    entry_valid[head]     <= entry_valid[req_idx];
                    entry_inst_id[head]   <= entry_inst_id[req_idx];
                    entry_phy_rd[head]    <= entry_phy_rd[req_idx];
                    entry_rd[head]        <= entry_rd[req_idx];
                    entry_gpr_we[head]    <= entry_gpr_we[req_idx];
                    entry_pc[head]        <= entry_pc[req_idx];
                    entry_inst[head]      <= entry_inst[req_idx];
                    entry_bus[head]       <= entry_bus[req_idx];

                    entry_valid[req_idx]     <= entry_valid[head];
                    entry_inst_id[req_idx]   <= entry_inst_id[head];
                    entry_phy_rd[req_idx]    <= entry_phy_rd[head];
                    entry_rd[req_idx]        <= entry_rd[head];
                    entry_gpr_we[req_idx]    <= entry_gpr_we[head];
                    entry_pc[req_idx]        <= entry_pc[head];
                    entry_inst[req_idx]      <= entry_inst[head];
                    entry_bus[req_idx]       <= entry_bus[head];
                end
                entry_valid[head] <= 1'b0;
                head <= head + 1'b1;
            end

            if (alloc_valid && lb_ready) begin
                entry_valid[tail]   <= 1'b1;
                entry_inst_id[tail] <= alloc_inst_id;
                entry_phy_rd[tail]  <= alloc_phy_rd;
                entry_rd[tail]      <= alloc_rd;
                entry_gpr_we[tail]  <= alloc_gpr_we;
                entry_pc[tail]      <= alloc_pc;
                entry_inst[tail]    <= alloc_inst;
                entry_bus[tail]     <= alloc_bus;
                tail <= tail + 1'b1;
            end

            if (req_granted && alloc_valid && lb_ready) begin
                count <= count;
            end else if (req_granted) begin
                count <= count - 1'b1;
            end else if (alloc_valid && lb_ready) begin
                count <= count + 1'b1;
            end
        end
    end

endmodule
