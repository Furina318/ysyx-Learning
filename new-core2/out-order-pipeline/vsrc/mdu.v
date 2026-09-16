`include "defines.vh"

// 流水线化 MDU:
//   - mul/mulh/mulhsu/mulhu: 2 级流水 (issue 时锁存 booth/wallace 结果, 下一拍组合出最终结果),
//     连续 mul 指令可每拍发射 1 条 (通过 1 个 mul_s1 级 + 完成队列反压).
//   - div/divu/rem/remu: 固定 32 次恢复余数除法 (restoring division) 展开为 32 级流水,
//     连续 div 指令可每拍发射 1 条.
//   - mul 与 div 独立流水, 通过内部完成队列 (comp_q) 合并送出, 支持乱序完成.
//   - 完成接口为电平保持 (mdu_done 保持到 mdu_done_ack), 无需外部重试.
//   - 精确冲刷: flush 时把所有比 flush_id 年轻的在飞行条目标记 flushed,
//     结果到达时直接丢弃, 防止 ID 复用后旧结果污染 ROB.
module mdu #(
    parameter ID_WIDTH      = 6,
    parameter PHY_REG_WIDTH = 6
)(
    input  wire                      clk          ,
    input  wire                      rst          ,
    input  wire                      mdu_en       ,
    input  wire [             7:0]   mdu_op       ,
    input  wire [            31:0]   mdu_src1     ,
    input  wire [            31:0]   mdu_src2     ,
    input  wire [   ID_WIDTH-1:0]    mdu_inst_id  ,
    input  wire [PHY_REG_WIDTH-1:0]  mdu_phy_rd   ,
    input  wire [             4:0]   mdu_rd       ,
    input  wire                      mdu_gpr_we   ,
    input  wire [            31:0]   mdu_pc       ,
    input  wire [            31:0]   mdu_inst     ,
    output wire                      mdu_ready    ,
    input  wire                      flush        ,
    input  wire [   ID_WIDTH-1:0]    flush_id     ,
    output wire                      mdu_done     ,
    output wire [            31:0]   mdu_result   ,
    output wire [   ID_WIDTH-1:0]    mdu_done_inst_id,
    output wire [PHY_REG_WIDTH-1:0]  mdu_done_phy_rd,
    output wire [             4:0]   mdu_done_rd  ,
    output wire                      mdu_done_gpr_we,
    output wire [            31:0]   mdu_done_pc  ,
    output wire [            31:0]   mdu_done_inst,
    input  wire                      mdu_done_ack
);

    localparam DIV_DEPTH  = 32;
    localparam COMP_DEPTH = 8;

    wire op_mul    = mdu_op[0];
    wire op_mulh   = mdu_op[1];
    wire op_mulhsu = mdu_op[2];
    wire op_mulhu  = mdu_op[3];
    wire op_div    = mdu_op[4];
    wire op_divu   = mdu_op[5];
    wire op_rem    = mdu_op[6];
    wire op_remu   = mdu_op[7];
    wire is_mul    = op_mul | op_mulh | op_mulhsu | op_mulhu;
    wire is_div    = op_div | op_divu | op_rem    | op_remu;

    // a 比 b 年轻 (环绕比较, 与 exu_slot2 相同 idiom)
    function [0:0] mdu_is_younger;
        input [ID_WIDTH-1:0] a;
        input [ID_WIDTH-1:0] b;
        mdu_is_younger = (a != b) &&
            ((a[ID_WIDTH-1] ^ b[ID_WIDTH-1]) ?
             (a[ID_WIDTH-2:0] < b[ID_WIDTH-2:0]) :
             (a[ID_WIDTH-2:0] > b[ID_WIDTH-2:0]));
    endfunction

    // 本周期发射的新条目是否在冲刷路径上
    wire new_flushed = flush && mdu_is_younger(mdu_inst_id, flush_id);

    // ─────────── 乘法路径 (2 级流水) ───────────
    wire [31:0] mul_result, mulh_result;
    reg         mul_s1_valid;
    reg  [67:0] mul_s1_s;
    reg  [67:0] mul_s1_cout2;
    reg         mul_s1_mul;      // 1=低 32 位积 (mul), 0=高 32 位积 (mulh/mulhsu/mulhu)
    reg  [ID_WIDTH-1:0]     mul_meta_iid;
    reg  [PHY_REG_WIDTH-1:0] mul_meta_phy;
    reg  [ 4:0] mul_meta_rd;
    reg         mul_meta_gpr_we;
    reg  [31:0] mul_meta_pc;
    reg  [31:0] mul_meta_inst;
    reg         mul_meta_flushed;

    wire [68:0] mul_product_sum;
    assign mul_product_sum = {1'b0, mul_s1_s} + {mul_s1_cout2, 1'b0};
    wire [63:0] booth_wallace_product = $signed(mul_product_sum[63:0]);
    assign mul_result  = booth_wallace_product[31:0];
    assign mulh_result = booth_wallace_product[63:32];

    wire [31:0] mul_done_res = mul_s1_mul ? mul_result : mulh_result;

    // 有效冲刷标记 (含本拍 flush 的跨周期到达)
    wire mul_flushed_eff = mul_meta_flushed || (flush && mdu_is_younger(mul_meta_iid, flush_id));

    // ─────────── Booth 编码 / Wallace 树 (组合, 用当前发射输入) ───────────
    wire is_signed_mul_a = op_mulh | op_mul | op_mulhsu;
    wire is_signed_mul_b = op_mulh | op_mul;

    wire signed [67:0] multiplicand_ext;
    wire signed [34:0] multiplier_ext;
    wire signed [67:0] partial_products [16:0];
    wire [16:0] switch_outputs [67:0];
    wire [13:0] cout_group [67:0];
    wire  cout  [67:0];
    wire [67:0] cout2  ;
    wire [67:0] s ;

    assign multiplicand_ext = is_signed_mul_a ? {{36{mdu_src1[31]}}, mdu_src1}
                                              : {36'd0, mdu_src1};
    assign multiplier_ext = is_signed_mul_b ? {{2{mdu_src2[31]}}, mdu_src2, 1'b0}
                                            : {2'b0, mdu_src2, 1'b0};

    genvar i;
    generate
        for (i = 0; i < 17; i = i + 1) begin : gen_partial_products
            wire [2:0] y_group = {multiplier_ext[i*2+2], multiplier_ext[i*2+1], multiplier_ext[i*2]};
            wire signed [67:0] x_shifted = multiplicand_ext << (i*2);
            wire sel_negative, sel_double_negative, sel_positive, sel_double_positive;
            assign {sel_negative, sel_double_negative, sel_positive, sel_double_positive} =
                {y_group[2] & (y_group[1] ^ y_group[0]), y_group[2] & ~y_group[1] & ~y_group[0],
                 ~y_group[2] & (y_group[1] ^ y_group[0]), ~y_group[2] & y_group[1] & y_group[0]};
            assign partial_products[i] = (sel_negative? -x_shifted : (sel_double_negative? (-x_shifted) << 1 :
                                     (sel_positive? x_shifted : (sel_double_positive? (x_shifted << 1) : 68'd0))));
        end
    endgenerate

    genvar j, k;
    generate
        for (j = 0; j < 68; j = j + 1) begin : gen_switch
            for (k = 0; k < 17; k = k + 1) begin
                assign switch_outputs[j][k] = partial_products[k][j];
            end
        end
    endgenerate

    genvar l;
    generate
        walloc_17bits uut0 (
           .src_in    (switch_outputs[0]),
           .cin       (14'd0            ),
           .cout_group(cout_group[0]    ),
           .cout      (cout[0]          ),
           .s         (s[0]             )
        );
        assign cout2[0] = cout[0];

        for (l = 1; l < 68; l = l + 1) begin : gen_wallace
            walloc_17bits uut (
               .src_in     (switch_outputs[l]),
               .cin        (cout_group[l-1]  ),
               .cout_group (cout_group[l]    ),
               .cout       (cout[l]          ),
               .s          (s[l]             )
            );
            assign cout2[l]=cout[l];
        end
    endgenerate

    // ─────────── 除法路径 (前导零提前结束 + 2 的幂位移的恢复余数除法流水) ───────────
    // 每条指令只需迭代 na 次 (na = 被除数有效位数), 归一化后注入到 stage 32-na,
    // 大指令 (na≈32) 走满 32 级, 小指令提前结束.
    function [63:0] div_iter;
        input [63:0] rq;     // {R, Q}
        input [31:0] div_b;
        reg [31:0] nr, nq;
        begin
            nr = rq[62:31];       // {R[30:0], Q[31]}
            nq = {rq[30:0], 1'b0};
            if (nr >= div_b) begin
                nr = nr - div_b;
                nq[0] = 1'b1;
            end
            div_iter = {nr, nq};
        end
    endfunction

    function [5:0] clz32;
        input [31:0] v;
        reg [5:0] i;
        begin
            clz32 = 32;
            for (i = 0; i < 32; i = i + 1)
                if (v[31-i]) begin
                    clz32 = i;
                    i = 32;
                end
        end
    endfunction

    wire src1_sign = mdu_src1[31];
    wire src2_sign = mdu_src2[31];
    wire [31:0] diver_a = ((op_div | op_rem) & src1_sign) ? (~mdu_src1 + 1'b1) : mdu_src1;
    wire [31:0] diver_b = ((op_div | op_rem) & src2_sign) ? (~mdu_src2 + 1'b1) : mdu_src2;

    // 流水线级状态 (stage k = 完成 k+1 次迭代, stage31 = 完成 32 次)
    reg [63:0] div_rq  [0:DIV_DEPTH-1];
    reg [31:0] div_db  [0:DIV_DEPTH-1];
    reg [ 3:0] div_opd [0:DIV_DEPTH-1];   // op[7:4]
    reg        div_s1  [0:DIV_DEPTH-1];
    reg        div_s2  [0:DIV_DEPTH-1];
    reg        div_v   [0:DIV_DEPTH-1];
    reg        div_fl  [0:DIV_DEPTH-1];
    reg [ 4:0] div_rem [0:DIV_DEPTH-1];   // 剩余迭代次数 (0 = 已完成, 后续级透传)
    reg        div_out [0:DIV_DEPTH-1];   // 幽灵标记: 结果已入完成队列, 透传至 head 丢弃
    reg [ID_WIDTH-1:0]     div_iid  [0:DIV_DEPTH-1];
    reg [PHY_REG_WIDTH-1:0] div_phy  [0:DIV_DEPTH-1];
    reg [ 4:0] div_rd   [0:DIV_DEPTH-1];
    reg        div_gwe  [0:DIV_DEPTH-1];
    reg [31:0] div_pc   [0:DIV_DEPTH-1];
    reg [31:0] div_inst [0:DIV_DEPTH-1];

    wire div_head_valid = div_v[DIV_DEPTH-1];
    wire div_head_flushed_eff = div_fl[DIV_DEPTH-1] ||
        (flush && mdu_is_younger(div_iid[DIV_DEPTH-1], flush_id));

    // 完成级仲裁: 找最深 (stage 号最大) 的已完成条目 (rem==0 且未幽灵且未冲刷).
    // 完成条目可提前在中间级输出 (CLZ 提前结束), 输出后打幽灵标记 div_out,
    // 剩余级只透传不再迭代, 到 head 直接丢弃, 避免重复完成.
    reg  [4:0] div_sel_stage;
    reg        div_sel_valid;
    integer    si;
    always @(*) begin : arb_sel
        div_sel_valid = 1'b0;
        div_sel_stage = 5'd0;
        for (si = DIV_DEPTH-1; si >= 0; si = si - 1) begin
            if (div_v[si] && (div_rem[si] == 5'd0) && !div_out[si] &&
                !(div_fl[si] || (flush && mdu_is_younger(div_iid[si], flush_id)))) begin
                div_sel_valid = 1'b1;
                div_sel_stage = si[4:0];
                disable arb_sel;
            end
        end
    end

    // head 条目为幽灵/冲刷 → 无条件丢弃 (不占完成队列)
    wire div_head_discard = div_v[DIV_DEPTH-1] &&
        (div_out[DIV_DEPTH-1] || div_head_flushed_eff);
    // 选中的是 head 级时, 其弹出即完成输出
    wire div_sel_is_head = div_sel_valid && (div_sel_stage == 5'(DIV_DEPTH-1));
    // head 本拍腾出 (丢弃或完成输出)
    wire div_pop = div_head_discard || (div_sel_is_head && div_push);

    // 完成结果按选中级数据计算
    wire [31:0] fin_R = div_rq[div_sel_stage][63:32];
    wire [31:0] fin_Q = div_rq[div_sel_stage][31:0];
    wire        fin_s1 = div_s1[div_sel_stage];
    wire        fin_s2 = div_s2[div_sel_stage];
    wire        fin_dz = (div_db[div_sel_stage] == 32'd0);
    wire [31:0] div_result  = fin_dz ? 32'hffffffff : (fin_s1 ^ fin_s2) ? ~fin_Q + 1'b1 : fin_Q;
    wire [31:0] divu_result = fin_dz ? 32'hffffffff : fin_Q;
    wire [31:0] rem_result  = fin_s1 ? ~fin_R + 1'b1 : fin_R;
    wire [31:0] remu_result = fin_R;
    wire [31:0] div_done_res =
        div_opd[div_sel_stage][0] ? div_result :
        (div_opd[div_sel_stage][1] ? divu_result :
         (div_opd[div_sel_stage][2] ? rem_result : remu_result));

    // ─────────── 完成队列 (合并 mul/div 完成) ───────────
    reg [COMP_DEPTH-1:0] comp_valid;
    reg [31:0] comp_result [0:COMP_DEPTH-1];
    reg [ID_WIDTH-1:0]      comp_iid [0:COMP_DEPTH-1];
    reg [PHY_REG_WIDTH-1:0] comp_phy [0:COMP_DEPTH-1];
    reg [ 4:0] comp_rdw [0:COMP_DEPTH-1];
    reg        comp_gwe [0:COMP_DEPTH-1];
    reg [31:0] comp_pc  [0:COMP_DEPTH-1];
    reg [31:0] comp_inst[0:COMP_DEPTH-1];
    reg [COMP_DEPTH-1:0] comp_fl;
    reg [2:0]  comp_wr;
    reg [2:0]  comp_rd;
    reg [3:0]  comp_cnt;
    integer    comp_idx;

    wire comp_head_valid = comp_valid[comp_rd];
    wire comp_head_flushed_eff = comp_fl[comp_rd] ||
        (flush && mdu_is_younger(comp_iid[comp_rd], flush_id));

    assign mdu_done = comp_head_valid && !comp_head_flushed_eff;
    assign mdu_result        = comp_result[comp_rd];
    assign mdu_done_inst_id  = comp_iid[comp_rd];
    assign mdu_done_phy_rd   = comp_phy[comp_rd];
    assign mdu_done_rd       = comp_rdw[comp_rd];
    assign mdu_done_gpr_we   = comp_gwe[comp_rd];
    assign mdu_done_pc       = comp_pc[comp_rd];
    assign mdu_done_inst     = comp_inst[comp_rd];

    // ─────────── 完成仲裁 (mul 与 div 同时完成时最多压入 2 项) ───────────
    wire comp_has_1 = (comp_cnt <= (COMP_DEPTH - 1));
    wire comp_has_2 = (comp_cnt <= (COMP_DEPTH - 2));

    wire mul_wants = mul_s1_valid;
    wire div_wants = div_sel_valid;
    wire mul_push  = mul_wants && !mul_flushed_eff && comp_has_1;
    wire div_push  = div_wants &&
                     (comp_has_2 ? 1'b1 : (comp_has_1 && !mul_push));
    wire mul_pop   = mul_wants && (mul_flushed_eff ? 1'b1 : mul_push);

    // 发射接受条件 (流水线弹性反压)
    wire mul_issue_ok = !mul_s1_valid || mul_pop;
    wire div_issue_ok = !div_head_valid || div_pop;
    wire mul_issue    = mdu_en && is_mul && mdu_ready;
    wire div_issue    = mdu_en && is_div && mdu_ready;
    // 除法流水推进: 完成条目 (rem==0) 透传不迭代; head 幽灵/冲刷自动丢弃;
    // 唯一阻塞点是 head 有正常完成条目但 comp_q 无槽位 (div_push=0).
    wire [DIV_DEPTH-1:0] div_valid_vec;
    genvar vbg;
    generate
        for (vbg = 0; vbg < DIV_DEPTH-1; vbg = vbg + 1) begin : gen_vbehind
            assign div_valid_vec[vbg] = div_v[vbg];
        end
        assign div_valid_vec[DIV_DEPTH-1] = 1'b0;
    endgenerate
    wire div_valid_behind = |div_valid_vec;
    wire div_shift = div_issue ||
                     ((div_valid_behind || div_pop) && (!div_head_valid || div_pop));

    assign mdu_ready = mul_issue_ok && div_issue_ok;

    // 完成队列弹头: 有效且未冲刷 → 等待 ack; 已冲刷 → 自动丢弃
    wire comp_pop = comp_head_valid && (mdu_done ? mdu_done_ack : 1'b1);

    // 前导零提前结束: 每条指令只需 na 次迭代 (na = 被除数有效位数)
    wire [5:0] div_clz_a = clz32(diver_a);
    wire [5:0] div_na    = (diver_a == 32'd0) ? 6'd0 : (6'd32 - div_clz_a);
    // 2 的幂除数: 商 = 右移, 余数 = 低位掩码
    wire       div_b_pow2 = (diver_b != 32'd0) && ((diver_b & (diver_b - 32'd1)) == 32'd0);
    wire [5:0] div_b_p    = (diver_b == 32'd0) ? 6'd0 : (6'd31 - clz32(diver_b));
    wire [31:0] div_pow2_q = diver_a >> div_b_p;
    wire [31:0] div_pow2_r = diver_a & (diver_b - 32'd1);
    wire       div_fast   = div_b_pow2 || (div_na == 6'd0);

    // 归一化注入值 (已完成 1 次迭代): 剩余迭代次数 rem = na-1,
    // 之后每级移位迭代 1 次, 到 rem==0 时已完成 na 次迭代 (前导零提前结束).
    wire [31:0] div_norm_a = (div_na == 6'd0) ? 32'd0 : (diver_a << (6'd32 - div_na));
    wire [63:0] div_norm_rq = div_iter({32'd0, div_norm_a}, diver_b);
    wire [63:0] div_inject_rq = div_fast ? {div_pow2_r, div_pow2_q} : div_norm_rq;
    wire [ 5:0] div_inject_rem_6 = div_fast ? 6'd0 : (div_na - 6'd1);
    wire [ 4:0] div_inject_rem = div_inject_rem_6[4:0];

    genvar g;
    generate
        for (g = 0; g < DIV_DEPTH; g = g + 1) begin : gen_div_stage
            wire load_here = div_issue && (g == 0);
            wire [63:0] iter_rq = (g == 0) ? 64'd0 :
                ((div_rem[g-1] == 5'd0) ? div_rq[g-1] :
                 div_iter(div_rq[g-1], div_db[g-1]));
            wire [4:0] rem_next = (g == 0) ? 5'd0 :
                ((div_rem[g-1] == 5'd0) ? 5'd0 : (div_rem[g-1] - 5'd1));
            // 幽灵标记随数据透传; 源级本拍被选中输出时, 副本 (将进入 g) 也打标记
            wire src_out_mark = (g == 0) ? 1'b0 :
                (div_out[g-1] || (div_push && div_sel_valid && (g-1 == div_sel_stage)));
            wire        eff_fl  = (g == 0) ? 1'b0 : (div_fl[g-1] ||
                                  (flush && mdu_is_younger(div_iid[g-1], flush_id)));
            always @(posedge clk) begin
                if (rst) begin
                    div_v[g]  <= 1'b0;
                    div_fl[g] <= 1'b0;
                    div_rem[g] <= 5'd0;
                    div_out[g] <= 1'b0;
                end else if (load_here) begin
                    div_rq[g]   <= div_inject_rq;
                    div_db[g]   <= diver_b;
                    div_opd[g]  <= mdu_op[7:4];
                    div_s1[g]   <= src1_sign;
                    div_s2[g]   <= src2_sign;
                    div_v[g]    <= 1'b1;
                    div_fl[g]   <= new_flushed;
                    div_iid[g]  <= mdu_inst_id;
                    div_phy[g]  <= mdu_phy_rd;
                    div_rd[g]   <= mdu_rd;
                    div_gwe[g]  <= mdu_gpr_we;
                    div_pc[g]   <= mdu_pc;
                    div_inst[g] <= mdu_inst;
                    div_rem[g]  <= div_inject_rem;
                    div_out[g]  <= 1'b0;
                end else if (div_shift) begin
                    if (g == 0) begin
                        div_v[0]  <= 1'b0;
                    end else begin
                        div_rq[g]   <= iter_rq;
                        div_db[g]   <= div_db[g-1];
                        div_opd[g]  <= div_opd[g-1];
                        div_s1[g]   <= div_s1[g-1];
                        div_s2[g]   <= div_s2[g-1];
                        div_v[g]    <= div_v[g-1];
                        div_fl[g]   <= eff_fl;
                        div_iid[g]  <= div_iid[g-1];
                        div_phy[g]  <= div_phy[g-1];
                        div_rd[g]   <= div_rd[g-1];
                        div_gwe[g]  <= div_gwe[g-1];
                        div_pc[g]   <= div_pc[g-1];
                        div_inst[g] <= div_inst[g-1];
                        div_rem[g]  <= rem_next;
                        div_out[g]  <= src_out_mark;
                    end
                end else begin
                    // 保持 (空转): 只更新本级自身的冲刷标记
                    div_fl[g] <= div_fl[g] ||
                                 (flush && mdu_is_younger(div_iid[g], flush_id));
                end
            end
        end
    endgenerate

    always @(posedge clk) begin
        if (rst) begin
            mul_s1_valid     <= 1'b0;
            mul_s1_s         <= 68'b0;
            mul_s1_cout2     <= 68'b0;
            mul_s1_mul       <= 1'b0;
            mul_meta_flushed <= 1'b0;
        end else if (mul_issue) begin
            mul_s1_valid     <= 1'b1;
            mul_s1_s         <= s;
            mul_s1_cout2     <= cout2;
            mul_s1_mul       <= mdu_op[0];
            mul_meta_flushed <= new_flushed;
            mul_meta_iid     <= mdu_inst_id;
            mul_meta_phy     <= mdu_phy_rd;
            mul_meta_rd      <= mdu_rd;
            mul_meta_gpr_we  <= mdu_gpr_we;
            mul_meta_pc      <= mdu_pc;
            mul_meta_inst    <= mdu_inst;
        end else if (mul_pop) begin
            mul_s1_valid     <= 1'b0;
            mul_meta_flushed <= 1'b0;
        end else begin
            mul_meta_flushed <= mul_flushed_eff;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            comp_valid <= {COMP_DEPTH{1'b0}};
            comp_fl    <= {COMP_DEPTH{1'b0}};
            comp_wr    <= 0;
            comp_rd    <= 0;
            comp_cnt   <= 0;
        end else begin
            // 冲刷标记 (保持型, 不冲刷则不变)
            comp_valid <= comp_valid;
            comp_fl    <= comp_fl;
            for (comp_idx = 0; comp_idx < COMP_DEPTH; comp_idx = comp_idx + 1) begin
                if (flush && comp_valid[comp_idx] && mdu_is_younger(comp_iid[comp_idx], flush_id))
                    comp_fl[comp_idx] <= 1'b1;
            end
            if (comp_pop)
                comp_valid[comp_rd] <= 1'b0;
            if (mul_push) begin
                comp_valid[comp_wr] <= 1'b1;
                comp_result[comp_wr] <= mul_done_res;
                comp_iid[comp_wr]    <= mul_meta_iid;
                comp_phy[comp_wr]    <= mul_meta_phy;
                comp_rdw[comp_wr]    <= mul_meta_rd;
                comp_gwe[comp_wr]    <= mul_meta_gpr_we;
                comp_pc[comp_wr]     <= mul_meta_pc;
                comp_inst[comp_wr]   <= mul_meta_inst;
                comp_fl[comp_wr]     <= mul_flushed_eff;
            end
            if (div_push) begin
                comp_valid[comp_wr + {{2{1'b0}}, mul_push}] <= 1'b1;
                comp_result[comp_wr + {{2{1'b0}}, mul_push}] <= div_done_res;
                comp_iid[comp_wr + {{2{1'b0}}, mul_push}]    <= div_iid[div_sel_stage];
                comp_phy[comp_wr + {{2{1'b0}}, mul_push}]    <= div_phy[div_sel_stage];
                comp_rdw[comp_wr + {{2{1'b0}}, mul_push}]    <= div_rd[div_sel_stage];
                comp_gwe[comp_wr + {{2{1'b0}}, mul_push}]    <= div_gwe[div_sel_stage];
                comp_pc[comp_wr + {{2{1'b0}}, mul_push}]     <= div_pc[div_sel_stage];
                comp_inst[comp_wr + {{2{1'b0}}, mul_push}]   <= div_inst[div_sel_stage];
                comp_fl[comp_wr + {{2{1'b0}}, mul_push}]     <= 1'b0;
            end
            comp_cnt <= comp_cnt + {{3{1'b0}}, mul_push} + {{3{1'b0}}, div_push} - {{3{1'b0}}, comp_pop};
            comp_wr  <= comp_wr + {{2{1'b0}}, mul_push} + {{2{1'b0}}, div_push};
            comp_rd  <= comp_rd + {{2{1'b0}}, comp_pop};
        end
    end

endmodule

/* verilator lint_off DECLFILENAME */
module walloc_17bits(
    input [16:0] src_in,
    input [13:0] cin,
    output [13:0] cout_group,
    output cout, s
);
    wire [13:0] c;
    wire [4:0] first_s;
    csa csa0 (.in (src_in[16:14]),.cout (c[4]),.s (first_s[4]) );
    csa csa1 (.in (src_in[13:11]),.cout (c[3]),.s (first_s[3]) );
    csa csa2 (.in (src_in[10:08]),.cout (c[2]),.s (first_s[2]) );
    csa csa3 (.in (src_in[07:05]),.cout (c[1]),.s (first_s[1]) );
    csa csa4 (.in (src_in[04:02]),.cout (c[0]),.s (first_s[0]) );
    wire [3:0] secnod_s;
    csa csa5 (.in ({first_s[4:2]}),.cout (c[8]),.s (secnod_s[3]));
    csa csa6 (.in ({first_s[1:0],src_in[1]}),.cout (c[7]),.s (secnod_s[2]));
    csa csa7 (.in ({src_in[0],cin[4:3]}),.cout (c[6]),.s (secnod_s[1]));
    csa csa8 (.in ({cin[2:0]}),.cout (c[5]),.s (secnod_s[0]));
    wire [1:0] thrid_s;
    csa csa9 (.in (secnod_s[3:1]),.cout (c[10]),.s (thrid_s[1]));
    csa csaA (.in ({secnod_s[0],cin[6:5]}),.cout (c[09]),.s (thrid_s[0]));
    wire [1:0] fourth_s;
    csa csaB (.in ({thrid_s[1:0],cin[10]}),.cout (c[12]),.s (fourth_s[1]));
    csa csaC (.in ({cin[9:7]}),.cout (c[11]),.s (fourth_s[0]));
    wire fifth_s;
    csa csaD (.in ({fourth_s[1:0],cin[11]}),.cout (c[13]),.s (fifth_s));
    csa csaE (.in ({fifth_s,cin[13:12]}),.cout (cout),.s (s));
    assign cout_group = c;
endmodule

module csa(
    input [2:0] in,
    output cout, s
);
    wire a,b,cin;
    assign a = in[2];
    assign b = in[1];
    assign cin = in[0];
    assign s = a ^ b ^ cin;
    assign cout = a & b | b & cin | a & cin;
endmodule
