`include "fpu_config.vh"

module fpu #(
    parameter ID_WIDTH = 5
)(
    input  wire                clk        ,
    input  wire                rst        ,
    
    input  wire                valid      ,
    output wire                ready      ,
    input  wire [         6:0] fpu_op     ,
    input  wire [         2:0] rm         ,
    input  wire [        31:0] src1       ,
    input  wire [        31:0] src2       ,
    input  wire [        31:0] src3       ,

    input  wire                flush      ,
    input  wire [ID_WIDTH-1:0] flush_id   ,

    // 乱序核传入的指令 ID，写回时原样带回
    input  wire [ID_WIDTH-1:0] fpu_id     ,
    
    output wire                fpu_valid  ,
    output wire [ID_WIDTH-1:0] fpu_id_o   ,
    output wire [        31:0] fpu_result ,
    output wire [         4:0] fpu_fflags
);

    // ---------------------------------------------------------------
    // 指令译码
    // ---------------------------------------------------------------
    wire is_fadd = (fpu_op == `FADD_S);
    wire is_fsub = (fpu_op == `FSUB_S);
    wire is_faddsub = is_fadd | is_fsub;

    wire is_fclass = (fpu_op == `FCLASS_S);
    wire is_fmin   = (fpu_op == `FMIN_S);
    wire is_fmax   = (fpu_op == `FMAX_S);
    wire is_flt = (fpu_op == `FLT_S);
    wire is_feq = (fpu_op == `FEQ_S);
    wire is_fle = (fpu_op == `FLE_S);
    wire is_fcmp = is_flt | is_feq | is_fle;
    wire is_fquick = is_fclass | is_fmin | is_fmax | is_fcmp;
    wire [5:0] fquick_op = {is_fle, is_flt, is_feq, is_fclass, is_fmin, is_fmax};

    wire is_fsgnj   = (fpu_op == `FSGNJ_S);
    wire is_fsgnjn  = (fpu_op == `FSGNJN_S);
    wire is_fsgnjx  = (fpu_op == `FSGNJX_S);
    wire is_fsgnj_all = is_fsgnj | is_fsgnjn | is_fsgnjx;

    wire is_fcvt_w_s  = (fpu_op == `FCVT_W_S);
    wire is_fcvt_wu_s = (fpu_op == `FCVT_WU_S);
    wire is_fcvt_s_w  = (fpu_op == `FCVT_S_W);
    wire is_fcvt_s_wu = (fpu_op == `FCVT_S_WU);
    wire is_fcvt = is_fcvt_w_s | is_fcvt_wu_s | is_fcvt_s_w | is_fcvt_s_wu;

    // ---------------------------------------------------------------
    // 统一拆包
    // ---------------------------------------------------------------
    wire        sign_a, sign_b;
    wire signed [ 8:0] exp_a, exp_b;
    wire [23:0] sig_a, sig_b;
    wire        zero_a, subnormal_a, normal_a, inf_a, nan_a, snan_a, qnan_a;
    wire        zero_b, subnormal_b, normal_b, inf_b, nan_b, snan_b, qnan_b;

    fpu_decoder u_dec_a (
        .a            (src1        ),
        .sign         (sign_a      ),
        .exp          (exp_a       ),
        .sig          (sig_a       ),
        .is_zero      (zero_a      ),
        .is_subnormal (subnormal_a ),
        .is_normal    (normal_a    ),
        .is_inf       (inf_a       ),
        .is_nan       (nan_a       ),
        .is_snan      (snan_a      ),
        .is_qnan      (qnan_a      )
    );

    fpu_decoder u_dec_b (
        .a            (src2        ),
        .sign         (sign_b      ),
        .exp          (exp_b       ),
        .sig          (sig_b       ),
        .is_zero      (zero_b      ),
        .is_subnormal (subnormal_b ),
        .is_normal    (normal_b    ),
        .is_inf       (inf_b       ),
        .is_nan       (nan_b       ),
        .is_snan      (snan_b      ),
        .is_qnan      (qnan_b      )
    );

    // ---------------------------------------------------------------
    // 慢速/普通单元：加减法
    // ---------------------------------------------------------------
    wire        fadd_result_sign;
    wire signed [9:0] fadd_result_exp;
    wire [23:0] fadd_result_sig;
    wire        fadd_guard, fadd_round, fadd_sticky;
    wire        fadd_is_subnormal, fadd_is_zero;

    fadd_sub u_fadd_sub (
        .a_sign              (sign_a        ),
        .a_exp               (exp_a         ),
        .a_sig               (sig_a         ),
        .b_sign              (sign_b        ),
        .b_exp               (exp_b         ),
        .b_sig               (sig_b         ),
        .add_sub             (is_fsub       ),
        .result_sign         (fadd_result_sign),
        .result_exp          (fadd_result_exp),
        .result_sig          (fadd_result_sig),
        .guard               (fadd_guard    ),
        .round               (fadd_round    ),
        .sticky              (fadd_sticky   ),
        .result_is_subnormal (fadd_is_subnormal),
        .result_is_zero      (fadd_is_zero )
    );

    wire round_up, inexact;

    frm u_frm (
        .rm      (rm                ),
        .sign    (fadd_result_sign  ),
        .lsb     (fadd_result_sig[0]),
        .guard   (fadd_guard        ),
        .round   (fadd_round        ),
        .sticky  (fadd_sticky       ),
        .round_up(round_up          ),
        .inexact (inexact           )
    );

    // ---------------------------------------------------------------
    // 快速单元：分类 / 最值 / 比较
    // ---------------------------------------------------------------
    wire [31:0] fquick_result;
    wire [4:0]  fquick_fflags;

    fquick u_fquick (
        .a            (src1        ),
        .a_sign       (sign_a      ),
        .a_exp        (exp_a       ),
        .a_sig        (sig_a       ),
        .a_is_zero    (zero_a      ),
        .a_is_subnormal(subnormal_a),
        .a_is_normal  (normal_a    ),
        .a_is_inf     (inf_a       ),
        .a_is_nan     (nan_a       ),
        .a_is_snan    (snan_a      ),
        .a_is_qnan    (qnan_a      ),

        .b            (src2        ),
        .b_sign       (sign_b      ),
        .b_exp        (exp_b       ),
        .b_sig        (sig_b       ),
        .b_is_zero    (zero_b      ),
        .b_is_subnormal(subnormal_b),
        .b_is_normal  (normal_b    ),
        .b_is_inf     (inf_b       ),
        .b_is_nan     (nan_b       ),
        .b_is_snan    (snan_b      ),
        .b_is_qnan    (qnan_b      ),

        .fquick_op    (fquick_op    ),
        .result       (fquick_result),
        .fflags       (fquick_fflags)
    );

    // 比较指令的 NV 由顶层单独生成
    wire [4:0] fquick_fflags_final =
        is_fcmp ? (is_feq ? {4'b0000, (snan_a | snan_b)} :
                            {4'b0000, (nan_a | nan_b)}) :
                  fquick_fflags;

    // ---------------------------------------------------------------
    // 转换单元
    // ---------------------------------------------------------------
    wire [31:0] fcvt_result;
    wire [4:0]  fcvt_fflags;

    fcvt u_fcvt (
        .src            (src1        ),
        .src_sign       (sign_a      ),
        .src_exp        (exp_a       ),
        .src_sig        (sig_a       ),
        .src_is_zero    (zero_a      ),
        .src_is_subnormal(subnormal_a),
        .src_is_normal  (normal_a    ),
        .src_is_inf     (inf_a       ),
        .src_is_nan     (nan_a       ),
        .src_is_snan    (snan_a      ),
        .src_is_qnan    (qnan_a      ),
        .rm             (rm          ),
        .is_w_s         (is_fcvt_w_s ),
        .is_wu_s        (is_fcvt_wu_s),
        .is_s_w         (is_fcvt_s_w ),
        .is_s_wu        (is_fcvt_s_wu),
        .result         (fcvt_result ),
        .fflags         (fcvt_fflags )
    );

    // ---------------------------------------------------------------
    // 加减法最终打包（独立生成，供写回仲裁）
    // ---------------------------------------------------------------
    wire sign_a_eff = sign_a;
    wire sign_b_eff = sign_b ^ is_fsub;

    wire nan_input   = nan_a | nan_b;
    wire invalid_nan = (nan_a & snan_a) | (nan_b & snan_b);
    wire inf_diff    = inf_a & inf_b & (sign_a_eff != sign_b_eff);

    wire both_zero = zero_a & zero_b;
    wire zero_result_sign = (sign_a_eff == sign_b_eff) ? sign_a_eff : (rm == `RDN);

    reg [31:0]       fadd_result_word;
    reg [4:0]        fadd_fflags_word;
    reg [24:0]       sig_rounded;
    reg [23:0]       sub_rounded;
    reg [23:0]       sig_norm_r;
    reg signed [9:0] exp_norm_r;

    always @(*) begin
        fadd_result_word = 32'd0;
        fadd_fflags_word = 5'd0;
        sig_rounded  = 25'd0;
        sub_rounded  = 24'd0;
        sig_norm_r   = 24'd0;
        exp_norm_r   = 10'sd0;

        if (nan_input) begin
            fadd_result_word = 32'h7fc00000;
            fadd_fflags_word[`NV] = invalid_nan;
        end
        else if (inf_a | inf_b) begin
            if (inf_diff) begin
                fadd_result_word = 32'h7fc00000;
                fadd_fflags_word[`NV] = 1'b1;
            end
            else if (inf_a)
                fadd_result_word = {sign_a_eff, 8'hFF, 23'd0};
            else
                fadd_result_word = {sign_b_eff, 8'hFF, 23'd0};
        end
        else if (both_zero) begin
            fadd_result_word = {zero_result_sign, 31'd0};
        end
        else if (zero_a | zero_b) begin
            if (zero_a)
                fadd_result_word = {sign_b_eff, src2[30:0]};
            else
                fadd_result_word = {sign_a_eff, src1[30:0]};
        end
        else begin
            if (fadd_is_zero) begin
                fadd_result_word = {rm == `RDN, 31'd0};
            end
            else if (fadd_is_subnormal) begin
                sub_rounded = fadd_result_sig + round_up;
                if (sub_rounded[23])
                    fadd_result_word = {fadd_result_sign, 8'd1, 23'd0};
                else if (sub_rounded == 24'd0)
                    fadd_result_word = {fadd_result_sign, 31'd0};
                else
                    fadd_result_word = {fadd_result_sign, 8'd0, sub_rounded[22:0]};
            end
            else begin
                sig_rounded = {1'b0, fadd_result_sig} + round_up;
                if (sig_rounded[24]) begin
                    sig_norm_r = 24'h800000;
                    exp_norm_r = fadd_result_exp + 10'sd1;
                end else begin
                    sig_norm_r = sig_rounded[23:0];
                    exp_norm_r = fadd_result_exp;
                end

                if (exp_norm_r > 10'sd127) begin
                    fadd_result_word = {fadd_result_sign, 8'hFF, 23'd0};
                    fadd_fflags_word[`OF] = 1'b1;
                    fadd_fflags_word[`NX] = 1'b1;
                end else begin
                    fadd_result_word = {fadd_result_sign,
                                        exp_norm_r[7:0] + 8'd127,
                                        sig_norm_r[22:0]};
                end
            end

            fadd_fflags_word[`NX] = inexact;
            if (fadd_is_subnormal)
                fadd_fflags_word[`UF] = inexact;
        end
    end

    // ---------------------------------------------------------------
    // 符号注入单元
    // ---------------------------------------------------------------
    wire [31:0] fsgnj_result =
        is_fsgnj  ? {src2[31], src1[30:0]} :
        is_fsgnjn ? {~src2[31], src1[30:0]} :
                    {src1[31] ^ src2[31], src1[30:0]};

    // ---------------------------------------------------------------
    // 写回仲裁：不同单元可拥有不同延迟，单写回端口，年龄优先
    // ---------------------------------------------------------------
    wire [3:0] arb_valid = {fcvt_wb_valid, fsgnj_wb_valid, fquick_wb_valid, fadd_wb_valid};

    wire fadd_wb_valid   = valid & is_faddsub   & ~flush;
    wire fquick_wb_valid = valid & is_fquick    & ~flush;
    wire fsgnj_wb_valid  = valid & is_fsgnj_all & ~flush;
    wire fcvt_wb_valid   = valid & is_fcvt      & ~flush;

    wire [31:0]      arb_data  [0:3];
    wire [4:0]       arb_fflags[0:3];
    wire [ID_WIDTH-1:0] arb_id [0:3];

    assign arb_data[0]   = fadd_result_word;
    assign arb_data[1]   = fquick_result;
    assign arb_data[2]   = fsgnj_result;
    assign arb_data[3]   = fcvt_result;

    assign arb_fflags[0] = fadd_fflags_word;
    assign arb_fflags[1] = fquick_fflags_final;
    assign arb_fflags[2] = 5'd0;
    assign arb_fflags[3] = fcvt_fflags;

    assign arb_id[0] = fpu_id;
    assign arb_id[1] = fpu_id;
    assign arb_id[2] = fpu_id;
    assign arb_id[3] = fpu_id;

    fpu_arbiter #(
        .NUM_PORTS  (4),
        .ID_WIDTH   (ID_WIDTH),
        .DATA_WIDTH (32)
    ) u_fpu_arbiter (
        .req_valid_i (arb_valid   ),
        .req_id_i    (arb_id      ),
        .req_data_i  (arb_data    ),
        .req_fflags_i(arb_fflags  ),
        .grant_o     (            ),
        .wb_valid_o  (fpu_valid   ),
        .wb_id_o     (fpu_id_o    ),
        .wb_data_o   (fpu_result  ),
        .wb_fflags_o (fpu_fflags  ),
        .flush       (flush       ),
        .flush_id    (flush_id    )
    );

    assign ready = 1'b1;

endmodule
