module only_addi (
    input wire clk,          // 时钟信号
    input wire reset,        // 复位信号
    output reg [31:0] pc,     // 程序计数器
    output reg [31:0] x1,    // 寄存器x1
    output reg [31:0] x2,    // 寄存器x2
    output reg [31:0] x3,    // 寄存器x3
    output reg [31:0] x4,    // 寄存器x4
    output reg [31:0] x5     // 寄存器x5
);

    // DPI-C函数声明
    import "DPI-C" function void dpi_ebreak();

    // 内部信号声明
    wire [31:0] instruction;     // 指令
    wire [31:0] rs1_data;        // 源寄存器1数据
    wire [31:0] imm_ext;         // 扩展后的立即数
    wire [31:0] alu_result;      // ALU计算结果
    wire [4:0]  rs1, rd;         // 源寄存器和目标寄存器编号
    wire [11:0] imm;             // 12位立即数

    // 指令解析
    assign rs1 = instruction[19:15];        // 源寄存器1
    assign rd  = instruction[11:7];         // 目标寄存器
    assign imm = instruction[31:20];        // 立即数
    assign imm_ext = {{20{imm[11]}}, imm}; // 符号扩展立即数

    // 控制信号
    wire reg_write = (instruction[6:0] == 7'b0010011 && instruction[14:12] == 3'b000); // addi指令???????????? ????? 000 ????? 0010011
    wire is_ebreak = (instruction == 32'h00100073); // ebreak指令检测000000000001 00000 000 00000 1110011

    // 程序计数器更新（同步复位）
    always @(posedge clk) begin
        if (reset)
            pc <= 32'h80000000;  // 复位值为0x80000000
        else if (pc < 32'h80000014) // 执行5条指令后停止（若无ebreak）
            pc <= pc + 4;        // 顺序执行，每次加4
        else
            pc <= pc;            // 停止更新PC
    end

    // Instruction memory
    reg [31:0] instr_mem [0:31];
    initial begin
        instr_mem[0] = 32'h00500093; // addi x1, x0, 5    (x1 = 0 + 5)
        instr_mem[1] = 32'h00308113; // addi x2, x1, 3    (x2 = 5 + 3)
        instr_mem[2] = 32'hff800193; // addi x3, x0, -8   (x3 = 0 + (-8))
        instr_mem[3] = 32'h00100073; // ebreak            (结束仿真)
        instr_mem[4] = 32'h00210213; // addi x4, x2, 2    (不会执行)
        for (integer i = 5; i < 32; i = i + 1) begin
            instr_mem[i] = 32'h00000013; // NOP
        end
    end
    assign instruction = instr_mem[(pc - 32'h80000000) >> 2]; // 地址从0x80000000映射到索引

    // 寄存器堆（实现x0恒为0）
    reg [31:0] regs [0:31];
    integer i;
    initial begin
        for (i = 0; i < 32; i = i + 1) begin
            regs[i] = 32'b0; // 初始化所有寄存器为0
        end
    end
    assign rs1_data = (rs1 == 5'b0) ? 32'b0 : regs[rs1]; // x0恒为0

    // 写回寄存器（同步复位）
    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < 32; i = i + 1) begin
                regs[i] <= 32'b0; // 复位时清零所有寄存器
            end
        end
        else if (reg_write && rd != 0) begin
            regs[rd] <= alu_result; // 写回结果，x0不可写
        end
    end

    // ALU（仅支持加法）
    assign alu_result = rs1_data + imm_ext;

    // 处理ebreak指令
    always @(posedge clk) begin
        if (!reset && is_ebreak) begin
            dpi_ebreak();  // 调用DPI-C函数通知仿真结束
        end
    end

    // 打印状态
    always @(posedge clk) begin
        if (!reset) begin
            $display("Time: %0t | PC: %h | Instr: %h | x1: %d | x2: %d | x3: %d | x4: %d | x5: %d",
                     $time, pc, instruction, regs[1], regs[2], regs[3], regs[4], regs[5]);
        end
    end

    assign x1 = regs[1];
    assign x2 = regs[2];
    assign x3 = regs[3];
    assign x4 = regs[4];
    assign x5 = regs[5];
endmodule   // riscv_single_cycle
