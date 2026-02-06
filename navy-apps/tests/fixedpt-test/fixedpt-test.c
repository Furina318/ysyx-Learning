#include <stdio.h>
#include <stdlib.h>
#include "fixedptc.h"

// 纯整数实现：将定点数的小数部分转换为十进制字符串（避免浮点运算）
// max_dec：保留的小数位数（如3位、6位）
void fixedpt_frac_to_str(fixedpt frac, char* str, int max_dec) {
    int i;
    uint32_t frac_uint = (uint32_t)frac; // 小数部分是无符号的
    const uint32_t frac_base = 1 << FIXEDPT_FBITS;

    str[0] = '.'; // 小数点
    for (i = 1; i <= max_dec; i++) {
        frac_uint *= 10;
        str[i] = (frac_uint / frac_base) + '0'; // 取当前位的数字
        frac_uint = frac_uint % frac_base;      // 保留余数继续计算
    }
    str[max_dec + 1] = '\0'; // 字符串结束符
}

// 纯整数实现：打印定点数详细信息（无任何浮点运算）
void fixedpt_print_detail(const char* name, fixedpt fp) {
    char frac_str[20] = {0};
    int int_part = fixedpt_toint(fp);
    fixedpt frac_part = fixedpt_fracpart(fp);
    // 处理负数的小数部分（补码转无符号）
    if (fp < 0 && frac_part != 0) {
        frac_part = (1 << FIXEDPT_FBITS) - frac_part;
    }
    // 转换小数部分为6位十进制字符串
    fixedpt_frac_to_str(frac_part, frac_str, 6);

    // 打印：定点数十六进制、整数部分+小数部分（十进制）
    printf("%-15s: 定点数=0x%08X, 数值=%d%s, 整数部分=%d\n",
           name, fp, int_part, frac_str, int_part);
}

// 手动定义常用定点数常量（避免fixedpt_rconst宏）
#define FP_3_14    fixedpt_fromint(3) + (36 << 0)  // 3.14 → 3 + 36/256 (36=0.140625*256)
#define FP_3_9     fixedpt_fromint(3) + (230 << 0) // 3.9 → 3 + 230/256 (230=0.9*256)
#define FP_NEG_3_1 fixedpt_fromint(-4) + (220 << 0)// -3.1 → -4 + 220/256 (220=0.859375*256)
#define FP_NEG_3_9 fixedpt_fromint(-4) + (26 << 0) // -3.9 → -4 + 26/256  (26=0.1015625*256)

void test_type_conversion() {
    printf("=== Test 1 ===\n");

    int test_int = 5;
    fixedpt fp_from_int = fixedpt_fromint(test_int);
    fixedpt_print_detail("整数5转换", fp_from_int);

    fixedpt fp_pi = FIXEDPT_PI;
    fixedpt_print_detail("圆周率PI", fp_pi);

    fixedpt fp_3_14 = FP_3_14;
    int i_from_fp = fixedpt_toint(fp_3_14);
    printf("定点数3.14转换为整数：%d（预期：3）\n", i_from_fp);

    fixedpt frac_3_14 = fixedpt_fracpart(fp_3_14);
    char frac_str[20] = {0};
    fixedpt_frac_to_str(frac_3_14, frac_str, 6);
    printf("定点数3.14的小数部分：%s（预期：~.140625）\n\n", frac_str);
}

void test_add_sub() {
    printf("=== Test 2 ===\n");

    fixedpt fp_1_0 = FIXEDPT_ONE;
    fixedpt fp_0_5 = FIXEDPT_ONE_HALF;
    fixedpt fp_2_0 = FIXEDPT_TWO;

    fixedpt fp_add = fixedpt_add(fp_1_0, fp_0_5);
    fixedpt_print_detail("1.0 + 0.5", fp_add);

    fixedpt fp_sub = fixedpt_sub(fp_2_0, fp_0_5);
    fixedpt_print_detail("2.0 - 0.5", fp_sub);

    fixedpt fp_sub_neg = fixedpt_sub(fp_1_0, fp_2_0);
    fixedpt_print_detail("1.0 - 2.0", fp_sub_neg);
    printf("\n");
}

void test_floor() {
    printf("=== Test 3 ===\n");

    fixedpt fp_3_9 = FP_3_9;
    fixedpt fp_floor_3_9 = fixedpt_floor(fp_3_9);
    fixedpt_print_detail("floor(3.9)", fp_floor_3_9);

    fixedpt fp_5_0 = fixedpt_fromint(5);
    fixedpt fp_floor_5_0 = fixedpt_floor(fp_5_0);
    fixedpt_print_detail("floor(5.0)", fp_floor_5_0);

    fixedpt fp_neg_3_1 = FP_NEG_3_1;
    fixedpt fp_floor_neg_3_1 = fixedpt_floor(fp_neg_3_1);
    fixedpt_print_detail("floor(-3.1)", fp_floor_neg_3_1);

    fixedpt fp_neg_2_0 = fixedpt_sub(FIXEDPT_ONE, FIXEDPT_TWO);
    fixedpt fp_floor_neg_2_0 = fixedpt_floor(fp_neg_2_0);
    fixedpt_print_detail("floor(-2.0)", fp_floor_neg_2_0);
    printf("\n");
}

void test_ceil() {
    printf("=== Test 4 ===\n");

    fixedpt fp_3_1 = FP_3_14; // 3.1 ≈ 3.14（简化测试）
    fixedpt fp_ceil_3_1 = fixedpt_ceil(fp_3_1);
    fixedpt_print_detail("ceil(3.1)", fp_ceil_3_1);

    fixedpt fp_5_0 = fixedpt_fromint(5);
    fixedpt fp_ceil_5_0 = fixedpt_ceil(fp_5_0);
    fixedpt_print_detail("ceil(5.0)", fp_ceil_5_0);

    fixedpt fp_neg_3_9 = FP_NEG_3_9;
    fixedpt fp_ceil_neg_3_9 = fixedpt_ceil(fp_neg_3_9);
    fixedpt_print_detail("ceil(-3.9)", fp_ceil_neg_3_9);

    fixedpt fp_neg_2_0 = fixedpt_sub(FIXEDPT_ONE, FIXEDPT_TWO);
    fixedpt fp_ceil_neg_2_0 = fixedpt_ceil(fp_neg_2_0);
    fixedpt_print_detail("ceil(-2.0)", fp_ceil_neg_2_0);
    printf("\n");
}

int main() {
    printf("===== 定点数库（fixedptc）测试程序 =====\n\n");

    test_type_conversion();
    test_add_sub();
    test_floor();
    test_ceil();

    printf("===== 所有测试执行完成 =====\n");
    return 0;
}