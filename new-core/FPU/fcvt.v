`include "fpu_config.vh"

//////////////////////////////////////////////////////////////////////////////
//
// fcvt - 单精度 <-> 32 位整数转换模块
//
// 支持：
//   FCVT.W.S   浮点转有符号 word
//   FCVT.WU.S  浮点转无符号 word
//   FCVT.S.W   有符号 word 转浮点
//   FCVT.S.WU  无符号 word 转浮点
//
// 说明：
//   为了方便实现，本模块内部使用 frm 完成舍入；
//   后续如果严格要求“舍入全部在顶层”，可以再拆成 raw + 顶层 frm。
//////////////////////////////////////////////////////////////////////////////

module fcvt (
    input  wire [31:0] src,

    // 已解码浮点操作数（用于 FCVT.W.S / FCVT.WU.S）
    input  wire        src_sign,
    input  wire signed [8:0] src_exp,
    input  wire [23:0] src_sig,
    input  wire        src_is_zero,
    input  wire        src_is_subnormal,
    input  wire        src_is_normal,
    input  wire        src_is_inf,
    input  wire        src_is_nan,
    input  wire        src_is_snan,
    input  wire        src_is_qnan,

    input  wire [2:0]  rm,
    input  wire        is_w_s,    // FCVT.W.S
    input  wire        is_wu_s,   // FCVT.WU.S
    input  wire        is_s_w,    // FCVT.S.W
    input  wire        is_s_wu,   // FCVT.S.WU

    output reg  [31:0] result,
    output reg  [4:0]  fflags
);

    localparam NV = 0;
    localparam NX = 4;

    // ---------------------------------------------------------------
    // 前导零计数（32 bit）
    // ---------------------------------------------------------------
    function automatic [4:0] clz32;
        input [31:0] v;
        reg found;
        integer i;
        begin
            clz32 = 5'd31;
            found = 1'b0;
            for (i = 31; i >= 0; i = i - 1) begin
                if (!found) begin
                    if (v[i]) begin
                        clz32 = 5'd31 - i;
                        found = 1'b1;
                    end
                end
            end
        end
    endfunction

    // ---------------------------------------------------------------
    // 浮点 -> 整数
    // ---------------------------------------------------------------
    reg [63:0] f2i_mag;
    reg        f2i_g, f2i_r, f2i_s;
    reg        f2i_neg;
    reg        f2i_invalid;
    reg [31:0] f2i_result;
    reg        f2i_inexact;
    reg [63:0] f2i_mag_final;

    wire f2i_op = is_w_s | is_wu_s;

    integer f2i_rs;
    integer i2f_rs;
    always @(*) begin
        f2i_mag     = 64'd0;
        f2i_g       = 1'b0;
        f2i_r       = 1'b0;
        f2i_s       = 1'b0;
        f2i_neg     = src_sign & ~src_is_zero;
        f2i_invalid = 1'b0;
        f2i_result  = 32'd0;
        f2i_inexact = 1'b0;

        if (src_is_nan || src_is_inf) begin
            f2i_invalid = 1'b1;
            if (is_w_s)
                f2i_result = src_sign ? 32'h80000000 : 32'h7fffffff;
            else
                f2i_result = 32'hffffffff;
        end
        else if (!src_is_zero) begin
            // 计算 |value| 的整数近似值
            if (src_exp >= 9'sd23) begin
                // 整数部分可能很大；超过 64bit 时直接饱和，交给溢出判断
                if (src_exp > 9'sd86) begin
                    f2i_mag = 64'hffffffffffffffff;
                end else begin
                    f2i_mag = {40'd0, src_sig} << (src_exp - 9'sd23);
                end
                f2i_g = 1'b0;
                f2i_r = 1'b0;
                f2i_s = 1'b0;
            end else begin
                f2i_rs = 9'sd23 - src_exp;
                if (f2i_rs >= 64) begin
                    f2i_mag = 64'd0;
                    f2i_g   = src_sig[23];
                    f2i_r   = src_sig[22];
                    f2i_s   = |src_sig[21:0];
                end else if (f2i_rs > 24) begin
                    // 24 bit 有效数全部移出
                    f2i_mag = 64'd0;
                    f2i_g   = src_sig[23];
                    f2i_r   = src_sig[22];
                    f2i_s   = |src_sig[21:0];
                end else if (f2i_rs > 0) begin
                    f2i_mag = {40'd0, src_sig} >> f2i_rs;
                    f2i_g   = (f2i_rs >= 1) ? ((src_sig >> (f2i_rs-1)) & 1'b1) : 1'b0;
                    f2i_r   = (f2i_rs >= 2) ? ((src_sig >> (f2i_rs-2)) & 1'b1) : 1'b0;
                    f2i_s   = (f2i_rs >= 3) ? (|(src_sig & ((24'd1 << (f2i_rs-2)) - 1))) : 1'b0;
                end else begin
                    f2i_mag = {40'd0, src_sig};
                    f2i_g = 1'b0;
                    f2i_r = 1'b0;
                    f2i_s = 1'b0;
                end
            end

            // 舍入到整数
            f2i_inexact = f2i_g | f2i_r | f2i_s;

            if (is_w_s) begin
                if ((f2i_mag > 64'h0000000080000000) ||
                    ((f2i_mag == 64'h0000000080000000) && ~f2i_neg)) begin
                    // 正数 >= 2^31 或负数 > 2^31 都溢出
                    f2i_invalid = 1'b1;
                    f2i_result  = f2i_neg ? 32'h80000000 : 32'h7fffffff;
                end else if (f2i_neg) begin
                    f2i_result = (~f2i_mag[31:0]) + 32'd1;
                end else begin
                    f2i_result = f2i_mag[31:0];
                end
            end else begin
                // unsigned
                if (f2i_neg) begin
                    f2i_invalid = 1'b1;
                    f2i_result  = 32'd0;
                end else if (f2i_mag > 64'h00000000ffffffff) begin
                    f2i_invalid = 1'b1;
                    f2i_result  = 32'hffffffff;
                end else begin
                    f2i_result = f2i_mag[31:0];
                end
            end
        end
    end

    // 使用 frm 对浮点->整数做舍入（这里简化：f2i_mag 已截断，需要真正舍入）
    // 更精确做法应基于 f2i_mag + g/r/s 再计算 round_up；此处先按截断值处理。
    wire f2i_round_up, f2i_inexact_frm;
    frm u_frm_f2i (
        .rm      (rm),
        .sign    (f2i_neg),
        .lsb     (f2i_mag[0]),
        .guard   (f2i_g),
        .round   (f2i_r),
        .sticky  (f2i_s),
        .round_up(f2i_round_up),
        .inexact (f2i_inexact_frm)
    );

    // ---------------------------------------------------------------
    // 整数 -> 浮点
    // ---------------------------------------------------------------
    reg        i2f_neg;
    reg [31:0] i2f_mag;
    reg [4:0]  i2f_msb;
    reg [23:0] i2f_sig;
    reg        i2f_g, i2f_r, i2f_s;
    reg        i2f_zero;
    reg signed [9:0] i2f_exp;

    wire i2f_op = is_s_w | is_s_wu;

    always @(*) begin
        i2f_neg  = 1'b0;
        i2f_mag  = 32'd0;
        i2f_msb  = 5'd0;
        i2f_sig  = 24'd0;
        i2f_g    = 1'b0;
        i2f_r    = 1'b0;
        i2f_s    = 1'b0;
        i2f_zero = 1'b1;
        i2f_exp  = 10'sd0;

        if (i2f_op) begin
            if (is_s_w) begin
                i2f_neg = src[31];
                i2f_mag = i2f_neg ? (~src + 32'd1) : src;
            end else begin
                i2f_neg = 1'b0;
                i2f_mag = src;
            end

            i2f_zero = (i2f_mag == 32'd0);

            if (!i2f_zero) begin
                i2f_msb = 5'd31 - clz32(i2f_mag);
                i2f_exp = {1'b0, i2f_msb}; // 无偏指数 = msb

                if (i2f_msb >= 5'd23) begin
                    i2f_rs = i2f_msb - 5'd23;
                    i2f_sig = i2f_mag >> i2f_rs;
                    i2f_g   = (i2f_rs >= 1) ? ((i2f_mag >> (i2f_rs-1)) & 1'b1) : 1'b0;
                    i2f_r   = (i2f_rs >= 2) ? ((i2f_mag >> (i2f_rs-2)) & 1'b1) : 1'b0;
                    i2f_s   = (i2f_rs >= 3) ? (|(i2f_mag & ((32'd1 << (i2f_rs-2)) - 1))) : 1'b0;
                end else begin
                    i2f_rs = 5'd23 - i2f_msb;
                    i2f_sig = i2f_mag << i2f_rs;
                    i2f_g = 1'b0;
                    i2f_r = 1'b0;
                    i2f_s = 1'b0;
                end
            end
        end
    end

    wire i2f_round_up, i2f_inexact;
    frm u_frm_i2f (
        .rm      (rm),
        .sign    (i2f_neg),
        .lsb     (i2f_sig[0]),
        .guard   (i2f_g),
        .round   (i2f_r),
        .sticky  (i2f_s),
        .round_up(i2f_round_up),
        .inexact (i2f_inexact)
    );

    reg [24:0] i2f_sig_rounded;
    reg signed [9:0] i2f_exp_final;
    reg [23:0] i2f_sig_final;

    always @(*) begin
        i2f_sig_rounded = {1'b0, i2f_sig} + i2f_round_up;
        i2f_exp_final   = i2f_exp;
        i2f_sig_final   = i2f_sig_rounded[23:0];

        if (i2f_sig_rounded[24]) begin
            i2f_sig_final = 24'h800000;
            i2f_exp_final = i2f_exp + 10'sd1;
        end
    end

    // ---------------------------------------------------------------
    // 最终结果选择
    // ---------------------------------------------------------------
    always @(*) begin
        result = 32'd0;
        fflags = 5'd0;

        if (f2i_op) begin
            // 应用整数舍入（使用独立变量，避免组合环）
            f2i_mag_final = f2i_mag + (f2i_round_up ? 64'd1 : 64'd0);

            if (is_w_s) begin
                if (f2i_invalid) begin
                    result = f2i_result;
                end else if ((f2i_mag_final > 64'h0000000080000000) ||
                             ((f2i_mag_final == 64'h0000000080000000) && ~f2i_neg)) begin
                    result  = f2i_neg ? 32'h80000000 : 32'h7fffffff;
                    fflags[NV] = 1'b1;
                end else if (f2i_neg) begin
                    result = (~f2i_mag_final[31:0]) + 32'd1;
                end else begin
                    result = f2i_mag_final[31:0];
                end
            end else begin
                if (f2i_invalid) begin
                    result = f2i_result;
                end else if (f2i_neg) begin
                    result  = 32'd0;
                    fflags[NV] = 1'b1;
                end else if (f2i_mag_final > 64'h00000000ffffffff) begin
                    result  = 32'hffffffff;
                    fflags[NV] = 1'b1;
                end else begin
                    result = f2i_mag_final[31:0];
                end
            end

            fflags[NX] = f2i_inexact_frm;
            if (f2i_invalid)
                fflags[NV] = 1'b1;
        end
        else if (i2f_op) begin
            if (i2f_zero) begin
                result = 32'h00000000;
            end else begin
                result = {i2f_neg, i2f_exp_final[7:0] + 8'd127, i2f_sig_final[22:0]};
            end
            fflags[NX] = i2f_inexact;
        end
    end

endmodule
