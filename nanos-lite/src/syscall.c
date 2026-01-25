#include <common.h>
#include <memory.h>
#include "syscall.h"

#ifdef STRACE
#define SYSCALL_TRACE(...) Log(__VA_ARGS__)
#else
#define SYSCALL_TRACE(...)
#endif

intptr_t sys_yield(){
  yield();
  return 0;
}

void sys_exit(int code){
  halt(code);
}

size_t sys_write(int fd, const void *buf, size_t len) {
  // 仅处理stdout(1)和stderr(2)
  assert(fd == 1 || fd == 2);

  if (len == 0 || buf == NULL) {
    return 0;
  }

  const char *data = (const char *)buf;
  for (size_t i = 0; i < len; i++) {
    putch(data[i]); 
  }

  return len; //返回成功写入字节数
}

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; // a7 or a5
  a[1] = c->GPR2; // a0
  a[2] = c->GPR3; // a1
  a[3] = c->GPR4; // a2

  switch (a[0]) {
    case SYS_yield:  
      SYSCALL_TRACE("syscall: yield");
      c->GPRx = sys_yield();
      break;
    case SYS_exit:  
      SYSCALL_TRACE("syscall: exit (%d)", a[1]);
      sys_exit(a[1]);           
      break;
    case SYS_write:
      SYSCALL_TRACE("syscall: write (fd=%d, buf=%p, len=%d)", a[1], (void*)a[2], a[3]);
      c->GPRx = sys_write(a[1], (const void*)a[2], a[3]);
      break;
    case SYS_brk:
      SYSCALL_TRACE("syscall: brk (addr=%p)", (void*)a[1]);
      c->GPRx = mm_brk(a[1]);
      break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
