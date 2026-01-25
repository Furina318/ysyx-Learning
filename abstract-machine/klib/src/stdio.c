// #include <am.h>
// #include <klib.h>
// #include <klib-macros.h>
// #include <stdarg.h>

// #if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// // va_list 是一个类型，用于存储可变参数列表。
// // va_start初始化 va_list,使其指向可变参数的起始位置。
// // va_arg用于从可变参数列表中提取参数。需要指定参数的类型。
// // va_end清理 va_list，结束可变参数的使用
// // buf数组不要太大！！！！！！！！！不然内容会全存在数组而没有打印出来

// void int_to_str(int num, char *buffer, int *index, int *is_negative) {
//     *is_negative = 0;
//     if (num == 0) {
//         buffer[(*index)++] = '0';
//         return;
//     }
    
//     char temp[32];
//     int temp_index = 0;
//     *is_negative = (num < 0);
//     unsigned int n = (unsigned int)(*is_negative ? -num : num);
    
//     while (n > 0) {
//         temp[temp_index++] = (char)((n % 10) + '0');
//         n /= 10;
//     }
    
//     // 反向复制数字部分
//     for (int i = temp_index - 1; i >= 0; i--) {
//         buffer[(*index)++] = temp[i];
//     }
// }

// void int_to_base_str(unsigned int num, char *buffer, int *index, int base) {
//     const char digits[] = "0123456789abcdef";
//     if (num == 0) {
//         buffer[(*index)++] = '0';
//         return;
//     }
//     char temp[32];
//     int temp_index = 0;
//     while (num > 0) {
//         temp[temp_index++] = digits[num % base];
//         num /= base;
//     }
//     for (int i = temp_index - 1; i >= 0; i--) {
//         buffer[(*index)++] = temp[i];
//     }
// }

// void long_to_str(long long num, char *buffer, int *index) {
//     if (num == 0) {
//         buffer[(*index)++] = '0';
//         return;
//     }
//     if (num < 0) {
//         buffer[(*index)++] = '-';
//         num = -num;
//     }
//     char temp[32];
//     int temp_index = 0;
//     while (num > 0) {
//         temp[temp_index++] = (char)((num % 10) + '0');
//         num /= 10;
//     }
//     for (int i = temp_index - 1; i >= 0; i--) {
//         buffer[(*index)++] = temp[i];
//     }
// }

// // int printf(const char *fmt, ...) {
// //   panic("Not implemented");
// // }

// int vsprintf(char *out, const char *fmt, va_list ap) {
//     char *str;
//     int d;
//     long ld;
//     long long lld;
//     // short hd;
//     char c;
//     char buffer[224] = {0};  // 初始化为零
//     int index = 0;
//     int buffer_index;  // 添加独立的缓冲区索引
//     int precision = 6;

//     for (; *fmt != '\0'; fmt++) {
//         if(*fmt == '\\'){
//             fmt++;
//             if(*fmt == '\0') break;
//             switch(*fmt){
//                 case 'n': out[index++]='\n';break;
//                 case 't': out[index++]='\t';break;
//                 case 'r': out[index++]='\r';break;
//                 case '\\': out[index++]='\\';break;
//                 default: out[index++]=*fmt;break;
//             }
//         }
//         if (*fmt != '%') {
//             out[index++] = *fmt;
//             continue;
//         }
//         fmt++;//跳过“%”
        
//         int width = 0;
//         int zero_pad = 0;
//         //解析标志
//         if(*fmt == '0'){
//             zero_pad = 1;
//             fmt++;
//         }
//         //解析宽度
//         while(*fmt >= '0' && *fmt <= '9') {
//             width = width * 10 + (*fmt - '0');
//             fmt++;
//         }

//         // 处理精度
//         if (*fmt == '.') {
//             fmt++;
//             precision = 0;
//             while (*fmt >= '0' && *fmt <= '9') {
//                 precision = precision * 10 + (*fmt - '0');
//                 fmt++;
//             }
//         }
        
