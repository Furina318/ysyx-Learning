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
  // 测试1：mul 有符号乘法 (10 * 3 = 30)
  0xa00007b7, // lui a5, 0x10000      // a5 = 0x10000000（目标内存基地址）
  0x00a00613, // addi a2, zero, 10    // a2 = 被乘数=10
  0x00300593, // addi a1, zero, 3     // a1 = 乘数=3
  0x02b606b3, // mul a3, a2, a1       // a3 = 10 * 3 = 30（有符号乘法）
  0x02f68693, // addi a3, a3, 47      // 30 + 47 = 77 → ASCII 'M' 
  0x00d78023, // sb a3, 0(a5)         
  
  // 测试2：mul 负数乘法 (-10 * 3 = -30)
  0xff600613, // addi a2, zero, -10   // a2 = 被乘数=-10（补码：0xfffffff6）
  0x00300593, // addi a1, zero, 3     // a1 = 乘数=3
  0x02b606b3, // mul a3, a2, a1       // a3 = -10 * 3 = -30（有符号乘法）
  0x07368693, // addi a3, a3, 115     // -30 + 115 = 85 → ASCII 'U'
  0x00d78023, // sb a3, 0(a5)         

  // 测试3：mulhu 无符号乘法高位 (0xFFFF * 0xFFFF = 0xFFFE0001，高位=0xFFFE)
  0xfff00613, // addi a2, zero, -1    // a2 = 0xFFFF（无符号值65535）
  0xfff00593, // addi a1, zero, -1    // a1 = 0xFFFF（无符号值65535）
  0x02b63733, // mulhu a4, a2, a1     // a4 = 高位结果=0xFFFE（65534）
  0xf4e70713, // addi a4, a4, -178    // 65534 - 178 = 65356 → 取低8位=0x4C → ASCII 'L'
  0x00e78023, // sb a4, 0(a5)   
  
  // 测试4：mulh 有符号乘法高位 (-2 * -3 = 6，32位无高位，高位=0)
  0xffe00613, // addi a2, zero, -2    // a2 = 被乘数=-2
  0xffd00593, // addi a1, zero, -3    // a1 = 乘数=-3
  0x02b61733, // mulh a4, a2, a1      // a4 = 高位结果=0（6的32位高位为0）
  0x04f70713, // addi a4, a4, 79      // 0 + 79 = 79 → ASCII 'O'
  0x00e78023, // sb a4, 0(a5)     
  
  // 测试5：mulhsu 混合符号乘法高位 (无符号0x2 × 有符号-0x80000000 = 高位0xFFFFFFFF)
  0x00200613, // addi a2, zero, 2       // a2 = 无符号数 2
  0x80000593, // addi a1, zero, -2048   // a1 = 有符号数 -2^31（0xFFFFF800）
  0x02b62733, // mulhsu a4, a2, a1      // 计算：2×(-2^31) = -2^32 → 高位=0xFFFFFFFF（十进制-1）
  0x04c70713, // addi a4, a4, 76        // -1 + 76 = 75 → ASCII 'K'
  0x00e78023, // sb a4, 0(a5)           // 结果写入0x10000000

  // 测试6：连续乘法运算 (5 * 4 * 3 = 60)
  0x00300713, // addi a4, zero, 3     // a4 = 3
  0x00500613, // addi a2, zero, 5     // a2 = 5
  0x00400593, // addi a1, zero, 4     // a1 = 4
  0x02b606b3, // mul a3, a2, a1       // a3 = 5*4=20
  0x02e686b3, // mul a3, a3, a4       // a3 = 20*3=60
  0xfe568693, // addi a3, a3, -27     // 60-27=33 → ASCII '!'
  0x00d78023, // sb a3, 0(a5)

  0x00100073, 

  // =============================== 除法测试 ================================//
  // // 测试1：divu 10 / 3 → 商=3（0x3）
  // 0xa00007b7, // lui a5, 0x10000      // a5 = 0x10000000（目标内存基地址）
  // 0x00a00613, // addi a2, zero, 10    // a2 = 10（被除数）
  // 0x00300593, // addi a1, zero, 3     // a1 = 3（除数）
  // 0x02b656b3, // divu a3, a2, a1      // a3 = 10 / 3（无符号商=3）
  // 0x03e68693, // addi a3, a3, 62      // a3 = 商 + 62 = 65 (ASCII 'A')
  // 0x00d78023, // sb a3, 0(a5)         // 商3写入0x10000000
  
  // // 测试2：div -10 / 3 → 商=-3（0xFFFF_FFFD）
  // 0xff600613, // addi a2, zero, -10   // a2 = 被除数=-10（补码：0xfffffff6）
  // 0x00300593, // addi a1, zero, 3     // a1 = 除数=3
  // 0x02b646b3, // div a3, a2, a1       // a3 = -10/3 有符号商=-3（RISC-V除法向零取整）
  // 0x04568693, // addi a3, a3, 69      // -3+69=66 → ASCII 'B'
  // 0x00d78023, // sb a3, 0(a5)         

  // // 测试3：divu连续除法
  // 0x01400613, // addi a2, zero, 20    // a2 = 20
  // 0x00400593, // addi a1, zero, 4     // a1 = 4
  // 0x01500713, // addi a4, zero, 21    // a4 = 21
  // 0x02b656b3, // divu a3, a2, a1      // a3 = 20/4=5
  // 0x02d755b3, // divu a1, a4, a3      // a1 = 21/5=4
  // // 0x00d00633, // add  a2, zero, a3    // a2 = 5（上一步的商）
  // // 0x02b656b3, // divu a3, a2, a1      // a3 = 5/4=1
  // 0x02b6d6b3, // divu a3, a3, a1      // a3 = 5/4=1
  // 0x04268693, // addi a3, a3, 66      // 1+66=67 → ASCII 'C'(0x43)
  // 0x00d78023, // sb a3, 0(a5)   
  
  // // 测试4：remu 10 % 3 → 余数=1（0x1）
  // 0x00a00613, // addi a2, zero, 10    // a2 = 被除数=10
  // 0x00300593, // addi a1, zero, 3     // a1 = 除数=3
  // 0x02b67733, // remu a4, a2, a1      // a4 = 10%3 无符号余数=1
  // 0x04370713, // addi a4, a4, 67      // 1+67=68 → ASCII 'D'(0x44)
  // 0x00e78023, // sb a4, 0(a5)     
  
  // // 测试5：rem -10 % 3 → 余数=-1（0xFFFF_FFFF）
  // 0xff600613, // addi a2, zero, -10   // a2 = 被除数=-10（补码：0xfffffff6）
  // 0x00300593, // addi a1, zero, 3     // a1 = 除数=3
  // 0x02b66733, // rem a4, a2, a1       // a4 = -10%3 有符号余数=-1
  // 0x04670713, // addi a4, a4, 70      // -1+70=69 → ASCII 'E'
  // 0x00e78023, // sb a4, 0(a5) 

  // 0x00f00613, // addi a2, zero, 15    // a2 = 被除数=15
  // 0x00400593, // addi a1, zero, 4     // a1 = 除数=4
  // 0x02b656b3, // divu a3, a2, a1      // a3 = 15/4 无符号商=3
  // 0x00168693, // addi a3, a3, 1       // a3 = 3+1=4
  // 0x02d67733, // remu a4, a2, a3      // a4 = 15%4 无符号余数=3
  // 0x04370713, // addi a4, a4, 67      // 3+67=70 → ASCII 'F'
  // 0x00e78023, // sb a4, 0(a5)

  // 0x00100073, // 系统调用/退出指令    

  // =============================== 一般性测试用 ================================//
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
  
//   0x00000513,          	//li	a0,0
//   0x100005b7,          	//lui	a1,0x10000
//   0x04100313,          	//li	t1,65
//   0x00000617,          	//auipc	a2,0x0
//   0x01060613,          	//addi	a2,a2,16 # a000001c <again>
//   0x000083b7,          	//lui	t2,0x8
//   0x06738393,          	//addi	t2,t2,103 # 8067 <_stack_size+0x7c67>

//  //<again>:
//   0x00658023,          	//sb	t1,0(a1) # 10000000 <_sram_end+0xffe000>
//   0x00762023,          	//sw	t2,0(a2)
//   0x0000100f,          	//.4byte	0x100f
//   0xff5ff06f,          	//j	a000001c <again>  
//   0x00000513,          	//li	a0,0
//   0x00008067,          	//ret
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
