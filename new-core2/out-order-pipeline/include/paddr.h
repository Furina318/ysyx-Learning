#ifndef _PADDR_H__
#define _PADDR_H__

#include "common.h"

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

/* convert the guest physical address in the guest program to host virtual address in NEMU */
uint8_t* guest_to_host(paddr_t paddr);
/* convert the host virtual address in NEMU to guest physical address in the guest program */
paddr_t host_to_guest(uint8_t *haddr);

// static inline bool in_pmem(paddr_t addr) {
//   return addr - CONFIG_MBASE < CONFIG_MSIZE;
// }

// word_t paddr_read(paddr_t addr, int len);
// void paddr_write(paddr_t addr, int len, word_t data);
void init_mem();
void init_mtrace();
void close_mtrace();
void mtrace_log(char type,paddr_t addr,word_t data,int len);
void mtrace_filter_output(paddr_t start_addr, paddr_t end_addr, bool filter_en, uint32_t filter_data);
void init_btrace();
void close_btrace();
void btrace_log(uint64_t cycle, uint32_t pc, uint32_t inst,
                uint32_t pred_dnpc, uint32_t dnpc,
                int taken, int is_jal, int is_jalr, int is_call,
                int is_ret, int is_indirect, int is_c_inst);
word_t pmem_r(paddr_t addr, int len);
void pmem_w(paddr_t addr, int len, word_t data);

// word_t pmem_read(paddr_t raddr, int len);       // 内存读取函数
// void pmem_write(paddr_t waddr, word_t wdata, int len);  // 内存写入函数

#endif
