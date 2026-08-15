`include "defines.vh"

module store_buffer #(
    parameter STB_DEPTH_LOG2 = 4,           // 深度为 2^4 = 16 项
    parameter DEPTH          = 1 << STB_DEPTH_LOG2,
    parameter ID_WIDTH       = 5         
)(
    input  wire                      clk          ,
    input  wire                      rst          ,
    input  wire                      flush_en     ,

    // Allocate
    input  wire                      lsu_valid    ,
    input  wire [              31:0] lsu_addr     ,
    input  wire [              31:0] lsu_data     ,
    input  wire [               3:0] lsu_wstrb    ,
    input  wire [      ID_WIDTH-1:0] alloc_inst_id,  // 分配时的指令 ID 
    output wire                      stb_ready    ,
    output wire [STB_DEPTH_LOG2-1:0] stb_alloc_id ,

    // Dual Commit (支持双提交)
    input  wire                      cmt_valid_1    ,
    input  wire                      cmt_is_store_1 ,
    input  wire [STB_DEPTH_LOG2-1:0] cmt_stb_id_1   ,
    output wire [              31:0] stb_cmt_addr_1 ,  // 提交的 store 的地址 (供 difftest 判断 mmio)
    input  wire                      cmt_valid_2    ,
    input  wire                      cmt_is_store_2 ,
    input  wire [STB_DEPTH_LOG2-1:0] cmt_stb_id_2   ,
    output wire [              31:0] stb_cmt_addr_2 ,  // 提交的 store 的地址 (供 difftest 判断 mmio)

    // store forwarding
    input  wire [              31:0] stb_forward_addr ,
    input  wire [ID_WIDTH-1:0]       stb_forward_inst_id ,
    output wire [               3:0] stb_forward_mask ,
    output wire [              31:0] stb_forward_data ,
    output wire                      stb_forward_ambiguous ,

    // to LSU
    output wire                      stb_drain_valid ,
    output wire [              31:0] stb_drain_addr  ,
    output wire [              31:0] stb_drain_data  ,
    output wire [               3:0] stb_drain_wstrb ,
    input  wire                      stb_drain_ready ,

    input  wire [ID_WIDTH-1:0]       flush_id
);

    reg [31:0] entry_addr  [0:DEPTH-1];
    reg [31:0] entry_data  [0:DEPTH-1];
    reg [ 3:0] entry_wstrb [0:DEPTH-1];
    reg [ID_WIDTH-1:0] entry_inst_id [0:DEPTH-1];  // 每条 STB 表项对应的指令 ID

    reg [DEPTH-1:0] entry_valid;   // 该项已分配给EXU
    reg [DEPTH-1:0] entry_commit;  // 该项已被WBU确认为安全，可以写内存

    reg [STB_DEPTH_LOG2-1:0] alloc_ptr;  // 供EXU分配的尾指针
    reg [STB_DEPTH_LOG2-1:0] drain_ptr;  // 供写入D-Cache的头指针

    reg [STB_DEPTH_LOG2:0] count;       // 当前未完成的请求数量 (用于判断STB是否满)
    reg [STB_DEPTH_LOG2:0] commit_count;// 用于追踪已分配但未提交的项数量，辅助冲刷逻辑
    reg                    flush_sweep_done; // 首次冲刷扫描已完成, 防止持续 flush_en 清除新分配项

    wire do_allocate = lsu_valid && stb_ready;
    
    // 双提交解析
    wire do_commit_1 = cmt_valid_1 && cmt_is_store_1;
    wire do_commit_2 = cmt_valid_2 && cmt_is_store_2;
    // 本周期发生 store commit 的总数 (0, 1 或 2)
    wire [1:0] commit_num = {1'b0, do_commit_1} + {1'b0, do_commit_2};
    
    wire do_drain    = stb_drain_valid && stb_drain_ready;

    // difftest: 提交的 store 的目标地址 (仅 store 提交时有效), 用于判断是否为设备访问
    // 注意: rob 提交 (cmt_valid_1) 早于 wbu_valid 一拍 (wbu_valid <= rob_cmt_valid_1),
    // 因此这里把提交地址寄存一拍, 使 difftest 在 wbu_valid 拍读到正确的地址。
    reg [31:0] stb_cmt_addr_1_r, stb_cmt_addr_2_r;
    always @(posedge clk) begin
        if (rst) begin
            stb_cmt_addr_1_r <= 32'b0;
            stb_cmt_addr_2_r <= 32'b0;
        end else begin
            if (do_commit_1) stb_cmt_addr_1_r <= entry_addr[cmt_stb_id_1];
            if (do_commit_2) stb_cmt_addr_2_r <= entry_addr[cmt_stb_id_2];
        end
    end
    assign stb_cmt_addr_1 = stb_cmt_addr_1_r;
    assign stb_cmt_addr_2 = stb_cmt_addr_2_r;

    // 分配ID就是当前的alloc_ptr
    assign stb_alloc_id = alloc_ptr;
    assign stb_ready    = (count < DEPTH);

    wire [DEPTH-1:0] entry_is_older;     // entry 比 flush_id 更老 (正确路径, 应保留)
    wire [DEPTH-1:0] entry_should_flush; // entry 应被冲刷 (错误路径)

    genvar gi;
    generate
        for (gi = 0; gi < DEPTH; gi = gi + 1) begin : gen_flush_check
            assign entry_is_older[gi] =
                (flush_id[ID_WIDTH-1] ^ entry_inst_id[gi][ID_WIDTH-1]) ?
                  (entry_inst_id[gi][ID_WIDTH-2:0] > flush_id[ID_WIDTH-2:0]) :
                  (entry_inst_id[gi][ID_WIDTH-2:0] < flush_id[ID_WIDTH-2:0]);
            assign entry_should_flush[gi] = !entry_is_older[gi];
        end
    endgenerate

    // 该条目在程序序上是否不晚于当前 load (转发时只允许读比 load 老/相同序的 store)。
    // 乱序执行时 STB 里可能已存在比 load 年轻的未提交 store, 无条件转发会让 load
    // 读到"未来"的值 (如某趟 swap 尚未提交的写入), 必须按指令序过滤。
    wire [DEPTH-1:0] entry_older_than_fwd;
    genvar gf;
    generate
        for (gf = 0; gf < DEPTH; gf = gf + 1) begin : gen_fwd_check
            assign entry_older_than_fwd[gf] =
                (entry_inst_id[gf][ID_WIDTH-1] ^ stb_forward_inst_id[ID_WIDTH-1]) ?
                  (entry_inst_id[gf][ID_WIDTH-2:0] > stb_forward_inst_id[ID_WIDTH-2:0]) :
                  (entry_inst_id[gf][ID_WIDTH-2:0] <= stb_forward_inst_id[ID_WIDTH-2:0]);
        end
    endgenerate

    // ── 转发歧义检测 ──
    // ID 回绕比较 (6 bit, 窗口 32) 只在条目与 load 的 id 距离 < 32 时正确。
    // 未提交条目仍在 ROB (深度 32) 内, 与 load 的距离必然 < 32, 判定永远正确;
    // 但已提交的 store 会在 STB 中驻留 (drain 被连续 load 抢占时可达数十条指令),
    // 其 id 与 load 的距离可能 ≥ 32, 此时"不早于"的判定不可信: 条目实际上必然
    // 比 load 老 (提交是程序序的), 若按"不早于"跳过转发, load 会读回内存旧值。
    // 因此: 存在"已提交且被判不早于 load"的条目时, 置歧义标志, 由 LSU 暂缓 load
    // 并优先 drain, 等该条目写回内存后再放行 load (读到的即是新值)。
    wire [DEPTH-1:0] entry_fwd_ambiguous;
    genvar ga;
    generate
        for (ga = 0; ga < DEPTH; ga = ga + 1) begin : gen_fwd_amb
            assign entry_fwd_ambiguous[ga] = entry_valid[ga] && entry_commit[ga] &&
                                             !entry_older_than_fwd[ga];
        end
    endgenerate
    assign stb_forward_ambiguous = |entry_fwd_ambiguous;

    reg [STB_DEPTH_LOG2:0] flush_surviving_count;
    integer s;
    always @(*) begin
        flush_surviving_count = 0;
        for (s = 0; s < DEPTH; s = s + 1) begin
            // 冲刷后仍有效的项:
            //   已提交 (entry_commit=1) → 一定保留
            //   未提交但比 flush_id 更老 (正确路径) → 保留
            //   未提交且不比 flush_id 更老 → 被冲刷 (不计入)
            if (entry_valid[s] && (entry_commit[s] || entry_is_older[s]))
                flush_surviving_count = flush_surviving_count + 1;
        end
    end

    // 冲刷后新的表头指针: 从 drain_ptr (若同拍 drain 则从 drain_ptr+1) 开始,
    // 跳过所有被刷掉的项, 找到第一个幸存项 (valid 且 (committed 或比 flush_id 老))。
    // 若不推进, 表头一旦被 flush 清掉 valid 后, do_drain 永远为 0,
    // drain_ptr 再也不会前进, STB 会永久死锁, 已提交的 store 永远无法写回 D-Cache。
    reg [STB_DEPTH_LOG2-1:0] new_drain_ptr;
    // 冲刷后新的分配指针: 从 new_drain_ptr 起依次跳过所有幸存项,
    // 指向最后一个幸存项之后的空位。
    // 幸存项在环形队列里从表头起是连续的, 从表头向后扫描即可。
    // 不能用"最大幸存项下标+1"计算: 当幸存项跨越环形回绕 (如 15 和 0) 时,
    // 该公式会把 alloc_ptr 算到被幸存项占用的槽上, 导致新分配覆盖尚未 drain
    // 的已提交 store, 并使 drain 顺序乱序 (年轻的 store 先于年老的写回)。
    reg [STB_DEPTH_LOG2-1:0] flush_alloc_ptr;
    integer f;
    always @(*) begin
        new_drain_ptr = drain_ptr + (do_drain ? 1 : 0);
        for (f = 0; f < DEPTH; f = f + 1) begin
            if (entry_valid[new_drain_ptr] && (entry_commit[new_drain_ptr] || entry_is_older[new_drain_ptr]))
                break;
            new_drain_ptr = new_drain_ptr + 1'b1;
        end

        flush_alloc_ptr = new_drain_ptr;
        for (f = 0; f < DEPTH; f = f + 1) begin
            if (entry_valid[flush_alloc_ptr] && (entry_commit[flush_alloc_ptr] || entry_is_older[flush_alloc_ptr]))
                flush_alloc_ptr = flush_alloc_ptr + 1'b1;
            else
                break;
        end
    end

    integer i;
    always @(posedge clk) begin
        if (rst) begin
            alloc_ptr        <= 0;
            drain_ptr        <= 0;
            count            <= 0;
            commit_count     <= 0;
            entry_valid      <= 0;
            entry_commit     <= 0;
        end
        else begin
            commit_count <= commit_count + {{STB_DEPTH_LOG2-2{1'b0}}, commit_num} - (do_drain ? 1 : 0);

            // ── 冲刷扫描: 由 flush_once 脉冲驱动 (每次冲刷请求 / flush_id 变化都会触发一次,
            //    确保误预测分支更老时用新的 flush_id 重新清除错误路径条目) ──
            if (flush_en) begin
                count     <= flush_surviving_count - (do_drain ? 5'd1 : 5'd0);
                alloc_ptr <= flush_alloc_ptr;
                drain_ptr <= new_drain_ptr;

                for (i = 0; i < DEPTH; i = i + 1) begin
                    if (!entry_commit[i] && entry_should_flush[i])
                        entry_valid[i] <= 1'b0;
                end
            end
            // ── 正常操作 (冲刷周期外) ──
            else begin
                if (do_drain) begin
                    drain_ptr <= drain_ptr + 1'b1;
                end
                // 表头空洞跳过: 冲刷可能把 drain_ptr 处的未提交条目清成空洞,
                // 而其后已有已提交的 store 等待写回。若不移走指针, stb_drain_valid
                // 永远为 0, 已提交的 store 无法 drain (直到下一次冲刷才被修复),
                // 期间 load 既无法转发 (歧义/空洞) 又读不到新值。跳过空洞不会破坏
                // 环形队列语义: 该槽位将来被回绕分配时仍位于 [drain_ptr, alloc_ptr)
                // 弧内, drain 顺序 (程序序) 保持不变。
                else if (!entry_valid[drain_ptr] && (drain_ptr != alloc_ptr)) begin
                    drain_ptr <= drain_ptr + 1'b1;
                end

                if (do_allocate) begin
                    alloc_ptr <= alloc_ptr + 1'b1;
                end

                case ({do_allocate, do_drain})
                    2'b10: count <= count + 1'b1;
                    2'b01: count <= count - 1'b1;
                    default: count <= count;
                endcase
            end

            // ── 逐项状态更新 (commit/drain/allocate, 冲刷后新分配不受 flush 影响) ──
            for (i = 0; i < DEPTH; i = i + 1) begin
                // COMMIT 状态
                if (do_drain & (drain_ptr == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_commit[i] <= 1'b0;
                end
                else if ((do_commit_1 && (cmt_stb_id_1 == i[STB_DEPTH_LOG2-1:0])) ||
                         (do_commit_2 && (cmt_stb_id_2 == i[STB_DEPTH_LOG2-1:0]))) begin
                    entry_commit[i] <= 1'b1;
                end
                else if (do_allocate && (alloc_ptr == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_commit[i] <= 1'b0; // 刚分配，尚未提交
                end

                // VALID 状态
                if (do_drain & (drain_ptr == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_valid[i] <= 1'b0;
                end
                else if ((do_commit_1 && (cmt_stb_id_1 == i[STB_DEPTH_LOG2-1:0])) ||
                         (do_commit_2 && (cmt_stb_id_2 == i[STB_DEPTH_LOG2-1:0]))) begin
                    entry_valid[i] <= 1'b1;
                end
                else if (do_allocate && (alloc_ptr == i[STB_DEPTH_LOG2-1:0])) begin
                    entry_valid[i] <= 1'b1; // 新分配: 始终有效 (不再受 !flush_en 限制)
                end
            end

            // ── 数据写入: 新分配始终写入 (不再受 !flush_en 限制) ──
            if (do_allocate) begin
                entry_addr[alloc_ptr]     <= lsu_addr;
                entry_data[alloc_ptr]     <= lsu_data;
                entry_wstrb[alloc_ptr]    <= lsu_wstrb;
                entry_inst_id[alloc_ptr]  <= alloc_inst_id;
            end

        end
    end

    // 只有当头部指针指向的数据既 valid 又 commit 时，才向内存发起写请求
    wire head_ready_to_write = entry_valid[drain_ptr] && entry_commit[drain_ptr];

    assign stb_drain_valid = head_ready_to_write;
    assign stb_drain_addr  = entry_addr[drain_ptr];
    assign stb_drain_data  = entry_data[drain_ptr];
    assign stb_drain_wstrb = entry_wstrb[drain_ptr];

    // 写旁路前递 (组合逻辑, 从最老到最新遍历所有有效表项)
    reg [ 3:0] forward_mask_reg;
    reg [31:0] forward_data_reg;

    reg [STB_DEPTH_LOG2-1:0] ptr;
    integer step;

    always @(*) begin
        forward_mask_reg = 4'b0000;
        forward_data_reg = 32'b0;
        ptr = drain_ptr; // 从队列里最老的项开始遍历

        for (step = 0; step < DEPTH; step = step + 1) begin
            // 只有地址匹配且程序序上不晚于 load 的 store 才能转发给 load。
            // 比 load 年轻的 store (乱序执行时可能已进 STB 但未提交) 必须跳过,
            // 否则 load 会读到尚未生效的"未来"值。
            if (entry_valid[ptr] && (entry_addr[ptr][31:2] == stb_forward_addr[31:2]) &&
                entry_older_than_fwd[ptr]) begin
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
