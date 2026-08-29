`include "fpu_config.vh"

module fadd_sub (
    input  wire              a_sign,
    input  wire signed [8:0] a_exp,
    input  wire [23:0]       a_sig,

    input  wire              b_sign,
    input  wire signed [8:0] b_exp,
    input  wire [23:0]       b_sig,

    input  wire             add_sub,      // 1: a - b, 0: a + b

    // 未舍入结果
    output reg              result_sign,
    output reg signed [9:0] result_exp,   // 无偏指数
    output reg [23:0]       result_sig,   // 未舍入有效数（normal: 24bit；subnormal: 0~2^23-1）
    output reg              guard,
    output reg              round,
    output reg              sticky,
    output reg              result_is_subnormal,
    output reg              result_is_zero // 完全对消
);

    // 有效符号：减法等价于对 b 取反
    wire sign_a_eff = a_sign;
    wire sign_b_eff = b_sign ^ add_sub;

    wire same_sign = (sign_a_eff == sign_b_eff);

    wire signed [9:0] exp_a10 = {{1{a_exp[8]}}, a_exp};
    wire signed [9:0] exp_b10 = {{1{b_exp[8]}}, b_exp};
    wire signed [9:0] exp_diff_signed = exp_a10 - exp_b10;
    wire [9:0] exp_diff_mag = exp_diff_signed[9] ? (-exp_diff_signed) : exp_diff_signed;

    wire a_exp_ge = (a_exp >= b_exp);
    wire a_ge = a_exp_ge ? ((a_exp == b_exp) ? (a_sig >= b_sig) : 1'b1) : 1'b0;

    wire [23:0] big_sig  = a_ge ? a_sig : b_sig;
    wire [23:0] small_sig = a_ge ? b_sig : a_sig;
    wire signed [8:0] big_exp = a_exp_ge ? a_exp : b_exp;

    // 对齐
    wire [25:0] big_ext  = {big_sig, 2'b00};
    wire [25:0] small_ext = {small_sig, 2'b00};

    wire [25:0] small_aligned = (exp_diff_mag >= 26'd26) ? 26'd0 :
                                (small_ext >> exp_diff_mag);

    wire small_sticky = (exp_diff_mag > 26'd26) ? (|small_ext) :
                        (|(small_ext & ((26'd1 << exp_diff_mag) - 1)));

    // 同号相加，异号相减
    wire [26:0] add_raw = {1'b0, big_ext} + {1'b0, small_aligned};
    wire [26:0] sub_raw = {1'b0, big_ext} - {1'b0, small_aligned};
    wire [26:0] raw     = same_sign ? add_raw : sub_raw;
    wire raw_sticky = small_sticky;
    wire raw_zero   = (raw == 27'd0);

    // 结果符号（非零结果）
    wire res_sign = same_sign ? sign_a_eff :
                    (a_ge ? sign_a_eff : sign_b_eff);

    // 前导1检测 / 规格化
    function automatic [4:0] clz27;
        input [26:0] v;
        reg          found;
        integer      i;
        begin
            clz27 = 5'd27;
            found = 1'b0;
            for (i = 26; i >= 0; i = i - 1) begin
                if (!found) begin
                    if (v[i]) begin
                        clz27 = 5'd26 - i;
                        found = 1'b1;
                    end
                end
            end
        end
    endfunction

    wire [4:0] lz_raw = clz27(raw);
    wire [4:0] msb    = 26 - lz_raw;
    wire signed [5:0] msb_s = {1'b0, msb};
    wire signed [5:0] norm_shift = msb_s - 6'sd23;

    reg [23:0] sig_unrounded;
    reg        g_bit, r_bit, s_bit;
    reg        renorm_sub;

    // 用于 subnormal 的 GRS 计算
    function automatic [2:0] grs_for_sub;
        input [1:0] sh;
        input [2:0] drop;
        input       sticky;
        begin
            grs_for_sub = 3'b000;
            if (!sticky) begin
                case (sh)
                    2'd1: grs_for_sub = {drop[0], 2'b00};
                    2'd2: grs_for_sub = {drop[1], drop[0], 1'b0};
                    2'd3: grs_for_sub = {drop[2], drop[1], drop[0]};
                    default: grs_for_sub = 3'b000;
                endcase
            end else begin
                case (sh)
                    2'd1: grs_for_sub = {drop[0] ^ 1'b1, 2'b01};
                    2'd2: case (drop[1:0])
                            2'd0:   grs_for_sub = 3'b111;
                            2'd1:   grs_for_sub = 3'b001;
                            2'd2:   grs_for_sub = 3'b011;
                            default: grs_for_sub = 3'b101;
                          endcase
                    2'd3: case (drop[2:0])
                            3'd0:   grs_for_sub = 3'b111;
                            3'd1:   grs_for_sub = 3'b001;
                            3'd2:   grs_for_sub = 3'b001;
                            3'd3:   grs_for_sub = 3'b011;
                            3'd4:   grs_for_sub = 3'b011;
                            3'd5:   grs_for_sub = 3'b101;
                            3'd6:   grs_for_sub = 3'b101;
                            default: grs_for_sub = 3'b111;
                          endcase
                    default: grs_for_sub = 3'b000;
                endcase
            end
        end
    endfunction

    always @(*) begin
        if (norm_shift >= 0) begin
            if (!same_sign && raw_sticky && (norm_shift >= 1)) begin
                if ((raw & ((27'd1 << norm_shift) - 1)) == 27'd0) begin
                    sig_unrounded = (raw >> norm_shift[4:0]) - 24'd1;
                end else begin
                    sig_unrounded = raw >> norm_shift[4:0];
                end
                {g_bit, r_bit, s_bit} = grs_for_sub(norm_shift[1:0], raw[2:0], raw_sticky);
                renorm_sub = 1'b0;
                if (!sig_unrounded[23]) begin
                    sig_unrounded = {sig_unrounded[22:0], g_bit};
                    {g_bit, r_bit, s_bit} = {r_bit, s_bit, 1'b0};
                    renorm_sub = 1'b1;
                end
            end else begin
                sig_unrounded = raw >> norm_shift[4:0];
                g_bit = (norm_shift >= 1) ? raw[norm_shift - 1] : 1'b0;
                r_bit = (norm_shift >= 2) ? raw[norm_shift - 2] : 1'b0;
                s_bit = raw_sticky | ((norm_shift == 3) ? raw[0] : 1'b0);
                renorm_sub = 1'b0;
            end
        end else begin
            sig_unrounded = raw << (-norm_shift);
            g_bit = 1'b0;
            r_bit = 1'b0;
            s_bit = raw_sticky;
            renorm_sub = 1'b0;
        end
    end

    wire [26:0] prec = {sig_unrounded, g_bit, r_bit, s_bit};

    wire signed [9:0] big_exp10 = {{1{big_exp[8]}}, big_exp};
    wire signed [9:0] norm_shift10 = {{4{norm_shift[5]}}, norm_shift};
    wire signed [9:0] norm_exp = big_exp10 + norm_shift10 - 10'sd2 -
                                  (renorm_sub ? 10'sd1 : 10'sd0);

    wire use_subnormal = (norm_exp < -10'sd126);

    // normal 路径未舍入结果
    wire [23:0] sig_norm = prec[26:3];
    wire        g_norm   = prec[2];
    wire        r_norm   = prec[1];
    wire        s_norm   = prec[0];

    // subnormal 路径未舍入结果
    wire [9:0]  sub_k     = -10'sd126 - norm_exp;
    wire [5:0]  sub_shift = sub_k[5:0] + 6'd3;
    wire [23:0] sub_u     = prec >> sub_shift;

    wire sub_guard = (sub_shift >= 6'd1) ?
                     ((sub_shift > 6'd27) ? prec[26] : prec[sub_shift - 6'd1]) :
                     1'b0;
    wire sub_round = (sub_shift >= 6'd2) ?
                     ((sub_shift > 6'd27) ? prec[25] : prec[sub_shift - 6'd2]) :
                     1'b0;

    function automatic or_low27;
        input [26:0] v;
        input [5:0]  cnt;
        integer      i;
        reg          r;
        reg [5:0]    lim;
        begin
            r = 1'b0;
            lim = (cnt > 6'd27) ? 6'd27 : cnt;
            for (i = 0; i < lim; i = i + 1) r = r | v[i];
            or_low27 = r;
        end
    endfunction

    wire [5:0] sub_sticky_cnt = (sub_shift > 6'd27) ? 6'd25 :
                                (sub_shift >= 6'd2) ? (sub_shift - 6'd2) : 6'd0;
    wire sub_sticky = or_low27(prec, sub_sticky_cnt);

    always @(*) begin
        result_sign         = res_sign;
        result_exp          = norm_exp;
        result_is_subnormal = use_subnormal;
        result_is_zero      = raw_zero;

        if (use_subnormal) begin
            result_sig = sub_u;
            guard      = sub_guard;
            round      = sub_round;
            sticky     = sub_sticky;
        end else begin
            result_sig = sig_norm;
            guard      = g_norm;
            round      = r_norm;
            sticky     = s_norm;
        end
    end

endmodule
