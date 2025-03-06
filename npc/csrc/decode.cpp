#include <stdio.h>
#include <stdint.h>
#include <string.h>

// Define registers and memory size
#define NUM_REGISTERS 32
#define MEMORY_SIZE 1024

// Simulate registers and memory
int32_t R[NUM_REGISTERS];  // Register file
int8_t M[MEMORY_SIZE];     // Memory

// Program Counter
int32_t PC = 0;

// Initialize registers and memory
void initialize_system() {
    for (int i = 0; i < NUM_REGISTERS; i++) {
        R[i] = 0;  // Initialize registers to 0
    }
    R[0] = 0;  // x0 is hardwired to 0
    for (int i = 0; i < MEMORY_SIZE; i++) {
        M[i] = 0;  // Initialize memory to 0
    }
    PC = 0;  // Start at address 0
}

// Instruction structure
typedef struct {
    uint8_t opcode;      // Opcode
    uint8_t funct3;      // funct3 field
    uint8_t funct7;      // funct7 field (for R-type)
    char type;           // Instruction type (R, I, S, B, U, J)
    void (*func)(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm);  // Function pointer
} Instruction;

// Extract immediate based on instruction type
int32_t get_imm(char type, uint32_t instr) {
    int32_t imm = 0;
    switch (type) {
        case 'I':
            imm = (int32_t)(instr >> 20);
            imm = (imm & 0x800) ? (imm | 0xFFFFF000) : imm;  // Sign-extend
            break;
        case 'S':
            imm = ((instr >> 7) & 0x1F) | ((instr >> 25) << 5);
            imm = (imm & 0x800) ? (imm | 0xFFFFF000) : imm;  // Sign-extend
            break;
        case 'B':
            imm = ((instr >> 8) & 0xF) << 1 | ((instr >> 25) & 0x3F) << 5 |
                  ((instr >> 7) & 0x1) << 11 | ((instr >> 31) & 0x1) << 12;
            imm = (imm & 0x1000) ? (imm | 0xFFFFE000) : imm;  // Sign-extend
            break;
        case 'U':
            imm = instr & 0xFFFFF000;  // Upper 20 bits
            break;
        case 'J':
            imm = ((instr >> 21) & 0x3FF) << 1 | ((instr >> 20) & 0x1) << 11 |
                  ((instr >> 12) & 0xFF) << 12 | ((instr >> 31) & 0x1) << 20;
            imm = (imm & 0x100000) ? (imm | 0xFFF00000) : imm;  // Sign-extend
            break;
    }
    return imm;
}

// R-type instruction handlers
void add(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] + R[rs2];
    printf("ADD R[%d] = R[%d] + R[%d] = %d\n", rd, rs1, rs2, R[rd]);
}

void sub(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] - R[rs2];
    printf("SUB R[%d] = R[%d] - R[%d] = %d\n", rd, rs1, rs2, R[rd]);
}

void sll(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] << (R[rs2] & 0x1F);
    printf("SLL R[%d] = R[%d] << R[%d] = %d\n", rd, rs1, rs2, R[rd]);
}

void slt(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = (R[rs1] < R[rs2]) ? 1 : 0;
    printf("SLT R[%d] = (R[%d] < R[%d]) = %d\n", rd, rs1, rs2, R[rd]);
}

void sltu(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = ((uint32_t)R[rs1] < (uint32_t)R[rs2]) ? 1 : 0;
    printf("SLTU R[%d] = (R[%d] < R[%d]) = %d\n", rd, rs1, rs2, R[rd]);
}

void i_xor(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] ^ R[rs2];
    printf("XOR R[%d] = R[%d] ^ R[%d] = %d\n", rd, rs1, rs2, R[rd]);
}

void srl(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = (uint32_t)R[rs1] >> (R[rs2] & 0x1F);
    printf("SRL R[%d] = R[%d] >> R[%d] = %d\n", rd, rs1, rs2, R[rd]);
}

void sra(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] >> (R[rs2] & 0x1F);
    printf("SRA R[%d] = R[%d] >> R[%d] = %d\n", rd, rs1, rs2, R[rd]);
}