//         buffer_index = 0;  // 重置缓冲区索引
//         switch (*fmt) {
//             case 's':
//                 str = va_arg(ap, char *);
//                 while (*str) {
//                     out[index++] = *str++;
//                 }
//                 break;
//             case 'd':
//                 d = va_arg(ap, int);
//                 char num_buffer[32];  // 临时缓冲区
//                 int num_index = 0;
//                 int is_negative = 0;
//                 int_to_str(d, num_buffer, &num_index, &is_negative);
//                 int total_length = num_index + (is_negative ? 1 : 0);
//                 int pad = width - total_length;
//                 if (pad < 0) pad = 0;
//                 if (zero_pad) {
//                     if(is_negative) out[index++] = '-';
//                     //添加前导零
//                     for (int i = 0; i < pad; i++) out[index++] = '0';
//                     //添加数字
//                     for (int i = 0; i < num_index; i++) out[index++] = num_buffer[i];
//                 }else{
//                     //添加空格
//                     for (int i = 0; i < pad; i++) out[index++] = ' ';
//                     if(is_negative) out[index++] = '-';
//                     //添加数字
//                     for (int i = 0; i < num_index; i++) out[index++] = num_buffer[i];
//                 }
//                 break;
//             case 'x':
//                 d = va_arg(ap, unsigned int);  // 改为 unsigned int
//                 int_to_base_str(d, buffer, &buffer_index, 16);
//                 for (int i = 0; i < buffer_index; i++) {
//                     out[index++] = buffer[i];
//                 }
//                 break;
//             case 'o':
//                 d = va_arg(ap, unsigned int);  // 改为 unsigned int
//                 int_to_base_str(d, buffer, &buffer_index, 8);
//                 for (int i = 0; i < buffer_index; i++) {
//                     out[index++] = buffer[i];
//                 }
//                 break;
//             case 'p':
//                 {
//                     void *p = va_arg(ap, void *);
//                     uintptr_t addr = (uintptr_t)p;
//                     buffer_index = 0;
//                     int_to_base_str(addr, buffer, &buffer_index, 16);
//                     out[index++] = '0';
//                     out[index++] = 'x';
//                     for (int i = 0; i < buffer_index; i++) {
//                         out[index++] = buffer[i];
//                     }
//                 }
//                 break;
//             case 'c':
//                 c = (char)va_arg(ap, int);
//                 out[index++] = c;
//                 break;
//             case 'l':
//                 fmt++;
//                 if (*fmt == 'd') {
//                     ld = va_arg(ap, long);
//                     buffer_index = 0;
//                     long_to_str(ld, buffer, &buffer_index);
//                     for (int i = 0; i < buffer_index; i++) {
//                         out[index++] = buffer[i];
//                     }
//                 }
//                 else if (*fmt == 'l' && *(fmt + 1) == 'd') {
//                     fmt++;
//                     lld = va_arg(ap, long long);
//                     buffer_index = 0;
//                     long_to_str(lld, buffer, &buffer_index);
//                     for (int i = 0; i < buffer_index; i++) {
//                         out[index++] = buffer[i];
//                     }
//                 }
//                 break;
//             // case 'h':
//             //     fmt++;
//             //     if (*fmt == 'd') {
//             //         hd = (short)va_arg(ap, int);
//             //         buffer_index = 0;
//             //         int_to_str(hd, buffer, &buffer_index);
//             //         for (int i = 0; i < buffer_index; i++) {
//             //             out[index++] = buffer[i];
//             //         }
//             //     }
//             //     break;
//             default:
//                 out[index++] = '%';
//                 out[index++] = *fmt;
//                 break;
//         }
//     }
//     out[index] = '\0';
//     return index;
// }

// // void putstr(const char *str){
// //     while(*str){
// //         putch(*str++);
// //     }
// // }

// int printf(const char *fmt, ...){
//     char buf[248];
//     va_list args;
//     va_start(args,fmt);
//     int val = vsprintf(buf,fmt,args);
//     putstr(buf);
//     va_end(args);
//     return val;
// }

// int sprintf(char *out, const char *fmt, ...) {
//     va_list args;
//     va_start(args, fmt);
//     int val=vsprintf(out,fmt,args);
//     va_end(args);
//     return val;
// }

// int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
//     char buffer[224]; // 临时缓冲区
//     int len = vsprintf(buffer, fmt, ap); // 先格式化到临时缓冲区
//     if (len >= n) len = n - 1; // 截断超出部分
//     memcpy(out, buffer, len); // 复制到输出缓冲区
//     out[len] = '\0'; // 确保字符串以\0结尾
//     return len;
// }

// int snprintf(char *out, size_t n, const char *fmt, ...) {
//     va_list args;
//     va_start(args, fmt);
//     int len = vsnprintf(out, n, fmt, args);
//     va_end(args);
//     return len;
// }

// #endif
#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdbool.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  int count = 0;

  for (; *fmt != '\0'; fmt++) {
    if (*fmt != '%') {
      putch(*fmt);
      count++;
      continue;
    }

    fmt++;
    if (*fmt == '\0') {
      putch('%');
      count++;
      break;
    }

    char pad = ' ';
    int width = 0;
    bool is_left_align = false;

    if (*fmt == '-') {
      is_left_align = true;
      fmt++;
    }

    if (*fmt == '0') {
      pad = '0';
      fmt++;
    }

    while (*fmt >= '0' && *fmt <= '9') {
      width = width * 10 + (*fmt - '0');
      fmt++;
      if (*fmt == '\0') {
        putch('%');
        count++;
        break;
      }
    }

    switch (*fmt) {
      case 'd': {
        int num = va_arg(args, int);
        char buffer[128] = {0};
        int i = 0;
        int len = 0;
        bool is_negative = false;

        long long num_ll = (long long)num;
        if (num_ll < 0) {
          is_negative = true;
          num_ll = -num_ll;
        }

        if (num_ll == 0) {
          buffer[i++] = '0';
        } else {
          while (num_ll > 0) {
            buffer[i++] = (num_ll % 10) + '0';
            num_ll /= 10;
          }
        }
        len = i;

        int pad_count = (width > len + (is_negative ? 1 : 0)) ? 
                        (width - len - (is_negative ? 1 : 0)) : 0;

        if (!is_left_align) {
          if (is_negative) {
            putch('-');
            count++;
          }
          for (int p = 0; p < pad_count; p++) {
            putch(pad);
            count++;
          }
        } else {
          if (is_negative) {
            putch('-');
            count++;
          }
        }

        while (i > 0) {
          putch(buffer[--i]);
          count++;
        }

        if (is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(' ');
            count++;
          }
        }
        break;
      }

      case 'x':
      case 'X': {
        unsigned int num = va_arg(args, unsigned int);
        char buffer[128] = {0};
        int i = 0;
        int len = 0;
        char case_char = (*fmt == 'X') ? 'A' : 'a';

        if (num == 0) {
          buffer[i++] = '0';
        } else {
          while (num > 0) {
            int digit = num % 16;
            buffer[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + case_char);
            num /= 16;
          }
        }
        len = i;

        int actual_width = (width == 0) ? 8 : width;
        int pad_count = (actual_width > len) ? (actual_width - len) : 0;

        if (!is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(pad);
            count++;
          }
        }

        while (i > 0) {
          putch(buffer[--i]);
          count++;
        }

        if (is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(' ');
            count++;
          }
        }
        break;
      }

      case 's': {
        const char *str = va_arg(args, const char *);
        if (str == NULL) {
          str = "(null)";
        }
        int str_len = 0;
        while (str[str_len] != '\0') {
          str_len++;
        }
        int pad_count = (width > str_len) ? (width - str_len) : 0;

        if (!is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(pad);
            count++;
          }
        }

        while (*str != '\0') {
          putch(*str++);
          count++;
        }

        if (is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(' ');
            count++;
          }
        }
        break;
      }

      case 'c': {
        char c = (char)va_arg(args, int);
        int pad_count = (width > 1) ? (width - 1) : 0;

        if (!is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(pad);
            count++;
          }
        }

        putch(c);
        count++;

        if (is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(' ');
            count++;
          }
        }
        break;
      }

      case 'p': {
        void *ptr = va_arg(args, void *);
        uintptr_t addr = (uintptr_t)ptr;
        char buffer[128] = {0};
        int i = 0;
        int len = 2;

        if (addr == 0) {
          buffer[i++] = '0';
        } else {
          while (addr > 0) {
            int digit = addr % 16;
            buffer[i++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
            addr /= 16;
          }
        }
        len += i;

        int pad_count = (width > len) ? (width - len) : 0;

        if (!is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(pad);
            count++;
          }
        }

        putch('0');
        putch('x');
        count += 2;

        while (i > 0) {
          putch(buffer[--i]);
          count++;
        }

        if (is_left_align) {
          for (int p = 0; p < pad_count; p++) {
            putch(' ');
            count++;
          }
        }
        break;
      }

      case '%': {
        putch('%');
        count++;
        break;
      }

      default: {
        putch('%');
        putch(*fmt);
        count += 2;
        break;
      }
    }
  }

  va_end(args);
  return count;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

