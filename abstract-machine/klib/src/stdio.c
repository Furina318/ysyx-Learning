#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

void int_to_str(int num, char *buffer, int *index) {
    if (num == 0) {
        buffer[(*index)++] = '0';
        return;
    }
    // 处理负数
    if (num < 0) {
        buffer[(*index)++] = '-';
        num = -num;
    }
    //计算位数进行处理
    int dit=0;
    int tmp=num;
    while(tmp){
        tmp/=10;
        dit++;
    }
    // 从最高位开始写入缓冲区
    for (int i = dit - 1; i >= 0; i--) {
      buffer[(*index) + i] = (char)((num % 10) + '0');
      num /= 10;
      }
      *index += dit; // 更新索引
  }

void int_to_base_str(unsigned int num, char *buffer, int *index, int base) {
    const char digits[] = "0123456789abcdef";
    if (num == 0) {
        buffer[(*index)++] = '0';
        return;
    }
    char temp[32];
    int temp_index = 0;
    while (num > 0) {
        temp[temp_index++] = digits[num % base];
        num /= base;
    }
    for (int i = temp_index - 1; i >= 0; i--) {
        buffer[(*index)++] = temp[i];
    }
}

// void float_to_str(double num, char *buffer, int *index, int precision) {
//     if (num < 0) {
//         buffer[(*index)++] = '-';
//         num = -num;
//     }
//     int int_part = (int)num;
//     double frac_part = num - int_part;
//     int_to_str(int_part, buffer, index);
//     buffer[(*index)++] = '.';
//     for (int i = 0; i < precision; i++) {
//         frac_part *= 10;
//         int digit = (int)frac_part;
//         buffer[(*index)++] = '0' + digit;
//         frac_part -= digit;
//     }
//     // 去掉末尾的多余零
//     while (buffer[*index - 1] == '0' && buffer[*index - 2] != '.') {
//         (*index)--;
//     }
// }

void long_to_str(long long num, char *buffer, int *index) {
    if (num == 0) {
        buffer[(*index)++] = '0';
        return;
    }
    if (num < 0) {
        buffer[(*index)++] = '-';
        num = -num;
    }
    char temp[32];
    int temp_index = 0;
    while (num > 0) {
        temp[temp_index++] = (char)((num % 10) + '0');
        num /= 10;
    }
    for (int i = temp_index - 1; i >= 0; i--) {
        buffer[(*index)++] = temp[i];
    }
}
  
  // va_list 是一个类型，用于存储可变参数列表。
  // va_start初始化 va_list,使其指向可变参数的起始位置。
  // va_arg用于从可变参数列表中提取参数。需要指定参数的类型。
  // va_end清理 va_list，结束可变参数的使用

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
    char *str;
    int d;
    long ld;
    long long lld;
    short hd;
    char c;
    char buffer[1024];
    int index = 0;
    int precision = 6; // 默认精度为6

    for (; *fmt != '\0'; fmt++) {
        if (*fmt != '%') {
            out[index++] = *fmt;
            continue;
        }
        fmt++;
        if (*fmt == '.') {
            fmt++;
            precision = 0;
            while (*fmt >= '0' && *fmt <= '9') {
                precision = precision * 10 + (*fmt - '0');
                fmt++;
            }
        }
        switch (*fmt) {
            case 's':
                str = va_arg(ap, char *);
                while (*str) {
                    out[index++] = *str++;
                }
                break;
            case 'd':
                d = va_arg(ap, int);
                int_to_str(d, buffer, &index);
                for (int i = 0; buffer[i] != '\0'; i++) {
                    out[index++] = buffer[i];
                }
                break;
            case 'x':
                d = va_arg(ap, int);
                int_to_base_str(d, buffer, &index, 16);
                for (int i = 0; buffer[i] != '\0'; i++) {
                    out[index++] = buffer[i];
                }
                break;
            case 'o':
                d = va_arg(ap, int);
                int_to_base_str(d, buffer, &index, 8);
                for (int i = 0; buffer[i] != '\0'; i++) {
                    out[index++] = buffer[i];
                }
                break;
            // case 'f':
            //     {
            //         double f = va_arg(ap, double);
            //         float_to_str(f, buffer, &index, precision);
            //         for (int i = 0; buffer[i] != '\0'; i++) {
            //             out[index++] = buffer[i];
            //         }
            //     }
            //     break;
            case 'p':
                {
                    void *p = va_arg(ap, void *);
                    uintptr_t addr = (uintptr_t)p;
                    int_to_base_str(addr, buffer, &index, 16);
                    for (int i = 0; buffer[i] != '\0'; i++) {
                        out[index++] = buffer[i];
                    }
                }
                break;
            case 'c':
                c = (char)va_arg(ap, int);
                out[index++] = c;
                break;
            case 'l':
                fmt++;
                if (*fmt == 'd') {
                    ld = va_arg(ap, long);
                    long_to_str(ld, buffer, &index);
                    for (int i = 0; buffer[i] != '\0'; i++) {
                        out[index++] = buffer[i];
                    }
                }
                // else if (*fmt == 'f') {
                //     double lf = va_arg(ap, double);
                //     float_to_str(lf, buffer, &index, precision);
                //     for (int i = 0; buffer[i] != '\0'; i++) {
                //         out[index++] = buffer[i];
                //     }
                // } 
                else if (*fmt == 'l' && *(fmt + 1) == 'd') {
                    fmt++;
                    lld = va_arg(ap, long long);
                    long_to_str(lld, buffer, &index);
                    for (int i = 0; buffer[i] != '\0'; i++) {
                        out[index++] = buffer[i];
                    }
                }
                break;
            case 'h':
                fmt++;
                if (*fmt == 'd') {
                    hd = (short)va_arg(ap, int);
                    int_to_str(hd, buffer, &index);
                    for (int i = 0; buffer[i] != '\0'; i++) {
                        out[index++] = buffer[i];
                    }
                }
                break;
            default:
                out[index++] = '%';
                out[index++] = *fmt;
                break;
        }
    }
    out[index] = '\0';
    return index;
}

int sprintf(char *out, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    int val=vsprintf(out,fmt,args);
    va_end(args);
    return val;
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
