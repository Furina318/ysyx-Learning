`include "defines.vh"

module store_buffer #(
    parameter STB_DEPTH_LOG2 = 2,           // 深度为 2^2 = 4 项
    parameter DEPTH      = 1 << STB_DEPTH_LOG2
)(
    input  wire                      clk          ,
    input  wire                      rst          ,
    input  wire                      flush_en     , 
    
    // Allocate    
    input  wire                      lsu_valid    , 
    input  wire [    31:0]           lsu_addr     , 
    input  wire [    31:0]           lsu_data     , 
    input  wire [     3:0]           lsu_wstrb    , 
    output wire                      stb_ready    , 
    output wire [STB_DEPTH_LOG2-1:0] stb_alloc_id , 

    // Commit
    input  wire                      cmt_valid    , 
    input  wire                      cmt_is_store , 
    input  wire [STB_DEPTH_LOG2-1:0] cmt_stb_id   , 

    // store forwarding
    input  wire [              31:0] stb_forward_addr ,
    output wire [               3:0] stb_forward_mask ,
    output wire [              31:0] stb_forward_data ,

    // to LSU
    output wire                      stb_drain_valid ,
    output wire [              31:0] stb_drain_addr  ,
    output wire [              31:0] stb_drain_data  ,
    output wire [               3:0] stb_drain_wstrb ,
    input  wire                      stb_drain_ready
);

    reg [31:0] entry_addr  [0:DEPTH-1];
    reg [31:0] entry_data  [0:DEPTH-1];
    reg [ 3:0] entry_wstrb [0:DEPTH-1];
    
    reg [DEPTH-1:0] entry_valid;   // 该项已分配给EXU
    reg [DEPTH-1:0] entry_commit;  // 该项已被WBU确认为安全，可以写内存

    reg [STB_DEPTH_LOG2-1:0] alloc_ptr;  // 供EXU分配的尾指针
    reg [STB_DEPTH_LOG2-1:0] drain_ptr;  // 供写入D-Cache的头指针

    reg [STB_DEPTH_LOG2:0] count;       // 当前未完成的请求数量 (用于判断STB是否满)
    reg [STB_DEPTH_LOG2:0] commit_count;// 用于追踪已分配但未提交的项数量，辅助冲刷逻辑

    wire do_allocate = lsu_valid && stb_ready;
    wire do_commit   = cmt_valid && cmt_is_store;
    wire do_drain    = stb_drain_valid && stb_drain_ready;

    // 分配ID就是当前的alloc_ptr
    assign stb_alloc_id = alloc_ptr;
    assign stb_ready    = (count < DEPTH);

    integer i;
    always @(posedge clk) begin
        if (rst) begin
            alloc_ptr    <= 0;
            drain_ptr    <= 0;
            count        <= 0;
            commit_count <= 0;
            entry_valid  <= 0;
            entry_commit <= 0;
        end 
        else begin
            // // 指针更新
            // if (do_drain) begin
            //     drain_ptr <= drain_ptr + 1'b1;
            // end
            // if (do_allocate && !flush_en) begin
            //     alloc_ptr <= alloc_ptr + 1'b1;
            // end
            
            // for (i = 0; i < DEPTH; i = i + 1) begin
            //     // COMMIT 状态
            //     if (do_drain & (drain_ptr == i[STB_DEPTH_LOG2-1:0])) begin
            //         entry_commit[i] <= 1'b0;
            //     end
            //     else if (do_commit && (cmt_stb_id == i[STB_DEPTH_LOG2-1:0])) begin
            //         entry_commit[i] <= 1'b1; // WBU提交后，标记该项为已提交，无视冲刷
            //     end
            //     else if (do_allocate && !flush_en && (alloc_ptr == i[STB_DEPTH_LOG2-1:0])) begin
            //         entry_commit[i]<= 1'b0; // 刚分配，尚未提交
            //     end

            //     // VALID 状态
            //     if (do_drain & (drain_ptr == i[STB_DEPTH_LOG2-1:0])) begin
            //         entry_valid[i] <= 1'b0; // 写入内存后，该项无效
            //     end
            //     else if (flush_en && !entry_commit[i] && !(do_commit && (cmt_stb_id == i[STB_DEPTH_LOG2-1:0]))) begin
            //         entry_valid[i] <= 1'b0; // 冲刷时，废弃未提交的项(如果该项之前没有 commit，且当前周期也没有在 commit，才将其废弃)
            //     end
            //     else if (do_allocate && !flush_en && (alloc_ptr == i[STB_DEPTH_LOG2-1:0])) begin
            //         entry_valid[i] <= 1'b1; // 分配后，该项有效
            //     end
            // end

            // if (do_allocate && !flush_en) begin
            //     entry_addr[alloc_ptr]  <= lsu_addr;
            //     entry_data[alloc_ptr]  <= lsu_data;
            //     entry_wstrb[alloc_ptr] <= lsu_wstrb;
            // end

            // if (!flush_en) begin
            //     case ({do_allocate, do_drain})
            //         2'b10: count <= count + 1'b1; // 只进不出
            //         2'b01: count <= count - 1'b1; // 只出不进
            //         default: count <= count;      // 同时进出或无动作，保持不变
            //     endcase
            // end
            case ({do_commit, do_drain}) 
                2'b10: commit_count <= commit_count + 1'b1; // 只提交不写
                2'b01: commit_count <= commit_count - 1'b1; // 只写不提交
                default: commit_count <= commit_count;      // 同时提交
            endcase

            if (do_drain) begin
                drain_ptr <= drain_ptr + 1'b1;
            end

            if (flush_en) begin
                // 此时队列内真正的有效数量直接退化为已 commit 的数量
                count <= commit_count + (do_commit ? 3'd1 : 3'd0) - (do_drain ? 3'd1 : 3'd0);
                // alloc_ptr 必须回退到：队首(drain_ptr) + 现存的所有已 commit 数量
                // (do_drain 改变的是队首，不影响队列尾部的绝对位置，只有 do_commit 会延伸安全的队尾)
                alloc_ptr <= drain_ptr + commit_count[STB_DEPTH_LOG2-1:0] + (do_commit ? 2'd1 : 2'd0);
            end
            else begin
                if (do_allocate) begin
                    alloc_ptr <= alloc_ptr + 1'b1;
                end

                case ({do_allocate, do_drain})
                    2'b10: count <= count + 1'b1; // 只进不出
                    2'b01: count <= count - 1'b1; // 只出不进
                    default: count <= count;      // 同时进出或无动作，保持不变
                endcase
            end

            for (i = 0; i < DEPTH; i = i + 1) begin
                // COMMIT 状态
                if (do_drain & (drain_ptr == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_commit[i] <= 1'b0;
                end
                else if (do_commit && (cmt_stb_id == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_commit[i] <= 1'b1; // WBU提交后，标记该项为已提交，无视冲刷
                end
                else if (do_allocate && !flush_en && (alloc_ptr == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_commit[i]<= 1'b0; // 刚分配，尚未提交
                end

                // VALID 状态
                if (do_drain & (drain_ptr == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_valid[i] <= 1'b0; // 写入内存后，该项无效
                end
                else if (do_commit && (cmt_stb_id == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_valid[i] <= 1'b1; // 只要收到 WBU 的提交信号，不管当前是否在 flush，该项必须恢复/保持有效
                end
                else if (flush_en && !entry_commit[i]) begin
                    entry_valid[i] <= 1'b0; // 冲刷时，排除掉正在 commit 的项
                end
                else if (do_allocate && !flush_en && (alloc_ptr == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_valid[i] <= 1'b1; // 分配后，该项有效
                end
            end

            if (do_allocate && !flush_en) begin
                entry_addr[alloc_ptr]  <= lsu_addr;
                entry_data[alloc_ptr]  <= lsu_data;
                entry_wstrb[alloc_ptr] <= lsu_wstrb;
            end

        end
    end

    // 只有当头部指针指向的数据既 valid 又 commit 时，才向内存发起写请求
    wire head_ready_to_write = entry_valid[drain_ptr] && entry_commit[drain_ptr];
    
    assign stb_drain_valid = head_ready_to_write;
    assign stb_drain_addr  = entry_addr[drain_ptr];
    assign stb_drain_data  = entry_data[drain_ptr];
    assign stb_drain_wstrb = entry_wstrb[drain_ptr];

    // 写旁路前递
    reg [ 3:0] forward_mask_reg;
    reg [31:0] forward_data_reg;
    
    reg [`STB_DEPTH_LOG2-1:0] ptr;
    integer step;

    always @(*) begin
        forward_mask_reg = 4'b0000;
        forward_data_reg = 32'b0;
        ptr = drain_ptr; // 从队列里最老的项开始遍历
        
        for (step = 0; step < DEPTH; step = step + 1) begin
            // 如果该项有效，且字地址匹配 (31:2 相同)
            if (entry_valid[ptr] && (entry_addr[ptr][31:2] == stb_forward_addr[31:2])) begin
                // 逐字节检查并覆盖。由于是从老到新遍历，最新的 Store 会自动覆盖旧的 Store
                if (entry_wstrb[ptr][0]) begin
                    forward_data_reg[ 7: 0] = entry_data[ptr][ 7: 0];
                    forward_mask_reg[0]     = 1'b1;
                end
                if (entry_wstrb[ptr][1]) begin
                    forward_data_reg[15: 8] = entry_data[ptr][15: 8];
                    forward_mask_reg[1]     = 1'b1;
                end
                if (entry_wstrb[ptr][2]) begin
                    forward_data_reg[23:16] = entry_data[ptr][23:16];
                    forward_mask_reg[2]     = 1'b1;
                end
                if (entry_wstrb[ptr][3]) begin
                    forward_data_reg[31:24] = entry_data[ptr][31:24];
                    forward_mask_reg[3]     = 1'b1;
                end
            end
            ptr = ptr + 1'b1; // 自动回绕，走向更新的项
        end
    end

    assign stb_forward_mask = forward_mask_reg;
    assign stb_forward_data = forward_data_reg;

endmodule
