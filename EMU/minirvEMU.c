#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

#define ENABLE_DEBUG 1 //是否启用调式输出

#if ENABLE_DEBUG
#define DEBUG(fmt, ...) do { printf(fmt, ##__VA_ARGS__); } while (0)
#else
#define DEBUG(fmt, ...) do { } while (0)
#endif

uint32_t PC;
uint32_t inst;          
uint32_t R[16] = {0};      

#define MEM_SIZE (4*1024*1024) // 4MB
uint8_t M[MEM_SIZE] = {0};
bool ebreak = false;

#define OPCODE() ((inst) & 0x7F)
#define FUNC3()  (((inst) >> 12) & 0x07) 
static inline int inst_type(void) {
    uint8_t opcode = OPCODE();
    uint8_t func3 = FUNC3();
    if      ((opcode == 0x33) && (func3 == 0x0)) return 0; /* add */
    else if ((opcode == 0x13) && (func3 == 0x0)) return 1; /* addi */
    else if ((opcode == 0x67) && (func3 == 0x0)) return 2; /* jalr */
    else if ((opcode == 0x03) && (func3 == 0x4)) return 3; /* lbu */
    else if ((opcode == 0x03) && (func3 == 0x2)) return 4; /* lw */
    else if ((opcode == 0x37)                  ) return 5; /* lui */
    else if ((opcode == 0x23) && (func3 == 0x0)) return 6; /* sb */
    else if ((opcode == 0x23) && (func3 == 0x2)) return 7; /* sw */
    else if ((opcode == 0x73) && (func3 == 0x0)) return 8; /* ebreak */
    else {
        assert("无效的操作码");
        return -1;
    }
}

#define RD()     (((inst) >> 7 ) & 0x0F)
#define RS1()    (((inst) >> 15) & 0x0F)
#define RS2()    (((inst) >> 20) & 0x0F)

#define IMM_I()  ((int32_t)(((inst >> 20) & 0xFFFu) << 20) >> 20) 
#define IMM_U()  ((inst) & 0xFFFFF000u)
#define IMM_S()  ((int32_t)(((((inst >> 25) << 5) | ((inst >> 7) & 0x1Fu)) << 20)) >> 20) 

#define ADD() { \
    uint8_t rd = RD(); \
    uint8_t rs1 = RS1(); \
    uint8_t rs2 = RS2(); \
    DEBUG("   ADD: R[%d] = R[%d](0x%x) + R[%d](0x%x) = 0x%x\n", \
           rd, rs1, R[rs1], rs2, R[rs2], R[rs1] + R[rs2]); \
    R[rd] = R[rs1] + R[rs2]; \
}

#define ADDI() { \
    uint8_t rd = RD(); \
    uint8_t rs1 = RS1(); \
    int32_t imm = IMM_I(); \
    DEBUG("  ADDI: R[%d] = R[%d](0x%x) + imm(0x%x) = 0x%x\n", \
           rd, rs1, R[rs1], imm, R[rs1] + imm); \
    R[rd] = R[rs1] + imm; \
}

#define JALR() { \
    uint8_t rd = RD(); \
    uint8_t rs1 = RS1(); \
    int32_t imm = IMM_I(); \
    int32_t temp = PC + 4; \
    PC = (R[rs1] + imm) & 0xFFFFFFFE; \
    R[rd] = temp; \
    DEBUG("  JALR: PC = (R[%d](0x%x) + imm(0x%x)) & ~1 = 0x%x, R[%d] = 0x%x\n", \
           rs1, R[rs1], imm, PC, rd, R[rd]); \
    return; \
}

#define LUI() { \
    uint8_t rd = RD(); \
    uint32_t imm = IMM_U(); \
    DEBUG("   LUI: R[%d] = imm(0x%x) = 0x%x\n", rd, imm, imm); \
    R[rd] = imm; \
}

#define LBU() { \
    uint8_t rd = RD(); \
    uint8_t rs1 = RS1(); \
    uint32_t imm = IMM_I(); \
    uint32_t addr = R[rs1] + imm; \
    assert(addr < MEM_SIZE); \
    R[rd] = M[addr]; \
    DEBUG("   LBU: R[%d] = M[R[%d](0x%x) + imm(0x%x)] = M[0x%x] = 0x%x\n", \
           rd, rs1, R[rs1], imm, addr, R[rd]); \
}

#define LW() { \
    uint8_t rd = RD(); \
    uint8_t rs1 = RS1(); \
    int32_t imm = IMM_I(); \
    uint32_t addr = R[rs1] + imm; \
    assert(addr + 3 < MEM_SIZE); \
    R[rd] = M[addr] | (M[addr + 1] << 8) | (M[addr + 2] << 16) | (M[addr + 3] << 24); \
    DEBUG("    LW: R[%d] = M[R[%d](0x%x) + imm(0x%x)] = M[0x%x..0x%x] = 0x%x\n", \
           rd, rs1, R[rs1], imm, addr, addr + 3, R[rd]); \
}

#define SB() { \
    uint8_t rs1 = RS1(); \
    uint8_t rs2 = RS2(); \
    int32_t imm = IMM_S(); \
    uint32_t addr = R[rs1] + imm; \
    assert(addr < MEM_SIZE); \
    M[addr] = R[rs2] & 0xFF; \
    DEBUG("    SB: M[R[%d](0x%x) + imm(0x%x)] = M[0x%x] = R[%d](0x%x) & 0xFF = 0x%x\n", \
           rs1, R[rs1], imm, addr, rs2, R[rs2], R[rs2] & 0xFF); \
}

#define SW() { \
    uint8_t rs1 = RS1(); \
    uint8_t rs2 = RS2(); \
    int32_t imm = IMM_S(); \
    uint32_t addr = R[rs1] + imm; \
    assert(addr + 3 < MEM_SIZE); \
    M[addr    ] = R[rs2] & 0xFF; \
    M[addr + 1] = (R[rs2] >> 8 ) & 0xFF; \
    M[addr + 2] = (R[rs2] >> 16) & 0xFF; \
    M[addr + 3] = (R[rs2] >> 24) & 0xFF; \
    DEBUG("    SW: M[R[%d](0x%x) + imm(0x%x)] = M[0x%x..0x%x] = R[%d](0x%x) = 0x%x\n", \
           rs1, R[rs1], imm, addr, addr + 3, rs2, R[rs2], R[rs2]); \
}

void load_hex(const char *filename) { // 从hex文件加载指令
    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("无法打开文件");
        exit(1);
    }
    char line[1024];
    uint32_t default_address = 0;
    while (fgets(line, sizeof(line), file)) {
        // 跳过空行和注释/头部
        char *p = line;
        while (*p == ' ' || *p == '\t') p++;
        if (*p == '\0' || *p == '\n') continue;
        if (*p == 'v'  || *p == 'V' ) continue;

        // 解析行首的地址标记
        char *colon = strchr(line, ':');
        uint32_t base_addr = default_address;
        char *data_start = line;
        if (colon) {
            *colon = '\0';
            unsigned int word_index = 0;
            if (sscanf(line, "%x", &word_index) == 1) {
                base_addr = word_index * 4u; // leading number is word index
            }
            data_start = colon + 1;
        }

        // 逐个解析冒号后面的 32-bit hex 词
        char *tok = strtok(data_start, " \t\r\n");
        uint32_t addr = base_addr;
        while (tok) {
            unsigned int val = 0;
            if (sscanf(tok, "%x", &val) == 1) {
                if (addr + 3 >= MEM_SIZE) {
                    fprintf(stderr, "hex 文件太大，超出内存限制\n");
                    fclose(file);
                    exit(1);
                }
                M[addr    ] = val & 0xFF;
                M[addr + 1] = (val >> 8 ) & 0xFF;
                M[addr + 2] = (val >> 16) & 0xFF;
                M[addr + 3] = (val >> 24) & 0xFF;
                // DEBUG("加载指令: M[0x%05X] = 0x%02X%02X%02X%02X\n", addr, M[addr+3], M[addr+2], M[addr+1], M[addr]);
                addr += 4;
            }
            tok = strtok(NULL, " \t\r\n");
        }
    }
    fclose(file);
}

void inst_cycle() {
    inst = M[PC] | (M[PC + 1] << 8) | (M[PC + 2] << 16) | (M[PC + 3] << 24);
    DEBUG("PC = %05x: inst = %08X\n", PC, inst);

    switch (inst_type()) {
        case 0:  ADD();   break;
        case 1:  ADDI();  break;
        case 2:  JALR();  return;
        case 3:  LBU();   break;
        case 4:  LW();    break;
        case 5:  LUI();   break;
        case 6:  SB();    break;
        case 7:  SW();    break;
        case 8:  
            ebreak = true; 
            DEBUG("EBREAK\n"); 
            return; 
        default: assert("无效的操作码");
    }

    PC += 4; // PC前进到下一条指令
}

void reg_show() {
    printf("寄存器状态:\n");
    for (int i = 0; i < 16; i++) {
        printf("R[%2d] = %08X\n", i, R[i]);
    }
}

int main(int argc, char *argv[]){
    if (argc != 2) {
        fprintf(stderr, "用法: %s <hex文件>\n", argv[0]);
        return 1;
    }

    load_hex(argv[1]);

    PC = 0;
    int cycle_count = 0;
    while (cycle_count < 6500) {
        inst_cycle();
        R[0] = 0;
        cycle_count++;
    }
    reg_show();

    return 0;
}
