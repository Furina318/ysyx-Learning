#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "../ysyxsoc/include/ysyxsoc.h"

extern char _heap_start;

extern char _text_lma, _text, _etext;
extern char _rodata_lma, _rodata, _erodata;
extern char _data_lma, _data, _edata;
extern char _bss, _ebss;
extern char _stack_top;
int main(const char *args);

extern char _sram_start;
#define SRAM_SIZE (8 * 1024)
#define SRAM_END  ((uintptr_t)&_sram_start + SRAM_SIZE)

Area heap = RANGE(&_heap_start, SRAM_END);
static const char mainargs[MAINARGS_MAX_LEN] = MAINARGS_PLACEHOLDER; // defined in CFLAGS

void putch(char ch) {
	// if(*(volatile char *)UART_LCR == 0x03){
	// 	while(!(*(volatile char *)UART_LSR & 0x20));
	// }
	// outb(UART_TX, ch);
  while ((inb(UART_LSR) & 0x20) == 0);//等待发送缓冲区空
  outb(UART_TX, ch);
}

static void uart_init(){
  unsigned int divisor = 1;
	uint32_t lcr = 0x03;//8位数据位，无校验

	outb(UART_LCR, 0x80 | lcr); //LCR寄存器最高位，使能分频系数寄存器
	outb(UART_MSB, 0xff & (divisor >> 8));//写入分频系数
	outb(UART_LSB, 0xff & divisor); 
	outb(UART_LCR, lcr); //恢复LCR寄存器的值，关闭分频系数寄存器，可正常收发数据
  // uint32_t divisor = (uint32_t)(50000000 / (baud_rate * 16));
	// outb(UART_LCR, 0x80 | inb(UART_LCR)); // enable divisor latch
	// outb(UART_MSB, 0xff & (divisor >> 8));
	// outb(UART_LSB, 0xff & divisor); 
	// outb(UART_LCR, inb(UART_LCR) & 0x7f); // resume	
}

void halt(int code) {
  ysyxsoc_trap(code);
  while (1);
}

void ysyx_show(){
	// TODO:
	// mvendorid - 从中读出ysyx的ASCII码, 即0x79737978(厂商ID寄存器)(CSR地址：0xF11)
	// marchid - 从中读出学号数字部分的十进制表示, 学号为ysyx_25010030, 则读出25010030, 即0x17d9f6e(架构ID寄存器)(CSR地址：0xF12)
	uint32_t mvendorid, marchid;
	uint32_t temp, index = 0;
	char buf[10];
	asm volatile("csrr %0, mvendorid" : "=r"(mvendorid));
	asm volatile("csrr %0, marchid" : "=r"(marchid));
	for(int i = 3; i >= 0; i--){
		putch((char)((mvendorid >> i * 8) & 0xff));
	}
	temp = marchid;
	while(temp > 0){
		buf[index++] = (temp % 10) + '0';
		temp /= 10;
	}
	for(int i = index - 1; i >= 0; i--) putch(buf[i]);
	putch('\n');
}

void _trm_init() {
  uart_init();

  char *src = &_data_lma;
  char *dst = &_data;
  while(dst < &_edata)
	*dst++ = *src++;

  int ret = main(mainargs);
  halt(ret);
}