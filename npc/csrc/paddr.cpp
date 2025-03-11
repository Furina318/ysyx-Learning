#include "../include/paddr.h"
#include "Vrv32e.h"
#include "../obj_dir/Vrv32e___024root.h"
#include "../include/common.h"
#include "../include/debug.h"
#include "../include/reg.h"


/********extern functions or variables********/
extern Vrv32e *top;
extern vluint64_t main_time;
/*********************************************/



uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
static const word_t img [] = {
  0xffc10113,    //addi	sp,sp,-4
  0x06400593,    //li	  a1,100
  0x06458613,    //addi	a2,a1,100
  0x0c860693,    //addi	a3,a2,200
  0xed468713,    //addi	a4,a3,-300
  0xe7070793,    //addi	a5,a4,-400
  0x80178813,    //addi	a6,a5,-2047
  0x7fa80893,    //addi	a7,a6,2042
  0x7fa88893,    //addi	a7,a7,2042
  0x00100073,    //ebreak
  0x06458613,    //addi	a2,a1,100
  0x0c860693,    //addi	a3,a2,200
  0x00000297,    // auipc t0,0
  0x00000513,    //	li	a0,0
  0x00100073,    // ebreak 
  0xdeadbeef,    // some data
};



uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }   //0x8000_0000 -> pmem[0]
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }


word_t host_read(void *addr, int len) 
{
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr;)
    default: assert(0); return 0;
  }
}

static void host_write(void *addr, int len, word_t data) {
  switch (len) {
    case 1: *(uint8_t  *)addr = data; return;
    case 2: *(uint16_t *)addr = data; return;
    case 4: *(uint32_t *)addr = data; return;
    IFDEF(CONFIG_ISA64, case 8: *(uint64_t *)addr = data; return;)
    default: assert(0);
  }
}

static inline bool in_pmem(paddr_t addr) {
  return (addr - CONFIG_MBASE < CONFIG_MSIZE);
}

static inline void out_of_bound(paddr_t addr) {
  regs_display();
  panic("address = 0x%08x is out of bound of pmem [0x%08x, 0x%08x] at pc = 0x%08x  time = %ld", 
         addr, PMEM_LEFT, PMEM_RIGHT, top->rootp->rv32e__DOT__pc_now, main_time);
}

word_t pmem_r(paddr_t addr, int len) 
{
  if(in_pmem(addr)) return host_read(guest_to_host(addr), len);
  out_of_bound(addr);
  return 0;
}

void pmem_w(paddr_t addr, int len, word_t data) 
{
  if(in_pmem(addr))
  {
    host_write(guest_to_host(addr), len, data);
    return;
  }  
  out_of_bound(addr);
}

void init_mem(void) 
{
  memset(pmem, 0, CONFIG_MSIZE);
  Log("physical memory area [0x%08x, 0x%08x]", PMEM_LEFT, PMEM_RIGHT);

  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
}
