#include "../include/common.h"
#include "../include/debug.h"
#include "../include/conf.h"

/***************************** ITRACE *****************************/
#ifdef CONFIG_ITRACE
#define MAX_iringbuf_size 40
struct IRINGBUF
{
    char inst_buf[MAX_iringbuf_size][64];
    int head, tail;
};

static struct IRINGBUF iringbuf = {
    .inst_buf = {""},
    .head = 0,
    .tail = 0
};

void append_iringbuf(char *s)
{
    // if(iringbuf.inst_buf[iringbuf.head] != NULL)
    if(strcmp(iringbuf.inst_buf[iringbuf.head], ""))    //the iringbuf is not currently empty
    {
        iringbuf.tail = (iringbuf.tail + 1) % MAX_iringbuf_size;  
        if(iringbuf.head == iringbuf.tail)                //the iringbuf is currently full
        iringbuf.head = (iringbuf.head + 1) % MAX_iringbuf_size;
    }

    strcpy(iringbuf.inst_buf[iringbuf.tail], s);
}

void display_iringbuf(void)
{
    int i = iringbuf.head;
    if(iringbuf.inst_buf[i] == NULL)
        return;

    _Log(ANSI_FG_BLUE "Display inst iringbuf:\n" ANSI_NONE);
    while(i != iringbuf.tail)
    {
        printf(ANSI_FG_YELLOW "[ITRACE] " ANSI_NONE "      %s\n", iringbuf.inst_buf[i]);
        log_write("[ITRACE]       %s\n", iringbuf.inst_buf[i]); 
        i = (i + 1) % MAX_iringbuf_size;
    }
    printf(ANSI_FG_YELLOW "[ITRACE] " ANSI_NONE ANSI_FG_RED "---->" ANSI_NONE " %s\n", 
           iringbuf.inst_buf[iringbuf.tail]);
    log_write("[ITRACE] ----> %s\n", iringbuf.inst_buf[iringbuf.tail]); 
}
#else
void append_iringbuf(char *s) {}
void display_iringbuf(void) { TODO(); }
#endif
/******************************************************************/

/***************************** MTRACE *****************************/
#ifdef CONFIG_MTRACE
#define MTRACE_LOG_FILE "mtrace.log"
static FILE *mtrace_file = NULL;

void init_mtrace(){
  mtrace_file = fopen(MTRACE_LOG_FILE,"w");
  if(mtrace_file == NULL){
    printf("Fail to open mtrace log file\n");
    return;
  }
}

void close_mtrace(){
  if(mtrace_file != NULL){
      fclose(mtrace_file);
      mtrace_file = NULL;
  }
}

void mtrace_log(char type, paddr_t addr, word_t data, int len){
  if(mtrace_file == NULL) return;
  switch (type){
    case 'R':
        fprintf(mtrace_file,"[R] 0x%08x    0x%08x %d\n",addr,data,len);
        break;
    case 'W':
        fprintf(mtrace_file,"[W] 0x%08x    0x%08x %d\n",addr,data,len);
        break;
    default:
        printf("No such type, only R or W enable\n");
        break;
  }
}

#else
void init_mtrace(){}
void close_mtrace(){}
void mtrace_log(char type, paddr_t addr, word_t data, int len){}
#endif
/******************************************************************/

/***************************** BTRACE *****************************/
#ifdef CONFIG_BTRACE
// 分支预测 miss 日志: 每当硬件 (BRU 训练回环) 检测到一次预测 miss
// (真实目标 != 预测目标), 就把该分支的 pc / inst / 预测目标 / 真实目标
// 以及指令类型等信息写入 btrace.log, 便于定位前端/预测器问题。
#define BTRACE_LOG_FILE "btrace.log"
static FILE *btrace_file = NULL;

void init_btrace(){
  btrace_file = fopen(BTRACE_LOG_FILE,"w");
  if(btrace_file == NULL){
    printf("Fail to open btrace log file\n");
    return;
  }
}

void close_btrace(){
  if(btrace_file != NULL){
      fclose(btrace_file);
      btrace_file = NULL;
  }
}

void btrace_log(uint64_t cycle, uint32_t pc, uint32_t inst,
                uint32_t pred_dnpc, uint32_t dnpc,
                int taken, int is_jal, int is_jalr, int is_call,
                int is_ret, int is_indirect, int is_c_inst){
  if(btrace_file == NULL) return;
  fprintf(btrace_file,
    "[BTRACE] cycle=%-10llu pc=0x%08x inst=0x%08x pred_dnpc=0x%08x real_dnpc=0x%08x "
    "taken=%d jal=%d jalr=%d call=%d ret=%d indirect=%d c_inst=%d\n",
    (unsigned long long)cycle, pc, inst, pred_dnpc, dnpc,
    taken, is_jal, is_jalr, is_call, is_ret, is_indirect, is_c_inst);
  fflush(btrace_file);
}
#endif // CONFIG_BTRACE
/******************************************************************/