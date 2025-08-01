#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "../ysyxsoc/include/ysyxsoc.h"

extern char _heap_start;

extern char _data_start, _data_end, _data_start_lma;
extern char _bss_start, _bss_end;
extern char _stack_top;
int main(const char *args);

extern char _sram_start;
#define SRAM_SIZE (8 * 1024)
#define SRAM_END  ((uintptr_t)&_sram_start + SRAM_SIZE)

Area heap = RANGE(&_heap_start, SRAM_END);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  ysyxsoc_trap(code);
  while (1);
}

void _trm_init() {
  // memcpy(&_data_start, &_data_start_lma, (&_data_end - &_data_start));
  // memcpy(&_bss_start, 0, (&_bss_end - &_bss_start));
  char *src = &_data_start_lma;
  char *dst = &_data_start;
  char *end = &_data_end;
  while (dst < end){
    *dst++ = *src++;
  }
  int ret = main(mainargs);
  halt(ret);
}