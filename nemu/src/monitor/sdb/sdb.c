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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>
#include <common.h>
#include "watchpoint.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
WP *new_wp();
/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);//将-1作为无符号的参数传入cpu_exec函数中，使得程序执行指令数量很大很大，程序几乎无法停止
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state=NEMU_QUIT;//直接改变good的值，防止其直接退出时good！=0（/src/utils/state.c）导致return出现异常
  return -1;//只有-1的时候会在sdb_mainloop触发中断影响good
}

static int cmd_si(char *args){//自己编写的si命令，让程序单步执行N条指令后暂停执行,当N没有给出时, 缺省为1
  int N = 1; // 默认为1
  if (args != NULL && args[0] != '\0') { // 检查是否有提供参数
    N = atoi(args);
    if (N <= 0) { // 如果N不是一个正整数，则设置为默认值1
      printf("Invalid argument, using default value of 1.\n");
      N = 1;
    }
  }
  cpu_exec(N); // 执行N条指令
  printf("Executed %d instruction(s).\n", N);
  return 0;
}

static int cmd_info(char *args){
  char *arg;
  if(args!=NULL && args[0]!='\0'){
    arg=strtok(args," ");
    if(arg==NULL){
      printf("No argument provided. Please specify 'r' or 'w'.\n");
    }
    if(strcmp(arg,"r")==0){
      isa_reg_display();//打印寄存器，文件在isa/risv32/reg.c中
    }else if(strcmp(arg,"w")==0){
      WP *wp=get_wp_head();
      if(wp == NULL){
        printf("No watchpoints set.\n");
        return 0;
      }
      printf("Current watchpoints:\n");
      while (wp != NULL) {// 打印监视点信息
        printf("Watchpoint NO:%-2d: Expression '%s' Last Value: 0x%x\n",
          wp->NO, wp->expr ? wp->expr : "N/A", wp->old_val);
        wp=wp->next;
      }
    }else printf("Invalid operation,please specify 'r' or 'w'.\n");
  }else printf("No argument provided. Please specify 'r' or 'w'.\n");
  return 0;
}

static int cmd_x(char *args){//扫描内存
  int len;
  paddr_t addr;
  char *arg;
  
  arg = strtok(NULL, " ");// 解析第一个参数为整数N
  if (arg == NULL || sscanf(arg, "%d", &len) != 1 || len <= 0) {
    printf("Invalid number of words to display\n");
    return 0;
  }
  arg = strtok(NULL, " ");// 解析第二个参数EXPR,调用expr函数计算表达式得到内存地址
  if(arg==NULL){
    printf("Missing address expression\n");
    return 0;
  }
  if(arg[0]=='0' && (arg[1]=='x' || arg[1]=='X')){
    sscanf(arg,"%x",&addr);
  }else{
  addr=(paddr_t)expr(arg);
    if(addr==-1){
      printf("Invalid address expression,please provide a valid expression\n");
      return 0;
    }
  }
  for(int i=0;i<len;i++){
    printf("addr->0x%x : %08x\n",addr,paddr_read(addr,4));
    addr+=4;
  }
  return 0;
}

static int cmd_w(char *args){
  if(args==NULL || strlen(args)==0){
    printf("No expression provided\n");
    return 0;
  }
  char *EXPR=args;
  WP *wp = new_wp();
  if (wp == NULL) return 0;
  strcpy(wp->expr,EXPR);
  // if (wp->expr == NULL) {
  //   free_wp(wp);
  //   return 0;
  // }
  wp->old_val=expr(EXPR); 
  return 0;
}

static int cmd_d(char *args){
  if (args==NULL || strlen(args)==0) {
    printf("Invalid index. Please enter a valid number.\n");
    return 0;
  }
  int no=atoi(strtok(NULL," "));
  WP *wp=get_wp_head();
  while(wp!=NULL){
    if (wp->NO==no) {
      free_wp(wp);
      printf("Watchpoint %d deleted.\n", no);
      return 0;
    }
    wp=wp->next;
  }
  printf("Watchpoint with index %d not found.\n", no);
  return 0;
}
static int cmd_p(char *args) {
  if(args == NULL || strlen(args) == 0){
    printf("No expression provided\n");
    return 0;
  }

  word_t result = expr(args);
  
  // Check for various error conditions.
  if (result == -1) {
    printf("Invalid expression\n");
    return 0;
  }
  // 正常输出结果
  printf("%s = %u\n", args, result);

  return 0;
}
static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },

  /* TODO: Add more commands */
  { "si", "Let the program excute N instuctions and then suspend the excution(while the N is not given,the default value is 1)", cmd_si},
  { "info", "Print register status with\"r\",or print the monitor status with \"w\" ",cmd_info},
  { "x", "Scan N pieces of memory base on 'EXPR' ",cmd_x},
  { "p", "Find the value of the expression 'EXPR' ",cmd_p},
  { "w", "Set watchpoint on 'EXPR',the programme will stop when it change",cmd_w},
  { "d", "Delete a watchpoint NO.n you set",cmd_d},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
