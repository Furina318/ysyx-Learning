module divider (
    input              clk,
    input              reset,
    input  wire [31:0] dividend,  //被除数
    input  wire [31:0] divisor,   //除数
    input  wire        is_signed, //是否为有符号运算
    output reg  [31:0] quotient,  //商
    output reg  [31:0] remainder, //余数
    output reg         valid      //计算结果是否有效（除数为0或溢出时为无效）
);

    reg [31:0] abs_divisor;       //除数绝对值
    reg [63:0] temp_dividend;     //64位临时被除数
    reg [31:0] temp_quotient;     //临时商
    // 商和余数的符号作为组合信号，避免在同一个时钟周期里使用未更新的寄存器值
    wire       quotient_sign;     //商的符号
    wire       remainder_sign;    //余数的符号
    reg [5:0]  cycle_count;       //计数器
    reg [5:0]  total_cycles;      //总迭代次数
    reg        computing;         //正在计算标志
    reg [31:0] pos_mask;          //位掩码
    reg        early_stop;        //早停标志
    
    // 前导零计算逻辑
    // reg  [ 5:0]  leading_zeros;     //被除数绝对值的前导零个数
    wire [31:0] abs_dividend_comb = (is_signed && dividend[31]) ? (~dividend + 1) : dividend;
    wire [31:0] abs_divisor_comb  = (is_signed && divisor[31])  ? (~divisor + 1) : divisor;

    // 计算32位数的前导零
    wire [5:0] leading_zeros = count_leading_zeros(abs_dividend_comb);

    assign quotient_sign = is_signed && (dividend[31] ^ divisor[31]);
    assign remainder_sign = is_signed && dividend[31];

    // 组合逻辑：计算中间值
    wire [63:0] temp_dividend_shifted = {temp_dividend[62:0], 1'b0};
    wire [31:0] next_remainder = (temp_dividend_shifted[63:32] >= abs_divisor) 
                               ? (temp_dividend_shifted[63:32] - abs_divisor)
                               : temp_dividend_shifted[63:32];
    wire [31:0] next_quotient = (temp_dividend_shifted[63:32] >= abs_divisor)
                              ? (temp_quotient | pos_mask)
                              : temp_quotient;
    wire early_stop_cond = (next_remainder == 32'b0 && temp_dividend_shifted[31:0] == 32'b0);

    function [5:0] count_leading_zeros;
        input [31:0] data;
        integer i;
        reg [5:0] result;
        reg found;
        begin
            result = 6'd32;
            found = 1'b0;
            for (i = 31; i >= 0; i = i - 1) begin
                if (!found && data[i] == 1'b1) begin
                    result = 6'd31 - i[5:0];
                    found = 1'b1;
                end
            end
            count_leading_zeros = result;
        end
    endfunction

    always @(posedge clk) begin
        if (reset) begin
            quotient       <= 32'b0;
            remainder      <= 32'b0;
            temp_quotient  <= 32'b0;
            temp_dividend  <= 64'b0;
            pos_mask       <= 32'h80000000;
            valid          <= 1'b0;
            cycle_count    <= 6'b0;
            total_cycles   <= 6'd32;
            computing      <= 1'b0;
            early_stop     <= 1'b0;
            // leading_zeros  <= 6'd0;
        end else if (!computing) begin
            quotient       <= 32'b0;
            remainder      <= 32'b0;
            temp_quotient  <= 32'b0;
            pos_mask       <= 32'h80000000;
            cycle_count    <= 6'b0;
            total_cycles   <= 6'd32;
            valid          <= 1'b0;
            early_stop     <= 1'b0;
            // leading_zeros  <= 6'd0;

            // 除零检测
            if (divisor == 32'b0) begin
                quotient  <= 32'hFFFFFFFF;
                remainder <= dividend;
                valid     <= 1'b0;
                // $display("除零错误");
            end else if (is_signed && dividend == 32'h80000000 && divisor == 32'hFFFFFFFF) begin
                // 溢出 MIN_INT / -1
                quotient  <= 32'h80000000;
                remainder <= 32'b0;
                valid     <= 1'b0;
                // $display("溢出错误");
            end else begin
                abs_divisor    <= (is_signed && divisor[31]) ? (~divisor + 1) : divisor;
                
                if (leading_zeros == 6'd32) begin
                    // 被除数为0
                    quotient  <= 32'b0;
                    remainder <= 32'b0;
                    valid     <= 1'b1;
                end else begin

                    // 计算实际需要的迭代次数
                    total_cycles <= 6'd31 - leading_zeros + 6'd1; // 因为最高有效位也需要一次迭代
                    
                    // 将有效数据左移，跳过前导零
                    temp_dividend <= {32'b0, abs_dividend_comb} << leading_zeros;
                    
                    // 调整位掩码的起始位置
                    pos_mask <= 32'h80000000 >> leading_zeros;

                    if (abs_dividend_comb < abs_divisor_comb) begin
                        // 被除数小于除数，商为0，余数为被除数
                        quotient  <= 32'b0;
                        remainder <= dividend;
                        valid     <= 1'b1;
                    end
                    else if (abs_dividend_comb == abs_divisor_comb) begin 
                        // 被除数等于除数，商为1或-1，余数为0
                        quotient  <= quotient_sign ? 32'hFFFFFFFF : 32'b1;
                        remainder <= 32'b0;
                        valid     <= 1'b1;
                    end
                    else if (abs_divisor_comb == 32'b1) begin
                        // 除数为1或-1：使用被除数的绝对值作为绝对商，再根据符号决定正负
                        // 这样能正确处理 -x / -1 => +x 的情况
                        quotient  <= quotient_sign ? (~abs_dividend_comb + 1) : abs_dividend_comb;
                        remainder <= 32'b0;
                        valid     <= 1'b1;
                    end
                    else begin
                        computing <= 1'b1;
                    end
                end
            end
        end else begin
            // 更新寄存器
            if (temp_dividend_shifted[63:32] >= abs_divisor) begin
                temp_dividend <= {next_remainder, temp_dividend_shifted[31:0]};
            end else begin
                temp_dividend <= temp_dividend_shifted;
            end

            temp_quotient <= next_quotient;
            pos_mask      <= pos_mask >> 1;
            cycle_count   <= cycle_count + 1;
            
            // 更新早停标志
            early_stop <= early_stop_cond;

            // 使用动态计算的总迭代次数，而不是固定的32次
            if (cycle_count == (total_cycles - 6'd1) || early_stop) begin
                quotient  <= quotient_sign ? (~next_quotient + 1) : next_quotient;
                remainder <= remainder_sign ? (~next_remainder + 1) : next_remainder;
                valid     <= 1'b1;
                computing <= 1'b0;
            end
            if(temp_dividend[63]) begin end
        end
    end
endmodule
