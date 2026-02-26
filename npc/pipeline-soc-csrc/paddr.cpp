#include "../include/paddr.h"
#include "../include/common.h"
#include "../include/debug.h"
#include "../include/reg.h"
#include "../include/utils.h"
#include "../include/device/mmio.h"

#ifdef YSYXSOC
#include "VysyxSoCFull.h"
#include "../obj_dir/VysyxSoCFull___024root.h"
extern VysyxSoCFull *top;
#else
#include "Vysyx_25010030_npc.h"
#include "../obj_dir/Vysyx_25010030_npc___024root.h"
extern Vysyx_25010030_npc *top;
#endif


/********extern functions or variables********/
extern vluint64_t main_time;
// extern void ebreak(int station, int inst);
// extern NPCState npc_state;
extern void die();
/*********************************************/



uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};

//riscv指令集在线反汇编工具
//https://luplab.gitlab.io/rvcodecjs/#q=34179073&abi=false&isa=AUTO
static const uint32_t img [] = {
  0x00000413,     // li	s0,0
  0x00009117,     // auipc	sp,0x9
  0xffc10113,     // addi	sp,sp,-4 # 80009000 <_end>
  0x050d05a9,     // c.addi a1, 10 ; c.addi a0, 3         // a1=10 ; a0=3
  0x00100073,
  // // =============================== C拓展指令测试集 ================================//
  // 0x05a9,     // c.addi a1, 10        // a1=10
  // 0x050d,     // c.addi a0, 3         // a0=3
  // 0x55d9,     // c.li a1, -10         // a1=-10（补码0xfffffff6）
  // 0x4141,     // c.li ap, 16          // sp=16

  // 0x95aa,     // c.add a1, a0         // a1=-10+3=-7
  // 0x8d89,     // c.sub a1, a0         // a1=-7-3=-10
  // 0x852e,     // c.mv a0, a1          // a0=a1=-10
  // 0x05d1,     // c.addi a1, 20        // a1=a1+20=10
  // 0x0541,     // c.addi a0, 16        // a0=a0+16=6
  // 0x8de9,     // c.and a1, a0         // a1=10&6=2
  // 0x8dc9,     // c.or a1, a0          // a1=2|6=6
  // 0x8da9,     // c.xor a1, a0         // a1=6^6=0

  // 0x05a9,     // c.addi a1, 10        // a1=10
  // 0x058a,     // c.slli a1, 2         // a1=10<<2=40
  // 0x8189,     // c.srli a1, 2         // a1=40>>2=10
  // 0x55d9,     // c.li a1, -10         // a1=-10
  // 0x8589,     // c.srai a1, 2         // a1=-10>>2=-3
  
  // 0xa019,     // c.j 6                // pc+=6 
  // 0x0001,     // c.nop                // 跳过
  // 0x0001,     // c.nop                // 跳过
  // 0xe119,     // c.bnez a0, 6         // if(a0!=0) pc+=6
  // 0x0001,     // c.nop                // 跳过
  // 0x0001,     // c.nop                // 跳过
  // 0x4619,     // c.li a2, 6           // a2=6
  // 0x8d11,     // c.sub a0, a2         // a0=a0-a2=0
  // 0x2021,     // c.jal 8              // ra=pc+2 pc+=8

  // 0x9002,     // c.ebreak
  // 0x0001,     // c.nop                // 跳过
  // 0x0001,     // c.nop                // 跳过
  // 0x8082,     // c.jr ra              // pc -> c.ebreak

  // //=============================== 一般性测试用 ================================//
  // // 输出 'A' (ASCII码 65)
  // 0xa00007b7, // lui a5, 0x10000      // 设置内存地址高位（0x10000000）
  // 0x04100713, // addi a4, zero, 65    // a4 = 'A'的ASCII码
  // 0x00e78023, // sb a4, 0(a5)         // 将'A'写入地址0x10000000
  
  // // 输出 'B' (ASCII码 66)
  // 0xa00007b7, // lui a5, 0x10000      // 同一地址高位
  // 0x04200713, // addi a4, zero, 66    // a4 = 'B'的ASCII码
  // 0x00e78023, // sb a4, 1(a5)         // 将'B'写入地址0x10000001（下一个字节）
  
  // // 输出 'C' (ASCII码 67)
  // 0xa00007b7, // lui a5, 0x10000      // 同一地址高位
  // 0x04300713, // addi a4, zero, 67    // a4 = 'C'的ASCII码
  // 0x00e78023, // sb a4, 2(a5)         // 将'C'写入地址0x10000002（再下一个字节）
  
  // // 原代码中的其他指令（保持不变）
  // 0x100007b7, // lui a5, 268435456
  // 0x00a00713, // addi a4, zero, 10
  // 0x00e78023, // sb a4, 0(a5)
  // 0x00100073, // 系统调用/退出指令
};

