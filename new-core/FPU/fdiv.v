`include "fpu_config.vh"

module fdiv #(
    parameter ID_WIDTH = 5
)(
    input  wire                clk        ,
    input  wire                rst        ,

    input  wire                issue_valid,
    input  wire [ID_WIDTH-1:0] issue_id   ,
    input  wire [         6:0] op         ,
    input  wire [         2:0] rm         ,

    // 操作数拆包
    input  wire               s1_sign, s2_sign,
    input  wire signed [ 8:0] s1_exp , s2_exp ,
    input  wire        [23:0] s1_sig , s2_sig ,
    input  wire               s1_zero, s2_zero,
    input  wire               s1_inf , s2_inf ,
    input  wire               s1_nan , s2_nan ,
    input  wire               s1_snan, s2_snan,

    input  wire                flush      ,
    input  wire [ID_WIDTH-1:0] flush_id   ,

    output wire                wb_valid   ,
    output wire [ID_WIDTH-1:0] wb_id      ,
    output wire [        31:0] wb_result  ,
    output wire [         4:0] wb_fflags
);

    wire fstart = issue_valid & ~busy & ~flush;

    reg        busy;          // 运算中
    reg [ 4:0] cnt;           // 除法步计数 0..12
    reg signed [24:0] rem_ff; // 部分余数 P
    reg signed [26:0] quo_ff; // 商小数在线累积 (12 个 radix-4 数字)

    // 操作数锁存
    reg        res_sign_ff;
    reg [ 8:0] s1_exp_ff, s2_exp_ff;
    reg [23:0] s1_sig_ff, s2_sig_ff;
    reg        s1_zero_ff, s2_zero_ff;
    reg        s1_inf_ff , s2_inf_ff ;
    reg        s1_nan_ff , s2_nan_ff ;
    reg        s1_snan_ff, s2_snan_ff;
    reg [ 2:0] rm_ff;
    reg [ID_WIDTH-1:0] id_ff;

    // 启动沿的归一化
    wire a_lt_b_in = (s1_sig < s2_sig);
    wire [24:0] a_shifted_in = a_lt_b_in ? ({1'b0, s1_sig} << 1) : {1'b0, s1_sig};

    // 特殊值判定
    wire res_sign = res_sign_ff;

    // NaN：任一来源 NaN，或 0/0、Inf/Inf
    wire nan_result = s1_nan_ff | s2_nan_ff | (s1_zero_ff & s2_zero_ff) | (s1_inf_ff & s2_inf_ff);
    // NV：只有 signaling NaN、0/0、Inf/Inf 置位（quiet NaN 不置）
    wire nv_flag    = s1_snan_ff | s2_snan_ff | (s1_zero_ff & s2_zero_ff) | (s1_inf_ff & s2_inf_ff);

    // Inf 结果：Inf / 有限，或 有限非零 / 0
    wire inf_result = ~nan_result &
                      (s1_inf_ff | (s2_zero_ff & ~s1_zero_ff & ~s1_inf_ff));
    // DZ：仅 有限非零 / 0
    wire dz_flag    = s2_zero_ff & ~s1_zero_ff & ~s1_inf_ff & ~s1_nan_ff & ~s2_nan_ff;

    // 零结果：0 / 有限，有限 / Inf（均精确，无标志）
    wire zero_result = ~nan_result & ~inf_result &
                       ((s1_zero_ff & ~s2_nan_ff) | (s2_inf_ff & ~s1_nan_ff));

    wire is_finite = ~nan_result & ~inf_result & ~zero_result;

    // ---------------------------------------------------------------
    // 有效数归一：sig_a/sig_b ∈ [1,2)。若 sig_a < sig_b，
    // 被除数左移 1 位（改成 (2*sig_a)/sig_b ∈ [1,2)），指数相应 -1
    // ---------------------------------------------------------------
    wire a_lt_b = (s1_sig_ff < s2_sig_ff);
    wire signed [9:0] norm_exp0 = a_lt_b ?
        ({{1{s1_exp_ff[8]}}, s1_exp_ff} - {{1{s2_exp_ff[8]}}, s2_exp_ff} - 10'sd1) :
        ({{1{s1_exp_ff[8]}}, s1_exp_ff} - {{1{s2_exp_ff[8]}}, s2_exp_ff});

    // ---------------------------------------------------------------
    // radix-4 SRT 除法: 每拍产 2 位商, 共 12 拍 (原恢复除法为 24 拍)。
    //   初值 P0 = a_shifted - sig_b ∈ [0, d) (启动沿写入)。
    //   每拍: P' = 4P, 依 |4P| 相对 0.5d/1.5d/2.5d/3.5d 的阈值选商位 q:
    //     首拍(q=cnt==0) q ∈ {0,1,2,3,4}, 后续 q ∈ {-2,-1,0,1,2},
    //   无论选择结果如何均保证 |P_next| <= 2d/3 (收敛重叠区, 无需精确比较)。
    //   商位带符号, 在线累积(每拍左移 2 位 + 插值), 收尾拍做余数符号
    //   修正: P<0 => 商 -1ulp、余数 +d, 与恢复除法结果(floor+sticky)逐位一致。
    // ---------------------------------------------------------------
    wire signed [26:0] rem_s = $signed({{2{rem_ff[24]}}, rem_ff}); // 符号扩展 27b
    wire signed [26:0] y4    = rem_s <<< 2;                  // 4P
    wire        p_neg = rem_ff[24];
    wire [26:0] ymag  = p_neg ? (27'd0 - y4[26:0]) : y4[26:0];

    // 阈值: 0.5d / 1.5d / 2.5d / 3.5d (d = s2_sig_ff ∈ [1,2)*2^23)
    wire [26:0] s2x = {3'b0, s2_sig_ff};
    wire [26:0] dhx = {3'b0, {1'b0, s2_sig_ff[23:1]}};
    wire [26:0] t05 = dhx;
    wire [26:0] t15 = s2x + dhx;
    wire [26:0] t25 = {2'b0, s2_sig_ff, 1'b0} + dhx;
    wire [26:0] t35 = {2'b0, s2_sig_ff, 1'b0} + s2x + dhx;

    wire q_lt05 = (ymag < t05);
    wire q_lt15 = (ymag < t15);
    wire q_lt25 = (ymag < t25);
    wire q_lt35 = (ymag < t35);
    wire signed [3:0] qmag = (cnt == 5'd0) ?
          (q_lt05 ? 4'sd0 : q_lt15 ? 4'sd1 : q_lt25 ? 4'sd2 : q_lt35 ? 4'sd3 : 4'sd4) :
          (q_lt05 ? 4'sd0 : q_lt15 ? 4'sd1 : 4'sd2);
    wire signed [3:0] qs   = p_neg ? -qmag : qmag;

    wire signed [26:0] d_ext = $signed({3'b0, s2_sig_ff});
    wire signed [26:0] qd = (qs ==  4'sd1) ?  d_ext                  :
                            (qs ==  4'sd2) ? (d_ext <<< 1)           :
                            (qs ==  4'sd3) ? (d_ext + (d_ext <<< 1)) :
                            (qs ==  4'sd4) ? (d_ext <<< 2)           :
                            (qs == -4'sd1) ? -d_ext                  :
                            (qs == -4'sd2) ? -(d_ext <<< 1)          :
                                            27'sd0;

    wire signed [27:0] p_next  = {{1{y4[26]}}, y4} - {{1{qd[26]}}, qd};
    wire signed [26:0] quo_q   = quo_ff <<< 2;
    wire signed [26:0] qs_ext  = $signed({{23{qs[3]}}, qs});
    wire signed [26:0] quo_next = quo_q + qs_ext;

    // 收尾余数符号修正 (P<0 => 商 -1ulp, 余数 +d), 恒为零除时 sticky=0
    wire [24:0] rem_plus_d = rem_ff + {1'b0, s2_sig_ff};
    wire [23:0] frac_sub1  = quo_ff[23:0] - 24'd1;
    wire [24:0] div_rem    = p_neg ? rem_plus_d : rem_ff;   // 最终余数(非零=>sticky)
    wire [23:0] div_frac   = p_neg ? frac_sub1 : quo_ff[23:0];
    wire [24:0] quo        = {1'b1, div_frac};              // 25 bit 商: 1.frac
    wire        div_sticky = |div_rem;

    // ---------------------------------------------------------------
    // 舍入（正规路径）：
    //   fraction(23) = div_frac[23:1]，guard = div_frac[0]，
    //   sticky = 最终余数非零（余数低于 guard 的全部并入 sticky，round 位=0）
    // ---------------------------------------------------------------
    wire [22:0] frac23_r = div_frac[23:1];
    wire        guard    = div_frac[0];

    wire round_up_r, inexact_r;
    frm u_frm (
        .rm      (rm_ff        ),
        .sign    (res_sign     ),
        .lsb     (div_frac[1]  ),
        .guard   (guard        ),
        .round   (1'b0         ),
        .sticky  (div_sticky   ),
        .round_up(round_up_r   ),
        .inexact (inexact_r    )
    );

    wire [23:0] frac_c  = {1'b0, frac23_r} + {23'd0, round_up_r};
    wire        carry   = frac_c[23];                       // 舍入进位到 2.0
    wire signed [9:0] exp_norm  = norm_exp0 + (carry ? 10'sd1 : 10'sd0);
    wire [22:0]       frac_norm = carry ? 23'd0 : frac_c[22:0];

    wire norm_of     = (exp_norm > 10'sd127);
    // 溢出时舍入方向：RNE/RMM、RUP(正)、RDN(负) 产生 ±∞；
    // 其余(RDN 正 / RUP 负)饱和到最大有限数 FLT_MAX
    wire overflow_inf = (rm_ff == `RNE) | (rm_ff == `RMM) |
                        ((rm_ff == `RUP) & ~res_sign) |
                        ((rm_ff == `RDN) &  res_sign);
    reg [31:0] norm_result;
    always @(*) begin
        if (norm_of) begin
            if (overflow_inf)
                norm_result = {res_sign, 8'hFF, 23'd0};
            else
                norm_result = {res_sign, 8'hFE, 23'h7FFFFF};
        end else
            norm_result = {res_sign, exp_norm[7:0] + 8'd127, frac_norm};
    end

    reg [4:0] norm_fflags;
    always @(*) begin
        norm_fflags = 5'd0;
        if (norm_of) begin
            norm_fflags[`OF] = 1'b1;
            norm_fflags[`NX] = 1'b1;   // 上溢舍入恒不精确
        end else begin
            norm_fflags[`NX] = inexact_r;
        end
    end

    // ---------------------------------------------------------------
    // 次正规路径（exp_norm < -126）：把商的 25 bit 有效位右移到
    // 2^-149 网格上，单位数 N = quo * 2^(exp_precarry + 125)，
    // fraction = N 的低 23 位，更低位与最终余数并入 sticky。
    // 注意：路径选择用舍入前的 norm_exp0（与 fma_unit 一致）。
    // ---------------------------------------------------------------
    wire signed [9:0] sub_rsh = -norm_exp0 - 10'sd125;   // >= 2 (exp_norm0 <= -127)

    // 统计 v 中低于 sh 位的位 OR（sh: 0..31），补进 sticky
    function automatic sub_shift_sticky;
        input [4:0] sh;
        input [24:0] v;
        integer     i;
        reg         r;
        begin
            r = 1'b0;
            for (i = 0; i < 25; i = i + 1)
                if (i < sh) r = r | v[i];
            sub_shift_sticky = r;
        end
    endfunction

    wire [24:0] sub_N_raw = (sub_rsh <= 10'sd25) ? (quo >> sub_rsh[4:0]) : 25'd0;
    wire [23:0] sub_N = sub_N_raw[23:0];

    wire        sub_shifted_sticky = (sub_rsh <= 10'sd25) ? sub_shift_sticky(sub_rsh[4:0], quo) : |quo;
    wire        sub_sticky_all = div_sticky | sub_shifted_sticky;

    wire [22:0] sub_frac = sub_N[22:0];

    // 正确提取 guard / round / sticky：
    // sub_rsh 低位被右移丢弃，quo[sub_rsh-1] = guard，quo[sub_rsh-2] = round，
    // 其余并入 sticky。sub_N_raw[0] = quo[sub_rsh] 是 sub_frac 的 LSB，不是 guard。
    wire [24:0] sub_dropped = (sub_rsh <= 10'sd25)
                            ? (quo & ((25'd1 << sub_rsh[4:0]) - 25'd1))
                            : 25'd0;
    wire sub_guard  = (sub_rsh >= 10'sd1) ? sub_dropped[sub_rsh[4:0] - 5'd1] : 1'b0;
    wire sub_round  = (sub_rsh >= 10'sd2) ? sub_dropped[sub_rsh[4:0] - 5'd2] : 1'b0;
    wire sub_sticky_drop = (sub_rsh >= 10'sd3)
                          ? (|(sub_dropped & ((25'd1 << (sub_rsh[4:0] - 5'd2)) - 25'd1)))
                          : 1'b0;
    wire sub_sticky = sub_sticky_drop | sub_sticky_all;

    wire sub_round_up, sub_inexact;
    frm u_sub_frm (
        .rm      (rm_ff          ),
        .sign    (res_sign       ),
        .lsb     (sub_frac[0]    ),
        .guard   (sub_guard      ),
        .round   (sub_round      ),
        .sticky  (sub_sticky     ),
        .round_up(sub_round_up   ),
        .inexact (sub_inexact    )
    );

    wire [23:0] sub_frac_c = {1'b0, sub_frac} + {23'd0, sub_round_up};
    wire        sub_to_normal = sub_frac_c[23];   // 舍入进位 -> 最小正规数
    wire        sub_zero_out  = (sub_frac_c == 24'd0);

    reg [31:0] sub_result;
    reg [4:0]  sub_fflags;
    always @(*) begin
        if (sub_to_normal) begin
            sub_result = {res_sign, 8'd1, 23'd0};
        end else if (sub_zero_out) begin
            sub_result = {res_sign, 31'd0};
        end else begin
            sub_result = {res_sign, 8'd0, sub_frac_c[22:0]};
        end
        sub_fflags = 5'd0;
        if (sub_inexact) begin
            sub_fflags[`NX] = 1'b1;
            // RISC-V tininess detected after rounding:
            // exp_norm 为"指数无界"(正规路径)舍入后的指数，tiny 当且仅当仍 < -126
            if (exp_norm < -10'sd126)
                sub_fflags[`UF] = 1'b1;
        end
    end

    // ---------------------------------------------------------------
    // 有限路径选择：exp_precarry < -126 走次正规，否则正规
    // ---------------------------------------------------------------
    wire [31:0] finite_result = (norm_exp0 < -10'sd126) ? sub_result : norm_result;
    wire [4:0]  finite_fflags = (norm_exp0 < -10'sd126) ? sub_fflags  : norm_fflags;

    reg [31:0] result_combo;
    reg [4:0]  fflags_combo;
    always @(*) begin
        result_combo = finite_result;
        fflags_combo = finite_fflags;
        if (nan_result) begin
            result_combo = 32'h7fc00000;
            fflags_combo = {nv_flag, 4'b0000};
        end else if (inf_result) begin
            result_combo = {res_sign, 8'hFF, 23'd0};
            fflags_combo = {1'b0, dz_flag, 3'b000};
        end else if (zero_result) begin
            result_combo = {res_sign, 31'd0};
            fflags_combo = 5'd0;
        end
    end

    // ---------------------------------------------------------------
    // 状态机与写回
    //   E0  启动: 锁存操作数, rem0 = a_shifted - sig_b (P0), cnt=0
    //   E1..E12  12 拍 radix-4 SRT (每拍 2 bit, cnt 0..11)
    //   E13  收尾拍: 余数符号修正 + 组合计算 result_combo, 置 wb_valid_r
    //   E14  wb 呈现拍(仲裁器取走), 释放 busy
    // ---------------------------------------------------------------
    reg                wb_valid_r;
    reg [ID_WIDTH-1:0] wb_id_r;
    reg         [31:0] wb_result_r;
    reg         [ 4:0] wb_fflags_r;

    always @(posedge clk) begin
        if (rst) begin
            busy       <= 1'b0;
            cnt        <= 5'd0;
            wb_valid_r <= 1'b0;
            wb_id_r    <= {ID_WIDTH{1'b0}};
            wb_result_r<= 32'd0;
            wb_fflags_r<= 5'd0;
        end else begin
            wb_valid_r <= 1'b0;
            if (flush) begin
                busy <= 1'b0;
                cnt  <= 5'd0;
            end else if (fstart) begin
                busy        <= 1'b1;
                cnt         <= 5'd0;
                rem_ff      <= a_shifted_in - {1'b0, s2_sig};
                quo_ff      <= 27'd0;
                res_sign_ff <= s1_sign ^ s2_sign;
                s1_exp_ff   <= s1_exp ;
                s2_exp_ff   <= s2_exp ;
                s1_sig_ff   <= s1_sig ;
                s2_sig_ff   <= s2_sig ;
                s1_zero_ff  <= s1_zero;
                s2_zero_ff  <= s2_zero;
                s1_inf_ff   <= s1_inf ;
                s2_inf_ff   <= s2_inf ;
                s1_nan_ff   <= s1_nan ;
                s2_nan_ff   <= s2_nan ;
                s1_snan_ff  <= s1_snan;
                s2_snan_ff  <= s2_snan;
                rm_ff       <= rm      ;
                id_ff       <= issue_id;
            end else if (busy) begin
                if (wb_valid_r) begin
                    // wb 已呈现一拍, 释放 busy, 允许下一条 fdiv
                    busy <= 1'b0;
                end else if (cnt == 5'd12) begin
                    // 12 步 radix-4 迭代结束, 修正余数符号后组合结果写入 wb
                    wb_valid_r  <= 1'b1;
                    wb_id_r     <= id_ff;
                    wb_result_r <= result_combo;
                    wb_fflags_r <= fflags_combo;
                end else begin
                    cnt    <= cnt + 5'd1;
                    rem_ff <= p_next[24:0];
                    quo_ff <= quo_next;
                end
            end
        end
    end

    assign wb_valid   = wb_valid_r;
    assign wb_id      = wb_id_r;
    assign wb_result  = wb_result_r;
    assign wb_fflags  = wb_fflags_r;

endmodule
