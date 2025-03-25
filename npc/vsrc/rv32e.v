`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
module rv32e (
    input         clk,
    input         reset
);

    wire [31:0]  pc;
    wire [31:0]  instr;
    wire [6:0]   opcode;
    wire [4:0]   rs1, rs2, rd;
    wire [31:0]  imm;
    wire [2:0]   func3;
    wire [6:0]   func7;
    wire         RegWrite;
    wire         MemWrite;
    wire         MemRead;
    wire [31:0]  rs1_val, rs2_val;
    wire [31:0]  wb_data;
    wire [31:0]  jal_target;
    wire [31:0]  jalr_target;
    wire         is_jal, is_jalr;
    wire [31:0]  data_out;
    wire [3:0]   alu_op;
    wire [31:0]  alu_result;
    wire         alu_zero;
    wire         alu_less;
    wire         take_branch;
    wire [1:0]   MemLen;

    wire [31:0] branch_target;
    assign branch_target=is_jalr ? jalr_target : jal_target;
    // 取指模块
    IF if_stage (
        .clk(clk),
        .reset(reset),
        // .branch_target(is_jalr ? jalr_target : jal_target),
        .branch_target(branch_target),
        .pc_src(is_jal | is_jalr | take_branch),
        .pc(pc),
        .instr(instr)
    );

    // 译码模块
    ID id_stage (
        .instr(instr),
        .opcode(opcode),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .imm(imm),
        .func3(func3),
        .func7(func7),
        .RegWrite(RegWrite),
        .MemWrite(MemWrite),
        .MemRead(MemRead),
        .alu_op(alu_op),
        .MemLen(MemLen)
    );

    // 寄存器文件
    RegFile regfile (
        .clk(clk),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .we(RegWrite),
        .wd(wb_data),
        .rs1_val(rs1_val),
        .rs2_val(rs2_val)
    );
    // ALU模块
    ALU alu (
        .alu_op(alu_op),
        .a(rs1_val),
        .b((opcode[6:2] == `INST_TYPE_R || opcode[6:2] == `INST_TYPE_B) ? rs2_val : imm), // R-type用rs2_val，I-type用imm
        .result(alu_result),
        .zero(alu_zero),
        .less(alu_less)
    );
    // 内存访问模块
    MEM mem_stage (
        .clk(clk),
        .MemRead(MemRead),
        .MemWrite(MemWrite),
        .addr(rs1_val + imm),
        .data_in(rs2_val),
        .MemLen(MemLen),
        .data_out(data_out)
    );

    // 跳转目标计算
    assign jal_target = pc + imm;
    assign jalr_target = (rs1_val + imm) & ~32'h1;
    assign is_jal = (opcode == `INST_JAL);
    assign is_jalr = (opcode == `INST_JALR) & (func3 == 3'b000);
    assign take_branch = (opcode == `INST_B) && (//B类型
        (func3 == `F3_BNE && !alu_zero) ||//bne
        (func3 == `F3_BEQ && alu_zero) ||//beq
        (func3 == `F3_BLT && alu_less) ||//blt
        (func3 == `F3_BGE && !alu_less) ||//bge
        (func3 == `F3_BLTU && alu_less) ||//bltu
        (func3 == `F3_BGEU && !alu_less)//begu
    ); 
    // 写回数据选择
    assign wb_data = (opcode == `INST_LUI) ? imm :                   // LUI
                     (opcode == `INST_AUIPC) ? (pc + imm) :            // AUIPC
                     (opcode == `INST_JAL || opcode == `INST_JALR) ? (pc + 4) : // JAL, JALR
                     (opcode == `INST_LW) ? data_out :              // lw,lh,lbu共用
                     (opcode == `INST_R || opcode == `INST_I) ? alu_result : 32'b0; // R-type, I-type
    always @(posedge clk) begin
        if (opcode == `INST_B)
            $display("PC=%h, imm=%h, jal_target=%h, take_branch=%b", pc, imm, jal_target, take_branch);
    end

endmodule