uint8_t* guest_to_host(paddr_t paddr) { return pmem + paddr - CONFIG_MBASE; }   //0x8000_0000 -> pmem[0]
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

uint8_t mrom[CONFIG_SOC_MROM_SIZE] PG_ALIGN = {}; // 4KB MROM
uint8_t flash[CONFIG_SOC_FLASH_SIZE] PG_ALIGN = {}; // 16MB Flash
uint8_t psram[CONFIG_SOC_PSRAM_SIZE] PG_ALIGN = {};
uint8_t sdram[CONFIG_SOC_SDRAM_SIZE] PG_ALIGN = {};
uint8_t* soc_mrom_guest_to_host(paddr_t paddr) { return mrom + paddr - CONFIG_SOC_MROM_BASE; }
uint8_t* soc_flash_guest_to_host(paddr_t paddr) { return flash + paddr - CONFIG_SOC_FLASH_BASE; }
uint8_t* soc_psram_guest_to_host(paddr_t paddr) { return psram + paddr - CONFIG_SOC_PSRAM_BASE; }
uint8_t* soc_sdram_guest_to_host(paddr_t paddr) { return sdram + paddr - CONFIG_SOC_SDRAM_BASE; }

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

void host_write(void *addr, int len, word_t data) {
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

  #ifdef YSYXSOC
  printf("[npc]address = 0x%08x is out of bound of pmem [0x%08x, 0x%08x] at pc = 0x%08x  time = %ld\n", 
         addr, PMEM_LEFT, PMEM_RIGHT, top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IF_ID_pc, main_time);
  #else
  printf("[npc]address = 0x%08x is out of bound of pmem [0x%08x, 0x%08x] at pc = 0x%08x  time = %ld\n", 
         addr, PMEM_LEFT, PMEM_RIGHT, top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__IF_ID_pc, main_time);
  #endif

  npc_state.state=NPC_ABORT;
}

word_t pmem_r(paddr_t addr, int len) 
{
  if(likely(in_pmem(addr))) return host_read(guest_to_host(addr), len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

void pmem_w(paddr_t addr, int len, word_t data) 
{
  if(likely(in_pmem(addr)))
  {
    host_write(guest_to_host(addr), len, data);
    return;
  }  
  IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
  out_of_bound(addr);
}

void init_mem(void) 
{
  // Log("physical memory area [0x%08x, 0x%08x]", PMEM_LEFT, PMEM_RIGHT);
  #ifdef YSYXSOC
  Log("SoC MROM area [0x%08x, 0x%08x]", CONFIG_SOC_MROM_BASE, CONFIG_SOC_MROM_BASE + CONFIG_SOC_MROM_SIZE);
  Log("SoC FLASH area [0x%08x, 0x%08x]", CONFIG_SOC_FLASH_BASE, CONFIG_SOC_FLASH_BASE + CONFIG_SOC_FLASH_SIZE);
  Log("SoC PSRAM area [0x%08x, 0x%08x]", CONFIG_SOC_PSRAM_BASE, CONFIG_SOC_PSRAM_BASE + CONFIG_SOC_PSRAM_SIZE);
  Log("SoC SDRAM area [0x%08x, 0x%08x]", CONFIG_SOC_SDRAM_BASE, CONFIG_SOC_SDRAM_BASE + CONFIG_SOC_SDRAM_SIZE);

  /* Load built-in image. */
  // memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  // memset(mrom, 0, CONFIG_SOC_MROM_SIZE);
  // memcpy(soc_mrom_guest_to_host(CONFIG_SOC_MROM_BASE), img, sizeof(img));
  memset(flash, 0, CONFIG_SOC_FLASH_SIZE);
  memcpy(soc_flash_guest_to_host(CONFIG_SOC_FLASH_BASE), img, sizeof(img));
  #else
  memset(pmem, 0, CONFIG_MSIZE);
  Log("physical memory area [0x%08x, 0x%08x]", PMEM_LEFT, PMEM_RIGHT);
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));
  #endif
}
