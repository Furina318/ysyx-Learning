#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};
    printf("%d\n",c->mcause);
    switch (c->mcause) {
      case 0:  ev.event = EVENT_YIELD; break;
      default: ev.event = EVENT_ERROR; break;
    }
    //user_handler是一个函数指针，指向一个函数，该函数接受一个Event类型的参数和一个Context类型的参数，并返回一个Context类型的指针.
    //是cte_init函数中注册的异常处理函数
    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry       内联汇编，异常处理的入口地址设置为__am_asm_trap
  //%0是内联汇编中的操作数占位符，他表示内联汇编指令中的第一个操作数。在这里的内联汇编指令中，%0用来引用第一个输入操作数，即"r"(__am_asm_trap)中的__am_asm_trap
  //"r"约束表示将一个寄存器作为输入操作数
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
#ifdef __riscv_e
  asm volatile("li a5, -1; ecall");
#else
  asm volatile("li a7, -1; ecall");
#endif
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
