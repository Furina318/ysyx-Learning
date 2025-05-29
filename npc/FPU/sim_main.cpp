#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "Vfpu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

// Global variables
uint32_t memory[1024] = {
    0x4A800000, // memory[0] = 2^20 (~1.048576e6)
    0x4AC00000, // memory[1] = 1.5 * 2^20 (~1.572864e6)
    0x4A000000, // memory[2] = 0.5 * 2^20 (~5.24288e5)
    0x44800000, // memory[3] = 2^10 (~1024)
    0xC0800000, // memory[4] = -4.0
    0x40800000, // memory[5] = 4.0
    0x7FC00000, // memory[6] = NaN
    0xFF800000, // memory[7] = -Inf
    0x7F800000, // memory[8] = +Inf
    0x00000000, // memory[9] = +0.0
    0x80000000, // memory[10] = -0.0
    0x3F800000, // memory[11] = 1.0
    0xBF800000, // memory[12] = -1.0
    0x40000000, // memory[13] = 2.0
    0xC0000000, // memory[14] = -2.0
    0x00000001, // memory[15] = denormal (~1.175e-38)
    0x7F7FFFFF, // memory[16] = max normal (~3.402e38)
    0xFF7FFFFF, // memory[17] = -max normal (~-3.402e38)
    0x3F000000, // memory[18] = 0.5
    0xBF000000, // memory[19] = -0.5
    0xCA800000, // memory[20] = -2^20 (~-1.048576e6)
    0xCA000000, // memory[21] = -0.5 * 2^20 (~-5.24288e5)
    0xCAC00000, // memory[22] = -1.5 * 2^20 (~-1.572864e6)
    0x40400000, // memory[23] = 3.0
    0xC0400000, // memory[24] = -3.0
    0x3FC00000  // memory[25] = 1.5
};
uint32_t iregs[32] = {0};
Vfpu *tb;
VerilatedVcdC *tfp;
std::ofstream log_file("fpu_test_fadd_s.log");

// Tick function with waveform dump and logging
void tick() {
    tb->clk = 0;
    tb->eval();
    tb->clk = 1;
    tb->eval();
    tfp->dump(Verilated::time());
    Verilated::timeInc(1);
    // Log top-level signals
    log_file << "Time: " << Verilated::time() 
             << ", OpType: " << (int)tb->fpu_op_type
             << ", Result: 0x" << std::hex << tb->fpu_result 
             << ", Valid: " << tb->fpu_result_valid << std::dec << std::endl;
}

// Helper function to execute an FPU operation
bool execute_fpu_op(uint8_t op_type, uint8_t freg_rs1, uint8_t freg_rs2, uint8_t freg_rd, 
                   uint32_t operand1_fp, uint32_t operand2_fp, uint32_t operand4_int, 
                   uint8_t round_mode, uint32_t &result, uint32_t &int_result, uint32_t &exception_flags) {
    int timeout = 50; // Timeout for complex operations
    
    // Set up operands
    tb->freg_rs1 = freg_rs1;
    tb->freg_rs2 = freg_rs2;
    tb->freg_rd = freg_rd;
    tb->fpu_op_valid = 1;
    tb->fpu_op_type = op_type;
    tb->fpu_op_round = round_mode;
    tb->operand1_fp = operand1_fp;
    tb->operand2_fp = operand2_fp;
    tb->operand4_int = operand4_int;
    tick();
    
    tb->fpu_op_valid = 0;
    tick();
    
    // Wait for result
    while (!tb->fpu_result_valid && timeout > 0) {
        tick();
        timeout--;
    }
    
    if (timeout == 0) {
        std::cout << "Error: Timeout waiting for fpu_result_valid" << std::endl;
        log_file << "Timeout: op_type=" << (int)op_type << ", freg_rd=" << (int)freg_rd << std::endl;
        return false;
    }
    
    // Capture results
    result = tb->fpu_result;
    int_result = tb->int_result;
    exception_flags = tb->exception_flags;
    
    // Write to register if needed
    if (freg_rd != 0) {
        tb->freg_write_data = tb->fpu_result;
        tb->freg_write_en = 1;
        tick();
        tb->freg_write_en = 0;
        tick();
    }
    
    return true;
}

