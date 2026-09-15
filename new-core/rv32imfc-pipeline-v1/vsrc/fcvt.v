`include "fpu_config.vh"

module fcvt (
    input  wire [31:0] src,

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

    // 前导零计数：5 级二分决策树
    function automatic [5:0] clz32;
        input [31:0] v;
        reg [31:0] tmp;
        reg [5:0]  count;
        begin
            tmp   = v;
            count = 6'd0;
            if (tmp[31:16] == 16'b0) begin count = count + 16; tmp = tmp << 16; end
            if (tmp[31:24] == 8'b0)  begin count = count + 8;  tmp = tmp << 8;  end
            if (tmp[31:28] == 4'b0)  begin count = count + 4;  tmp = tmp << 4;  end
            if (tmp[31:30] == 2'b0)  begin count = count + 2;  tmp = tmp << 2;  end
            if (tmp[31]    == 1'b0)  begin count = count + 1;  end
            clz32 = (v == 32'b0) ? 6'd32 : count;
        end
    endfunction

    // 浮点 -> 整数
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
        f2i_rs      = 0;
        f2i_g       = 1'b0;
        f2i_r       = 1'b0;
        f2i_s       = 1'b0;
        f2i_neg     = src_sign & ~src_is_zero;
        f2i_invalid = 1'b0;
        f2i_result  = 32'd0;
        f2i_inexact = 1'b0;

        if (src_is_nan || src_is_inf) begin
            f2i_invalid = 1'b1;
            if (is_w_s) begin
                // spike(softfloat f32_to_i32): NaN 一律返回 INT_MAX(不区分符号);
                // 仅 ±Inf 与有限溢出按符号返回最大/最小整数
                if (src_is_nan)
                    f2i_result = 32'h7fffffff;
                else
                    f2i_result = src_sign ? 32'h80000000 : 32'h7fffffff;
            end else begin
                // wu: NaN 与 +Inf → 0xffffffff; -Inf → 0
                // (spike roundToUI32 溢出时: 非负返回全 1, 负返回 0)
                if (src_is_inf && src_sign)
                    f2i_result = 32'd0;
                else
                    f2i_result = 32'hffffffff;
            end
        end
        else if (!src_is_zero) begin
            // 有限非零：src_sig 的小数点位于 bit23（1.xxx 定点形式），
            // 右移 (23 - src_exp) 位得到整数截断值 f2i_mag，
            // 同时提取舍入位 G/R/S（小数点右侧的第一/第二/其余位）
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
                f2i_rs = 32'sd23 - {{23{src_exp[8]}}, src_exp};
                if (f2i_rs > 24) begin
                    f2i_mag = 64'd0;
                    f2i_g   = 1'b0;
                    f2i_r   = 1'b0;
                    f2i_s   = |src_sig;
                end else if (f2i_rs > 0) begin
                    // 部分移出：截断值 = sig >> rs，G/R/S 按移出位置提取
                    f2i_mag = {40'd0, src_sig} >> f2i_rs;
                    f2i_g   = (f2i_rs >= 1) ? src_sig[f2i_rs-1] : 1'b0;
                    f2i_r   = (f2i_rs >= 2) ? src_sig[f2i_rs-2] : 1'b0;
                    f2i_s   = (f2i_rs >= 3) ? (|(src_sig & ((24'd1 << (f2i_rs-2)) - 1))) : 1'b0;
                end else begin
                    // rs == 0 已被上面 src_exp >= 23 的分支覆盖，此分支不可达，仅作防御
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
                if (!f2i_neg && (f2i_mag > 64'h00000000ffffffff)) begin
                    f2i_invalid = 1'b1;
                    f2i_result  = 32'hffffffff;
                end else begin
                    f2i_result = 32'd0;
                end
            end
        end
    end

    // 浮点->整数的舍入
    wire f2i_round_up, f2i_inexact_frm;
    frm u_frm_f2i (
        .rm      (rm             ),
        .sign    (f2i_neg        ),
        .lsb     (f2i_mag[0]     ),
        .guard   (f2i_g          ),
        .round   (f2i_r          ),
        .sticky  (f2i_s          ),
        .round_up(f2i_round_up   ),
        .inexact (f2i_inexact_frm)
    );

    // 整数 -> 浮点
    reg        i2f_neg;
    reg [31:0] i2f_mag;
    reg [4:0]  i2f_msb;
    reg [5:0]  _clz_sub;
    reg [23:0] i2f_sig;
    reg        i2f_g, i2f_r, i2f_s;
    reg        i2f_zero;
    reg signed [9:0] i2f_exp;

    wire i2f_op = is_s_w | is_s_wu;

    always @(*) begin
        i2f_neg  = 1'b0;
        i2f_mag  = 32'd0;
        i2f_msb  = 5'd0;
        _clz_sub = 6'd0;
        i2f_sig  = 24'd0;
        i2f_rs   = 0;
        i2f_g    = 1'b0;
        i2f_r    = 1'b0;
        i2f_s    = 1'b0;
        i2f_zero = 1'b1;
        i2f_exp  = 10'sd0;

        if (i2f_op) begin
            // 取绝对值：有符号数按补码取负
            if (is_s_w) begin
                i2f_neg = src[31];
                i2f_mag = i2f_neg ? (~src + 32'd1) : src;
            end else begin
                i2f_neg = 1'b0;
                i2f_mag = src;
            end

            i2f_zero = (i2f_mag == 32'd0);

            if (!i2f_zero) begin
                // msb 即最高有效位位置，同时也是无偏指数（值在 [2^msb, 2^(msb+1))）
                _clz_sub = 6'd31 - clz32(i2f_mag);
                i2f_msb = _clz_sub[4:0]; 
                i2f_exp = {5'b0, i2f_msb}; // 无偏指数 = msb

                if (i2f_msb >= 5'd23) begin
                    // 缩放到 24 位有效数（显式前导 1 在 bit23）：
                    // 右移移出的低位构成舍入位 G/R/S
                    i2f_rs = {27'b0, i2f_msb} - 32'sd23;
                    i2f_sig = i2f_mag[i2f_rs +: 24];
                    i2f_g   = (i2f_rs >= 1) ? i2f_mag[i2f_rs-1] : 1'b0;
                    i2f_r   = (i2f_rs >= 2) ? i2f_mag[i2f_rs-2] : 1'b0;
                    i2f_s   = (i2f_rs >= 3) ? (|(i2f_mag & ((32'd1 << (i2f_rs-2)) - 1))) : 1'b0;
                end else begin
                    // msb < 23：左移补零即得 24 位有效数，无舍入位
                    i2f_rs = 32'sd23 - {27'b0, i2f_msb};
                    // 左移结果截断取低 24 位即所求
                    /* verilator lint_off WIDTHTRUNC */
                    i2f_sig = i2f_mag << (5'd23 - i2f_msb);
                    /* verilator lint_on WIDTHTRUNC */
                    i2f_g = 1'b0;
                    i2f_r = 1'b0;
                    i2f_s = 1'b0;
                end
            end
        end
    end

    // 整数->浮点的舍入
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
        i2f_sig_rounded = {1'b0, i2f_sig} + {24'b0, i2f_round_up};
        i2f_exp_final   = i2f_exp;
        i2f_sig_final   = i2f_sig_rounded[23:0];

        // 舍入进位使 24 位有效数溢出（如 1.111..1 -> 10.000..0）：
        // 归一化回 1.0，指数 +1
        if (i2f_sig_rounded[24]) begin
            i2f_sig_final = 24'h800000;
            i2f_exp_final = i2f_exp + 10'sd1;
        end
    end

    always @(*) begin
        result         = 32'd0;
        fflags         = 5'd0;
        f2i_mag_final  = 64'd0;

        if (f2i_op) begin
            // 应用整数舍入：截断值 + frm 的 round_up
            f2i_mag_final = f2i_mag + (f2i_round_up ? 64'd1 : 64'd0);

            // 溢出判断必须基于舍入后的值：截断值恰好在边界内时，
            // 舍入进位可能把它推到边界外（如 2^31 - 0.5 舍入为 2^31）
            if (is_w_s) begin
                if (f2i_invalid) begin
                    result = f2i_result;
                end else if ((f2i_mag_final > 64'h0000000080000000) ||
                             ((f2i_mag_final == 64'h0000000080000000) && ~f2i_neg)) begin
                    // 正数 >= 2^31 或负数 > 2^31 都溢出
                    result  = f2i_neg ? 32'h80000000 : 32'h7fffffff;
                    fflags[`NV] = 1'b1;
                end else if (f2i_neg) begin
                    result = (~f2i_mag_final[31:0]) + 32'd1;
                end else begin
                    result = f2i_mag_final[31:0];
                end
            end else begin
                // 无符号路径
                if (f2i_invalid) begin
                    result = f2i_result;
                end else if (f2i_neg && (f2i_mag_final != 64'd0)) begin
                    // 负值(舍入后幅值非零): softfloat 返回 0 且置 NV
                    result  = 32'd0;
                    fflags[`NV] = 1'b1;
                end else if (f2i_neg) begin
                    // 负小值(舍入后幅值为 0, 如负次正规): 返回 0, 仅置 NX
                    result = 32'd0;
                end else if (f2i_mag_final > 64'h00000000ffffffff) begin
                    result  = 32'hffffffff;
                    fflags[`NV] = 1'b1;
                end else begin
                    result = f2i_mag_final[31:0];
                end
            end

            // spike(softfloat) 行为: 溢出/无效转换(置 NV)时不同时置 NX
            fflags[`NX] = f2i_inexact_frm & ~fflags[`NV];
            if (f2i_invalid)
                fflags[`NV] = 1'b1;
        end
        else if (i2f_op) begin
            if (i2f_zero) begin
                result = 32'h00000000; // 整数 0 不存在 -0
            end else begin
                // 符号 | 无偏指数 + bias(127) | 有效数小数部分
                result = {i2f_neg, i2f_exp_final[7:0] + 8'd127, i2f_sig_final[22:0]};
            end
            fflags[`NX] = i2f_inexact;
        end
    end

endmodule
