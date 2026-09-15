`include "fpu_config.vh"

module fsqrt #(
    parameter ID_WIDTH = 5
)(
    input  wire                clk        ,
    input  wire                rst        ,

    input  wire                issue_valid,
    input  wire [ID_WIDTH-1:0] issue_id   ,
    input  wire [         2:0] rm         ,

    input  wire               s1_sign     ,
    input  wire signed [ 8:0] s1_exp      ,
    input  wire        [23:0] s1_sig      ,
    input  wire               s1_zero     ,
    input  wire               s1_inf      ,
    input  wire               s1_nan      ,
    input  wire               s1_snan     ,

    input  wire                flush      ,
    input  wire [ID_WIDTH-1:0] flush_id   ,

    output wire                wb_valid   ,
    output wire [ID_WIDTH-1:0] wb_id      ,
    output wire [        31:0] wb_result  ,
    output wire [         4:0] wb_fflags
);

    localparam [25:0] C_2P24 = 26'd16777216;   // 2^24
    localparam [25:0] C_Y0   = 26'd16777216;   // 2^24
    localparam [26:0] C_W0   = 27'd33554432;   // 2^25

    wire fstart = issue_valid & ~busy & ~flush;

    reg        busy;
    reg [ 4:0] cnt;
    reg signed [26:0] P_ff;      // 部分余数, |P| <= ~1.1*2^25
    reg [25:0] Y_ff;             // 根在线累积 (Q24), [2^24,2^25], 瞬态可达 2^25
    reg [26:0] W_ff;             // 双根, [2^25,2^26], 瞬态可达 2^26

    reg [24:0] m25_ff;           // {s1_sig,0} 或 {0,s1_sig} 的 25bit 尾数
    reg signed [8:0] res_exp_ff; // 结果指数 = s1_exp >> 1 (算术)
    reg        s1_sign_ff, s1_zero_ff, s1_inf_ff, s1_nan_ff, s1_snan_ff;
    reg [ 2:0] rm_ff;
    reg [ID_WIDTH-1:0] id_ff;

    // 启动沿组合: m25 / P0 / res_exp
    wire [24:0] m25_in = s1_exp[0] ? {s1_sig, 1'b0} : {1'b0, s1_sig};
    wire [25:0] m24_in = {m25_in, 1'b0};
    wire [25:0] P0_in  = m24_in - C_2P24;

    // SRT 递推组合
    wire signed [28:0] t_s = {{2{P_ff[26]}}, P_ff};
    wire signed [28:0] t4  = t_s <<< 2;                  // 4P
    wire        [ 4:0] sh  = 5'd22 - (cnt << 1);         // 22-2cnt, 0..22
    wire signed [ 6:0] t_h = t4[28:22];                  // 4P >> 22
    // w_h = W >> 21; 根估计瞬态可达 2.0 时 W=2^26, w_h=32 饱和到 31
    wire        [ 4:0] w_h = W_ff[26] ? 5'd31 : W_ff[25:21];

    // 选位表 (q ∈ {-2..2}), 仅 cnt>0 使用
    reg signed [3:0] qn;
    always @(*) begin
        qn = 4'sd0;
        case (w_h)
            `include "sqrt_srt_table.vh"
        endcase
    end

    // 首数字 q0 ∈ {0..4}: argmin |t - q*(2^25 + q*2^22)|
    wire signed [28:0] c0 = t4;
    wire signed [28:0] c1 = t4 - 29'sd37748736;   // 2^25 + 2^22
    wire signed [28:0] c2 = t4 - 29'sd83886080;   // 2*2^25 + 4*2^22
    wire signed [28:0] c3 = t4 - 29'sd138412032;  // 3*2^25 + 9*2^22
    wire signed [28:0] c4 = t4 - 29'sd201326592;  // 4*2^25 + 16*2^22

    wire [28:0] m0 = c0[28] ? (~c0[28:0] + 29'd1) : c0[28:0];
    wire [28:0] m1 = c1[28] ? (~c1[28:0] + 29'd1) : c1[28:0];
    wire [28:0] m2 = c2[28] ? (~c2[28:0] + 29'd1) : c2[28:0];
    wire [28:0] m3 = c3[28] ? (~c3[28:0] + 29'd1) : c3[28:0];
    wire [28:0] m4 = c4[28] ? (~c4[28:0] + 29'd1) : c4[28:0];

    wire cpt1   = (m1 < m0);
    wire cpt2   = (m2 < (cpt1 ? m1 : m0));
    wire cpt3   = (m3 < (cpt2 ? m2 : (cpt1 ? m1 : m0)));
    wire cpt4   = (m4 < (cpt3 ? m3 : (cpt2 ? m2 : (cpt1 ? m1 : m0))));
    wire [2:0] q0_idx = cpt4 ? 3'd4 : cpt3 ? 3'd3 : cpt2 ? 3'd2 : cpt1 ? 3'd1 : 3'd0;

    wire signed [28:0] p0n = q0_idx == 3'd4 ? c4 :
                             q0_idx == 3'd3 ? c3 :
                             q0_idx == 3'd2 ? c2 :
                             q0_idx == 3'd1 ? c1 : c0;

    wire signed [3:0] qs = (cnt == 5'd0) ? {1'b0, q0_idx} : qn;

    // qinc = q << sh
    wire signed [25:0] qs26 = {{22{qs[3]}}, qs};
    wire signed [25:0] qinc = qs26 <<< sh;

    // q*W (W <= 2^26, 结果 <= 4*2^26 => 30bit 有符号)
    wire signed [29:0] Wp30 = {3'b000, W_ff};
    wire signed [29:0] qW = (qs ==  4'sd1) ?  Wp30             :
                            (qs ==  4'sd2) ? (Wp30 <<< 1)      :
                            (qs ==  4'sd3) ? (Wp30 + (Wp30 <<< 1)) :
                            (qs ==  4'sd4) ? (Wp30 <<< 2)      :
                            (qs == -4'sd1) ? -Wp30             :
                            (qs == -4'sd2) ? -(Wp30 <<< 1)     :
                                             {30{1'b0}};

    // q^2 * 2^sh
    reg [4:0] qa_q;
    always @(*) begin
           if (qs ==  4'sd1 || qs == -4'sd1) qa_q = 5'd1;
        else if (qs ==  4'sd2 || qs == -4'sd2) qa_q = 5'd4;
        else if (qs ==  4'sd3) qa_q = 5'd9;
        else if (qs ==  4'sd4) qa_q = 5'd16;
        else qa_q = 5'd0;
    end
    wire signed [29:0] q2t = $signed({{25{1'b0}}, qa_q}) <<< sh;

    wire signed [29:0] pn30 = {t4[28], t4} - qW - q2t;   // 30bit
    wire signed [26:0] p_next = pn30[26:0];

    // Y / W 在线累积 (Y_ff 26bit, W_ff 27bit, 含余量容纳 q0=4 瞬态)
    wire signed [27:0] Yn = $signed({2'b00, Y_ff}) + $signed({{2{qinc[25]}}, qinc});
    wire signed [28:0] Wn = $signed({2'b00, W_ff}) + ($signed({{3{qinc[25]}}, qinc}) <<< 1);
    wire [25:0] y_next = Yn[25:0];
    wire [26:0] w_next = Wn[26:0];

    // ---------------------------------------------------------------
    // 收尾: floor 修正 + 五模式舍入 (√V 无平局, RMM≡RNE)
    //   V = m25<<23 = m*2^46, Y0 ≈ Y>>1, |error|<=0.3 -> down±1/up±1 修正
    // ---------------------------------------------------------------
    wire [23:0] y0i = Y_ff[24:1];
    wire [47:0] V   = {m25_ff, 23'd0};

    wire [47:0] sq0  = y0i * y0i;
    wire        down1 = (sq0 > V);
    wire [23:0] yD   = down1 ? (y0i - 24'd1) : y0i;
    wire [47:0] sqD  = yD * yD;
    wire        down2 = (sqD > V);
    wire [23:0] yD2  = down2 ? (yD - 24'd1) : yD;
    wire [24:0] yD2p1 = yD2 + 25'd1;
    wire [49:0] sqUp  = yD2p1 * yD2p1;
    wire        up1   = (sqUp <= {2'b0, V});
    wire [23:0] yF    = up1 ? yD2p1[23:0] : yD2;

    wire [47:0] rf    = V - (yF * yF);
    wire        nx    = |rf;
    wire        upRNE = (rf > {24'd0, yF});        // RNE/RMM (平局不可能)
    wire        upRUP = |rf;
    wire round_up = (rm_ff == `RNE || rm_ff == `RMM) ? upRNE :
                    (rm_ff == `RUP)                  ? upRUP :
                                                       1'b0;
    wire [24:0] yRw  = {1'b0, yF} + {24'd0, round_up};
    wire        carry = yRw[24];
    wire [23:0] yR    = yRw[23:0];

    wire signed [9:0]  res_exp_c  = $signed({1'b0, res_exp_ff}) + (carry ? 10'sd1 : 10'sd0);
    wire signed [10:0] field      = $signed({1'b0, res_exp_c}) + 11'sd127;
    wire [22:0] frac_out = carry ? 23'd0 : yR[22:0];
    wire [31:0] norm_result = {1'b0, field[7:0], frac_out};
    wire [ 4:0] norm_fflags = {{4{1'b0}}, nx};

    // 特殊值
    reg [31:0] result_combo;
    reg [ 4:0] fflags_combo;
    always @(*) begin
        result_combo = norm_result;
        fflags_combo = norm_fflags;
        if (s1_nan_ff) begin
            result_combo = 32'h7fc00000;
            fflags_combo = {s1_snan_ff, 4'b0000};
        end else if (s1_sign_ff & ~s1_zero_ff) begin
            result_combo = 32'h7fc00000;
            fflags_combo = 5'b10000;            // 负数 (含 -inf): NV
        end else if (s1_zero_ff) begin
            result_combo = {s1_sign_ff, 31'd0};
            fflags_combo = 5'd0;
        end else if (s1_inf_ff) begin
            result_combo = 32'h7f800000;
            fflags_combo = 5'd0;
        end
    end

    reg                wb_valid_r;
    reg [ID_WIDTH-1:0] wb_id_r;
    reg         [31:0] wb_result_r;
    reg         [ 4:0] wb_fflags_r;

    always @(posedge clk) begin
        if (rst) begin
            busy        <= 1'b0;
            cnt         <= 5'd0;
            wb_valid_r  <= 1'b0;
            wb_id_r     <= {ID_WIDTH{1'b0}};
            wb_result_r <= 32'd0;
            wb_fflags_r <= 5'd0;
        end else begin
            wb_valid_r <= 1'b0;
            if (flush) begin
                busy <= 1'b0;
                cnt  <= 5'd0;
            end else if (fstart) begin
                busy        <= 1'b1;
                cnt         <= 5'd0;
                P_ff        <= {1'b0, P0_in};
                Y_ff        <= C_Y0;
                W_ff        <= C_W0;
                m25_ff      <= m25_in;
                res_exp_ff  <= s1_exp >>> 1;
                s1_sign_ff  <= s1_sign;
                s1_zero_ff  <= s1_zero;
                s1_inf_ff   <= s1_inf;
                s1_nan_ff   <= s1_nan;
                s1_snan_ff  <= s1_snan;
                rm_ff       <= rm;
                id_ff       <= issue_id;
            end else if (busy) begin
                if (wb_valid_r) begin
                    busy <= 1'b0;
                end else if (cnt == 5'd12) begin
                    wb_valid_r  <= 1'b1;
                    wb_id_r     <= id_ff;
                    wb_result_r <= result_combo;
                    wb_fflags_r <= fflags_combo;
                end else begin
                    cnt   <= cnt + 5'd1;
                    P_ff  <= p_next;
                    Y_ff  <= y_next;
                    W_ff  <= w_next;
                end
            end
        end
    end

    assign wb_valid   = wb_valid_r;
    assign wb_id      = wb_id_r;
    assign wb_result  = wb_result_r;
    assign wb_fflags  = wb_fflags_r;

endmodule