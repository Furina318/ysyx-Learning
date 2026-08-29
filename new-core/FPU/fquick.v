`include "fpu_config.vh"
// 一周期计算单元
module fquick (
    input  wire [31:0] a,
    input  wire        a_sign,
    input  wire signed [8:0] a_exp,
    input  wire [23:0] a_sig,
    input  wire        a_is_zero,
    input  wire        a_is_subnormal,
    input  wire        a_is_normal,
    input  wire        a_is_inf,
    input  wire        a_is_nan,
    input  wire        a_is_snan,
    input  wire        a_is_qnan,

    input  wire [31:0] b,
    input  wire        b_sign,
    input  wire signed [8:0] b_exp,
    input  wire [23:0] b_sig,
    input  wire        b_is_zero,
    input  wire        b_is_subnormal,
    input  wire        b_is_normal,
    input  wire        b_is_inf,
    input  wire        b_is_nan,
    input  wire        b_is_snan,
    input  wire        b_is_qnan,

    input  wire [ 5:0] fquick_op, // {fle, flt, feq, fclass, fmin, fmax}

    output wire [31:0] result,
    output wire [ 4:0] fflags
);

    
    wire [31:0] class_result =
        ( a_is_inf       &  a_sign) ? 32'h00000001 : // -inf
        ( a_is_normal    &  a_sign) ? 32'h00000002 : // -normal
        ( a_is_subnormal &  a_sign) ? 32'h00000004 : // -subnormal
        ( a_is_zero      &  a_sign) ? 32'h00000008 : // -0
        ( a_is_zero      & ~a_sign) ? 32'h00000010 : // +0
        ( a_is_subnormal & ~a_sign) ? 32'h00000020 : // +subnormal
        ( a_is_normal    & ~a_sign) ? 32'h00000040 : // +normal
        ( a_is_inf       & ~a_sign) ? 32'h00000080 : // +inf
        ( a_is_snan               ) ? 32'h00000100 : // signaling NaN
        ( a_is_qnan               ) ? 32'h00000200 : // quiet NaN
        32'h0;

    wire a_nan = a_is_nan;
    wire b_nan = b_is_nan;

    wire invalid_nv = (a_is_nan & a_is_snan) | (b_is_nan & b_is_snan);

    // 绝对值比较：|a| < |b|
    wire a_lt_b_abs =
        (a_is_inf & b_is_inf) ? 1'b0 :
        a_is_inf              ? 1'b0 :
        b_is_inf              ? 1'b1 :
        ((a_exp < b_exp) || ((a_exp == b_exp) && (a_sig < b_sig)));

    wire b_lt_a_abs =
        (a_is_inf & b_is_inf) ? 1'b0 :
        b_is_inf              ? 1'b0 :
        a_is_inf              ? 1'b1 :
        ((b_exp < a_exp) || ((b_exp == a_exp) && (b_sig < a_sig)));

    // 带符号比较
    wire a_lt_b =
        (a_sign != b_sign) ? a_sign :          // 负 < 正
        a_sign             ? b_lt_a_abs :  // 都是负：绝对值大的更小
                             a_lt_b_abs;   // 都是正：绝对值小的更小

    wire b_lt_a =
        (a_sign != b_sign) ? b_sign :
        b_sign             ? a_lt_b_abs :
                             b_lt_a_abs;

    wire both_nan       = a_nan & b_nan;
    wire zero_sign_diff = a_is_zero & b_is_zero & (a_sign != b_sign);

    // FMIN.S：有 NaN 时返回非 NaN 操作数；双 NaN 返回 canonical NaN
    wire [31:0] min_result =
        both_nan        ? 32'h7fc00000 :
        a_nan           ? b            :
        b_nan           ? a            :
        zero_sign_diff  ? 32'h80000000 :
        a_lt_b          ? a            :
        b_lt_a          ? b            : a;

    // FMAX.S
    wire [31:0] max_result =
        both_nan        ? 32'h7fc00000 :
        a_nan           ? b            :
        b_nan           ? a            :
        zero_sign_diff  ? 32'h00000000 :
        b_lt_a          ? a            :
        a_lt_b          ? b            : a;

    wire cmp_has_nan = a_nan | b_nan;

    wire cmp_eq = ~cmp_has_nan & ~a_lt_b & ~b_lt_a;
    wire cmp_lt = ~cmp_has_nan & a_lt_b;
    wire cmp_le = ~cmp_has_nan & (a_lt_b | cmp_eq);

    assign fflags = {4'b0000, invalid_nv};
    assign result = ({32{fquick_op[5]}} & {31'b0, cmp_le}) |
                    ({32{fquick_op[4]}} & {31'b0, cmp_lt}) |
                    ({32{fquick_op[3]}} & {31'b0, cmp_eq}) |
                    ({32{fquick_op[2]}} & class_result) |
                    ({32{fquick_op[1]}} & min_result)   |
                    ({32{fquick_op[0]}} & max_result);

endmodule
