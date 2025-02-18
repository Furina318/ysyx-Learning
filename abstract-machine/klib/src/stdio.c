#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

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

// va_list 是一个类型，用于存储可变参数列表。
// va_start初始化 va_list,使其指向可变参数的起始位置。
// va_arg用于从可变参数列表中提取参数。需要指定参数的类型。
// va_end清理 va_list，结束可变参数的使用
int sprintf(char *out, const char *fmt, ...) {
// 自定义的简化版 sprintf
  va_list args;
  va_start(args,fmt); // 初始化可变参数列表
  int index = 0; // 目标字符串的当前写入位置

  while(*fmt){
      if(*fmt=='%') {
          fmt++;//跳过'%'
          switch(*fmt){
              case'd':{//处理整数
                  int num=va_arg(args,int);
                  int_to_str(num,out,&index);//将整数转换为字符串
                  break;
              }
              case's':{//处理字符串
                  char *s=va_arg(args,char *);
                  while(*s){
                      out[index++]=*s++; // 逐个字符复制
                  }
                  break;
              }
              case 'c': { // 处理字符
                  char c = (char)va_arg(args, int);
                  out[index++] = c;
                  break;
              }
              case '%': { // 处理 '%' 字符本身
                  out[index++] = '%';
                  break;
              }
              default: {
                  // 不支持的格式符，直接写入
                  out[index++] = '%';
                  out[index++] = *fmt;
                  break;
              }
          }
      } else {
          out[index++] = *fmt; // 普通字符直接复制
      }
      fmt++; // 移动到下一个字符
  }

  out[index] = '\0'; // 字符串结尾
  va_end(args); // 清理可变参数列表

  return index; // 返回写入的字符数
}


int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
