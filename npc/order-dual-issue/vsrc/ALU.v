`include "define.vh"

module ALU (
    // input              clk,
    // input              reset,
    input              start,
    output reg         valid,

    input      [ 3:0]  alu_op,
    input      [31:0]  a,
    input      [31:0]  b,
    output reg [31:0]  result,
    output reg         zero,
    output reg         less
);

    always @(*) begin
        case(alu_op)
            `ALU_SLT:  less = ($signed(a) < $signed(b)) ? 1'b1 : 1'b0;
            `ALU_SLTU: less = (a < b) ? 1'b1 : 1'b0;
            default:   less = ($signed(a) < $signed(b)) ? 1'b1 : 1'b0;
        endcase
        case (alu_op)
            `ALU_ADD:  result = a + b;  
            `ALU_SUB:  result = a - b;  
            `ALU_AND:  result = a & b;  
            `ALU_OR:   result = a | b;  
            `ALU_XOR:  result = a ^ b;  
            `ALU_SLTU: result = {31'b0, less};
            `ALU_SLT:  result = {31'b0, less};
            `ALU_SRA:  result = $signed(a) >>> b[4:0];
            `ALU_SLL:  result = a << b[4:0];
            `ALU_SRL:  result = a >> b[4:0];
            default: begin
                result = 32'b0;
                $display("ALU : Unknown alu_op = %b", alu_op);
            end
        endcase
    end

    assign zero = (result == 32'b0);
    assign valid = start; //rv32e架构的计算中ALU操作均在一个周期内完成
endmodule

//非恢复除法算法
module divider (
    input              clk        ,
    input              reset      ,
    input              start      , //开始计算信号
    input  wire [31:0] dividend   , //被除数
    input  wire [31:0] divisor    , //除数
    input  wire        is_signed  , //是否为有符号运算
    output reg  [31:0] quotient   , //商
    output reg  [31:0] remainder  , //余数
    output reg         valid        //计算结果是否有效（除数为0或溢出时为无效）
);

    reg [31:0] abs_divisor;       //除数绝对值
    reg [63:0] temp_dividend;     //64位临时被除数
    reg [31:0] temp_quotient;     //临时商
    reg        quotient_sign;     //商的符号
    reg        remainder_sign;    //余数的符号
    reg [5:0]  cycle_count;       //计数器
    reg        computing;         //正在计算标志
    reg [31:0] pos_mask;          //位掩码

    reg [63:0] temp_dividend_shifted;
    reg [31:0] next_remainder;
    reg [31:0] next_quotient;

    always @(posedge clk) begin
        if (reset) begin
            quotient       <= 32'b0;
            remainder      <= 32'b0;
            temp_quotient  <= 32'b0;
            temp_dividend  <= 64'b0;
            pos_mask       <= 32'h80000000;
            quotient_sign  <= 1'b0;
            remainder_sign <= 1'b0;
            valid          <= 1'b0;
            cycle_count    <= 6'b0;
            computing      <= 1'b0;
        end else if ((!computing && start) || valid) begin
            quotient       <= 32'b0;
            remainder      <= 32'b0;
            temp_quotient  <= 32'b0;
            pos_mask       <= 32'h80000000;
            cycle_count    <= 6'b0;
            valid          <= 1'b0;

            // 除零检测
            if (divisor == 32'b0) begin
                $display("[Divider] : Division by zero!");
                quotient  <= 32'hFFFFFFFF;
                remainder <= dividend;
                valid     <= 1'b0;
            end else if (is_signed && dividend == 32'h80000000 && divisor == 32'hFFFFFFFF) begin
                // 溢出 MIN_INT / -1
                $display("[Divider] : Overflow in signed division!");
                quotient  <= 32'h80000000;
                remainder <= 32'b0;
                valid     <= 1'b0;
            end else begin
                // 初始化绝对值和符号
                abs_divisor    <= (is_signed && divisor[31]) ? (~divisor + 1) : divisor;
                quotient_sign  <= is_signed && (dividend[31] ^ divisor[31]);
                remainder_sign <= is_signed && dividend[31];
                temp_dividend  <= {32'b0, (is_signed && dividend[31]) ? (~dividend + 1) : dividend};
                computing      <= 1'b1;
            end
        end else begin
            // 计算移位值
            temp_dividend_shifted = {temp_dividend[62:0], 1'b0};
            next_quotient         = temp_quotient; // 默认保持当前商

            // 比较和减法
            if (temp_dividend_shifted[63:32] >= abs_divisor) begin
                next_remainder = temp_dividend_shifted[63:32] - abs_divisor;
                temp_dividend <= {next_remainder, temp_dividend_shifted[31:0]};
                next_quotient  = temp_quotient | pos_mask;
                // $display("中间临时商: %h", next_quotient);
            end else begin
                next_remainder = temp_dividend_shifted[63:32];
                temp_dividend <= temp_dividend_shifted;
            end
            // $display("中间余数：  %h", next_remainder);

            temp_quotient <= next_quotient;
            pos_mask      <= pos_mask >> 1;
            cycle_count   <= cycle_count + 1;

            if (cycle_count == 6'd31) begin
                // $display("最终临时商: %h", next_quotient);
                quotient  <= quotient_sign ? (~next_quotient + 1) : next_quotient;
                remainder <= remainder_sign ? (~next_remainder + 1) : next_remainder;
                valid     <= 1'b1;
                computing <= 1'b0;
            end
            if(temp_dividend[63]) begin
                
            end
        end
    end
endmodule

//Booth-Wallace乘法器
module booth_wallace_multiplier (
    input wire               clk,
    input wire               rst_n,
    input wire signed [31:0] multiplicand,//X
    input wire signed [31:0] multiplier,  //Y
    input wire               is_signed,   // 1表示有符号乘法，0表示无符号乘法
    output reg signed [63:0] product,
    output reg               valid
);
// 扩展被乘数和乘数
wire signed [31:0] multiplicand_signed = multiplicand[31:0];
wire signed [31:0] multiplier_signed   = multiplier[31:0];

wire signed [67:0] multiplicand_ext = is_signed ? {{36{multiplicand_signed[31]}}, multiplicand_signed}
                                                : {36'd0, multiplicand[31:0]};
wire signed [34:0] multiplier_ext = is_signed ? {{2{multiplier_signed[31]}}, multiplier_signed, 1'b0}
                                              : {2'b0, multiplier[31:0], 1'b0};

//wire signed [67:0] multiplicand_ext= is_signed? {{36{multiplicand[31]}}, multiplicand} : {36'd0, multiplicand};//{{36{multiplicand[31]}}, multiplicand}
//wire signed [34:0] multiplier_ext = is_signed ? {{2{multiplier[31]}}, multiplier,1'b0} :  {2'b0, multiplier,1'b0};  //{{2{multiplier[31]}}, multiplier} 

// Booth两位乘法部分积生成模块
// initial begin
//     $display("multiplicand = %h, multiplier = %h, is_signed = %b", 
//              multiplicand, multiplier, is_signed);
// end
wire signed [67:0] partial_products [16:0];
genvar i;
generate
    for (i = 0; i < 17; i = i + 1) begin : gen_partial_products
        wire        [ 2:0] y_group   = {multiplier_ext[i*2 + 2], multiplier_ext[i*2 + 1], multiplier_ext[i*2]};
        wire signed [67:0] x_shifted = multiplicand_ext << (i*2);
        
        wire sel_negative, sel_double_negative, sel_positive, sel_double_positive;
        assign {sel_negative, sel_double_negative, sel_positive, sel_double_positive} = 
            {y_group[2] & (y_group[1] ^ y_group[0]), y_group[2] & ~y_group[1] & ~y_group[0], 
             ~y_group[2] & (y_group[1] ^ y_group[0]), ~y_group[2] & y_group[1] & y_group[0]};
        assign partial_products[i] = (sel_negative ? -x_shifted : (sel_double_negative ? (-x_shifted) << 1 : 
                                     (sel_positive ?  x_shifted : (sel_double_positive ? ( x_shifted << 1) : 68'd0))));
    end
endgenerate

wire [16:0] switch_outputs [67:0];
genvar j, k;
generate
    for (j = 0; j < 68; j = j + 1) begin : gen_switch
        for (k = 0; k < 17; k = k + 1) begin
            assign switch_outputs[j][k] = partial_products[k][j];
        end
    end
endgenerate

wire [13:0] cout_group [67:0];
wire        cout       [67:0];
wire [67:0] cout2;
wire [67:0] s;
genvar l;
generate
    for (l = 0; l < 68; l = l + 1) begin : gen_wallace
        walloc_17bits uut (
           .src_in    (switch_outputs[l]                ),
           .cin       (l == 0 ? 14'd0 : cout_group[l-1] ),
           .cout_group(cout_group[l]                    ),
           .cout      (cout[l]                          ),
           .s         (s[l]                             )
        );
        assign cout2[l] = cout[l];
    end
endgenerate

always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        product <= 64'd0;
        valid   <= 1'b0;
    end else begin
        if (is_signed) begin
            product <= $signed({{1'b0, s} + {cout2, 1'b0}}[63:0]); // 有符号截断
        end else begin
            product <= {{1'b0, s} + {cout2, 1'b0}}[63:0]; // 无符号截断
        end
        valid <= 1'b1;
    end
end
endmodule


// Wallace树加法器模块
module walloc_17bits(
    input  [16:0] src_in,
    input  [13:0] cin,
    output [13:0] cout_group,
    output        cout, 
    output        s
);
    wire [13:0] c;
    wire [ 4:0] first_s;
    csa csa0 (.in (src_in[16:14]), .cout (c[4]), .s (first_s[4]) );
    csa csa1 (.in (src_in[13:11]), .cout (c[3]), .s (first_s[3]) );
    csa csa2 (.in (src_in[10:08]), .cout (c[2]), .s (first_s[2]) );
    csa csa3 (.in (src_in[07:05]), .cout (c[1]), .s (first_s[1]) );
    csa csa4 (.in (src_in[04:02]), .cout (c[0]), .s (first_s[0]) );

    wire [3:0] secnod_s;
    csa csa5 (.in ({first_s[4:2]}          ), .cout (c[8]), .s (secnod_s[3]));
    csa csa6 (.in ({first_s[1:0],src_in[1]}), .cout (c[7]), .s (secnod_s[2]));
    csa csa7 (.in ({src_in[0],cin[4:3]}    ), .cout (c[6]), .s (secnod_s[1]));
    csa csa8 (.in ({cin[2:0]}              ), .cout (c[5]), .s (secnod_s[0]));

    wire [1:0] thrid_s;
    csa csa9 (.in (secnod_s[3:1]         ), .cout (c[10]), .s (thrid_s[1]));
    csa csaA (.in ({secnod_s[0],cin[6:5]}), .cout (c[09]), .s (thrid_s[0]));

    wire [1:0] fourth_s;
    csa csaB (.in ({thrid_s[1:0],cin[10]}), .cout (c[12]), .s (fourth_s[1]));
    csa csaC (.in ({cin[9:7]}            ), .cout (c[11]), .s (fourth_s[0]));

    wire fifth_s;
    csa csaD (.in ({fourth_s[1:0],cin[11]}), .cout (c[13]), .s (fifth_s));
    csa csaE (.in ({fifth_s,cin[13:12]}   ), .cout (cout ), .s (s      ));
    assign cout_group = c;
endmodule

// 全加器模块
module csa(
    input [2:0] in,
    output      cout, 
    output      s
);
    wire a,b,cin;
    assign a = in[2];
    assign b = in[1];
    assign cin = in[0];
    assign s = a ^ b ^ cin;
    assign cout = a & b | b & cin | a & cin;
endmodule



