#include "../include/paddr.h"
#include "../include/common.h"
#include "../include/debug.h"
#include "../include/reg.h"
#include "../include/utils.h"
#include "../include/device/mmio.h"

#ifdef YSYXSOC
#include "VysyxSoCFull.h"
#include "../../obj_dir/VysyxSoCFull___024root.h"
extern VysyxSoCFull *top;
#else
#include "Vysyx_25010030_npc.h"
#include "../../obj_dir/Vysyx_25010030_npc___024root.h"
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
         addr, PMEM_LEFT, PMEM_RIGHT, top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_pc, main_time);
  #else
  printf("[npc]address = 0x%08x is out of bound of pmem [0x%08x, 0x%08x] at pc = 0x%08x  time = %ld\n", 
         addr, PMEM_LEFT, PMEM_RIGHT, top->rootp->ysyx_25010030_npc__DOT__cpu__DOT__ifu_pc, main_time);
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
