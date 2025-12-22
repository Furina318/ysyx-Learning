#include <am.h>
#include <npc.h>
#include <riscv/riscv.h>

void __am_uart_rx(AM_UART_RX_T *cfg){
        cfg->data = inb(SERIAL_PORT);
}
