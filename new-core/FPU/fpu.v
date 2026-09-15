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

    wire is_fmac = (fpu_op[6:4] == 3'b001);

    wire is_fsgnj   = (fpu_op == `FSGNJ_S );
    wire is_fsgnjn  = (fpu_op == `FSGNJN_S);
    wire is_fsgnjx  = (fpu_op == `FSGNJX_S);
    wire is_fsgnj_all = (fpu_op[6:3] == 4'b0101);

    wire is_fclass = (fpu_op == `FCLASS_S);
    wire is_fmin   = (fpu_op == `FMIN_S  );
    wire is_fmax   = (fpu_op == `FMAX_S  );
    wire is_flt    = (fpu_op == `FLT_S   );
    wire is_feq    = (fpu_op == `FEQ_S   );
    wire is_fle    = (fpu_op == `FLE_S   );
    wire is_fcmp   = is_flt | is_feq | is_fle;
    wire is_fquick  = (fpu_op[6:4] == 3'b010);
    wire [8:0] fquick_op = {is_fsgnjx, is_fsgnjn, is_fsgnj, is_fle, is_flt, is_feq, is_fclass, is_fmin, is_fmax};

    wire is_fcvt_w_s  = (fpu_op == `FCVT_W_S );
    wire is_fcvt_wu_s = (fpu_op == `FCVT_WU_S);
    wire is_fcvt_s_w  = (fpu_op == `FCVT_S_W );
    wire is_fcvt_s_wu = (fpu_op == `FCVT_S_WU);
    wire is_fcvt = (fpu_op[6:4] == 3'b011);

    wire is_fdiv  = (fpu_op == `FDIV_S );
    wire is_fsqrt = (fpu_op == `FSQRT_S);


    wire               sign_a, sign_b, sign_c;
    wire signed [ 8:0] exp_a, exp_b, exp_c;
    wire        [23:0] sig_a, sig_b, sig_c;
    wire        zero_a, subnormal_a, normal_a, inf_a, nan_a, snan_a, qnan_a;
    wire        zero_b, subnormal_b, normal_b, inf_b, nan_b, snan_b, qnan_b;
    wire        zero_c, inf_c, nan_c, snan_c;

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

    // src3 仅 fma 使用，只取 fma_unit 需要的字段
    wire dec_c_sub_unused, dec_c_norm_unused, dec_c_qnan_unused;
    fpu_decoder u_dec_c (
        .a            (src3             ),
        .sign         (sign_c           ),
        .exp          (exp_c            ),
        .sig          (sig_c            ),
        .is_zero      (zero_c           ),
        .is_subnormal (dec_c_sub_unused ),
        .is_normal    (dec_c_norm_unused),
        .is_inf       (inf_c            ),
        .is_nan       (nan_c            ),
        .is_snan      (snan_c           ),
        .is_qnan      (dec_c_qnan_unused)
    );

    // 浮点乘-加融合单元
    wire        fma_wb_valid;
    wire [ID_WIDTH-1:0] fma_wb_id;
    wire [31:0] fma_result;
    wire [ 4:0] fma_fflags;

    fma_unit #(
        .ID_WIDTH (ID_WIDTH)
    ) u_fma_unit (
        .clk         (clk            ),
        .rst         (rst            ),
        .issue_valid (valid & is_fmac),
        .issue_id    (fpu_id         ),
        .op          (fpu_op         ),
        .rm          (rm             ),
        .s1_sign     (sign_a         ),
        .s1_exp      (exp_a          ),
        .s1_sig      (sig_a          ),
        .s1_zero     (zero_a         ),
        .s1_inf      (inf_a          ),
        .s1_nan      (nan_a          ),
        .s1_snan     (snan_a         ),
        .s2_sign     (sign_b         ),
        .s2_exp      (exp_b          ),
        .s2_sig      (sig_b          ),
        .s2_zero     (zero_b         ),
        .s2_inf      (inf_b          ),
        .s2_nan      (nan_b          ),
        .s2_snan     (snan_b         ),
        .s3_sign     (sign_c         ),
        .s3_exp      (exp_c          ),
        .s3_sig      (sig_c          ),
        .s3_zero     (zero_c         ),
        .s3_inf      (inf_c          ),
        .s3_nan      (nan_c          ),
        .s3_snan     (snan_c         ),
        .flush       (flush          ),
        .flush_id    (flush_id       ),
        .wb_valid    (fma_wb_valid   ),
        .wb_id       (fma_wb_id      ),
        .wb_result   (fma_result     ),
        .wb_fflags   (fma_fflags     )
    );

    // 快速运算单元
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
        is_fcmp ? (is_feq ? {(snan_a | snan_b), 4'b0000} :
                            {(nan_a | nan_b), 4'b0000}) :
                  fquick_fflags;

    // 转换单元
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

    // 除法单元（单拍组合除法 + 下一拍锁存写回）
    wire        fdiv_wb_valid;
    wire [ID_WIDTH-1:0] fdiv_wb_id;
    wire [31:0] fdiv_result;
    wire [ 4:0] fdiv_fflags;

    fdiv #(
        .ID_WIDTH (ID_WIDTH)
    ) u_fdiv (
        .clk         (clk            ),
        .rst         (rst            ),
        .issue_valid (valid & is_fdiv),
        .issue_id    (fpu_id         ),
        .op          (fpu_op         ),
        .rm          (rm             ),
        .s1_sign     (sign_a         ),
        .s1_exp      (exp_a          ),
        .s1_sig      (sig_a          ),
        .s1_zero     (zero_a         ),
        .s1_inf      (inf_a          ),
        .s1_nan      (nan_a          ),
        .s1_snan     (snan_a         ),
        .s2_sign     (sign_b         ),
        .s2_exp      (exp_b          ),
        .s2_sig      (sig_b          ),
        .s2_zero     (zero_b         ),
        .s2_inf      (inf_b          ),
        .s2_nan      (nan_b          ),
        .s2_snan     (snan_b         ),
        .flush       (flush          ),
        .flush_id    (flush_id       ),
        .wb_valid    (fdiv_wb_valid  ),
        .wb_id       (fdiv_wb_id     ),
        .wb_result   (fdiv_result    ),
        .wb_fflags   (fdiv_fflags    )
    );

    // 平方根单元
    wire        fsqrt_wb_valid;
    wire [ID_WIDTH-1:0] fsqrt_wb_id;
    wire [31:0] fsqrt_result;
    wire [ 4:0] fsqrt_fflags;

    fsqrt #(
        .ID_WIDTH (ID_WIDTH)
    ) u_fsqrt (
        .clk         (clk            ),
        .rst         (rst            ),
        .issue_valid (valid & is_fsqrt),
        .issue_id    (fpu_id         ),
        .rm          (rm             ),
        .s1_sign     (sign_a         ),
        .s1_exp      (exp_a          ),
        .s1_sig      (sig_a          ),
        .s1_zero     (zero_a         ),
        .s1_inf      (inf_a          ),
        .s1_nan      (nan_a          ),
        .s1_snan     (snan_a         ),
        .flush       (flush          ),
        .flush_id    (flush_id       ),
        .wb_valid    (fsqrt_wb_valid ),
        .wb_id       (fsqrt_wb_id    ),
        .wb_result   (fsqrt_result   ),
        .wb_fflags   (fsqrt_fflags   )
    );

    // 写回仲裁,年龄优先
    wire [4:0] arb_valid = {fsqrt_wb_valid, fdiv_wb_valid, fcvt_wb_valid, fquick_wb_valid, fma_wb_valid};

    wire fquick_wb_valid = valid & is_fquick & ~flush;
    wire fcvt_wb_valid   = valid & is_fcvt   & ~flush;

    wire [31:0]      arb_data  [0:4];
    wire [4:0]       arb_fflags[0:4];
    wire [ID_WIDTH-1:0] arb_id [0:4];

    assign arb_data[0]   = fma_result;
    assign arb_data[1]   = fquick_result;
    assign arb_data[2]   = fcvt_result;
    assign arb_data[3]   = fdiv_result;
    assign arb_data[4]   = fsqrt_result;

    assign arb_fflags[0] = fma_fflags;
    assign arb_fflags[1] = fquick_fflags_final;
    assign arb_fflags[2] = fcvt_fflags;
    assign arb_fflags[3] = fdiv_fflags;
    assign arb_fflags[4] = fsqrt_fflags;

    assign arb_id[0] = fma_wb_id;
    assign arb_id[1] = fpu_id;
    assign arb_id[2] = fpu_id;
    assign arb_id[3] = fdiv_wb_id;
    assign arb_id[4] = fsqrt_wb_id;

    wire [4:0] arb_grant_unused;
    fpu_arbiter #(
        .NUM_PORTS  (5),
        .ID_WIDTH   (ID_WIDTH),
        .DATA_WIDTH (32)
    ) u_fpu_arbiter (
        .req_valid_i (arb_valid       ),
        .req_id_i    (arb_id          ),
        .req_data_i  (arb_data        ),
        .req_fflags_i(arb_fflags      ),
        .grant_o     (arb_grant_unused),
        .wb_valid_o  (fpu_valid       ),
        .wb_id_o     (fpu_id_o        ),
        .wb_data_o   (fpu_result      ),
        .wb_fflags_o (fpu_fflags      ),
        .flush       (flush           ),
        .flush_id    (flush_id        )
    );

    assign ready = 1'b1;

endmodule
