#include <memory.h>
#include <proc.h>

static void *pf = NULL;

void* new_page(size_t nr_page) {
  // return NULL;
  void *old = pf;
  memset(old, 0, nr_page * PGSIZE);
  pf += nr_page * PGSIZE;
  return old;
}

#ifdef HAS_VME
static void* pg_alloc(int n) {
  // return NULL;
  return new_page(n / PGSIZE);
}
#endif

void free_page(void *p) {
  panic("not implement yet");
}

/* The brk() system call handler. */
int mm_brk(uintptr_t brk) {
  if (current->max_brk >= brk) return 0;
  while (current->max_brk < brk) {
    current->max_brk += PGSIZE;
  }
  return 0;
}

void init_mm() {
  pf = (void *)ROUNDUP(heap.start, PGSIZE);
  Log("free physical pages starting from %p", pf);

#ifdef HAS_VME
  vme_init(pg_alloc, free_page);
#endif
}
