#include <am.h>
#include "../ysyxsoc/include/ysyxsoc.h"
#include "../riscv.h"

void __am_input_uart(AM_UART_RX_T *cfg)
{
	char data = inb(UART_RX);
	if(data != 0xff) {
		cfg->data = data;
	} else {
		cfg->data = 0xff;
	}
}