void i_or(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] | R[rs2];
    printf("OR R[%d] = R[%d] | R[%d] = %d\n", rd, rs1, rs2, R[rd]);
}

void i_and(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] & R[rs2];
    printf("AND R[%d] = R[%d] & R[%d] = %d\n", rd, rs1, rs2, R[rd]);
}

// I-type instruction handlers
void addi(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] + imm;
    printf("ADDI R[%d] = R[%d] + %d = %d\n", rd, rs1, imm, R[rd]);
}

void slti(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = (R[rs1] < imm) ? 1 : 0;
    printf("SLTI R[%d] = (R[%d] < %d) = %d\n", rd, rs1, imm, R[rd]);
}

void sltiu(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = ((uint32_t)R[rs1] < (uint32_t)imm) ? 1 : 0;
    printf("SLTIU R[%d] = (R[%d] < %d) = %d\n", rd, rs1, imm, R[rd]);
}

void xori(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] ^ imm;
    printf("XORI R[%d] = R[%d] ^ %d = %d\n", rd, rs1, imm, R[rd]);
}

void ori(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] | imm;
    printf("ORI R[%d] = R[%d] | %d = %d\n", rd, rs1, imm, R[rd]);
}

void andi(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] & imm;
    printf("ANDI R[%d] = R[%d] & %d = %d\n", rd, rs1, imm, R[rd]);
}

void slli(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] << (imm & 0x1F);
    printf("SLLI R[%d] = R[%d] << %d = %d\n", rd, rs1, imm & 0x1F, R[rd]);
}

void srli(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = (uint32_t)R[rs1] >> (imm & 0x1F);
    printf("SRLI R[%d] = R[%d] >> %d = %d\n", rd, rs1, imm & 0x1F, R[rd]);
}

void srai(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = R[rs1] >> (imm & 0x1F);
    printf("SRAI R[%d] = R[%d] >> %d = %d\n", rd, rs1, imm & 0x1F, R[rd]);
}

void lb(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t addr = R[rs1] + imm;
    R[rd] = (int8_t)M[addr];  // Sign-extend byte
    printf("LB R[%d] = M[R[%d] + %d] = %d\n", rd, rs1, imm, R[rd]);
}

void lh(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t addr = R[rs1] + imm;
    R[rd] = *(int16_t*)(M + addr);  // Sign-extend halfword
    printf("LH R[%d] = M[R[%d] + %d] = %d\n", rd, rs1, imm, R[rd]);
}

void lw(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t addr = R[rs1] + imm;
    R[rd] = *(int32_t*)(M + addr);
    printf("LW R[%d] = M[R[%d] + %d] = %d\n", rd, rs1, imm, R[rd]);
}

void lbu(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t addr = R[rs1] + imm;
    R[rd] = (uint8_t)M[addr];  // Zero-extend byte
    printf("LBU R[%d] = M[R[%d] + %d] = %d\n", rd, rs1, imm, R[rd]);
}

void lhu(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t addr = R[rs1] + imm;
    R[rd] = *(uint16_t*)(M + addr);  // Zero-extend halfword
    printf("LHU R[%d] = M[R[%d] + %d] = %d\n", rd, rs1, imm, R[rd]);
}

void jalr(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t target = R[rs1] + imm;
    R[rd] = PC + 4;
    PC = target - 4;  // Adjust PC (will increment by 4 later)
    printf("JALR R[%d] = PC + 4, jump to %d\n", rd, target);
}

// S-type instruction handlers
void sb(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t addr = R[rs1] + imm;
    M[addr] = R[rs2] & 0xFF;
    printf("SB M[R[%d] + %d] = R[%d] = %d\n", rs1, imm, rs2, R[rs2] & 0xFF);
}

void sh(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t addr = R[rs1] + imm;
    *(int16_t*)(M + addr) = R[rs2] & 0xFFFF;
    printf("SH M[R[%d] + %d] = R[%d] = %d\n", rs1, imm, rs2, R[rs2] & 0xFFFF);
}

void sw(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    int32_t addr = R[rs1] + imm;
    *(int32_t*)(M + addr) = R[rs2];
    printf("SW M[R[%d] + %d] = R[%d] = %d\n", rs1, imm, rs2, R[rs2]);
}

// B-type instruction handlers
void beq(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    if (R[rs1] == R[rs2]) {
        PC += imm - 4;  // Adjust PC (will increment by 4 later)
        printf("BEQ Branch taken to %d\n", PC + 4);
    } else {
        printf("BEQ Branch not taken\n");
    }
}

void bne(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    if (R[rs1] != R[rs2]) {
        PC += imm - 4;
        printf("BNE Branch taken to %d\n", PC + 4);
    } else {
        printf("BNE Branch not taken\n");
    }
}

void blt(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    if (R[rs1] < R[rs2]) {
        PC += imm - 4;
        printf("BLT Branch taken to %d\n", PC + 4);
    } else {
        printf("BLT Branch not taken\n");
    }
}

void bge(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    if (R[rs1] >= R[rs2]) {
        PC += imm - 4;
        printf("BGE Branch taken to %d\n", PC + 4);
    } else {
        printf("BGE Branch not taken\n");
    }
}

void bltu(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    if ((uint32_t)R[rs1] < (uint32_t)R[rs2]) {
        PC += imm - 4;
        printf("BLTU Branch taken to %d\n", PC + 4);
    } else {
        printf("BLTU Branch not taken\n");
    }
}

void bgeu(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    if ((uint32_t)R[rs1] >= (uint32_t)R[rs2]) {
        PC += imm - 4;
        printf("BGEU Branch taken to %d\n", PC + 4);
    } else {
        printf("BGEU Branch not taken\n");
    }
}

// U-type instruction handlers
void lui(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = imm;
    printf("LUI R[%d] = %d\n", rd, R[rd]);
}

void auipc(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = PC + imm;
    printf("AUIPC R[%d] = PC + %d = %d\n", rd, imm, R[rd]);
}

// J-type instruction handlers
void jal(uint8_t rd, uint8_t rs1, uint8_t rs2, int32_t imm) {
    R[rd] = PC + 4;
    PC += imm - 4;  // Adjust PC (will increment by 4 later)
    printf("JAL R[%d] = PC + 4, jump to %d\n", rd, PC + 4);
}

// Instruction table for RV32I
#define NUM_INSTRUCTIONS 37
Instruction instruction_table[NUM_INSTRUCTIONS] = {
    // R-type (opcode 0x33)
    {0x33, 0x0, 0x00, 'R', add},   // ADD
    {0x33, 0x0, 0x20, 'R', sub},   // SUB
    {0x33, 0x1, 0x00, 'R', sll},   // SLL
    {0x33, 0x2, 0x00, 'R', slt},   // SLT
    {0x33, 0x3, 0x00, 'R', sltu},  // SLTU
    {0x33, 0x4, 0x00, 'R', i_xor},   // XOR
    {0x33, 0x5, 0x00, 'R', srl},   // SRL
    {0x33, 0x5, 0x20, 'R', sra},   // SRA
    {0x33, 0x6, 0x00, 'R', i_or},    // OR
    {0x33, 0x7, 0x00, 'R', i_and},   // AND

    // I-type (opcode 0x13 for arithmetic, 0x03 for loads, 0x67 for JALR)
    {0x13, 0x0, 0x00, 'I', addi},  // ADDI
    {0x13, 0x2, 0x00, 'I', slti},  // SLTI
    {0x13, 0x3, 0x00, 'I', sltiu}, // SLTIU
    {0x13, 0x4, 0x00, 'I', xori},  // XORI
    {0x13, 0x6, 0x00, 'I', ori},   // ORI
    {0x13, 0x7, 0x00, 'I', andi},  // ANDI
    {0x13, 0x1, 0x00, 'I', slli},  // SLLI
    {0x13, 0x5, 0x00, 'I', srli},  // SRLI
    {0x13, 0x5, 0x20, 'I', srai},  // SRAI
    {0x03, 0x0, 0x00, 'I', lb},    // LB
    {0x03, 0x1, 0x00, 'I', lh},    // LH
    {0x03, 0x2, 0x00, 'I', lw},    // LW
    {0x03, 0x4, 0x00, 'I', lbu},   // LBU
    {0x03, 0x5, 0x00, 'I', lhu},   // LHU
    {0x67, 0x0, 0x00, 'I', jalr},  // JALR

    // S-type (opcode 0x23)
    {0x23, 0x0, 0x00, 'S', sb},    // SB
    {0x23, 0x1, 0x00, 'S', sh},    // SH
    {0x23, 0x2, 0x00, 'S', sw},    // 

    // B-type (opcode 0x63)
    {0x63, 0x0, 0x00, 'B', beq},   // BEQ
    {0x63, 0x1, 0x00, 'B', bne},   // BNE
    {0x63, 0x4, 0x00, 'B', blt},   // BLT
    {0x63, 0x5, 0x00, 'B', bge},   // BGE
    {0x63, 0x6, 0x00, 'B', bltu},  // BLTU
    {0x63, 0x7, 0x00, 'B', bgeu},  // BGEU

    // U-type (opcode 0x37 and 0x17)
    {0x37, 0x0, 0x00, 'U', lui},   // LUI
    {0x17, 0x0, 0x00, 'U', auipc}, // AUIPC

    // J-type (opcode 0x6F)
    {0x6F, 0x0, 0x00, 'J', jal}    // JAL
};

// Execute a single instruction
void execute_instruction(uint32_t instr) {
    uint8_t opcode = instr & 0x7F;
    uint8_t funct3 = (instr >> 12) & 0x7;
    uint8_t funct7 = (instr >> 25) & 0x7F;
    uint8_t rd = (instr >> 7) & 0x1F;
    uint8_t rs1 = (instr >> 15) & 0x1F;
    uint8_t rs2 = (instr >> 20) & 0x1F;

    for (int i = 0; i < NUM_INSTRUCTIONS; i++) {
        if (instruction_table[i].opcode == opcode &&
            instruction_table[i].funct3 == funct3 &&
            (instruction_table[i].type != 'R' || instruction_table[i].funct7 == funct7)) {
            int32_t imm = get_imm(instruction_table[i].type, instr);
            printf("Instruction matched (Type: %c): ", instruction_table[i].type);
            instruction_table[i].func(rd, rs1, rs2, imm);
            R[0] = 0;  // Ensure x0 remains 0
            PC += 4;   // Increment PC
            return;
        }
    }
    printf("Unknown instruction: 0x%08X\n", instr);
    PC += 4;
}

int main() {
    initialize_system();

    // Set initial register values
    R[1] = 10;  // x1 = 10
    R[2] = 20;  // x2 = 20

    // Simulated instruction memory (each instruction is 4 bytes)
    uint32_t test_instructions[] = {
        0x002081B3,  // ADD  x3, x1, x2       (PC = 0)
        0x00108093,  // ADDI x1, x1, 1        (PC = 4)
        0x00412083,  // LW   x1, 4(x2)        (PC = 8)
        0x00212223,  // SW   x2, 4(x1)        (PC = 12)
        0x004000EF,  // JAL  x1, 4            (PC = 16)
        0x00208663,  // BEQ  x1, x2, 12       (PC = 20)
        0x0000B7B7,  // LUI  x15, 0xB7        (PC = 24)
        0x002102B3,  // SUB  x5, x2, x1       (PC = 28)
        0x003120B3   // SLT  x1, x2, x3       (PC = 32)
    };

    // Calculate the size of the instruction memory in bytes
    int instruction_memory_size = sizeof(test_instructions);
    // int num_instructions = instruction_memory_size / sizeof(uint32_t);

    // Execute instructions using PC
    while (PC >= 0 && PC < instruction_memory_size) {
        uint32_t current_instruction = test_instructions[PC / 4];  // Fetch instruction
        printf("PC = %d: ", PC);
        execute_instruction(current_instruction);
    }

    // Print non-zero register values
    printf("\nFinal register values:\n");
    for (int i = 0; i < NUM_REGISTERS; i++) {
        if (R[i] != 0) {
            printf("R[%d] = %d\n", i, R[i]);
        }
    }

    return 0;
}