// Test FADD_S instructions with twenty test cases
void test_fadd_s_instructions() {
    std::cout << "Starting FADD_S instruction test" << std::endl;
    log_file << "Starting FADD_S test\n";
    
    // Initialize registers
    iregs[0] = 0x00000000;  // x0 = address 0
    iregs[1] = 0x00000004;  // x1 = address 4
    iregs[2] = 0x00000008;  // x2 = address 8
    iregs[3] = 0x0000000C;  // x3 = address 12
    iregs[4] = 0x00000010;  // x4 = address 16
    iregs[5] = 0x00000014;  // x5 = address 20
    iregs[6] = 0x00000018;  // x6 = address 24
    iregs[7] = 0x0000001C;  // x7 = address 28
    iregs[8] = 0x00000020;  // x8 = address 32
    iregs[9] = 0x00000024;  // x9 = address 36
    iregs[10] = 0x00000028; // x10 = address 40
    iregs[11] = 0x0000002C; // x11 = address 44
    iregs[12] = 0x00000030; // x12 = address 48
    iregs[13] = 0x00000034; // x13 = address 52
    iregs[14] = 0x00000038; // x14 = address 56
    iregs[15] = 0x0000003C; // x15 = address 60
    iregs[16] = 0x00000040; // x16 = address 64
    iregs[17] = 0x00000044; // x17 = address 68
    iregs[18] = 0x00000048; // x18 = address 72
    iregs[19] = 0x0000004C; // x19 = address 76
    iregs[20] = 0x00000050; // x20 = address 80
    iregs[21] = 0x00000054; // x21 = address 84
    iregs[22] = 0x00000058; // x22 = address 88
    iregs[23] = 0x0000005C; // x23 = address 92
    iregs[24] = 0x00000060; // x24 = address 96
    iregs[25] = 0x00000064; // x25 = address 100
    tb->downstream_valid = 1;
    
    // Test cases for FADD_S
    struct TestCase {
        std::string name;
        uint8_t freg_rs1;
        uint8_t freg_rs2;
        uint8_t freg_rd;
        uint32_t operand1_fp;
        uint32_t operand2_fp;
        uint8_t round_mode;
        uint32_t expected_result;
        uint32_t expected_exceptions;
    };
    
    TestCase tests[] = {
        // 1. Normal large numbers: 2^20 + 0.5 * 2^20 = 1.5 * 2^20
        {"FADD_S_Normal_Large", 2, 3, 5, 0x4A800000, 0x4A000000, 0, 0x4AC00000, 0x00},
        
        // 2. Normal small numbers: 1.0 + 2.0 = 3.0
        {"FADD_S_Normal_Small", 11, 13, 6, 0x3F800000, 0x40000000, 0, 0x40400000, 0x00},
        
        // 3. Negative numbers: -1.0 + -2.0 = -3.0
        {"FADD_S_Negative", 12, 14, 7, 0xBF800000, 0xC0000000, 0, 0xC0400000, 0x00},
        
        // 4. Mixed signs: 4.0 + (-4.0) = 0.0
        {"FADD_S_Mixed_Signs", 5, 4, 8, 0x40800000, 0xC0800000, 0, 0x00000000, 0x00},
        
        // 5. Infinity: +Inf + 1.0 = +Inf
        {"FADD_S_Inf_Plus", 8, 11, 9, 0x7F800000, 0x3F800000, 0, 0x7F800000, 0x00},
        
        // 6. Infinity: -Inf + (-1.0) = -Inf
        {"FADD_S_Inf_Minus", 7, 12, 10, 0xFF800000, 0xBF800000, 0, 0xFF800000, 0x00},
        
        // 7. NaN: NaN + 1.0 = NaN
        {"FADD_S_NaN", 6, 11, 11, 0x7FC00000, 0x3F800000, 0, 0x7FC00000, 0x10},
        
        // 8. Zero: +0.0 + +0.0 = +0.0
        {"FADD_S_Zero_Plus", 9, 9, 12, 0x00000000, 0x00000000, 0, 0x00000000, 0x00},
        
        // 9. Zero: -0.0 + -0.0 = -0.0
        {"FADD_S_Zero_Minus", 10, 10, 13, 0x80000000, 0x80000000, 0, 0x80000000, 0x00},
        
        // 10. Denormal: denormal + denormal = 2 * denormal
        {"FADD_S_Denormal", 15, 15, 14, 0x00000001, 0x00000001, 0, 0x00000002, 0x08},
        
        // 11. Overflow: max_normal + max_normal = +Inf
        {"FADD_S_Overflow", 16, 16, 15, 0x7F7FFFFF, 0x7F7FFFFF, 0, 0x7F800000, 0x05},
        
        // 12. Rounding RNE: 1.0 + 0.5 = 1.5
        {"FADD_S_RNE", 11, 18, 16, 0x3F800000, 0x3F000000, 0, 0x3FC00000, 0x00},
        
        // 13. Rounding RTZ: 1.0 + 0.5 = 1.5
        {"FADD_S_RTZ", 11, 18, 17, 0x3F800000, 0x3F000000, 1, 0x3FC00000, 0x00},
        
        // 14. Rounding RDN: 1.0 + 0.5 = 1.5
        {"FADD_S_RDN", 11, 18, 18, 0x3F800000, 0x3F000000, 2, 0x3FC00000, 0x00},
        
        // 15. Rounding RUP: 1.0 + 0.5 = 1.5
        {"FADD_S_RUP", 11, 18, 19, 0x3F800000, 0x3F000000, 3, 0x3FC00000, 0x00},
        
        // 16. Rounding RMM: 1.0 + 0.5 = 1.5
        {"FADD_S_RMM", 11, 18, 20, 0x3F800000, 0x3F000000, 4, 0x3FC00000, 0x00},
        
        // 17. Infinity conflict: +Inf + -Inf = NaN
        {"FADD_S_Inf_Conflict", 8, 7, 21, 0x7F800000, 0xFF800000, 0, 0x7FC00000, 0x10},
        
        // 18. Small numbers: 0.5 + 0.5 = 1.0
        {"FADD_S_Small", 18, 18, 22, 0x3F000000, 0x3F000000, 0, 0x3F800000, 0x00},
        
        // 19. Denormal + Normal: denormal + 1.0 ≈ 1.0
        {"FADD_S_Denorm_Normal", 15, 11, 23, 0x00000001, 0x3F800000, 0, 0x3F800000, 0x01},
        
        // 20. Negative large: -2^20 + (-0.5 * 2^20) = -1.5 * 2^20
        {"FADD_S_Neg_Large", 20, 21, 24, 0xCA800000, 0xCA000000, 0, 0xCAC00000, 0x00}
    };
    
    // Load initial values into registers
    std::cout << "Loading initial values into float registers" << std::endl;
    uint32_t result, int_result, exception_flags;
    
    // Load f2 = 2^20
    if (!execute_fpu_op(0b000011, 0, 0, 2, memory[0], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f3 = 0.5 * 2^20
    if (!execute_fpu_op(0b000011, 2, 0, 3, memory[2], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f4 = -4.0
    if (!execute_fpu_op(0b000011, 4, 0, 4, memory[4], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f5 = 4.0
    if (!execute_fpu_op(0b000011, 5, 0, 5, memory[5], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f6 = NaN
    if (!execute_fpu_op(0b000011, 6, 0, 6, memory[6], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f7 = -Inf
    if (!execute_fpu_op(0b000011, 7, 0, 7, memory[7], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f8 = +Inf
    if (!execute_fpu_op(0b000011, 8, 0, 8, memory[8], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f9 = +0.0
    if (!execute_fpu_op(0b000011, 9, 0, 9, memory[9], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f10 = -0.0
    if (!execute_fpu_op(0b000011, 10, 0, 10, memory[10], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f11 = 1.0
    if (!execute_fpu_op(0b000011, 11, 0, 11, memory[11], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f12 = -1.0
    if (!execute_fpu_op(0b000011, 12, 0, 12, memory[12], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f13 = 2.0
    if (!execute_fpu_op(0b000011, 13, 0, 13, memory[13], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f14 = -2.0
    if (!execute_fpu_op(0b000011, 14, 0, 14, memory[14], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f15 = denormal
    if (!execute_fpu_op(0b000011, 15, 0, 15, memory[15], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f16 = max normal
    if (!execute_fpu_op(0b000011, 16, 0, 16, memory[16], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f17 = -max normal
    if (!execute_fpu_op(0b000011, 17, 0, 17, memory[17], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f18 = 0.5
    if (!execute_fpu_op(0b000011, 18, 0, 18, memory[18], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f19 = -0.5
    if (!execute_fpu_op(0b000011, 19, 0, 19, memory[19], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f20 = -2^20
    if (!execute_fpu_op(0b000011, 20, 0, 20, memory[20], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Load f21 = -0.5 * 2^20
    if (!execute_fpu_op(0b000011, 21, 0, 21, memory[21], 0, 0, 0, result, int_result, exception_flags)) return;
    
    // Run tests
    for (const auto &test : tests) {
        std::cout << "\nTesting " << test.name << std::endl;
        std::cout << "Operands: operand1_fp=0x" << std::hex << test.operand1_fp 
                  << ", operand2_fp=0x" << test.operand2_fp 
                  << ", round_mode=" << (int)test.round_mode << std::dec << std::endl;
        
        if (!execute_fpu_op(0b001001, test.freg_rs1, test.freg_rs2, test.freg_rd,
                           test.operand1_fp, test.operand2_fp, 0,
                           test.round_mode, result, int_result, exception_flags)) {
            std::cout << "Test failed due to timeout" << std::endl;
            log_file << "Test failed: " << test.name << " timeout\n";
            continue;
        }
        
        // Print results
        bool pass = (result == test.expected_result) && (exception_flags == test.expected_exceptions);
        std::cout << "Result: 0x" << std::hex << result 
                  << ", Expected: 0x" << test.expected_result
                  << ", Status: " << (pass ? "\033[32m**PASS**\033[0m" : "\033[31m**FAIL**\033[0m") << std::endl;
        log_file << test.name << ": Result=0x" << std::hex << result 
                 << ", Expected=0x" << test.expected_result 
                 << ", Exceptions=0x" << exception_flags
                 << ", Expected Exceptions=0x" << test.expected_exceptions
                 << ", Status=" << (pass ? "PASS" : "FAIL") << std::dec << "\n";
        
        std::cout << "Exception Flags: 0x" << std::hex << exception_flags 
                  << ", Expected: 0x" << test.expected_exceptions << std::dec << std::endl;
        
        // Verify register if written
        if (test.freg_rd != 0) {
            tb->freg_rs1 = test.freg_rd;
            tick();
            std::cout << "Register f" << (int)test.freg_rd << ": 0x" << std::hex 
                      << tb->freg_read_data1 << (tb->freg_read_data1 == test.expected_result ? " (Correct)" : " (Incorrect)") 
                      << std::dec << std::endl;
            log_file << "Register f" << (int)test.freg_rd << ": 0x" << std::hex << tb->freg_read_data1 << std::dec << "\n";
        }
    }
    
    std::cout << "FADD_S test completed" << std::endl;
    log_file << "Test completed\n";
}

// Main function
int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    tb = new Vfpu;
    tfp = new VerilatedVcdC;
    tb->trace(tfp, 99);
    tfp->open("fpu_tb_fadd_s.vcd");

    // Reset
    tb->reset = 1;
    tb->downstream_valid = 1;
    for (int i = 0; i < 5; i++) tick();
    tb->reset = 0;
    tick();
    
    std::cout << "\nFPU Test Platform Started. Commands:\n"
              << "  si N   - Simulate N cycles\n"
              << "  info   - Display integer and float registers\n"
              << "  run    - Run FADD_S test sequence\n"
              << "  quit   - Exit simulation\n";
    std::cout << "\nEnter command: ";
    std::string command;
    while (std::getline(std::cin, command)) {
        if (command == "quit") {
            std::cout << "Simulation terminated." << std::endl;
            break;
        } else if (command.substr(0, 2) == "si") {
            int cycles = std::stoi(command.substr(3));
            for (int i = 0; i < cycles; i++) tick();
        } else if (command == "info") {
            std::cout << "Integer Registers:" << std::endl;
            for (int i = 0; i < 32; i++) {
                std::cout << "x" << std::setw(2) << std::setfill('0') << i 
                          << ": 0x" << std::hex << iregs[i] << std::dec << std::endl;
            }
            std::cout << std::endl;
            std::cout << "Float Registers:" << std::endl;
            for (int i = 0; i < 32; i++) {
                tb->freg_rs1 = i;
                tick();
                std::cout << "f" << std::setw(2) << std::setfill('0') << i 
                          << ": 0x" << std::hex << tb->freg_read_data1 << std::dec << std::endl;
            }
        } else if (command == "run") {
            test_fadd_s_instructions();
        } else {
            std::cout << "Unknown command: " << command << std::endl;
        }
        std::cout << "\nEnter command: ";
    }

    tfp->close();
    log_file.close();
    delete tfp;
    delete tb;
    return 0;
}
