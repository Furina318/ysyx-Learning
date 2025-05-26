

#include <am.h>
#include <klib.h>
#include <klib-macros.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
static unsigned long int next = 1;

extern int rand(void) {
  // RAND_MAX assumed to be 32767
  next = next * 1103515245 + 12345;
  return (unsigned int)(next/65536) % 32768;
}

extern void srand(unsigned int seed) {
  next = seed;
}

extern int abs(int x) {
  return (x < 0 ? -x : x);
}

extern int atoi(const char* nptr) {
  int x = 0;
  while (*nptr == ' ') { nptr ++; }
  while (*nptr >= '0' && *nptr <= '9') {
    x = x * 10 + *nptr - '0';
    nptr ++;
  }
  return x;
}

#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
#endif

char *hbrk;

static void initialize() {
	hbrk = heap.start;
}

extern void *malloc(size_t size) {
	if(hbrk == NULL) {
		initialize();
	}
  
  size  = (size_t)ROUNDUP(size, 4);
  char *old = hbrk;
  hbrk += size;
  return old;
  // On native, malloc() will be called during initializaion of C runtime.
  // Therefore do not call panic() here, else it will yield a dead recursion:
  //   panic() -> putchar() -> (glibc) -> malloc() -> panic()
	
		/*
#if !(defined(__ISA_NATIVE__) && defined(__NATIVE_USE_KLIB__))
  //panic("Not implemented");
  size  = (size_t)ROUNDUP(size, 4);
  char *old = hbrk;
  hbrk += size;
  return old;
#endif
*/
		//printf("size = %d, addr->size = %d, addr = %d\n");
		//printf("Wrong malloc!\n");
  return NULL;
}

extern void free(void *ptr) {
}

#endif