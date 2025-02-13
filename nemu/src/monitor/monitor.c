/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm();

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NEMU!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  Log("Exercise: Please remove me in the source code and compile NEMU again.");
  //assert(0);
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *elf_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

//太TM难了，这个elf解析没一个是自己写的
typedef struct {
  uint32_t addr;  // 函数地址
  uint32_t size;  // 函数大小
  char name[64];  // 函数名
} func_symbol_t;

func_symbol_t func_table[4096]; // 符号表
int func_count = 0;             // 符号数量
#define code_vaddr 0x80000000;  // 根据 ELF 的 Program Header 动态获取

void load_func_table(const char *elf_file) {
  FILE *fp = fopen(elf_file, "rb");//二进制模式打开
  if (fp==NULL) {
    printf("Failed to open ELF file: %s\n", elf_file);
    return;
  }
  uint8_t header[64];//读取文件头ELF Header
  int check0=fread(header, 1, 64, fp);//读取前64个字节
  assert(check0==64);
  //检查 ELF 文件魔数
  if(header[0] != 0x7F || header[1] != 'E' || header[2] != 'L' || header[3] != 'F'){//ELF 文件的前 4 字节必须是 0x7F ELF否则不是有效的ELF文件
    printf("Invalid ELF file: %s\n", elf_file);
    fclose(fp);
    return;
  }
  // 解析 ELF Header
  uint32_t shoff = *(uint32_t *)(header + 32); // Section Header 表偏移
  uint16_t shnum = *(uint16_t *)(header + 48); // Section Header 数量
  // uint16_t shstrndx = *(uint16_t *)(header + 50); // 节区名称字符串表索引

  fseek(fp, shoff, SEEK_SET);// 读取 Section Header 表
  uint8_t *shdrs = malloc(shnum * 40); // 每个 Section Header 大小为 40 字节
  int check1=fread(shdrs, 40, shnum, fp);
  assert(check1==shnum);

  // 找到符号表和字符串表
  uint32_t symtab_offset = 0, symtab_size = 0;//定义变量存储符号表的偏移量和大小
  uint32_t strtab_offset = 0, strtab_size = 0;//定义变量存储字符串表的偏移量和大小
  uint16_t symtab_strndx = 0;//定义变量存储字符串表的索引

  for (int i = 0; i < shnum; i++) {//遍历 Section Header 表
    uint8_t *shdr = shdrs + i * 40;//获取当前 Section Header 的指针
    uint32_t sh_type = *(uint32_t *)(shdr + 4);//获取当前 Section Header 的类型

    if(sh_type == SHT_SYMTAB){ // SHT_SYMTAB
      symtab_offset = *(uint32_t *)(shdr + 16);
      symtab_size = *(uint32_t *)(shdr + 20);
      symtab_strndx = *(uint16_t *)(shdr + 36);//sh_link字段
    }
    // else if(sh_type == SHT_STRTAB){ // SHT_STRTAB
    //   strtab_offset = *(uint32_t *)(shdr + 16);
    //   strtab_size = *(uint32_t *)(shdr + 20);
    // }
  }
  // 根据 symtab_strndx 找到对应的字符串表
  for (int i = 0; i < shnum; i++) {
    uint8_t *shdr = shdrs + i * 40;
    // uint32_t sh_type = *(uint32_t *)(shdr + 4);
    if (i == symtab_strndx) {  // 匹配符号表关联的字符串表
      strtab_offset = *(uint32_t *)(shdr + 16);
      strtab_size = *(uint32_t *)(shdr + 20);
      break;
    }
  }

  // 读取符号表
  fseek(fp, symtab_offset, SEEK_SET);//将文件指针移动到符号表的位置
  uint8_t *symtab = malloc(symtab_size);
  int check2=fread(symtab, 1, symtab_size, fp);
  assert(check2==symtab_size);

  // 读取字符串表
  fseek(fp, strtab_offset, SEEK_SET);//将文件指针移动到字符串表的位置
  uint8_t *strtab = malloc(strtab_size);
  int check3=fread(strtab, 1, strtab_size, fp);
  assert(check3==strtab_size);
  // 解析符号表
  int num_symbols = symtab_size / 16; // 每个符号表项大小为 16 字节
  for (int i = 0; i < num_symbols; i++) {
    uint8_t *sym = symtab + i * 16;  // 符号表项大小为 16 字节
    uint32_t st_name = *(uint32_t *)sym;
    uint32_t st_value = *(uint32_t *)(sym + 4);
    uint32_t st_size = *(uint32_t *)(sym + 8);
    uint8_t st_info = *(uint8_t *)(sym + 12);
    // uint8_t st_bind = ELF32_ST_BIND(st_info);

    // 过滤条件：类型为函数 (STT_FUNC) 且绑定为全局或局部 (排除 SECTION/UNDEF 等)
    if (ELF32_ST_TYPE(st_info) == STT_FUNC) {
      if (st_name == 0 || st_value == 0) continue;  // 跳过无效符号
      func_table[func_count].addr=st_value+code_vaddr;
      func_table[func_count].size=st_size;
      const char *name = (const char *)(strtab + st_name);
      strncpy(func_table[func_count].name, name, sizeof(func_table[0].name) - 1);
      func_table[func_count].name[sizeof(func_table[0].name) - 1] = '\0';
      func_count++;
    }
  }

  // 释放内存
  free(shdrs);
  free(symtab);
  free(strtab);
  fclose(fp);
}

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"elf"      , required_argument, NULL, 'e'},//elf文件参数
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg;load_func_table(elf_file); break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=ELF_FILE            load ELF file for ftrace\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm());

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif
