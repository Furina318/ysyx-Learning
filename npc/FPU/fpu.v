`timescale 1ns/1ps

// 浮点运算单元模块
module fpu (
    input clk,                      // 时钟信号
    input reset,                    // 复位信号
    input flush,                    // 刷新信号，清空流水线
    // 控制接口
    input         fpu_op_valid,     // FPU操作请求
    input  [5:0]  fpu_op_type,      // 操作类型（如加、减、乘等）
    input  [2:0]  fpu_op_round,     // 舍入模式（如最近舍入、向零舍入等）
    // 数据接口
    input  [31:0] operand1_fp,      // 浮点操作数1 (frs1)
    input  [31:0] operand2_fp,      // 浮点操作数2 (frs2)
    /* verilator lint_off UNUSED */
    input  [31:0] operand3_fp,      // 浮点操作数3 (frs3，用于FMA，当前未使用)
    input  [31:0] operand4_int,     // 整数操作数 (rs1，用于FMV.W.X)
    /* verilator lint_on UNUSED */
    // 握手信号
    output reg    fpu_ready,        // FPU准备好接收新指令
    input         downstream_valid, // 下游模块准备好接收结果
    // 输出
    output reg [31:0] fpu_result,   // 浮点运算结果
    output reg [31:0] int_result,   // 整数运算结果（如FCLASS、比较操作）
    output reg [4:0]  exception_flags, // 异常标志（NaN、除零、溢出、下溢、不精确）
    output reg        fpu_result_valid // 结果有效信号
);

// 操作码定义
localparam FMV_W_X  = 6'b000001; // 整数到浮点寄存器传送
localparam FMV_X_W  = 6'b000010; // 浮点到整数寄存器传送
localparam FLW      = 6'b000011; // 加载浮点数
localparam FSW      = 6'b000100; // 存储浮点数
localparam FSGNJ_S  = 6'b000101; // 符号注入（复制符号）
localparam FSGNJN_S = 6'b000110; // 符号反转注入
localparam FSGNJX_S = 6'b000111; // 符号异或注入
localparam FCLASS_S = 6'b001000; // 浮点数分类
localparam FADD_S   = 6'b001001; // 浮点加法
localparam FSUB_S   = 6'b001010; // 浮点减法
localparam FMUL_S   = 6'b001011; // 浮点乘法
localparam FMIN_S   = 6'b001100; // 浮点最小值
localparam FMAX_S   = 6'b001101; // 浮点最大值
localparam FEQ_S    = 6'b001110; // 浮点相等比较
localparam FLT_S    = 6'b001111; // 浮点小于比较
localparam FLE_S    = 6'b010000; // 浮点小于等于比较

// 状态机状态定义
localparam IDLE     = 2'b00;     // 空闲状态
localparam EXECUTE  = 2'b01;     // 执行运算状态
localparam MUL_WAIT = 2'b11;     // 等待乘法器完成状态
localparam OUTPUT   = 2'b10;     // 输出结果状态

// 寄存器声明
reg [1:0] state, next_state;     // 当前状态和下一状态
reg [31:0] temp_result;          // 临时浮点结果寄存器
reg [31:0] temp_int_result;      // 临时整数结果寄存器
reg [4:0]  temp_exception;       // 临时异常标志寄存器
reg next_fpu_ready;              // 下一周期的FPU就绪信号

// 组合逻辑变量
reg [31:0] comb_result;          // 组合逻辑浮点结果
reg [31:0] comb_int_result;      // 组合逻辑整数结果
reg [4:0]  comb_exception;       // 组合逻辑异常标志
reg [8:0]  shift_amt;            // 尾数移位量
reg [8:0]  lzc;                  // 前导零计数
reg [26:0] mant_for_round;       // 用于舍入的尾数
reg [8:0]  true_exp1, true_exp2; // 操作数1和2的真实指数
reg [8:0]  max_exp;              // 最大指数
reg [23:0] norm_mant1, norm_mant2; // 归一化的尾数1和2
reg [8:0]  lead_zeros1, lead_zeros2; // 操作数1和2的前导零
reg [27:0] shifted_mant1, shifted_mant2; // 移位后的尾数1和2
reg [28:0] sum_mant;             // 尾数运算结果
reg [8:0]  result_exp;           // 结果指数
reg        result_sign;          // 结果符号
reg        guard, round, sticky; // 舍入位：保护位、舍入位、粘性位
reg [47:0] prod_mant;            // 乘法尾数结果
reg        sign2_eff;            // 有效符号2（考虑减法符号反转）
// 舍入相关变量
reg [26:0] l_rounded_mant;       // 舍入后的尾数
reg [8:0]  l_rounded_exp;        // 舍入后的指数
reg        l_guard;              // 舍入保护位
reg        l_round;              // 舍入位
reg        l_lsb;                // 最低有效位
reg        l_round_up;           // 是否向上舍入
reg [22:0] l_denorm_mant;        // 非规格化尾数
reg [8:0]  l_shift_amt;          // 非规格化移位量

// 乘法等待状态存储指数
reg [8:0] stored_true_exp1, stored_true_exp2; // 存储操作数1和2的真实指数

// Booth-Wallace乘法器信号
reg [31:0] multiplier_mant1, multiplier_mant2; // 乘法器输入尾数
/* verilator lint_off UNUSED */
wire [63:0] multiplier_product;  // 乘法器输出结果
wire multiplier_valid;            // 乘法器结果有效信号
/* verilator lint_on UNUSED */

// 实例化Booth-Wallace乘法器
booth_wallace_multiplier mul_inst (
    .clk(clk),                   // 时钟输入
    .rst_n(~reset),              // 反向复位信号
    .multiplicand(multiplier_mant1), // 乘数1
    .multiplier(multiplier_mant2),   // 乘数2
    .is_signed(1'b1),            // 有符号乘法
    .product(multiplier_product), // 乘法结果
    .valid(multiplier_valid)      // 结果有效信号
);

// 浮点数分解
wire        sign1  = operand1_fp[31];      // 操作数1符号位
wire [7:0]  exp1   = operand1_fp[30:23];   // 操作数1指数
wire [22:0] frac1  = operand1_fp[22:0];    // 操作数1尾数
wire        sign2  = operand2_fp[31];      // 操作数2符号位
wire [7:0]  exp2   = operand2_fp[30:23];   // 操作数2指数
wire [22:0] frac2  = operand2_fp[22:0];    // 操作数2尾数

// 特殊值检测
wire is_nan1  = (exp1 == 8'hFF) && (frac1 != 0);  // 操作数1为NaN
wire is_nan2  = (exp2 == 8'hFF) && (frac2 != 0);  // 操作数2为NaN
wire is_snan1 = (exp1 == 8'hFF) && (frac1 != 0) && (frac1[22] == 0); // 操作数1为信号NaN
wire is_snan2 = (exp2 == 8'hFF) && (frac2 != 0) && (frac2[22] == 0); // 操作数2为信号NaN
wire is_inf1  = (exp1 == 8'hFF) && (frac1 == 0);  // 操作数1为无穷大
wire is_inf2  = (exp2 == 8'hFF) && (frac2 == 0);  // 操作数2为无穷大
wire is_zero1 = (exp1 == 0) && (frac1 == 0);      // 操作数1为零
wire is_zero2 = (exp2 == 0) && (frac2 == 0);      // 操作数2为零
wire is_denorm1 = (exp1 == 0) && (frac1 != 0);    // 操作数1为非规格化数
wire is_denorm2 = (exp2 == 0) && (frac2 != 0);    // 操作数2为非规格化数

// 带隐藏位的尾数
wire [23:0] mant1 = (exp1 != 0 || is_denorm1) ? {1'b1, frac1} : {1'b0, frac1}; // 操作数1尾数（含隐藏位）
wire [23:0] mant2 = (exp2 != 0 || is_denorm2) ? {1'b1, frac2} : {1'b0, frac2}; // 操作数2尾数（含隐藏位）

// 组合逻辑处理
always @(*) begin
    // 默认赋值避免闩锁
    comb_result = 32'h7FC00000; // 默认输出NaN
    comb_int_result = 32'h0;    // 默认整数结果为0
    comb_exception = 5'b10000;  // 默认异常为NaN
    shift_amt = 0;              // 移位量初始化
    lzc = 0;                    // 前导零计数初始化
    mant_for_round = 0;         // 舍入尾数初始化
    true_exp1 = 0;              // 操作数1真实指数初始化
    true_exp2 = 0;              // 操作数2真实指数初始化
    max_exp = 0;                // 最大指数初始化
    norm_mant1 = 0;             // 归一化尾数1初始化
    norm_mant2 = 0;             // 归一化尾数2初始化
    lead_zeros1 = 0;            // 操作数1前导零初始化
    lead_zeros2 = 0;            // 操作数2前导零初始化
    shifted_mant1 = 0;          // 移位尾数1初始化
    shifted_mant2 = 0;          // 移位尾数2初始化
    sum_mant = 0;               // 尾数和初始化
    result_exp = 0;             // 结果指数初始化
    result_sign = 0;            // 结果符号初始化
    guard = 0;                  // 保护位初始化
    round = 0;                  // 舍入位初始化
    sticky = 0;                 // 粘性位初始化
    prod_mant = 0;              // 乘法尾数初始化
    sign2_eff = 0;              // 有效符号2初始化
    multiplier_mant1 = 0;       // 乘法器输入1初始化
    multiplier_mant2 = 0;       // 乘法器输入2初始化
    l_rounded_mant = 0;         // 舍入后尾数初始化
    l_rounded_exp = 0;          // 舍入后指数初始化
    l_guard = 0;                // 舍入保护位初始化
    l_round = 0;                // 舍入位初始化
    l_lsb = 0;                  // 最低有效位初始化
    l_round_up = 0;             // 舍入向上标志初始化
    l_denorm_mant = 0;          // 非规格化尾数初始化
    l_shift_amt = 0;            // 非规格化移位量初始化

    if (state == EXECUTE) begin
        case (fpu_op_type)
            FMV_W_X: begin
                comb_result = operand4_int; // 整数直接传输到浮点结果
                comb_exception = 5'b0;      // 无异常
            end
            FMV_X_W: begin
                comb_int_result = operand1_fp; // 浮点数传输到整数结果
                comb_exception = 5'b0;        // 无异常
            end
            FLW: begin
                comb_result = operand1_fp; // 加载浮点数
                comb_exception = 5'b0;     // 无异常
            end
            FSW: begin
                comb_result = operand1_fp; // 存储浮点数
                comb_exception = 5'b0;     // 无异常
            end
            FSGNJ_S: begin
                comb_result = {operand2_fp[31], operand1_fp[30:0]}; // 复制操作数2的符号
                comb_exception = 5'b0;                              // 无异常
            end
            FSGNJN_S: begin
                comb_result = {~operand2_fp[31], operand1_fp[30:0]}; // 反转操作数2的符号
                comb_exception = 5'b0;                               // 无异常
            end
            FSGNJX_S: begin
                comb_result = {sign1 ^ sign2, operand1_fp[30:0]}; // 符号异或
                comb_exception = 5'b0;                            // 无异常
            end
            FCLASS_S: begin
                // 浮点数分类
                if (is_nan1) begin
                    comb_int_result = is_snan1 ? 32'h100 : 32'h200; // 信号NaN或安静NaN
                end else if (is_inf1) begin
                    comb_int_result = sign1 ? 32'h1 : 32'h80; // 正负无穷
                end else if (is_zero1) begin
                    comb_int_result = sign1 ? 32'h8 : 32'h10; // 正负零
                end else if (is_denorm1) begin
                    comb_int_result = sign1 ? 32'h4 : 32'h20; // 正负非规格化数
                end else begin
                    comb_int_result = sign1 ? 32'h2 : 32'h40; // 正负正常数
                end
                comb_exception = 5'b0; // 无异常
            end
            FADD_S, FSUB_S: begin
                sign2_eff = (fpu_op_type == FSUB_S) ? ~operand2_fp[31] : operand2_fp[31]; // 减法反转符号2
                // 处理特殊值
                if (is_nan1 || is_nan2) begin    
                    if (is_nan1 && is_nan2) begin
                        comb_result = is_snan1 ? {operand1_fp[31:23], 1'b1, operand1_fp[21:0]} :
                                      is_snan2 ? {operand2_fp[31:23], 1'b1, operand2_fp[21:0]} :
                                      operand1_fp[22] ? operand1_fp : operand2_fp; // 优先返回安静NaN
                    end else begin
                        comb_result = is_nan1 ? (is_snan1 ? {operand1_fp[31:23], 1'b1, operand1_fp[21:0]} : operand1_fp) :
                                      (is_snan2 ? {operand2_fp[31:23], 1'b1, operand2_fp[21:0]} : operand2_fp); // 返回NaN
                    end
                    comb_exception = 5'b10000; // NaN异常
                end else if (is_inf1 || is_inf2) begin
                    if (is_inf1 && is_inf2 && sign1 != sign2_eff) begin
                        comb_result = 32'h7FC00000; // 无穷大相加符号相反，返回NaN
                        comb_exception = 5'b10000;  // NaN异常
                    end else begin
                        comb_result = is_inf1 ? {sign1, 8'hFF, 23'b0} : {sign2_eff, 8'hFF, 23'b0}; // 返回无穷大
                        comb_exception = 5'b0;      // 无异常
                    end
                end else if (is_zero1 && is_zero2) begin
                    comb_result = (sign1 & sign2_eff) ? {1'b1, 8'h00, 23'b0} : {1'b0, 8'h00, 23'b0}; // 零加零，符号由操作决定
                    comb_exception = 5'b0; // 无异常
                end else begin
                    // 非规格化数归一化
                    if (is_denorm1) begin
                        lead_zeros1 = 0;
                        while (frac1[22-lead_zeros1] == 0 && lead_zeros1 < 23) lead_zeros1 = lead_zeros1 + 1; // 计算前导零
                        norm_mant1 = {1'b0, frac1} << lead_zeros1; // 左移尾数
                        norm_mant1[23] = 1'b1; // 设置隐藏位
                        true_exp1 = 9'h1FE - lead_zeros1; // 计算真实指数（-126 - 前导零）
                    end else begin
                        norm_mant1 = mant1; // 使用正常尾数
                        true_exp1 = {1'b0, exp1}; // 正常指数
                    end
                    if (is_denorm2) begin
                        lead_zeros2 = 0;
                        while (frac2[22-lead_zeros2] == 0 && lead_zeros2 < 23) lead_zeros2 = lead_zeros2 + 1; // 计算前导零
                        norm_mant2 = {1'b0, frac2} << lead_zeros2; // 左移尾数
                        norm_mant2[23] = 1'b1; // 设置隐藏位
                        true_exp2 = 9'h1FE - lead_zeros2; // 计算真实指数
                    end else begin
                        norm_mant2 = mant2; // 使用正常尾数
                        true_exp2 = {1'b0, exp2}; // 正常指数
                    end
                    // 指数对齐
                    if ($signed(true_exp1) >= $signed(true_exp2)) begin
                        max_exp = true_exp1; // 选择较大指数
                        shifted_mant1 = {norm_mant1, 4'b0}; // 尾数1扩展
                        shift_amt = $signed(true_exp1) - $signed(true_exp2); // 计算移位量
                        if (shift_amt > 28) begin
                            shift_amt = 28; // 限制最大移位量
                            sticky = |norm_mant2; // 如果尾数2非零，设置sticky位
                        end else begin
                        shifted_mant2 = {norm_mant2, 4'b0} >> shift_amt; // 右移尾数2
                        sticky = |({norm_mant2, 4'b0} << (28 - shift_amt)); // 计算粘性位
                        end
                    end else begin
                        max_exp = true_exp2; // 选择较大指数
                        shifted_mant2 = {norm_mant2, 4'b0}; // 尾数2扩展
                        shift_amt = $signed(true_exp2) - $signed(true_exp1); // 计算移位量
                        if (shift_amt > 28) begin
                            shift_amt = 28; // 限制最大移位量
                            sticky = |norm_mant1; // 如果尾数1非零，设置sticky位
                        end else begin
                        shifted_mant1 = {norm_mant1, 4'b0} >> shift_amt; // 右移尾数1
                        sticky = |({norm_mant1, 4'b0} << (28 - shift_amt)); // 计算粘性位
                    end
                    end
                    // 尾数运算
                    if (sign1 == sign2_eff) begin
                        sum_mant = shifted_mant1 + shifted_mant2; // 同符号相加
                        result_sign = sign1; // 结果符号
                    end else begin
                        if ($signed(shifted_mant1) >= $signed(shifted_mant2)) begin
                            sum_mant = shifted_mant1 - shifted_mant2; // 尾数1较大，相减
                            result_sign = sign1; // 结果符号
                        end else begin
                            sum_mant = shifted_mant2 - shifted_mant1; // 尾数2较大，相减
                            result_sign = sign2_eff; // 结果符号
                        end
                    end
                    // 归一化
                    if (sum_mant == 0) begin
                        result_exp = 0; // 结果为零
                        result_sign = (sign1 & sign2_eff) ? 1'b1 : 1'b0; // 符号处理
                        guard = 0; round = 0; sticky = 0; // 清空舍入位
                    end else if (sum_mant[28]) begin
                        guard = sum_mant[4]; // 设置保护位
                        round = sum_mant[3]; // 设置舍入位
                        sticky = sum_mant[2] | sum_mant[1] | sum_mant[0]; // 设置粘性位
                        sum_mant = sum_mant >> 1; // 右移归一化
                        result_exp = max_exp + 1; // 指数加1
                    end else begin
                        result_exp = max_exp; // 保持指数
                        guard = sum_mant[4]; // 设置保护位
                        round = sum_mant[3]; // 设置舍入位
                        sticky = sum_mant[2] | sum_mant[1] | sum_mant[0]; // 设置粘性位
                        lzc = 0;
                        while (sum_mant[27-lzc] == 0 && lzc < 28 && $signed(result_exp) > -149) begin
                            lzc = lzc + 1; // 计算前导零
                        end
                        if (lzc > 0) begin
                            sticky = sticky | |(sum_mant[27:0] << (28 - lzc)); // 更新粘性位
                            sum_mant = sum_mant << lzc; // 左移归一化
                            result_exp = result_exp - lzc; // 指数减小
                            guard = sum_mant[4]; // 重新设置保护位
                            round = sum_mant[3]; // 重新设置舍入位
                            sticky = sticky | sum_mant[2] | sum_mant[1] | sum_mant[0]; // 更新粘性位
                        end
                    end
                    // 舍入处理
                    l_rounded_mant = sum_mant[27:1]; // 提取尾数
                    l_rounded_exp = result_exp; // 指数
                    l_guard = guard; l_round = round; l_lsb = sum_mant[5]; // 设置舍入参数
                    l_round_up = 1'b0; // 默认不向上舍入

                    case (fpu_op_round)
                        3'b000: l_round_up = l_guard & (l_round | sticky | l_lsb); // RNE：最近偶数舍入
                        3'b001: l_round_up = 1'b0; // RTZ：向零舍入
                        3'b010: l_round_up = (l_guard | l_round | sticky) & result_sign; // RDN：向下舍入
                        3'b011: l_round_up = (l_guard | l_round | sticky) & ~result_sign; // RUP：向上舍入
                        3'b100: l_round_up = l_guard & (l_round | sticky); // RMM：最大幅度舍入
                        default: l_round_up = 1'b0;
                    endcase
                    if (l_round_up) begin
                        l_rounded_mant = sum_mant[27:1] + (1 << 4); // 向上舍入
                        if (l_rounded_mant[26]) begin
                            l_rounded_mant = l_rounded_mant >> 1; // 尾数溢出，右移
                            l_rounded_exp = l_rounded_exp + 1; // 指数加1
                        end
                    end
                    // 溢出和非规格化处理
                    if ($signed(l_rounded_exp) >= 255) begin
                        case (fpu_op_round)
                            3'b000, 3'b001, 3'b100: comb_result = {result_sign, 8'hFF, 23'b0}; // 无穷大
                            3'b010: comb_result = result_sign ? {1'b1, 8'hFE, 23'h7FFFFF} : {1'b0, 8'hFF, 23'b0}; // 向下舍入
                            3'b011: comb_result = result_sign ? {1'b1, 8'hFF, 23'b0} : {1'b0, 8'hFE, 23'h7FFFFF}; // 向上舍入
                            default: comb_result = {result_sign, 8'hFF, 23'b0};
                        endcase
                        comb_exception = detect_exceptions(1'b0, 1'b0, 1'b1, 1'b0, 1'b1); // 溢出异常
                    end else if ($signed(l_rounded_exp) <= 0) begin
                        l_shift_amt = 1 - $signed(l_rounded_exp); // 计算非规格化移位量
                        if (l_shift_amt > 24) l_shift_amt = 24; // 限制最大移位量
                        l_denorm_mant = l_rounded_mant[25:3] >> l_shift_amt; // 右移尾数
                        sticky = sticky | |(l_rounded_mant[25:3] << (24 - l_shift_amt)); // 更新粘性位
                        comb_result = {result_sign, 8'h00, l_denorm_mant}; // 非规格化结果
                        comb_exception = detect_exceptions(1'b0, 1'b0, 1'b0, l_denorm_mant != 0, l_guard | l_round | sticky); // 下溢异常
                    end else begin
                        comb_result = {result_sign, l_rounded_exp[7:0], l_rounded_mant[25:3]}; // 正常结果
                        comb_exception = detect_exceptions((is_nan1 || is_nan2), 1'b0, ($signed(l_rounded_exp) >= 255), ($signed(l_rounded_exp) <= 0), (l_guard | l_round | sticky)); // 异常检测
                    end
                    // 调试输出
                    if (fpu_op_type == FSUB_S) begin
                        $display("FSUB_S: shifted_mant1=%h, shifted_mant2=%h, sum_mant=%h, result_sign=%b, sign1=%b, sign2_eff=%b", 
                                 shifted_mant1, shifted_mant2, sum_mant, result_sign, sign1, sign2_eff); // 减法调试信息
                    end
                    if (fpu_op_type == FADD_S) begin
                        $display("FADD_S: sum_mant=%h, guard=%b, round=%b, sticky=%b, comb_exception=%b", 
                                 sum_mant, guard, round, sticky, comb_exception); // 加法调试信息
                    end
                end
            end
            FMUL_S: begin
                if (is_nan1 || is_nan2) begin
                    if (is_nan1 && is_nan2) begin
                        comb_result = is_snan1 ? {operand1_fp[31:23], 1'b1, operand1_fp[21:0]} :
                                      is_snan2 ? {operand2_fp[31:23], 1'b1, operand2_fp[21:0]} :
                                      operand1_fp[22] ? operand1_fp : operand2_fp; // 优先返回安静NaN
                        comb_exception = (is_snan1 || is_snan2) ? 5'b10000 : 5'b0; // NaN异常
                    end else begin
                        comb_result = is_nan1 ? (is_snan1 ? {operand1_fp[31:23], 1'b1, operand1_fp[21:0]} : operand1_fp) :
                                      (is_snan2 ? {operand2_fp[31:23], 1'b1, operand2_fp[21:0]} : operand2_fp); // 返回NaN
                        comb_exception = (is_snan1 || is_snan2) ? 5'b10000 : 5'b0; // NaN异常
                    end
                end else if ((is_inf1 && is_zero2) || (is_inf2 && is_zero1)) begin
                    comb_result = 32'h7FC00000; // 无穷乘零，返回NaN
                    comb_exception = 5'b10000;  // NaN异常
                end else if (is_inf1 || is_inf2) begin
                    comb_result = {(sign1 ^ sign2), 8'hFF, 23'b0}; // 返回无穷大
                    comb_exception = 5'b0; // 无异常
                end else if (is_zero1 || is_zero2) begin
                    comb_result = {(sign1 ^ sign2), 8'h00, 23'b0}; // 返回零
                    comb_exception = 5'b0; // 无异常
                end else begin
                    // 非规格化数归一化
                    if (is_denorm1) begin
                        lead_zeros1 = 0;
                        while (frac1[22-lead_zeros1] == 0 && lead_zeros1 < 23) lead_zeros1 = lead_zeros1 + 1; // 计算前导零
                        norm_mant1 = {1'b0, frac1} << lead_zeros1; // 左移尾数
                        norm_mant1[23] = 1'b1; // 设置隐藏位
                        true_exp1 = 9'h1FE - lead_zeros1; // 计算真实指数
                    end else begin
                        norm_mant1 = mant1; // 使用正常尾数
                        true_exp1 = {1'b0, exp1}; // 正常指数
                    end
                    if (is_denorm2) begin
                        lead_zeros2 = 0;
                        while (frac2[22-lead_zeros2] == 0 && lead_zeros2 < 23) lead_zeros2 = lead_zeros2 + 1; // 计算前导零
                        norm_mant2 = {1'b0, frac2} << lead_zeros2; // 左移尾数
                        norm_mant2[23] = 1'b1; // 设置隐藏位
                        true_exp2 = 9'h1FE - lead_zeros2; // 计算真实指数
                    end else begin
                        norm_mant2 = mant2; // 使用正常尾数
                        true_exp2 = {1'b0, exp2}; // 正常指数
                    end
                    // 启动乘法器
                    multiplier_mant1 = {8'b0, norm_mant1}; // 设置乘法器输入1
                    multiplier_mant2 = {8'b0, norm_mant2}; // 设置乘法器输入2
                    comb_result = 32'h7FC00000; // 默认NaN，等待乘法器结果
                    comb_exception = 5'b0; // 无异常
                    // 调试输出
                    if (fpu_op_type == FMUL_S && state == EXECUTE) begin
                        $display("FMUL_S: multiplier_mant1=%h, multiplier_mant2=%h", multiplier_mant1, multiplier_mant2); // 乘法调试信息
                    end
                end
            end
            FMIN_S: begin
                if (is_nan1 || is_nan2) begin
                    comb_result = 32'h7FC00000; // NaN返回NaN
                    comb_exception = 5'b10000;  // NaN异常
                end else if (is_zero1 && is_zero2) begin
                    comb_result = (~sign1 & sign2) ? operand2_fp : operand1_fp; // 零比较，优先负零
                    comb_exception = 5'b0; // 无异常
                end else if (sign1 == 0 && sign2 == 1) begin
                    comb_result = operand2_fp; // 正数大于负数
                    comb_exception = 5'b0; // 无异常
                end else if (sign1 == 1 && sign2 == 0) begin
                    comb_result = operand1_fp; // 负数小于正数
                    comb_exception = 5'b0; // 无异常
                end else begin
                    if (sign1 == 0) begin
                        comb_result = (exp1 < exp2 || (exp1 == exp2 && frac1 < frac2)) ? operand1_fp : operand2_fp; // 同号比较
                    end else begin
                        comb_result = (exp1 > exp2 || (exp1 == exp2 && frac1 > frac2)) ? operand1_fp : operand2_fp; // 同号比较
                    end
                    comb_exception = 5'b0; // 无异常
                end
            end
            FMAX_S: begin
                if (is_nan1 || is_nan2) begin
                    comb_result = 32'h7FC00000; // NaN返回NaN
                    comb_exception = 5'b10000;  // NaN异常
                end else if (is_zero1 && is_zero2) begin
                    comb_result = (sign1 | sign2) ? 32'h00000000 : operand1_fp; // 零比较，优先正零
                    comb_exception = 5'b0; // 无异常
                end else if (sign1 == 0 && sign2 == 1) begin
                    comb_result = operand1_fp; // 正数大于负数
                    comb_exception = 5'b0; // 无异常
                end else if (sign1 == 1 && sign2 == 0) begin
                    comb_result = operand2_fp; // 负数小于正数
                    comb_exception = 5'b0; // 无异常
                end else begin
                    if (sign1 == 0) begin
                        comb_result = (exp1 > exp2 || (exp1 == exp2 && frac1 > frac2)) ? operand1_fp : operand2_fp; // 同号比较
                    end else begin
                        comb_result = (exp1 < exp2 || (exp1 == exp2 && frac1 < frac2)) ? operand1_fp : operand2_fp; // 同号比较
                    end
                    comb_exception = 5'b0; // 无异常
                end
            end
            FEQ_S: begin
                if (is_nan1 || is_nan2) begin
                    comb_int_result = 32'h0; // NaN比较返回0
                    comb_exception = (is_snan1 || is_snan2) ? 5'b10000 : 5'b0; // 信号NaN触发异常
                end else if (is_zero1 && is_zero2) begin
                    comb_int_result = 32'h1; // 零相等
                    comb_exception = 5'b0; // 无异常
                end else begin
                    comb_int_result = (operand1_fp == operand2_fp) ? 32'h1 : 32'h0; // 相等比较
                    comb_exception = 5'b0; // 无异常
                end
            end
            FLT_S: begin
                if (is_nan1 || is_nan2) begin
                    comb_int_result = 32'h0; // NaN比较返回0
                    comb_exception = 5'b10000; // NaN异常
                end else if (is_zero1 && is_zero2) begin
                    comb_int_result = 32'h0; // 零不相等
                    comb_exception = 5'b0; // 无异常
                end else if (sign1 == 0 && sign2 == 1) begin
                    comb_int_result = 32'h0; // 正数大于负数
                    comb_exception = 5'b0; // 无异常
                end else if (sign1 == 1 && sign2 == 0) begin
                    comb_int_result = 32'h1; // 负数小于正数
                    comb_exception = 5'b0; // 无异常
                end else begin
                    if (sign1 == 0) begin
                        comb_int_result = (exp1 < exp2 || (exp1 == exp2 && frac1 < frac2)) ? 32'h1 : 32'h0; // 同号比较
                    end else begin
                        comb_int_result = (exp1 > exp2 || (exp1 == exp2 && frac1 > frac2)) ? 32'h1 : 32'h0; // 同号比较
                    end
                    comb_exception = 5'b0; // 无异常
                end
            end
            FLE_S: begin
                if (is_nan1 || is_nan2) begin
                    comb_int_result = 32'h0; // NaN比较返回0
                    comb_exception = 5'b10000; // NaN异常
                end else if (is_zero1 && is_zero2) begin
                    comb_int_result = 32'h1; // 零相等
                    comb_exception = 5'b0; // 无异常
                end else if (sign1 == 0 && sign2 == 1) begin
                    comb_int_result = 32'h0; // 正数大于负数
                    comb_exception = 5'b0; // 无异常
                end else if (sign1 == 1 && sign2 == 0) begin
                    comb_int_result = 32'h1; // 负数小于正数
                    comb_exception = 5'b0; // 无异常
                end else begin
                    if (sign1 == 0) begin
                        comb_int_result = (exp1 <= exp2 && (exp1 != exp2 || frac1 <= frac2)) ? 32'h1 : 32'h0; // 同号比较
                    end else begin
                        comb_int_result = (exp1 >= exp2 && (exp1 != exp2 || frac1 >= frac2)) ? 32'h1 : 32'h0; // 同号比较
                    end
                    comb_exception = 5'b0; // 无异常
                end
            end
            default: begin
                comb_result = 32'h7FC00000; // 未知操作返回NaN
                comb_exception = 5'b10000;  // NaN异常
            end
        endcase
    end else if (state == MUL_WAIT && multiplier_valid && fpu_op_type == FMUL_S) begin
        prod_mant = multiplier_product[47:0]; // 获取乘法器结果
        result_sign = sign1 ^ sign2; // 计算结果符号
        result_exp = $signed(stored_true_exp1) + $signed(stored_true_exp2) - 9'd126; // 计算指数
        // 初始溢出检查
        if ($signed(result_exp) >= 255) begin
            case (fpu_op_round)
                3'b000, 3'b001, 3'b100: comb_result = {result_sign, 8'hFF, 23'b0}; // 无穷大
                3'b010: comb_result = result_sign ? {1'b1, 8'hFE, 23'h7FFFFF} : {1'b0, 8'hFF, 23'b0}; // 向下舍入
                3'b011: comb_result = result_sign ? {1'b1, 8'hFF, 23'b0} : {1'b0, 8'hFE, 23'h7FFFFF}; // 向上舍入
                default: comb_result = {result_sign, 8'hFF, 23'b0};
            endcase
            comb_exception = detect_exceptions(1'b0, 1'b0, 1'b1, 1'b0, 1'b1); // 溢出异常
        end else begin
            // 增强归一化逻辑
            if (prod_mant[47]) begin
                guard = prod_mant[23]; // 设置保护位
                round = prod_mant[22]; // 设置舍入位
                sticky = |(prod_mant[21:0]); // 设置粘性位
                prod_mant = prod_mant >> 1; // 右移归一化
                result_exp = result_exp + 9'd1; // 指数加1
            end else begin
                lzc = 0;
                while (prod_mant[47-lzc] == 0 && lzc < 24) lzc = lzc + 1; // 计算前导零
                prod_mant = prod_mant << lzc; // 左移归一化
                result_exp = result_exp - lzc; // 指数减小
                guard = prod_mant[23]; // 重新设置保护位
                round = prod_mant[22]; // 重新设置舍入位
                sticky = |(prod_mant[21:0]); // 重新设置粘性位
            end
            mant_for_round = {prod_mant[46:24], guard, round, 2'b0}; // 准备舍入尾数
            // 舍入
            l_rounded_mant = mant_for_round; // 初始化舍入尾数
            l_rounded_exp = result_exp; // 初始化舍入指数
            l_guard = guard; l_round = round; l_lsb = mant_for_round[4]; // 设置舍入参数
            l_round_up = 1'b0; // 默认不向上舍入

            case (fpu_op_round)
                3'b000: l_round_up = l_guard & (l_round | sticky | l_lsb); // RNE：最近偶数舍入
                3'b001: l_round_up = 1'b0; // RTZ：向零舍入
                3'b010: l_round_up = (l_guard | l_round | sticky) & result_sign; // RDN：向下舍入
                3'b011: l_round_up = (l_guard | l_round | sticky) & ~result_sign; // RUP：向上舍入
                3'b100: l_round_up = l_guard & (l_round | sticky); // RMM：最大幅度舍入
                default: l_round_up = 1'b0;
            endcase
            if (l_round_up) begin
                l_rounded_mant = mant_for_round + (1 << 4); // 向上舍入
                if (l_rounded_mant[26]) begin
                    l_rounded_mant = l_rounded_mant >> 1; // 尾数溢出，右移
                    l_rounded_exp = l_rounded_exp + 1; // 指数加1
                end
            end
            // 溢出和非规格化处理
            if ($signed(l_rounded_exp) >= 255) begin
                case (fpu_op_round)
                    3'b000, 3'b001, 3'b100: comb_result = {result_sign, 8'hFF, 23'b0}; // 无穷大
                    3'b010: comb_result = result_sign ? {1'b1, 8'hFE, 23'h7FFFFF} : {1'b0, 8'hFF, 23'b0}; // 向下舍入
                    3'b011: comb_result = result_sign ? {1'b1, 8'hFF, 23'b0} : {1'b0, 8'hFE, 23'h7FFFFF}; // 向上舍入
                    default: comb_result = {result_sign, 8'hFF, 23'b0};
                endcase
                comb_exception = detect_exceptions(1'b0, 1'b0, 1'b1, 1'b0, 1'b1); // 溢出异常
            end else if ($signed(l_rounded_exp) <= 0) begin
                l_shift_amt = 1 - $signed(l_rounded_exp); // 计算非规格化移位量
                if (l_shift_amt > 24) l_shift_amt = 24; // 限制最大移位量
                l_denorm_mant = l_rounded_mant[25:3] >> l_shift_amt; // 右移尾数
                sticky = sticky | |(l_rounded_mant[25:3] << (24 - l_shift_amt)); // 更新粘性位
                comb_result = {result_sign, 8'h00, l_denorm_mant}; // 非规格化结果
                comb_exception = detect_exceptions(1'b0, 1'b0, 1'b0, l_denorm_mant != 0, l_guard | l_round | sticky); // 下溢异常
            end else begin
                comb_result = {result_sign, l_rounded_exp[7:0], l_rounded_mant[25:3]}; // 正常结果
                comb_exception = detect_exceptions((is_nan1 || is_nan2), 1'b0, ($signed(l_rounded_exp) >= 255), ($signed(l_rounded_exp) <= 0), (l_guard | l_round | sticky)); // 异常检测
            end
            // 调试输出
            if (fpu_op_type == FMUL_S && state == MUL_WAIT) begin
                $display("FMUL_S: prod_mant=%h, result_exp=%d, stored_true_exp1=%d, stored_true_exp2=%d, multiplier_product=%h", 
                         prod_mant, result_exp, stored_true_exp1, stored_true_exp2, multiplier_product); // 乘法调试信息
            end
        end
    end
end

// 状态机控制
always @(posedge clk or posedge reset) begin
    if (reset || flush) begin
        state <= IDLE; // 复位或刷新到空闲状态
        fpu_ready <= 1'b1; // FPU就绪
        fpu_result_valid <= 1'b0; // 结果无效
        fpu_result <= 0; // 清空浮点结果
        int_result <= 0; // 清空整数结果
        exception_flags <= 0; // 清空异常标志
        temp_result <= 0; // 清空临时浮点结果
        temp_int_result <= 0; // 清空临时整数结果
        temp_exception <= 0; // 清空临时异常
        stored_true_exp1 <= 0; // 清空存储指数1
        stored_true_exp2 <= 0; // 清空存储指数2
    end else begin
        state <= next_state; // 更新状态
        fpu_ready <= next_fpu_ready; // 更新就绪信号
        if (state == EXECUTE && fpu_op_type == FMUL_S) begin
            stored_true_exp1 <= true_exp1; // 存储操作数1指数
            stored_true_exp2 <= true_exp2; // 存储操作数2指数
        end
        if (state == EXECUTE || (state == MUL_WAIT && multiplier_valid)) begin
            temp_result <= comb_result; // 存储组合逻辑浮点结果
            temp_int_result <= comb_int_result; // 存储组合逻辑整数结果
            temp_exception <= comb_exception; // 存储组合逻辑异常
        end
        if (state == OUTPUT && downstream_valid) begin
            fpu_result <= temp_result; // 输出浮点结果
            int_result <= temp_int_result; // 输出整数结果
            exception_flags <= temp_exception; // 输出异常标志
            fpu_result_valid <= 1'b1; // 结果有效
        end else begin
            fpu_result_valid <= 1'b0; // 结果无效
        end
    end
end

// 下一状态逻辑
always @(*) begin
    next_state = state; // 默认保持当前状态
    next_fpu_ready = 0; // 默认未就绪
    case (state)
        IDLE: begin
            next_fpu_ready = 1'b1; // 空闲状态下FPU就绪
            if (fpu_op_valid) begin
                next_state = EXECUTE; // 接收到操作请求，进入执行状态
            end
        end
        EXECUTE: begin
            if (fpu_op_type == FMUL_S) begin
                next_state = MUL_WAIT; // 乘法操作进入等待状态
            end else begin
                next_state = OUTPUT; // 其他操作直接进入输出状态
            end
        end
        MUL_WAIT: begin
            if (multiplier_valid) begin
                next_state = OUTPUT; // 乘法器完成，进入输出状态
            end
        end
        OUTPUT: begin
            if (downstream_valid) begin
                next_state = IDLE; // 下游准备好，回到空闲状态
                next_fpu_ready = 1'b1; // FPU就绪
            end
        end
        default: begin
            next_state = IDLE; // 未知状态回到空闲
            next_fpu_ready = 1'b1; // FPU就绪
        end
    endcase
end

// 异常检测函数
function [4:0] detect_exceptions;
    input is_nan;         // NaN标志
    input is_div_zero;    // 除零标志
    input is_overflow;    // 溢出标志
    input is_underflow;   // 下溢标志
    input is_inexact;     // 不精确标志
begin
    detect_exceptions = {is_nan, is_div_zero, is_overflow, is_underflow, is_inexact}; // 组合异常标志
end
endfunction

endmodule