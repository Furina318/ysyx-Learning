#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "../ysyxsoc/include/ysyxsoc.h"

extern char _heap_start;

extern char _data, _edata, _data_load;
extern char _bss_start, _ebss;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

void halt(int code) {
  ysyxsoc_trap(code);
  while (1);
}

void _trm_init() {
  size_t data_len = (size_t)(&_edata - &_data);
  memcpy(&_data, &_data_load, data_len);
  size_t bss_len = (size_t)(&_ebss - &_bss_start);
  memcpy(&_bss_start, 0, bss_len);
  int ret = main(mainargs);
  halt(ret);
}