void inttostr(int num, char *str, int base) {
    int i = 0;
    int is_negative = 0;
    if (num < 0 && base == 10) {
      is_negative = 1;
      num = -num;
    }
    if (num == 0) {
      str[i++] = '0';
    }
    while (num != 0) {
      int rem = num % base;
      str[i++] = (rem > 9)? (rem - 10) + 'a' : rem + '0';
      num = num / base;
    }
    if (is_negative) {
      str[i++] = '-';
    }
    str[i] = '\0';

    int start = 0;
    int end = i - 1;
    while (start < end) {
      char temp = str[start];
      str[start] = str[end];
      str[end] = temp;
      start++;
      end--;
    }
}

int sprintf(char *out, const char *fmt, ...) {
  //panic("Not implemented");
  va_list args;
  va_start(args, fmt);
  int temp = 0;
  for(int i = 0; fmt[i] != '\0'; i++) {
    if(fmt[i] == '%') {
      i++;
      switch (fmt[i]) {
        case 's':{
          char *str = va_arg(args, char *);
          int len = strlen(str);
          for(int j = 0; j < len; j++) {
            out[temp] = str[j];
            temp++;
          }
          break;
        }
        case 'd': {
          int num = va_arg(args, int);
          char num_str[128];
          inttostr(num, num_str, 10);
          int len = strlen(num_str);
          for (int j = 0; j < len; j++) {
            out[temp++] = num_str[j];
          }
          break;
        }
        default:{
          out[temp++] = '%';
          out[temp++] = fmt[i];
          break;
        }
      }
    }
    else {
      out[temp] = fmt[i];
      temp++;
    }
  }
  out[temp] = '\0';
  va_end(args);
  return temp;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  
  int total = 0;          // 总字符数（不包括终止符）
  char *buf = out;
  size_t left = n;        // 剩余可用空间
  
  // 确保至少能写入终止符
  if (left > 0 && buf) *buf = '\0';
  
  for (int i = 0; fmt[i]; i++) {
    if (fmt[i] != '%') {
      // 普通字符
      total++;
      if (left > 1) {
        *buf++ = fmt[i];
        left--;
      }
      continue;
    }
    
    // 处理格式控制
    i++;
    switch (fmt[i]) {
      case 'd': {
        // 处理整数
        int num = va_arg(args, int);
        char temp[20];
        int len = 0;
        int neg = 0;
        unsigned int val;
        
        if (num < 0) {
          neg = 1;
          val = (unsigned int)(-num);
        } else {
          val = (unsigned int)num;
        }
        
        // 数字转字符串（逆序）
        do {
          temp[len++] = '0' + (val % 10);
          val /= 10;
        } while (val > 0);
        
        if (neg) temp[len++] = '-';
        
        // 计入总长度
        total += len;
        
        // 写入缓冲区（反转）
        if (left > 1) {
          int write_len = len < (int)(left - 1) ? len : (int)(left - 1);
          for (int j = 0; j < write_len; j++) {
            *buf++ = temp[len - 1 - j];
          }
          left -= write_len;
        }
        break;
      }
      
      case 's': {
        // 处理字符串
        const char *str = va_arg(args, const char *);
        if (!str) str = "(null)";
        int len = strlen(str);
        total += len;
        
        if (left > 1) {
          int copy_len = len < (int)(left - 1) ? len : (int)(left - 1);
          memcpy(buf, str, copy_len);
          buf += copy_len;
          left -= copy_len;
        }
        break;
      }
      
      case 'c': {
        // 处理字符
        char c = (char)va_arg(args, int);
        total++;
        if (left > 1) {
          *buf++ = c;
          left--;
        }
        break;
      }
      
      case '%': {
        // 处理百分号
        total++;
        if (left > 1) {
          *buf++ = '%';
          left--;
        }
        break;
      }
      
      default: {
        // 未知格式符，原样输出
        total += 2;
        if (left > 1) {
          *buf++ = '%';
          left--;
          if (left > 1) {
            *buf++ = fmt[i];
            left--;
          }
        }
        break;
      }
    }
  }
  
  // 添加终止符
  if (left > 0 && buf) *buf = '\0';
  
  va_end(args);
  return total;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif