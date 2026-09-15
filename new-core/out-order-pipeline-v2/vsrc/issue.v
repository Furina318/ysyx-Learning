`include "defines.vh"

module issue #(
    parameter RS_DEPTH      = 16,
    parameter RS_WIDTH      = $clog2(RS_DEPTH),
    parameter ID_WIDTH      = 5,
    parameter PHY_REG_WIDTH = 6,
    parameter PHY_REG_NUM   = 64
)(
    input  wire                     clk               ,
    input  wire                     rst               ,

    // 物理寄存器就绪表 (值有效标志: 已写回或尚未被重新分配)
    input  wire [PHY_REG_NUM-1:0]   phy_ready         ,

    // 重命名分发 (Dispatch Lane 1 & 2)
    input  wire                     rename_valid_1    ,
    input  wire [PHY_REG_WIDTH-1:0] phy_rs1_1         ,
    input  wire [PHY_REG_WIDTH-1:0] phy_rs2_1         ,
    input  wire [PHY_REG_WIDTH-1:0] phy_rd_1          ,
    input  wire [     ID_WIDTH-1:0] inst_id_1         ,
    input  wire                     phy_rs1_rdy_1     ,
    input  wire                     phy_rs2_rdy_1     ,
    input  wire                     quick_type_1      ,
    input  wire                     mdu_type_1        ,
    input  wire                     lsu_type_1        ,
    input  wire                     ctrl_type_1       ,
    input  wire                     special_type_1    ,
    input  wire [ `ID_TO_IS_WD-1:0] du_to_is_bus_1    ,

    input  wire                     rename_valid_2    ,
    input  wire [PHY_REG_WIDTH-1:0] phy_rs1_2         ,
    input  wire [PHY_REG_WIDTH-1:0] phy_rs2_2         ,
    input  wire [PHY_REG_WIDTH-1:0] phy_rd_2          ,
    input  wire [     ID_WIDTH-1:0] inst_id_2         ,
    input  wire                     phy_rs1_rdy_2     ,
    input  wire                     phy_rs2_rdy_2     ,
    input  wire                     quick_type_2      ,
    input  wire                     mdu_type_2        ,
    input  wire                     lsu_type_2        ,
    input  wire                     ctrl_type_2       ,
    input  wire                     special_type_2    ,
    input  wire [ `ID_TO_IS_WD-1:0] du_to_is_bus_2    ,

    output wire                     iq_full           ,

    // 冲刷信号
    input  wire                     flush             ,
    input  wire [ID_WIDTH-1:0]      flush_id          ,

    // CDB唤醒 (Wakeup Lane 1 & 2)
    input  wire                     cdb_valid_1       ,
    input  wire                     cdb_valid_2       ,
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_1         ,
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_2         ,

    // 执行单元状态
    input  wire                     alu1_free         ,
    input  wire                     alu2_free         ,
    input  wire                     mdu_free          ,
    input  wire                     lsu_free          ,
    input  wire                     lsu_load_free     ,
    input  wire                     bru_free          ,
    input  wire                     csr_free          ,

    // ── LightSSS/perf: 方案A 精确 RTL 累计计数器 (bypass 上游, 顶层可读) ──
    output reg  [47:0] iq_occup_acc        , // 每拍累加 current_valid_count → 平均 IQ 占用
    output reg  [47:0] iq_cyc_acc          , // 每拍 +1 (active 周期计数, 排除 reset)
    output reg  [47:0] iq_full_acc         , // iq_full 拍 +1
    output reg  [47:0] iq_dispatch_acc     , // 成功入队 (rename_valid && !iq_full) 拍 +1
    output reg  [47:0] iq_issue_slot1_acc  , // slot1 发射拍 +1
    output reg  [47:0] iq_issue_slot2_acc  , // slot2 发射拍 +1
    output reg  [47:0] iq_issue_quick_acc  , // 发射 quick/ALU 指令
    output reg  [47:0] iq_issue_mdu_acc    , // 发射 mdu 指令
    output reg  [47:0] iq_issue_lsu_acc    , // 发射 lsu 指令 (load+store)
    output reg  [47:0] iq_issue_lsu_load_acc,// 发射 lsu load
    output reg  [47:0] iq_issue_lsu_store_acc,// 发射 lsu store
    output reg  [47:0] iq_issue_ctrl_acc   , // 发射 ctrl/branch 指令
    output reg  [47:0] iq_issue_special_acc, // 发射 special/csr 指令

    // 发射输出:
    //   issue_valid_1 → exu_slot1 (alu1, bru, pru)
    //   issue_valid_2 → exu_slot2 (alu2, mdu, lsu)
    output reg                      issue_valid_1     ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rs1_1       ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rs2_1       ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rd_1        ,
    output reg  [     ID_WIDTH-1:0] issue_id_1        ,
    output reg  [ `IS_TO_EX_WD-1:0] is_to_eu_bus_1    ,

    output reg                      issue_valid_2     ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rs1_2       ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rs2_2       ,
    output reg  [PHY_REG_WIDTH-1:0] issue_rd_2        ,
    output reg  [     ID_WIDTH-1:0] issue_id_2        ,
    output reg  [ `IS_TO_EX_WD-1:0] is_to_eu_bus_2
);

    reg [RS_DEPTH-1:0]      rs_valid;
    reg [PHY_REG_WIDTH-1:0] rs_phy_rs1     [0:RS_DEPTH-1];
    reg [PHY_REG_WIDTH-1:0] rs_phy_rs2     [0:RS_DEPTH-1];
    reg [PHY_REG_WIDTH-1:0] rs_phy_rd      [0:RS_DEPTH-1];
    reg [ID_WIDTH-1:0]      rs_inst_id     [0:RS_DEPTH-1];
    reg [RS_DEPTH-1:0]      rs_rs1_rdy;
    reg [RS_DEPTH-1:0]      rs_rs2_rdy;
    reg [RS_DEPTH-1:0]      rs_quick_type;
    reg [RS_DEPTH-1:0]      rs_mdu_type;
    reg [RS_DEPTH-1:0]      rs_lsu_type;
    reg [RS_DEPTH-1:0]      rs_ctrl_type;
    reg [RS_DEPTH-1:0]      rs_special_type;
    reg [`ID_TO_IS_WD-1:0]  rs_du_bus      [0:RS_DEPTH-1];

    wire [RS_DEPTH-1:0] rs_is_store;
    genvar gi;
    generate
        for (gi = 0; gi < RS_DEPTH; gi = gi + 1) begin : gen_store_bit
            assign rs_is_store[gi] = rs_du_bus[gi][47];
        end
    endgenerate

    // CDB 实时唤醒
    reg [RS_DEPTH-1:0] rs_rs1_rdy_wk;
    reg [RS_DEPTH-1:0] rs_rs2_rdy_wk;

    integer i;
    always @(*) begin
        for (i = 0; i < RS_DEPTH; i = i + 1) begin
            rs_rs1_rdy_wk[i] = rs_rs1_rdy[i] ||
                               phy_ready[rs_phy_rs1[i]] ||
                               (cdb_valid_1 && (cdb_tag_1 == rs_phy_rs1[i])) ||
                               (cdb_valid_2 && (cdb_tag_2 == rs_phy_rs1[i]));
            rs_rs2_rdy_wk[i] = rs_rs2_rdy[i] ||
                               phy_ready[rs_phy_rs2[i]] ||
                               (cdb_valid_1 && (cdb_tag_1 == rs_phy_rs2[i])) ||
                               (cdb_valid_2 && (cdb_tag_2 == rs_phy_rs2[i]));
        end
    end

    // Store-load 保序: 检查 RS 中是否存在比给定 load 更老的 store
    function has_older_store;
        input [RS_WIDTH-1:0] load_idx;
        integer j;
        begin
            has_older_store = 0;
            for (j = 0; j < RS_DEPTH; j = j + 1) begin
                if ((j[RS_WIDTH-1:0] != load_idx) && rs_valid[j] && rs_is_store[j]) begin
                    // rs_inst_id[j] 比 rs_inst_id[load_idx] 更老?
                    if ((rs_inst_id[j][ID_WIDTH-1] ^ rs_inst_id[load_idx][ID_WIDTH-1]) ?
                        (rs_inst_id[j][ID_WIDTH-2:0] > rs_inst_id[load_idx][ID_WIDTH-2:0]) :
                        (rs_inst_id[j][ID_WIDTH-2:0] < rs_inst_id[load_idx][ID_WIDTH-2:0])) begin
                        has_older_store = 1;
                    end
                end
            end
        end
    endfunction

    reg [RS_DEPTH-1:0] issue_mask;
    reg [RS_WIDTH-1:0] slot1_idx, slot2_idx;
    reg                slot1_found, slot2_found;
    reg                alu1_avail, alu2_avail, mdu_avail, lsu_avail, lsu_load_avail, bru_avail, csr_avail;

    always @(*) begin
        issue_mask     = 0;
        slot1_found    = 0;
        slot2_found    = 0;
        slot1_idx      = 0;
        slot2_idx      = 0;

        alu1_avail     = alu1_free;
        alu2_avail     = alu2_free;
        mdu_avail      = mdu_free;
        lsu_avail      = lsu_free;
        lsu_load_avail = lsu_load_free;
        bru_avail      = bru_free;
        csr_avail      = csr_free;

        issue_valid_1  = 0; issue_rs1_1 = 0; issue_rs2_1 = 0; issue_rd_1 = 0; issue_id_1 = 0; is_to_eu_bus_1 = 0;
        issue_valid_2  = 0; issue_rs1_2 = 0; issue_rs2_2 = 0; issue_rd_2 = 0; issue_id_2 = 0; is_to_eu_bus_2 = 0;

        for (i = 0; i < RS_DEPTH; i = i + 1) begin
            if (!flush && rs_valid[i] && rs_rs1_rdy_wk[i] && rs_rs2_rdy_wk[i]) begin

                // 快速 ALU (quick_type)
                if (rs_quick_type[i] && (!slot1_found || !slot2_found)) begin
                    if (!slot1_found && alu1_avail) begin
                        issue_mask[i] = 1'b1;
                        slot1_found   = 1'b1;
                        slot1_idx     = i[RS_WIDTH-1:0];
                        alu1_avail    = 1'b0;
                    end
                    else if (!slot2_found && alu2_avail) begin
                        issue_mask[i] = 1'b1;
                        slot2_found   = 1'b1;
                        slot2_idx     = i[RS_WIDTH-1:0];
                        alu2_avail    = 1'b0;
                    end
                end

                // 乘除法
                if (rs_mdu_type[i] && !slot2_found && mdu_avail) begin
                    issue_mask[i] = 1'b1;
                    slot2_found   = 1'b1;
                    slot2_idx     = i[RS_WIDTH-1:0];
                    mdu_avail     = 1'b0;
                end

                // 访存
                // Store-load 保序
                if (rs_lsu_type[i] && !slot2_found &&
                    (rs_is_store[i] ? lsu_avail : lsu_load_avail)) begin
                    if (!has_older_store(i[RS_WIDTH-1:0])) begin
                        issue_mask[i] = 1'b1;
                        slot2_found   = 1'b1;
                        slot2_idx     = i[RS_WIDTH-1:0];
                        if (rs_is_store[i])
                            lsu_avail     = 1'b0;
                        else
                            lsu_load_avail = 1'b0;
                    end
                end

                // 控制流
                if (rs_ctrl_type[i] && !slot1_found && bru_avail) begin
                    issue_mask[i] = 1'b1;
                    slot1_found   = 1'b1;
                    slot1_idx     = i[RS_WIDTH-1:0];
                    bru_avail     = 1'b0;
                end

                // 特殊/CSR
                if (rs_special_type[i] && !slot1_found && csr_avail) begin
                    issue_mask[i] = 1'b1;
                    slot1_found   = 1'b1;
                    slot1_idx     = i[RS_WIDTH-1:0];
                    csr_avail     = 1'b0;
                end
            end
        end

        // 驱动 Slot1 发射输出 (冲刷周期内 RS 尚未清空, 必须禁止发射错误路径指令)
        if (slot1_found && !flush) begin
            issue_valid_1  = 1'b1;
            issue_rs1_1    = rs_phy_rs1[slot1_idx];
            issue_rs2_1    = rs_phy_rs2[slot1_idx];
            issue_rd_1     = rs_phy_rd[slot1_idx];
            issue_id_1     = rs_inst_id[slot1_idx];
            is_to_eu_bus_1 = rs_du_bus[slot1_idx];
        end

        // 驱动 Slot2 发射输出 (冲刷周期内禁止发射)
        if (slot2_found && !flush) begin
            issue_valid_2  = 1'b1;
            issue_rs1_2    = rs_phy_rs1[slot2_idx];
            issue_rs2_2    = rs_phy_rs2[slot2_idx];
            issue_rd_2     = rs_phy_rd[slot2_idx];
            issue_id_2     = rs_inst_id[slot2_idx];
            is_to_eu_bus_2 = rs_du_bus[slot2_idx];
        end
    end

    // 队列压缩与分发新指令 (Compress & Dispatch)
    reg [RS_DEPTH-1:0]          next_rs_valid;
    reg [PHY_REG_WIDTH-1:0]     next_rs_phy_rs1   [0:RS_DEPTH-1];
    reg [PHY_REG_WIDTH-1:0]     next_rs_phy_rs2   [0:RS_DEPTH-1];
    reg [PHY_REG_WIDTH-1:0]     next_rs_phy_rd    [0:RS_DEPTH-1];
    reg [ID_WIDTH-1:0]          next_rs_inst_id   [0:RS_DEPTH-1];
    reg [RS_DEPTH-1:0]          next_rs_rs1_rdy;
    reg [RS_DEPTH-1:0]          next_rs_rs2_rdy;
    reg [RS_DEPTH-1:0]          next_rs_quick_type;
    reg [RS_DEPTH-1:0]          next_rs_mdu_type;
    reg [RS_DEPTH-1:0]          next_rs_lsu_type;
    reg [RS_DEPTH-1:0]          next_rs_ctrl_type;
    reg [RS_DEPTH-1:0]          next_rs_special_type;
    reg [`ID_TO_IS_WD-1:0]      next_rs_du_bus    [0:RS_DEPTH-1];

    reg [RS_WIDTH:0] pack_count;
    integer k;

    always @(*) begin
        pack_count = 0;
        for (k = 0; k < RS_DEPTH; k = k + 1) begin
            next_rs_valid[k]        = 0; next_rs_phy_rs1[k]      = 0; next_rs_phy_rs2[k]      = 0;
            next_rs_phy_rd[k]       = 0; next_rs_inst_id[k]      = 0; next_rs_rs1_rdy[k]      = 0;
            next_rs_rs2_rdy[k]      = 0; next_rs_quick_type[k]   = 0; next_rs_mdu_type[k]     = 0;
            next_rs_lsu_type[k]     = 0; next_rs_ctrl_type[k]    = 0; next_rs_special_type[k] = 0;
            next_rs_du_bus[k]       = 0;
        end

        // A. 压缩保留未被发射的条目 (应用快速唤醒)
        for (k = 0; k < RS_DEPTH; k = k + 1) begin
            if (rs_valid[k] && !issue_mask[k]) begin
                next_rs_valid[pack_count[RS_WIDTH-1:0]]        = 1'b1;
                next_rs_phy_rs1[pack_count[RS_WIDTH-1:0]]      = rs_phy_rs1[k];
                next_rs_phy_rs2[pack_count[RS_WIDTH-1:0]]      = rs_phy_rs2[k];
                next_rs_phy_rd[pack_count[RS_WIDTH-1:0]]       = rs_phy_rd[k];
                next_rs_inst_id[pack_count[RS_WIDTH-1:0]]      = rs_inst_id[k];

                next_rs_rs1_rdy[pack_count[RS_WIDTH-1:0]]      = rs_rs1_rdy_wk[k];
                next_rs_rs2_rdy[pack_count[RS_WIDTH-1:0]]      = rs_rs2_rdy_wk[k];

                next_rs_quick_type[pack_count[RS_WIDTH-1:0]]   = rs_quick_type[k];
                next_rs_mdu_type[pack_count[RS_WIDTH-1:0]]     = rs_mdu_type[k];
                next_rs_lsu_type[pack_count[RS_WIDTH-1:0]]     = rs_lsu_type[k];
                next_rs_ctrl_type[pack_count[RS_WIDTH-1:0]]    = rs_ctrl_type[k];
                next_rs_special_type[pack_count[RS_WIDTH-1:0]] = rs_special_type[k];
                next_rs_du_bus[pack_count[RS_WIDTH-1:0]]       = rs_du_bus[k];
                pack_count = pack_count + 1;
            end
        end

        // B. 追加分发通道 1
        if (rename_valid_1 && (pack_count < RS_DEPTH)) begin
            next_rs_valid[pack_count[RS_WIDTH-1:0]]        = 1'b1;
            next_rs_phy_rs1[pack_count[RS_WIDTH-1:0]]      = phy_rs1_1;
            next_rs_phy_rs2[pack_count[RS_WIDTH-1:0]]      = phy_rs2_1;
            next_rs_phy_rd[pack_count[RS_WIDTH-1:0]]       = phy_rd_1;
            next_rs_inst_id[pack_count[RS_WIDTH-1:0]]      = inst_id_1;

            next_rs_rs1_rdy[pack_count[RS_WIDTH-1:0]]      = phy_rs1_rdy_1 ||
                                               phy_ready[phy_rs1_1] ||
                                               (cdb_valid_1 && (cdb_tag_1 == phy_rs1_1)) ||
                                               (cdb_valid_2 && (cdb_tag_2 == phy_rs1_1));
            next_rs_rs2_rdy[pack_count[RS_WIDTH-1:0]]      = phy_rs2_rdy_1 ||
                                               phy_ready[phy_rs2_1] ||
                                               (cdb_valid_1 && (cdb_tag_1 == phy_rs2_1)) ||
                                               (cdb_valid_2 && (cdb_tag_2 == phy_rs2_1));

            next_rs_quick_type[pack_count[RS_WIDTH-1:0]]   = quick_type_1;
            next_rs_mdu_type[pack_count[RS_WIDTH-1:0]]     = mdu_type_1;
            next_rs_lsu_type[pack_count[RS_WIDTH-1:0]]     = lsu_type_1;
            next_rs_ctrl_type[pack_count[RS_WIDTH-1:0]]    = ctrl_type_1;
            next_rs_special_type[pack_count[RS_WIDTH-1:0]] = special_type_1;
            next_rs_du_bus[pack_count[RS_WIDTH-1:0]]       = du_to_is_bus_1;
            pack_count = pack_count + 1;
        end

        // C. 追加分发通道 2
        if (rename_valid_2 && (pack_count < RS_DEPTH)) begin
            next_rs_valid[pack_count[RS_WIDTH-1:0]]        = 1'b1;
            next_rs_phy_rs1[pack_count[RS_WIDTH-1:0]]      = phy_rs1_2;
            next_rs_phy_rs2[pack_count[RS_WIDTH-1:0]]      = phy_rs2_2;
            next_rs_phy_rd[pack_count[RS_WIDTH-1:0]]       = phy_rd_2;
            next_rs_inst_id[pack_count[RS_WIDTH-1:0]]      = inst_id_2;

            next_rs_rs1_rdy[pack_count[RS_WIDTH-1:0]]      = phy_rs1_rdy_2 ||
                                               phy_ready[phy_rs1_2] ||
                                               (cdb_valid_1 && (cdb_tag_1 == phy_rs1_2)) ||
                                               (cdb_valid_2 && (cdb_tag_2 == phy_rs1_2));
            next_rs_rs2_rdy[pack_count[RS_WIDTH-1:0]]      = phy_rs2_rdy_2 ||
                                               phy_ready[phy_rs2_2] ||
                                               (cdb_valid_1 && (cdb_tag_1 == phy_rs2_2)) ||
                                               (cdb_valid_2 && (cdb_tag_2 == phy_rs2_2));

            next_rs_quick_type[pack_count[RS_WIDTH-1:0]]   = quick_type_2;
            next_rs_mdu_type[pack_count[RS_WIDTH-1:0]]     = mdu_type_2;
            next_rs_lsu_type[pack_count[RS_WIDTH-1:0]]     = lsu_type_2;
            next_rs_ctrl_type[pack_count[RS_WIDTH-1:0]]    = ctrl_type_2;
            next_rs_special_type[pack_count[RS_WIDTH-1:0]] = special_type_2;
            next_rs_du_bus[pack_count[RS_WIDTH-1:0]]       = du_to_is_bus_2;
            pack_count = pack_count + 1;
        end
    end

    reg [RS_WIDTH:0] current_valid_count;
    integer c;
    always @(*) begin
        current_valid_count = 0;
        for (c = 0; c < RS_DEPTH; c = c + 1) begin
            if (rs_valid[c]) current_valid_count = current_valid_count + 1;
        end
    end
    // iq_full 必须计入已在流水线中、尚未压入 RS 的在途分发 (rename_valid_1/2):
    // 第 2 条指令进入 ROB 但被 RS 丢弃 → ROB 卡住永不到达 → 死锁.
    // 故阻塞条件为: 当前计数 + 在途分发 + 本拍最多再发 2 条 > RS_DEPTH
    assign iq_full = (current_valid_count + {{RS_WIDTH-1{1'b0}}, rename_valid_1} + {{RS_WIDTH-1{1'b0}}, rename_valid_2} >= (RS_DEPTH - 1));

    integer m;
    always @(posedge clk) begin
        if (rst) begin
            rs_valid <= {RS_DEPTH{1'b0}};
        end else if (flush) begin
            // 部分冲刷，只清除比 flush_id 年轻的指令
            // 同时更新 rs_rs1_rdy/rs_rs2_rdy, 防止刷新周期内的 CDB 唤醒丢失
            // (CDB 广播与刷新可能在同一周期发生, 若不清除 rs_valid 同时不更新
            //  ready 位, 则依赖 MDU/LSU 结果的指令会永久卡在 RS 中导致死锁)
            for (m = 0; m < RS_DEPTH; m = m + 1) begin
                if (rs_valid[m]) begin
                    if ((flush_id[ID_WIDTH-1] ^ rs_inst_id[m][ID_WIDTH-1]) ?
                        (flush_id[ID_WIDTH-2:0] > rs_inst_id[m][ID_WIDTH-2:0]) :
                        (flush_id[ID_WIDTH-2:0] < rs_inst_id[m][ID_WIDTH-2:0]))
                        rs_valid[m] <= 1'b0;
                end
            end
            rs_rs1_rdy  <= rs_rs1_rdy_wk;
            rs_rs2_rdy  <= rs_rs2_rdy_wk;
        end else begin
            rs_valid          <= next_rs_valid;
            rs_rs1_rdy        <= next_rs_rs1_rdy;
            rs_rs2_rdy        <= next_rs_rs2_rdy;
            rs_quick_type     <= next_rs_quick_type;
            rs_mdu_type       <= next_rs_mdu_type;
            rs_lsu_type       <= next_rs_lsu_type;
            rs_ctrl_type      <= next_rs_ctrl_type;
            rs_special_type   <= next_rs_special_type;

            for (m = 0; m < RS_DEPTH; m = m + 1) begin
                rs_phy_rs1[m] <= next_rs_phy_rs1[m];
                rs_phy_rs2[m] <= next_rs_phy_rs2[m];
                rs_phy_rd[m]  <= next_rs_phy_rd[m];
                rs_inst_id[m] <= next_rs_inst_id[m];
                rs_du_bus[m]  <= next_rs_du_bus[m];
            end
        end
    end

    // ─────────────────────────────────────────────────────────────
    // 方案A: 精确 RTL 周期累计统计计数器 (perf / LightSSS 用)
    // 只累加、不改动任何时序功能; 顶层通过 CLI 读出, C++ 计算平均值。
    // 溢出上限: 48-bit ≈ 2.8e14, 远超任何实际仿真周期。
    // ─────────────────────────────────────────────────────────────
    always @(posedge clk) begin
        if (rst) begin
            iq_occup_acc        <= 0;
            iq_cyc_acc          <= 0;
            iq_full_acc         <= 0;
            iq_dispatch_acc     <= 0;
            iq_issue_slot1_acc  <= 0;
            iq_issue_slot2_acc  <= 0;
            iq_issue_quick_acc  <= 0;
            iq_issue_mdu_acc    <= 0;
            iq_issue_lsu_acc    <= 0;
            iq_issue_lsu_load_acc   <= 0;
            iq_issue_lsu_store_acc  <= 0;
            iq_issue_ctrl_acc   <= 0;
            iq_issue_special_acc<= 0;
        end else begin
            iq_cyc_acc          <= iq_cyc_acc + 1'b1;
            iq_occup_acc        <= iq_occup_acc + {{47-RS_WIDTH{1'b0}},current_valid_count};
            if (iq_full) iq_full_acc <= iq_full_acc + 1'b1;
            // 成功入队: rename 有效且 IQ 未满 (允许计入在途分发)
            if (rename_valid_1 && !iq_full) iq_dispatch_acc <= iq_dispatch_acc + 1'b1;
            if (rename_valid_2 && !iq_full) iq_dispatch_acc <= iq_dispatch_acc + 1'b1;
            // 发射事件 (按 slot 与类型)
            if (issue_valid_1 && !flush) begin
                iq_issue_slot1_acc <= iq_issue_slot1_acc + 1'b1;
                if (rs_quick_type[slot1_idx]) iq_issue_quick_acc <= iq_issue_quick_acc + 1'b1;
                if (rs_ctrl_type[slot1_idx])  iq_issue_ctrl_acc  <= iq_issue_ctrl_acc  + 1'b1;
                if (rs_special_type[slot1_idx]) iq_issue_special_acc <= iq_issue_special_acc + 1'b1;
            end
            if (issue_valid_2 && !flush) begin
                iq_issue_slot2_acc <= iq_issue_slot2_acc + 1'b1;
                if (rs_quick_type[slot2_idx]) iq_issue_quick_acc <= iq_issue_quick_acc + 1'b1;
                if (rs_mdu_type[slot2_idx])   iq_issue_mdu_acc   <= iq_issue_mdu_acc   + 1'b1;
                if (rs_lsu_type[slot2_idx]) begin
                    iq_issue_lsu_acc <= iq_issue_lsu_acc + 1'b1;
                    if (rs_is_store[slot2_idx]) iq_issue_lsu_store_acc <= iq_issue_lsu_store_acc + 1'b1;
                    else                        iq_issue_lsu_load_acc  <= iq_issue_lsu_load_acc  + 1'b1;
                end
            end
        end
    end

endmodule
