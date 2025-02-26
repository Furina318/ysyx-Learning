module riscv_single_cycle (
    input clk,          // 时钟信号
    input reset         // 复位信号（可选）
);

    // ---------- 硬件组件定义 ----------
    // 程序计数器（PC）
    reg [31:0] pc;

    // 指令存储器（ROM）
    wire [31:0] instr;
    instr_mem imem (
        .addr(pc),
        .data(instr)
    );

    // 寄存器文件（32个寄存器）
    reg [31:0] reg_file [0:31];
    wire [31:0] rs1_data, rs2_data;

    // 数据存储器（RAM）
    wire [31:0] mem_data;
    data_mem dmem (
        .clk(clk),
        .addr(alu_result),
        .write_data(rs2_data),
        .mem_write(mem_write),
        .read_data(mem_data)
    );

    // ---------- 控制信号定义 ----------
    wire reg_write;     // 寄存器写使能
    wire mem_write;     // 存储器写使能
    wire jump;          // 跳转指令（JAL/JALR）
    wire jalr;          // JALR指令标志
    wire [1:0] alu_src1;// ALU输入1选择
    wire [1:0] alu_src2;// ALU输入2选择
    wire [1:0] result_src; // 写回数据选择

    // ---------- 立即数生成 ----------
    wire [31:0] imm_u = {instr[31:12], 12'b0};          // U型立即数
    wire [31:0] imm_i = {{20{instr[31]}}, instr[31:20]}; // I型立即数
    wire [31:0] imm_s = {{20{instr[31]}}, instr[31:25], instr[11:7]}; // S型立即数
    wire [31:0] imm_j = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0}; // J型立即数

    // ---------- ALU 输入选择 ----------
    wire [31:0] alu_in1 = (alu_src1 == 2'b01) ? pc : rs1_data; // PC或rs1
    wire [31:0] alu_in2 = (alu_src2 == 2'b01) ? imm_i : 
                          (alu_src2 == 2'b10) ? imm_s : imm_u; // 立即数选择

    // ---------- ALU 计算 ----------
    wire [31:0] alu_result = alu_in1 + alu_in2;  // 仅需加法

    // ---------- 跳转目标计算 ----------
    wire [31:0] jal_target = pc + imm_j;         // JAL目标地址
    wire [31:0] jalr_target = (alu_result + imm_i) & 32'hFFFFFFFE; // JALR地址对齐
    wire [31:0] next_pc = jump ? (jalr ? jalr_target : jal_target) : pc + 4;

    // ---------- 写回数据选择 ----------
    wire [31:0] result = (result_src == 2'b00) ? alu_result :  // ALU结果
                        (result_src == 2'b01) ? mem_data :     // 存储器读数据
                        (result_src == 2'b10) ? pc + 4 :       // JAL/JALR返回地址
                        imm_u;                                // LUI立即数

    // ---------- 控制单元 ----------
    control_unit ctrl (
        .opcode(instr[6:0]),
        .funct3(instr[14:12]),
        .reg_write(reg_write),
        .mem_write(mem_write),
        .jump(jump),
        .jalr(jalr),
        .alu_src1(alu_src1),
        .alu_src2(alu_src2),
        .result_src(result_src)
    );

    // ---------- 寄存器文件读写 ----------
    assign rs1_data = (instr[19:15] != 0) ? reg_file[instr[19:15]] : 0; // x0恒为0
    assign rs2_data = (instr[24:20] != 0) ? reg_file[instr[24:20]] : 0;

    always @(posedge clk) begin
        if (reset) pc <= 32'h0; // 复位PC
        else pc <= next_pc;     // 更新PC

        // 写回寄存器（x0除外）
        if (reg_write && instr[11:7] != 0) begin
            reg_file[instr[11:7]] <= result;
        end
    end

endmodule
