`include "defines.vh"

module fetch_decode (
    input  wire        clk                      ,
    input  wire        rst                      ,

    output wire        icache_fetch_valid       ,
    output wire [31:0] icache_fetch_pc          ,
    input  wire [63:0] icache_inst64            ,
    input  wire        icache_fetch_done        ,

    input  wire        flush_valid              ,
    input  wire [31:0] flush_pc                 ,

    input  wire        rename_ready             ,
    output wire        ifu_valid1               ,
    output wire        ifu_valid2               ,
    output wire        pc_update                ,

    output reg  [`FU_TO_RE_WD-1:0] fu_to_re_bus1,
    output reg  [`FU_TO_RE_WD-1:0] fu_to_re_bus2,

    output reg  [`FU_TO_IS_WD-1:0] fu_to_is_bus1,
    output reg  [`FU_TO_IS_WD-1:0] fu_to_is_bus2
);

    reg flush_pending_r;
    always @(posedge clk) begin
        if (rst) begin
            flush_pending_r <= 1'b0;
        end else if (flush_valid && !icache_fetch_done) begin // 当前周期发出了flush请求，但指令还未返回时
            flush_pending_r <= 1'b1;
        end else if (icache_fetch_done) begin
            flush_pending_r <= 1'b0;
        end
    end

    reg [31:0] fetch_pc_r;

    wire fetch_resp_ok = icache_fetch_done
                       && !flush_valid
                       && !flush_pending_r;

    // ibuf：64-bit 双指令取指缓冲
    reg        ibuf_valid;
    reg [31:0] ibuf_pc;
    reg [63:0] ibuf_inst64;

    // lo：单指令剩余缓冲（inst1 为分支时暂存 inst2）
    reg        lo_valid;
    reg [31:0] lo_pc;
    reg [31:0] lo_inst;

    // 分支/跳转检测
    //   7'h63 = B-type branch  7'h6f = JAL  7'h67 = JALR 7'h0f = FENCE.I
    wire ibuf_inst1_is_bj = (ibuf_inst64[6:0] == 7'h63)
                           | (ibuf_inst64[6:0] == 7'h6f)
                           | (ibuf_inst64[6:0] == 7'h67)
                           | (ibuf_inst64[6:0] == 7'h0f);

    wire lo_is_bj         = (lo_inst[6:0] == 7'h63)
                           | (lo_inst[6:0] == 7'h6f)
                           | (lo_inst[6:0] == 7'h67)
                           | (lo_inst[6:0] == 7'h0f);

    // ─── slot 分配 ─────
    // slot1 优先来自 lo，否则来自 ibuf[31:0]
    // slot2 仅当 slot1 不是分支时有效：
    //   lo_valid  → slot2 = ibuf[31:0]
    //  !lo_valid  → slot2 = ibuf[63:32]

    wire        s1_valid  = lo_valid || ibuf_valid;
    wire [31:0] s1_inst   = lo_valid ? lo_inst         : ibuf_inst64[31:0];
    wire [31:0] s1_pc     = lo_valid ? lo_pc           : ibuf_pc;
    wire        s1_is_bj  = lo_valid ? lo_is_bj        : ibuf_inst1_is_bj;

    wire        s2_valid  = ibuf_valid && !s1_is_bj;
    wire [31:0] s2_inst   = lo_valid ? ibuf_inst64[31:0] : ibuf_inst64[63:32];
    wire [31:0] s2_pc     = lo_valid ? ibuf_pc           : ibuf_pc + 32'd4;

    assign ifu_valid1 = s1_valid;
    assign ifu_valid2 = s2_valid;

    // 消费
    wire both_consumed = rename_ready && s1_valid;

    // ibuf 被清除的条件：握手发生，且 ibuf 被本周期访问到
    //   lo_valid && lo_is_bj 时 ibuf 本周期未被触及，不能清除
    wire ibuf_clear    = both_consumed && ibuf_valid && (!lo_valid || !lo_is_bj);

    // ibuf[63:32] 需要存入 lo 的两种情形：
    //   (A) !lo_valid，inst1 是分支 → 只发了 ibuf[0]，ibuf[1] 剩余
    //   (B)  lo_valid，lo 不是分支  → 发了 lo + ibuf[0]，ibuf[1] 剩余
    wire save_ibuf2    = both_consumed && ibuf_valid && (
                           (!lo_valid &&  ibuf_inst1_is_bj) |   // 情形 A
                           ( lo_valid && !lo_is_bj         )    // 情形 B
                         );

    wire ibuf_can_accept = !ibuf_valid || ibuf_clear;

    always @(posedge clk) begin
        if (rst || flush_valid) begin
            ibuf_valid  <= 1'b0;
            ibuf_pc     <= 32'd0;
            ibuf_inst64 <= 64'd0;
        end else if (fetch_resp_ok && ibuf_can_accept) begin  // 新数据加载
            ibuf_valid  <= 1'b1;
            ibuf_pc     <= fetch_pc_r;
            ibuf_inst64 <= icache_inst64;
        end else if (ibuf_clear) begin
            ibuf_valid  <= 1'b0;
        end
    end

    always @(posedge clk) begin
        if (rst || flush_valid) begin
            lo_valid <= 1'b0;
            lo_pc    <= 32'd0;
            lo_inst  <= 32'd0;
        end else if (save_ibuf2) begin          // 暂存 ibuf[63:32]（优先于清除）
            lo_valid <= 1'b1;
            lo_pc    <= ibuf_pc + 32'd4;
            lo_inst  <= ibuf_inst64[63:32];
        end else if (both_consumed) begin       // 本周期 lo 被消费，清除
            lo_valid <= 1'b0;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            fetch_pc_r <= `RESET_PC;
        end else if (flush_valid) begin
            fetch_pc_r <= flush_pc;
        end else if (fetch_resp_ok && ibuf_can_accept) begin
            fetch_pc_r <= fetch_pc_r + 32'd8;
        end
    end

    assign pc_update = fetch_resp_ok & ibuf_can_accept;

    assign icache_fetch_valid = !rst && ibuf_can_accept && icache_fetch_done && !flush_valid;
    assign icache_fetch_pc    = fetch_pc_r;

    wire [`DU_BUS_WD-1:0] du_bus1_w;
    wire [`DU_BUS_WD-1:0] du_bus2_w;

    decode u_dec1 (
        .clk    (clk      ),
        .rst    (rst      ),
        .pc     (s1_pc    ),
        .inst   (s1_inst  ),
        .du_bus (du_bus1_w),
        .du_to_re_bus (fu_to_re_bus1)
    );

    decode u_dec2 (
        .clk    (clk      ),
        .rst    (rst      ),
        .pc     (s2_pc    ),
        .inst   (s2_inst  ),
        .du_bus (du_bus2_w),
        .du_to_re_bus (fu_to_re_bus2)
    );

    always @(*) begin
        fu_to_is_bus1 = du_bus1_w;
        fu_to_is_bus2 = du_bus2_w;
    end

endmodule
