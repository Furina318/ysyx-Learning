`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module rv32e (
    input clk,
    input rst
);

    // 内部信号声明
    wire [31:0] pc;             // 当前程序计数器
    wire [31:0] pc_next;        // 下一条指令的 PC
    wire [31:0] inst;           // 当前指令
    wire [31:0] imm;            // 立即数
    wire [31:0] rs1_data;       // 寄存器 rs1 数据
    wire [31:0] rs2_data;       // 寄存器 rs2 数据
    wire [31:0] alu_result;     // ALU 计算结果
    wire [31:0] mem_data_out;   // 内存读取数据
    wire [31:0] reg_write_data; // 写回寄存器的数据
    wire less;                  // ALU 小于比较结果
    wire zero;                  // ALU 零比较结果

    // 控制信号
    wire [2:0] i_type;          // 立即数类型
    wire reg_wr;                // 寄存器写使能
    wire alu_a_src;             // ALU A 输入选择
    wire [1:0] alu_b_src;       // ALU B 输入选择
    wire [3:0] alu_ctr;         // ALU 控制信号
    wire mem_to_reg;            // 写回数据来源
    wire mem_wr;                // 内存写使能
    wire [2:0] mem_op;          // 内存操作类型
    wire [2:0] branch;          // 分支类型
    wire pc_a_src;              // PC 更新输入 A 选择
    wire pc_b_src;              // PC 更新输入 B 选择

    // 指令字段
    wire [4:0] rs1 = inst[19:15];
    wire [4:0] rs2 = inst[24:20];
    wire [4:0] rd  = inst[11:7];

    // PC 模块实例化
    PC pc_inst (
        .clk(clk),
        .rst(rst),
        .imm(imm),
        .rs1(rs1_data),
        .PCAsrc(pc_a_src),
        .PCBsrc(pc_b_src),
        .pc(pc),
        .pc_next(pc_next)
    );

    // 寄存器文件实例化
    register_files register_files_inst (
        .clk(clk),
        .rst(rst),
        .RegWr(reg_wr),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .busW(reg_write_data),
        .busA(rs1_data),
        .busB(rs2_data)
    );

    // 立即数生成器实例化
    imm_gen imm_gen_inst (
        .instr(inst),
        .i_type(i_type),
        .imm(imm)
    );

    // ALU 实例化
    ALU alu_inst (
        .ALUctr(alu_ctr),
        .ALUAsrc(alu_a_src),
        .ALUBsrc(alu_b_src),
        .imm(imm),
        .PC(pc),
        .rs1(rs1_data),
        .rs2(rs2_data),
        .Result(alu_result),
        .Less(less),
        .zero(zero)
    );

    // 内存模块实例化
    mem mem_inst (
        .addr(alu_result),
        .inst_addr(pc),
        .MemOp(mem_op),
        .data_in(rs2_data),
        .clk(clk),
        .WrEn(mem_wr),
        .MemtoReg(mem_to_reg),
        .inst_data(inst),
        .data_out(mem_data_out)
    );

    // 控制信号生成器实例化
    contr_gen contr_gen_inst (
        .inst(inst),
        .i_type(i_type),
        .RegWr(reg_wr),
        .ALUAsrc(alu_a_src),
        .ALUBsrc(alu_b_src),
        .ALUctr(alu_ctr),
        .MemtoReg(mem_to_reg),
        .MemWr(mem_wr),
        .MemOP(mem_op),
        .Branch(branch)
    );

    // 分支条件模块实例化
    Branch_Cond branch_cond_inst (
        .Branch(branch),
        .Less(less),
        .zero(zero),
        .PCAsrc(pc_a_src),
        .PCBsrc(pc_b_src)
    );

    // 写回数据选择
    // assign reg_write_data = mem_to_reg ? mem_data_out : alu_result;

endmodule
