`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module rv32e (
    input clk,
    input rst
);

    // 内部信号声明
    reg [31:0] pc_now;             // 当前程序计数器
    wire [31:0] pc_next;           // 下一条指令的 PC
    wire [31:0] inst;              // 当前指令（直接从内存读取）
    wire [31:0] imm;               // 立即数
    wire [31:0] rs1_data;          // 寄存器 rs1 数据
    wire [31:0] rs2_data;          // 寄存器 rs2 数据
    wire [31:0] alu_result;        // ALU 计算结果
    wire [31:0] mem_data_out;      // 内存读取数据
    wire [31:0] reg_write_data;    // 写回寄存器的数据
    wire less;                     // ALU 小于比较结果
    wire zero;                     // ALU 零比较结果

    // 控制信号
    wire [2:0] i_type;             // 立即数类型
    wire reg_wr;                   // 寄存器写使能
    wire alu_a_src;                // ALU A 输入选择
    wire [1:0] alu_b_src;          // ALU B 输入选择
    wire [3:0] alu_ctr;            // ALU 控制信号
    wire mem_to_reg;               // 写回数据来源
    wire mem_wr;                   // 内存写使能
    wire mem_rd;                   // 内存读使能
    wire [2:0] mem_op;             // 内存操作类型
    wire [2:0] branch;             // 分支类型
    wire pc_a_src;                 // PC 更新输入 A 选择
    wire pc_b_src;                 // PC 更新输入 B 选择

    // 指令字段
    wire [4:0] rs1 = inst[19:15];
    wire [4:0] rs2 = inst[24:20];
    wire [4:0] rd  = inst[11:7];

    reg [31:0] time_counter;
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);

    // PC 更新
    always @(posedge clk) begin
        if (rst) begin
            pc_now <= 32'h80000000;
            //pc_next <= 32'h80000004;
            time_counter <= 0;
            $display("Rv32e reset: PC: 0x%08x | PC_next: 0x%08x", pc_now, pc_next);
        end else begin
            pc_now <= pc_next;
            time_counter <= time_counter+1;
            $display("Time: %0d | PC = 0x%08x | Inst = 0x%08x | ALU Result = 0x%08x", time_counter, pc_now, inst, alu_result);
        end
    end
    
    // PC 模块实例化
    PC pc_inst (
        .clk(clk),
        .rst(rst),
        .imm(imm),
        .rs1(rs1_data),
        .PCAsrc(pc_a_src),
        .PCBsrc(pc_b_src),
        .pc(pc_now),
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
        .rst(rst),
        .instr(inst),
        .i_type(i_type),
        .imm(imm)
    );

    // 控制信号生成器实例化
    contr_gen contr_gen_inst (
        .clk(clk),
        .rst(rst),
        .inst(inst),
        .i_type(i_type),
        .RegWr(reg_wr),
        .ALUAsrc(alu_a_src),
        .ALUBsrc(alu_b_src),
        .ALUctr(alu_ctr),
        .MemtoReg(mem_to_reg),
        .MemWr(mem_wr),
        .MemRd(mem_rd),
        .MemOP(mem_op),
        .Branch(branch)
    );

    // 内存模块实例化
    mem mem_inst (
        .addr(alu_result),        // 使用当前 ALU 结果
        .inst_addr(pc_now),       // 使用当前 PC 取指令
        .MemOp(mem_op),
        .data_in(rs2_data),
        .clk(clk),
        .rst(rst),
        .WrEn(mem_wr),
        .RdEn(mem_rd),
        .inst_data(inst),         // 直接输出到 inst
        .data_out(mem_data_out)
    );

    // ALU 实例化
    ALU alu_inst (
        .ALUctr(alu_ctr),
        .ALUAsrc(alu_a_src),
        .ALUBsrc(alu_b_src),
        .imm(imm),
        .PC(pc_now),              // 使用当前 PC
        .rs1(rs1_data),
        .rs2(rs2_data),
        .rst(rst),
        .Result(alu_result),
        .Less(less),
        .zero(zero)
    );

    // 写回数据选择
    assign reg_write_data = mem_to_reg ? mem_data_out : alu_result;

    // 分支条件模块实例化
    Branch_Cond branch_cond_inst (
        .rst(rst),
        .Branch(branch),
        .Less(less),
        .zero(zero),
        .PCAsrc(pc_a_src),
        .PCBsrc(pc_b_src)
    );

endmodule
