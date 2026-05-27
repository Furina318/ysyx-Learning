`include "defines.vh"

module mdu (
    input  wire         clk        ,
    input  wire         rst        ,
    input  wire         lsu_ready  ,
    input  wire         mdu_en     ,
    input  wire [7:0]   mdu_op     ,
    input  wire [31:0]  mdu_src1   ,
    input  wire [31:0]  mdu_src2   ,
    output wire         mdu_ready  ,
    output reg  [31:0]  mdu_result
);

wire         op_mul;
wire         op_mulh;
wire         op_mulhsu;
wire         op_mulhu;
wire         op_div;
wire         op_divu;
wire         op_rem;
wire         op_remu;
wire         mul_en;
wire         div_en;

assign op_mul    = mdu_op[0];
assign op_mulh   = mdu_op[1];
assign op_mulhsu = mdu_op[2];
assign op_mulhu  = mdu_op[3];
assign op_div    = mdu_op[4];
assign op_divu   = mdu_op[5];
assign op_rem    = mdu_op[6];
assign op_remu   = mdu_op[7];
assign mul_en    = op_mul | op_mulh | op_mulhsu | op_mulhu;
assign div_en    = op_div | op_divu | op_rem    | op_remu;

wire [31:0] diver_a;
wire [31:0] diver_b;
wire        src1_sign;
wire        src2_sign;
wire        div_zero_flag;
reg         muling;
reg         diving;
reg         mdu_done;
reg  [ 5:0] cnt_n;
reg  [63:0] result;

reg  [5:0]  total_div_cycles;
reg  [5:0]  leading_zeros;
reg         div_early_stop;
wire        div_early_stop_cond;

reg [67:0] s_pipe_reg;
reg [67:0] cout2_pipe_reg;
reg        mul_pipe_valid;

assign src1_sign     = mdu_src1[31];
assign src2_sign     = mdu_src2[31];
assign diver_a       = ((op_div | op_rem) & src1_sign) ? (~mdu_src1 + 1'b1) : mdu_src1;
assign diver_b       = ((op_div | op_rem) & src2_sign) ? (~mdu_src2 + 1'b1) : mdu_src2;
assign div_zero_flag = (diver_b == 32'd0);
assign div_early_stop_cond = (result == 64'b0);

wire [31: 0] mul_result;
wire [31: 0] mulh_result;
wire [31: 0] mulhsu_result;
wire [31: 0] mulhu_result;
wire [31: 0] div_result;
wire [31: 0] divu_result;
wire [31: 0] rem_result;
wire [31: 0] remu_result;
wire [31: 0] switch_result;
wire [63: 0] signed_result = ~booth_wallace_product + 1'b1; 

wire signed [63:0] booth_wallace_product;
wire [68:0] sum_temp_pipe;
assign sum_temp_pipe = {{1'b0, s_pipe_reg} + {cout2_pipe_reg, 1'b0}};
assign booth_wallace_product = $signed(sum_temp_pipe[63:0]);
assign mul_result    = booth_wallace_product[31:0];
assign mulh_result   = booth_wallace_product[63:32];
assign mulhsu_result = booth_wallace_product[63:32];
assign mulhu_result  = booth_wallace_product[63:32];
assign div_result    = div_zero_flag ? 32'hffffffff : (src1_sign ^ src2_sign) ? ~result[31:0] + 1 : result[31:0];
assign divu_result   = div_zero_flag ? 32'hffffffff : result[31:0];
assign rem_result    = div_zero_flag ? mdu_src1 : src1_sign ? ~result[63:32] + 1 : result[63:32];
assign remu_result   = div_zero_flag ? diver_a  : result[63:32];

assign mdu_ready     = mdu_done ? 1'b1 : ~mdu_en;
assign switch_result = ({32{op_mul   }} & mul_result   )
                     | ({32{op_mulh  }} & mulh_result  )
                     | ({32{op_mulhsu}} & mulhsu_result)
                     | ({32{op_mulhu }} & mulhu_result )
                     | ({32{op_div   }} & div_result   )
                     | ({32{op_divu  }} & divu_result  )
                     | ({32{op_rem   }} & rem_result   )
                     | ({32{op_remu  }} & remu_result  );

wire [32:0] sub_result = result[63:31] - {1'b0, diver_b};

wire               is_signed_mul_a = op_mulh | op_mul | op_mulhsu;
wire               is_signed_mul_b = op_mulh | op_mul;

// function [5:0] count_leading_zeros;
//     input [31:0] data;
//     integer i;
//     reg [5:0] result;
//     reg found;
//     begin
//         result = 6'd32;
//         found = 1'b0;
//         for (i = 31; i >= 0; i = i - 1) begin
//             if (!found && data[i] == 1'b1) begin
//                 result = 6'd31 - i[5:0];
//                 found = 1'b1;
//             end
//         end
//         count_leading_zeros = result;
//     end
// endfunction

// 从32级优先选择器优化为5级二分决策树
function [5:0] count_leading_zeros;
    input [31:0] data;
    reg [31:0] tmp;
    reg [5:0]  count;
    begin
        tmp   = data;
        count = 6'd0;
        if (tmp[31:16] == 16'b0) begin
            count = count + 16;
            tmp   = tmp << 16;
        end        
        if (tmp[31:24] == 8'b0) begin
            count = count + 8;
            tmp   = tmp << 8;
        end        
        if (tmp[31:28] == 4'b0) begin
            count = count + 4;
            tmp   = tmp << 4;
        end        
        if (tmp[31:30] == 2'b0) begin
            count = count + 2;
            tmp   = tmp << 2;
        end
        if (tmp[31] == 1'b0) begin
            count = count + 1;
        end
        count_leading_zeros = (data == 32'b0) ? 6'd32 : count;
    end
endfunction

wire signed [67:0] multiplicand_ext;
wire signed [34:0] multiplier_ext;
wire signed [67:0] partial_products [16:0];
wire [16:0] switch_outputs [67:0];
wire [13:0] cout_group [67:0];
wire  cout  [67:0];
wire [67:0] cout2  ;
wire [67:0] s ;
wire [68:0] sum_temp;

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

    walloc_17bits uut (
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

assign sum_temp = {{1'b0, s} + {cout2, 1'b0}};

always @(posedge clk) begin
    if (rst) begin
        s_pipe_reg     <= 68'b0;
        cout2_pipe_reg <= 68'b0;
        mul_pipe_valid <= 1'b0;
    end else if (muling) begin
        s_pipe_reg <= s;
        cout2_pipe_reg <= cout2;
        mul_pipe_valid <= 1'b1;
    end else begin
        mul_pipe_valid <= 1'b0;
    end
end

always @(posedge clk) begin
    if (rst) begin
        cnt_n    <= 6'd0;
        mdu_done <= 1'b0;
    end else begin
        mdu_done <= 1'b0;
        if (~mdu_done & mul_en & lsu_ready & cnt_n == 6'd0) begin
            muling <= 1'b1;
            cnt_n  <= cnt_n + 6'b1;
        end else if (mul_pipe_valid && cnt_n != 6'd0) begin
            result     <= booth_wallace_product;
            muling     <= 1'b0;
            mdu_done   <= 1'b1;
            mdu_result <= switch_result;
            cnt_n      <= 6'd0;
        end

        if (~mdu_done & div_en & lsu_ready & cnt_n == 6'd0) begin
            if (count_leading_zeros(diver_a) == 6'd32) begin
                total_div_cycles <= 6'd1;
                result <= {32'b0, 32'b0};
            end else if (diver_a < diver_b) begin
                total_div_cycles <= 6'd1;
                result <= {diver_a, 32'b0};
            end else if (diver_a == diver_b) begin
                total_div_cycles <= 6'd1;
                result <= {32'b0, 32'b1};
            end else if (diver_b == 32'b1) begin
                total_div_cycles <= 6'd1;
                result <= {32'b0, diver_a};
            end else if (diver_b == 32'b0) begin
                total_div_cycles <= 6'd1;
            end else begin
                leading_zeros    <= count_leading_zeros(diver_a);
                total_div_cycles <= 6'd33 - count_leading_zeros(diver_a);
                result           <= {32'b0, diver_a} << count_leading_zeros(diver_a);
            end
            cnt_n           <= cnt_n + 6'b1;
            diving          <= 1'b1;
            div_early_stop  <= 1'b0;
        end else if (diving & cnt_n <= 6'd33) begin
            div_early_stop <= div_early_stop_cond;
            if (result[62:31] >= diver_b) begin
                result <= {sub_result[31:0], result[30:0], 1'b1};
            end else begin
                result <= {result[62:0], 1'b0};
            end
            cnt_n <= cnt_n + 6'b1;

            if ((cnt_n == total_div_cycles) || div_early_stop) begin 
                diving <= 1'b0;
                result <= 'b0;
                mdu_done <= 1'b1;
                mdu_result <= switch_result;
                cnt_n <= 6'd0;
            end
        end
    end
end

endmodule

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
