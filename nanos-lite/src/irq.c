#include <common.h>
#include "syscall.h"

// extern void do_syscall(Context *c);

static Context* do_event(Event e, Context* c) {
  switch (e.event) {
    case EVENT_YIELD  : 
      // Log("event: YIELD"); 
      break;
    case EVENT_SYSCALL: 
      // Log("event: EVENT_SYSCALL"); 
      do_syscall(c); 
      break;
    default: panic("Unhandled event ID = %d", e.event);
  }

  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
