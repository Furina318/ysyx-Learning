`include "fpu_config.vh"

// 结构（3 级流水）：
//   stage0：操作数选择 + Booth 编码/Wallace 树求乘积，
//           结果以进位保存形式 (s, cout2) 连同元数据锁存
//   stage1：乘积合并、公共 LSB 对齐移位、被移出低位折入 sticky
//   stage2：有符号宽加、取模、前导零计数、规范化/次正规化 G/R/S 舍入、打包

module fma_unit #(
    parameter ID_WIDTH = 5
)(
    input  wire                clk        ,
    input  wire                rst        ,

    input  wire                issue_valid,
    input  wire [ID_WIDTH-1:0] issue_id   ,
    input  wire [         6:0] op         ,
    input  wire [         2:0] rm         ,

    input  wire               s1_sign, s2_sign, s3_sign,
    input  wire signed [ 8:0] s1_exp , s2_exp , s3_exp ,
    input  wire        [23:0] s1_sig , s2_sig , s3_sig ,
    input  wire               s1_zero, s2_zero, s3_zero,
    input  wire               s1_inf , s2_inf , s3_inf ,
    input  wire               s1_nan , s2_nan , s3_nan ,
    input  wire               s1_snan, s2_snan, s3_snan,

    input  wire                flush      ,
    input  wire [ID_WIDTH-1:0] flush_id   ,

    output wire                wb_valid   ,
    output wire [ID_WIDTH-1:0] wb_id      ,
    output wire [        31:0] wb_result  ,
    output wire [         4:0] wb_fflags
);

    wire is_fadd   = (op == `FADD_S);
    wire is_fsub   = (op == `FSUB_S);
    wire is_fmul   = (op == `FMUL_S);
    wire is_fmadd  = (op == `FMADD_S);
    wire is_fmsub  = (op == `FMSUB_S);
    wire is_fnmadd = (op == `FNMADD_S);
    wire is_fnmsub = (op == `FNMSUB_S);
    wire is_faddsub = is_fadd | is_fsub;

    wire is_neg_op = is_fnmadd | is_fnmsub;

    wire        a_sign = is_faddsub ? 1'b0       :
                         is_neg_op  ? ~s1_sign   :
                                      s1_sign    ;

    wire signed [ 8:0] a_exp  = is_faddsub ? 9'sd0      : s1_exp;
    wire        [23:0] a_sig  = is_faddsub ? 24'h800000 : s1_sig;
    wire               a_zero = is_faddsub ? 1'b0       : s1_zero;
    wire               a_inf  = is_faddsub ? 1'b0       : s1_inf;
    wire               a_nan  = is_faddsub ? 1'b0       : s1_nan;
    wire               a_snan = is_faddsub ? 1'b0       : s1_snan;

    wire               b_sign = is_faddsub ? s1_sign : s2_sign;
    wire signed [ 8:0] b_exp  = is_faddsub ? s1_exp  : s2_exp;
    wire        [23:0] b_sig  = is_faddsub ? s1_sig  : s2_sig;
    wire               b_zero = is_faddsub ? s1_zero : s2_zero;
    wire               b_inf  = is_faddsub ? s1_inf  : s2_inf;
    wire               b_nan  = is_faddsub ? s1_nan  : s2_nan;
    wire               b_snan = is_faddsub ? s1_snan : s2_snan;

    wire c_from_s3 = is_fmadd | is_fmsub | is_fnmadd | is_fnmsub;
    wire c_neg     = is_fsub  | is_fmsub | is_fnmadd;
    wire        c_sign = is_faddsub ? (is_fsub ? ~s2_sign : s2_sign) :
                         is_fmul    ? (s1_sign ^ s2_sign)            :
                         c_neg      ? ~s3_sign                       :
                                      s3_sign                        ;

    wire signed [ 8:0] c_exp  = is_fmul ? 9'sd0 : (c_from_s3 ? s3_exp : s2_exp);
    wire        [23:0] c_sig  = is_fmul ? 24'd0 : (c_from_s3 ? s3_sig : s2_sig);
    wire               c_zero = is_fmul ? 1'b1 : (c_from_s3 ? s3_zero : s2_zero);
    wire               c_inf  = is_fmul ? 1'b0 : (c_from_s3 ? s3_inf  : s2_inf);
    wire               c_nan  = is_fmul ? 1'b0 : (c_from_s3 ? s3_nan  : s2_nan);
    wire               c_snan = is_fmul ? 1'b0 : (c_from_s3 ? s3_snan : s2_snan);

    wire mul_invalid   = (a_zero & b_inf) | (a_inf & b_zero);
    wire prod_nan      = a_nan | b_nan | mul_invalid;
    wire prod_inf      = (a_inf | b_inf) & ~prod_nan;
    wire prod_inf_sign = a_sign ^ b_sign;
    wire prod_zero     = (a_zero | b_zero) & ~prod_nan;

    wire any_nan      = a_nan | b_nan | c_nan | prod_nan;
    wire inf_opposite = prod_inf & c_inf & (prod_inf_sign != c_sign);
    wire invalid      = (a_snan | b_snan | c_snan) | mul_invalid | inf_opposite;
    wire sp_nan       = any_nan | inf_opposite;

    wire sp_inf_result = ~sp_nan & prod_inf;
    wire sp_c_inf_result = ~sp_nan & c_inf & ~prod_inf;
    wire is_special = sp_nan | sp_inf_result | sp_c_inf_result;

    reg [31:0] sp_result;
    reg [4:0]  sp_fflags;
    always @(*) begin
        sp_result = 32'h7fc00000;
        sp_fflags = 5'd0;
        if (sp_nan) begin
            sp_result = 32'h7fc00000;
            sp_fflags[`NV] = invalid;
        end else if (sp_inf_result) begin
            sp_result = {prod_inf_sign, 8'hFF, 23'd0};
            sp_fflags = 5'd0;
        end else if (sp_c_inf_result) begin
            sp_result = {c_sign, 8'hFF, 23'd0};
            sp_fflags = 5'd0;
        end
    end

    wire signed [10:0] a_exp11 = $signed({{2{a_exp[8]}}, a_exp});
    wire signed [10:0] b_exp11 = $signed({{2{b_exp[8]}}, b_exp});
    wire signed [10:0] c_exp11 = $signed({{2{c_exp[8]}}, c_exp});

    wire signed [10:0] p_exp = a_exp11 + b_exp11 - 11'sd46;
    wire signed [10:0] c_lsb = c_exp11 - 11'sd23;

    wire p_sign = a_sign ^ b_sign;

    wire signed [67:0] multiplicand_ext = {36'd0, {8'd0, a_sig}};
    wire signed [34:0] multiplier_ext   = {2'b0, {8'd0, b_sig}, 1'b0};

    wire signed [67:0] partial_products [0:16];
    wire [16:0] switch_outputs [0:67];
    wire [13:0] cout_group [0:67];
    wire  cout  [0:67];
    wire [67:0] cout2;
    wire [67:0] s;

    genvar gi;
    generate
        for (gi = 0; gi < 17; gi = gi + 1) begin : gen_partial_products
            wire [2:0] y_group = {multiplier_ext[gi*2+2],
                                  multiplier_ext[gi*2+1],
                                  multiplier_ext[gi*2]};
            wire signed [67:0] x_shifted = multiplicand_ext << (gi*2);
            wire sel_negative, sel_double_negative, sel_positive, sel_double_positive;
            assign {sel_negative, sel_double_negative, sel_positive, sel_double_positive} =
                {y_group[2] & (y_group[1] ^ y_group[0]), y_group[2] & ~y_group[1] & ~y_group[0],
                 ~y_group[2] & (y_group[1] ^ y_group[0]), ~y_group[2] & y_group[1] & y_group[0]};
            assign partial_products[gi] =
                (sel_negative ? -x_shifted :
                 (sel_double_negative ? (-x_shifted) << 1 :
                  (sel_positive ? x_shifted :
                   (sel_double_positive ? (x_shifted << 1) : 68'sd0))));
        end
    endgenerate

    genvar gj, gk;
    generate
        for (gj = 0; gj < 68; gj = gj + 1) begin : gen_switch
            for (gk = 0; gk < 17; gk = gk + 1) begin
                assign switch_outputs[gj][gk] = partial_products[gk][gj];
            end
        end
    endgenerate

    genvar gl;
    generate
        fma_walloc_17bits u_walloc0 (
            .src_in     (switch_outputs[0]),
            .cin        (14'd0            ),
            .cout_group (cout_group[0]    ),
            .cout       (cout[0]          ),
            .s          (s[0]             )
        );
        assign cout2[0] = cout[0];

        for (gl = 1; gl < 68; gl = gl + 1) begin : gen_wallace
            fma_walloc_17bits u_walloc (
                .src_in     (switch_outputs[gl]),
                .cin        (cout_group[gl-1]  ),
                .cout_group (cout_group[gl]    ),
                .cout       (cout[gl]          ),
                .s          (s[gl]             )
            );
            assign cout2[gl] = cout[gl];
        end
    endgenerate

    // Stage0 流水寄存器
    reg                p0_valid;
    reg                p0_flushed;
    reg [ID_WIDTH-1:0] p0_id;
    reg         [ 2:0] p0_rm;
    reg                p0_is_special;
    reg         [31:0] p0_sp_result;
    reg         [ 4:0] p0_sp_fflags;
    reg         [67:0] p0_s;
    reg         [67:0] p0_cout2;
    reg signed  [10:0] p0_p_exp;
    reg signed  [10:0] p0_c_lsb;
    reg         [23:0] p0_c_sig;
    reg                p0_p_sign;
    reg                p0_c_sign;

    // Stage1 流水寄存器
    reg                p1_valid;
    reg                p1_flushed;
    reg [ID_WIDTH-1:0] p1_id;
    reg         [ 2:0] p1_rm;
    reg                p1_is_special;
    reg         [31:0] p1_sp_result;
    reg         [ 4:0] p1_sp_fflags;
    reg                p1_p_sign;
    reg                p1_c_sign;
    reg         [63:0] p1_p_fixed;
    reg         [63:0] p1_c_fixed;
    reg         [23:0] p1_p_drop;
    reg         [23:0] p1_c_drop;
    reg         [26:0] p1_far_p;
    reg         [26:0] p1_far_c;
    reg                p1_far_sticky;
    reg                p1_far_sticky_c;
    reg                p1_p_off;
    reg                p1_c_off;
    reg signed  [10:0] p1_base;

    // Stage2 流水寄存器
    reg                p2_valid;
    reg                p2_flushed;
    reg [ID_WIDTH-1:0] p2_id;
    reg         [ 2:0] p2_rm;
    reg                p2_is_special;
    reg         [31:0] p2_sp_result;
    reg         [ 4:0] p2_sp_fflags;
    reg         [117:0] p2_full;
    reg         [ 6:0] p2_top;
    reg                p2_acc_sign;
    reg                p2_zero_sign;
    reg                p2_acc_zero;
    reg                p2_deep_sticky;
    reg                p2_deep_pos;
    reg                p2_cross_exact;
    reg signed  [10:0] p2_base;

    function automatic is_younger;
        input [ID_WIDTH-1:0] a;
        input [ID_WIDTH-1:0] b;
        begin
            is_younger = (a != b) &&
                ((a[ID_WIDTH-1] ^ b[ID_WIDTH-1]) ?
                 (a[ID_WIDTH-2:0] < b[ID_WIDTH-2:0]) :
                 (a[ID_WIDTH-2:0] > b[ID_WIDTH-2:0]));
        end
    endfunction

    wire new_flushed = flush && is_younger(issue_id, flush_id);

    always @(posedge clk) begin
        if (rst) begin
            p0_valid     <= 1'b0;
            p0_flushed   <= 1'b0;
            p0_id        <= {ID_WIDTH{1'b0}};
            p0_rm        <= 3'd0;
            p0_is_special<= 1'b0;
            p0_sp_result <= 32'd0;
            p0_sp_fflags <= 5'd0;
            p0_s         <= 68'd0;
            p0_cout2     <= 68'd0;
            p0_p_exp     <= 11'sd0;
            p0_c_lsb     <= 11'sd0;
            p0_c_sig     <= 24'd0;
            p0_p_sign    <= 1'b0;
            p0_c_sign    <= 1'b0;

            p1_valid     <= 1'b0;
            p1_flushed   <= 1'b0;
            p1_id        <= {ID_WIDTH{1'b0}};
            p1_rm        <= 3'd0;
            p1_is_special<= 1'b0;
            p1_sp_result <= 32'd0;
            p1_sp_fflags <= 5'd0;
            p1_p_sign    <= 1'b0;
            p1_c_sign    <= 1'b0;
            p1_p_fixed   <= 64'd0;
            p1_c_fixed   <= 64'd0;
            p1_p_drop    <= 24'd0;
            p1_c_drop    <= 24'd0;
            p1_far_p     <= 27'd0;
            p1_far_c     <= 27'd0;
            p1_far_sticky   <= 1'b0;
            p1_far_sticky_c <= 1'b0;
            p1_p_off        <= 1'b0;
            p1_c_off        <= 1'b0;
            p1_base      <= 11'sd0;
        end else begin
            p1_valid      <= p0_valid;
            p1_flushed    <= p0_flushed | (flush & p0_valid & is_younger(p0_id, flush_id));
            p1_id         <= p0_id;
            p1_rm         <= p0_rm;
            p1_is_special <= p0_is_special;
            p1_sp_result  <= p0_sp_result;
            p1_sp_fflags  <= p0_sp_fflags;
            p1_p_sign     <= p0_p_sign;
            p1_c_sign     <= p0_c_sign;
            p1_p_fixed    <= p_fixed;
            p1_c_fixed    <= c_fixed;
            p1_p_drop     <= p_drop_24;
            p1_c_drop     <= c_drop_24;
            p1_far_p      <= far_v_p;
            p1_far_c      <= far_v_c;
            p1_far_sticky   <= far_sticky;
            p1_far_sticky_c <= far_sticky_c;
            p1_p_off        <= p_fully_off;
            p1_c_off        <= c_fully_off;
            p1_base       <= L - 11'sd51;

            p0_valid      <= issue_valid;
            p0_flushed    <= issue_valid ? new_flushed : 1'b0;
            p0_id         <= issue_id;
            if (issue_valid) begin
                p0_rm          <= rm;
                p0_is_special  <= is_special;
                p0_sp_result   <= sp_result;
                p0_sp_fflags   <= sp_fflags;
                p0_s           <= s;
                p0_cout2       <= cout2;
                p0_p_exp       <= p_exp;
                p0_c_lsb       <= c_lsb;
                p0_c_sig       <= c_sig;
                p0_p_sign      <= p_sign;
                p0_c_sign      <= c_sign;
            end
        end
    end

    // Stage1
    wire [68:0] product_sum = {1'b0, p0_s} + {p0_cout2, 1'b0};
    wire [47:0] prod = product_sum[47:0];

    wire prod_zero_now = (prod == 48'd0);
    wire c_zero_now    = (p0_c_sig == 24'd0);
    wire signed [10:0] L = c_zero_now  ? p0_p_exp :
                           prod_zero_now ? p0_c_lsb :
                           ((p0_p_exp >= p0_c_lsb) ? p0_p_exp : p0_c_lsb);
    wire [10:0] sh_p = L - p0_p_exp;
    wire [10:0] sh_c = L - p0_c_lsb;

    wire [63:0] p_fixed = (sh_p >= 48) ? 64'd0 :
                          ({16'd0, prod} >> sh_p[5:0]);
    wire [63:0] c_fixed = (sh_c >= 24) ? 64'd0 :
                          ({40'd0, p0_c_sig} >> sh_c[4:0]);


    function automatic [23:0] drop_p24;
        input [47:0] v;
        input [10:0] sh;
        reg   [47:0] v_shl;
        reg   [47:0] v_shr;
        begin
            v_shl = (sh <= 24) ? (v << (11'd24 - sh)) : 48'd0;
            v_shr = (sh >= 72) ? 48'd0                : ((sh > 24)
                               ? (v >> (sh - 11'd24)) : 48'd0);
            drop_p24 = (sh <= 24) ? v_shl[23:0] : v_shr[23:0];
        end
    endfunction


    function automatic [23:0] drop_c24;
        input [23:0] v;
        input [10:0] sh;
        reg   [23:0] v_shl;
        reg   [23:0] v_shr;
        begin
            v_shl = (sh <= 24) ? (v << (11'd24 - sh)) : 24'd0;
            v_shr = (sh >= 48) ? 24'd0 : ((sh > 24) ? (v >> (sh - 11'd24)) : 24'd0);
            drop_c24 = (sh <= 24) ? v_shl : v_shr;
        end
    endfunction

    wire [23:0] p_drop_24 = drop_p24(prod, sh_p);
    wire [23:0] c_drop_24 = drop_c24(p0_c_sig, sh_c);

    function automatic [26:0] far_p27;
        input [47:0] v;
        input integer sh;
        reg   [47:0] shifted;
        begin
            if (sh <= 51)
                shifted = v << (51 - sh);
            else if (sh >= 99)
                shifted = 48'd0;
            else
                shifted = v >> (sh - 51);

            far_p27 = shifted[26:0];
        end
    endfunction

    function automatic [26:0] far_c27;
        input [23:0] v;
        input integer sh;
        reg   [47:0] v_ext;
        reg   [47:0] shifted;
        begin
            v_ext = {24'd0, v};          

            if (sh <= 51)
                shifted = v_ext << (51 - sh);
            else if (sh >= 75)
                shifted = 48'd0;
            else
                shifted = v_ext >> (sh - 51);

            far_c27 = shifted[26:0];
        end
    endfunction

    wire [26:0] far_v_p = far_p27(prod, {21'd0, sh_p});
    wire [26:0] far_v_c = far_c27(p0_c_sig, {21'd0, sh_c});
    wire far_sticky = (sh_p > 51) ? (prod != 48'd0) : 1'b0;
    wire far_sticky_c = (sh_c > 51) ? (p0_c_sig != 24'd0) : 1'b0;

    wire p_fully_off = (sh_p >= 99);
    wire c_fully_off = (sh_c >= 75);

    // Stage2
    wire signed [66:0] p_signed = p1_p_sign ? -$signed({3'b000, p1_p_fixed})
                                            :  $signed({3'b000, p1_p_fixed});
    wire signed [66:0] c_signed = p1_c_sign ? -$signed({3'b000, p1_c_fixed})
                                            :  $signed({3'b000, p1_c_fixed});
    wire signed [66:0] acc_signed = p_signed + c_signed;

    wire signed [26:0] sdp = p1_p_sign ? -$signed({3'b000, p1_p_drop})
                                       :  $signed({3'b000, p1_p_drop});
    wire signed [26:0] sdc = p1_c_sign ? -$signed({3'b000, p1_c_drop})
                                       :  $signed({3'b000, p1_c_drop});
    wire signed [26:0] drop_signed = sdp + sdc;
    wire signed [28:0] far_s_p = p1_p_sign ? -$signed({2'b00, p1_far_p})
                                           :  $signed({2'b00, p1_far_p});
    wire signed [28:0] far_s_c = p1_c_sign ? -$signed({2'b00, p1_far_c})
                                           :  $signed({2'b00, p1_far_c});
    wire signed [28:0] far_signed = far_s_p + far_s_c;
    wire signed [117:0] acc_shl = {acc_signed, 51'd0};
    wire signed [117:0] full_signed = acc_shl +
                                      $signed({{64{drop_signed[26]}}, drop_signed, 27'd0}) +
                                      $signed({{89{far_signed[28]}}, far_signed});
    wire acc_sign = full_signed[117];
    wire [117:0] full_mag = acc_sign ? (~full_signed + 118'd1) : full_signed;
    wire acc_zero = (full_mag == 118'd0);

    // Parallel CLZ: 8 aligned blocks (7x16 + 6 bits), two-level priority encode.
    //   lz_full = block_index*16 + block_clz;  top = 117 - lz_full (MSB position)
    wire [15:0] blk0 = full_mag[117:102];
    wire [15:0] blk1 = full_mag[101:86];
    wire [15:0] blk2 = full_mag[85:70];
    wire [15:0] blk3 = full_mag[69:54];
    wire [15:0] blk4 = full_mag[53:38];
    wire [15:0] blk5 = full_mag[37:22];
    wire [15:0] blk6 = full_mag[21:6];
    wire [ 5:0] blk7 = full_mag[5:0];

    wire blk0_nz = |blk0;
    wire blk1_nz = |blk1;
    wire blk2_nz = |blk2;
    wire blk3_nz = |blk3;
    wire blk4_nz = |blk4;
    wire blk5_nz = |blk5;
    wire blk6_nz = |blk6;
    wire blk7_nz = |blk7;

    wire [2:0] blk_idx = blk0_nz ? 3'd0 : blk1_nz ? 3'd1 : blk2_nz ? 3'd2 :
                         blk3_nz ? 3'd3 : blk4_nz ? 3'd4 : blk5_nz ? 3'd5 :
                         blk6_nz ? 3'd6 : 3'd7;

    function automatic [3:0] clz16_b;
        input [15:0] v;
        reg   [15:0] temp;
        reg   [ 3:0] count;
        begin
            temp = v;
            count = 4'b0;
            if (temp[15: 8] == 8'b0) begin count = count + 4'd8; temp = temp << 8; end
            if (temp[15:12] == 4'b0) begin count = count + 4'd4; temp = temp << 4; end
            if (temp[15:14] == 2'b0) begin count = count + 4'd2; temp = temp << 2; end
            if (temp[15   ] == 1'b0) begin count = count + 4'd1; end
            clz16_b = (v == 16'b0) ? 4'd15 : count;
        end
    endfunction

    function automatic [3:0] clz6_b;
        input [5:0] v;
        reg   [5:0] temp;
        reg   [3:0] count;
        begin
            temp  = v;
            count = 4'b0;
            if (temp[5:3] == 3'b0) begin count = count + 4'd3; temp = temp << 3; end
            if (temp[5:4] == 2'b0) begin count = count + 4'd2; temp = temp << 2; end
            if (temp[5  ] == 1'b0) begin count = count + 4'd1; end
            clz6_b = (v == 6'b0) ? 4'd6 : count;
        end
    endfunction

    wire [3:0] blk0_clz = clz16_b(blk0);
    wire [3:0] blk1_clz = clz16_b(blk1);
    wire [3:0] blk2_clz = clz16_b(blk2);
    wire [3:0] blk3_clz = clz16_b(blk3);
    wire [3:0] blk4_clz = clz16_b(blk4);
    wire [3:0] blk5_clz = clz16_b(blk5);
    wire [3:0] blk6_clz = clz16_b(blk6);
    wire [3:0] blk7_clz = clz6_b(blk7);

    wire [3:0] lz_bot = (blk_idx == 3'd0) ? blk0_clz :
                        (blk_idx == 3'd1) ? blk1_clz :
                        (blk_idx == 3'd2) ? blk2_clz :
                        (blk_idx == 3'd3) ? blk3_clz :
                        (blk_idx == 3'd4) ? blk4_clz :
                        (blk_idx == 3'd5) ? blk5_clz :
                        (blk_idx == 3'd6) ? blk6_clz : blk7_clz;
    wire [6:0] lz_full = {blk_idx, lz_bot};
    wire [6:0] top = 7'd117 - lz_full;

    wire zero_sign = (p1_p_sign == p1_c_sign) ? p1_p_sign : (p1_rm == `RDN);

    wire deep_exists = p1_far_sticky | p1_far_sticky_c;
    wire deep_pos    = (p1_far_sticky   & (p1_p_sign == acc_sign)) |
                       (p1_far_sticky_c & (p1_c_sign == acc_sign));

    // 全部被移出窗口外(只剩 sticky)的微小项，若其符号与主项相反，
    // 真实值严格落在对齐边界之下(净差小于 1 ulp 的无穷小)，
    // 有向舍入(RTZ/RDN/RUP)必须把结果向回拨 1 ulp。
    wire p_cross_off = p1_p_off & p1_far_sticky & (p1_p_sign != acc_sign);
    wire c_cross_off = p1_c_off & p1_far_sticky_c & (p1_c_sign != acc_sign);
    wire p_cross = p_cross_off;
    wire c_cross = c_cross_off;

    // Stage2 -> Stage3 pipeline
    always @(posedge clk) begin
        if (rst) begin
            p2_valid     <= 1'b0;
            p2_flushed   <= 1'b0;
            p2_id        <= {ID_WIDTH{1'b0}};
            p2_rm        <= 3'd0;
            p2_is_special<= 1'b0;
            p2_sp_result <= 32'd0;
            p2_sp_fflags <= 5'd0;
            p2_full      <= 118'd0;
            p2_top       <= 7'd0;
            p2_acc_sign  <= 1'b0;
            p2_zero_sign <= 1'b0;
            p2_acc_zero  <= 1'b0;
            p2_deep_sticky <= 1'b0;
            p2_deep_pos  <= 1'b0;
            p2_cross_exact <= 1'b0;
            p2_base      <= 11'sd0;
        end else begin
            p2_valid      <= p1_valid;
            p2_flushed    <= p1_flushed | (flush & p1_valid & is_younger(p1_id, flush_id));
            p2_id         <= p1_id;
            p2_rm         <= p1_rm;
            p2_is_special <= p1_is_special;
            p2_sp_result  <= p1_sp_result;
            p2_sp_fflags  <= p1_sp_fflags;
            p2_full       <= full_mag;
            p2_top        <= top;
            p2_acc_sign   <= acc_sign;
            p2_zero_sign  <= zero_sign;
            p2_acc_zero   <= acc_zero;
            p2_deep_sticky<= deep_exists;
            p2_deep_pos   <= deep_pos;
            p2_cross_exact<= p_cross | c_cross;
            p2_base       <= p1_base;
        end
    end

    // Stage3
    function automatic or_low128;
        input [127:0] v;
        input [7:0]   cnt;
        reg   [127:0] mask;
        begin
            if (cnt >= 8'd128)
                mask = {128{1'b1}};
            else
                mask = (128'd1 << cnt) - 128'd1;

            or_low128 = |(v & mask);
        end
    endfunction

    wire signed [13:0] sub_d = -14'sd149 - $signed({{3{p2_base[10]}}, p2_base});
    wire signed [13:0] sub_d_abs = (sub_d < 0) ? -sub_d : sub_d;
    wire [6:0] sub_shift = (sub_d_abs > 14'sd117) ? 7'd117 : sub_d_abs[6:0];

    wire [23:0] sub_u_wire;
    wire [117:0] sub_shift_r = p2_full >> sub_shift;
    assign sub_u_wire = (sub_d_abs == 0) ? p2_full[23:0] :
                        ((sub_d_abs > 14'sd117) ? 24'd0 : sub_shift_r[23:0]);
    wire sub_g_wire = (sub_d_abs == 0) ? 1'b0 :
                      p2_full[sub_shift - 7'd1];
    wire sub_r_wire = (sub_d_abs < 14'sd2) ? 1'b0 :
                      p2_full[sub_shift - 7'd2];
    wire sub_s_wire = p2_deep_sticky |
                      ((sub_d_abs < 14'sd3) ? 1'b0 :
                       ((sub_d_abs > 14'sd117) ? or_low128({10'd0, p2_full}, 8'd118) :
                        or_low128({10'd0, p2_full}, sub_shift - 7'd2)));

    wire directed_rm = (p2_rm >= 3'd1) && (p2_rm <= 3'd3);
    wire sub_acc_exact = (sub_shift >= 7'd1) ?
                         ~or_low128({10'd0, p2_full}, {1'b0, sub_shift}) : 1'b0;
    wire sub_dec = directed_rm & p2_cross_exact & sub_acc_exact &
                   (sub_u_wire != 24'd0);
    wire [23:0] sub_u_eff = sub_dec ? (sub_u_wire - 24'd1) : sub_u_wire;

    wire [7:0] sub_s_cnt = (sub_shift >= 7'd2) ? (sub_shift - 7'd2) : 8'd0;
    wire sub_round_up_frm;
    wire sub_inexact;
    frm u_sub_frm (
        .rm      (p2_rm           ),
        .sign    (p2_acc_sign     ),
        .lsb     (sub_u_eff[0]    ),
        .guard   (sub_g_wire      ),
        .round   (sub_r_wire      ),
        .sticky  (sub_s_wire      ),
        .round_up(sub_round_up_frm),
        .inexact (sub_inexact     )
    );
    wire sub_round_up = sub_round_up_frm;

    wire [24:0] sub_rounded_wire = {1'b0, sub_u_eff} + {24'd0, sub_round_up};
    wire sub_to_normal = sub_rounded_wire[23];
    wire sub_zero_out  = (sub_rounded_wire == 25'd0);

    reg [31:0] sub_result;
    reg [4:0]  sub_fflags;
    always @(*) begin
        sub_result = 32'd0;
        sub_fflags = 5'd0;
        if (sub_to_normal) begin
            sub_result = {p2_acc_sign, 8'd1, 23'd0};
        end else if (sub_zero_out) begin
            sub_result = {p2_acc_sign, 31'd0};
        end else begin
            sub_result = {p2_acc_sign, 8'd0, sub_rounded_wire[22:0]};
        end
        if (sub_inexact) begin
            sub_fflags[`NX] = 1'b1;
            // 用"指数无界"的舍入结果判定 tiny 
            if (norm_exp_final < -13'sd126)
                sub_fflags[`UF] = 1'b1;
        end
    end

    reg [23:0] norm_sig_r;
    reg        norm_g, norm_r, norm_s;
    reg signed [12:0] norm_exp;
    wire [ 6:0] norm_sh_r = (p2_top >= 7'd23) ? (p2_top - 7'd23) : 7'd0;
    wire [ 6:0] norm_sh_l = (p2_top < 7'd23)  ? (7'd23 - p2_top)  : 7'd0;
    wire [117:0] norm_shift_r = p2_full >> norm_sh_r;
    wire [117:0] norm_shift_l = p2_full << norm_sh_l;
    always @(*) begin
        norm_sig_r = 24'd0;
        norm_g     = 1'b0;
        norm_r     = 1'b0;
        norm_s     = p2_deep_sticky;
        norm_exp   = $signed({{2{p2_base[10]}}, p2_base}) + $signed({6'b0, p2_top});
        if (p2_top >= 7'd23) begin
            norm_sig_r = norm_shift_r[23:0];
            if (p2_top >= 7'd24) begin
                norm_g = p2_full[p2_top - 7'd24];
                if (p2_top >= 7'd25) begin
                    norm_r = p2_full[p2_top - 7'd25];
                    if (p2_top >= 7'd26)
                        norm_s = p2_deep_sticky |
                                 or_low128({10'd0, p2_full}, p2_top - 7'd25);
                end
            end
        end else begin
            norm_sig_r = norm_shift_l[23:0];
            norm_g     = 1'b0;
            norm_r     = 1'b0;
            norm_s     = p2_deep_sticky;
        end
    end

    wire norm_acc_exact = (p2_top >= 7'd24) ?
                          ~or_low128({10'd0, p2_full}, p2_top - 7'd23) :
                          (p2_full == (118'd1 << p2_top));
    wire norm_dec = directed_rm & p2_cross_exact & norm_acc_exact;
    wire [23:0] norm_sig_r_eff = norm_dec ? (norm_sig_r - 24'd1) : norm_sig_r;

    wire norm_round_up_frm;
    wire norm_inexact;
    frm u_norm_frm (
        .rm      (p2_rm            ),
        .sign    (p2_acc_sign      ),
        .lsb     (norm_sig_r_eff[0]),
        .guard   (norm_g           ),
        .round   (norm_r           ),
        .sticky  (norm_s           ),
        .round_up(norm_round_up_frm),
        .inexact (norm_inexact     )
    );
    // IEEE 754 sticky = OR of all dropped bits（不区分符号）,
    // 直接使用 frm 的 round_up 结果; 移除原来的 deep_pos override
    // (softfloat 标准实现不感知 deep bits 符号方向)
    wire norm_round_up = norm_round_up_frm;

    wire [24:0] norm_sig_rounded = {1'b0, norm_sig_r_eff} + {24'd0, norm_round_up};
    wire [24:0] norm_sig_final = norm_sig_rounded[24] ? 25'h1800000 :
                                 {1'b0, norm_sig_rounded[23:0]};
    wire signed [12:0] norm_exp_final = norm_exp + (norm_sig_rounded[24] ? 13'sd1 : 13'sd0);

    wire overflow_inf = (p2_rm == `RNE) | (p2_rm == `RMM) |
                        ((p2_rm == `RUP) & ~p2_acc_sign) |
                        ((p2_rm == `RDN) &  p2_acc_sign);

    reg [31:0] norm_result;
    reg [4:0]  norm_fflags;
    always @(*) begin
        norm_result = 32'd0;
        norm_fflags = 5'd0;
        if (norm_exp_final > 13'sd127) begin
            if (overflow_inf)
                norm_result = {p2_acc_sign, 8'hFF, 23'd0};
            else
                // 向最近一侧(RDN/RUP)饱和到最大有限数 FLT_MAX,
                // 指数为 0xFE(254), 不能写成 bias 127
                norm_result = {p2_acc_sign, 8'hFE, 23'h7FFFFF};
            norm_fflags[`OF] = 1'b1;
            norm_fflags[`NX] = 1'b1;
        end else begin
            norm_result = {p2_acc_sign, norm_exp_final[7:0] + 8'd127,
                           norm_sig_final[22:0]};
            norm_fflags[`NX] = norm_inexact;
        end
    end

    reg [31:0] finite_final_result;
    reg [4:0]  finite_final_fflags;
    always @(*) begin
        if (p2_acc_zero) begin
            finite_final_result = {p2_zero_sign, 31'd0};
            finite_final_fflags = 5'd0;
        end else if (norm_exp < -13'sd126) begin
            finite_final_result = sub_result;
            finite_final_fflags = sub_fflags;
        end else begin
            finite_final_result = norm_result;
            finite_final_fflags = norm_fflags;
        end
    end

    assign wb_valid   = p2_valid & ~p2_flushed;
    assign wb_id      = p2_id;
    assign wb_result  = p2_is_special ? p2_sp_result : finite_final_result;
    assign wb_fflags  = p2_is_special ? p2_sp_fflags : finite_final_fflags;

endmodule

/* verilator lint_off DECLFILENAME */
module fma_walloc_17bits(
    input [16:0] src_in,
    input [13:0] cin,
    output [13:0] cout_group,
    output cout, s
);
    wire [13:0] c;
    wire [4:0] first_s;
    fma_csa csa0 (.in (src_in[16:14]),.cout (c[4]),.s (first_s[4]) );
    fma_csa csa1 (.in (src_in[13:11]),.cout (c[3]),.s (first_s[3]) );
    fma_csa csa2 (.in (src_in[10:08]),.cout (c[2]),.s (first_s[2]) );
    fma_csa csa3 (.in (src_in[07:05]),.cout (c[1]),.s (first_s[1]) );
    fma_csa csa4 (.in (src_in[04:02]),.cout (c[0]),.s (first_s[0]) );
    wire [3:0] secnod_s;
    fma_csa csa5 (.in ({first_s[4:2]}),.cout (c[8]),.s (secnod_s[3]));
    fma_csa csa6 (.in ({first_s[1:0],src_in[1]}),.cout (c[7]),.s (secnod_s[2]));
    fma_csa csa7 (.in ({src_in[0],cin[4:3]}),.cout (c[6]),.s (secnod_s[1]));
    fma_csa csa8 (.in ({cin[2:0]}),.cout (c[5]),.s (secnod_s[0]));
    wire [1:0] thrid_s;
    fma_csa csa9 (.in (secnod_s[3:1]),.cout (c[10]),.s (thrid_s[1]));
    fma_csa csaA (.in ({secnod_s[0],cin[6:5]}),.cout (c[09]),.s (thrid_s[0]));
    wire [1:0] fourth_s;
    fma_csa csaB (.in ({thrid_s[1:0],cin[10]}),.cout (c[12]),.s (fourth_s[1]));
    fma_csa csaC (.in ({cin[9:7]}),.cout (c[11]),.s (fourth_s[0]));
    wire fifth_s;
    fma_csa csaD (.in ({fourth_s[1:0],cin[11]}),.cout (c[13]),.s (fifth_s));
    fma_csa csaE (.in ({fifth_s,cin[13:12]}),.cout (cout),.s (s));
    assign cout_group = c;
endmodule

module fma_csa(
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
