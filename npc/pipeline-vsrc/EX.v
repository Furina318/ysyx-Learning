`timescale 1ns/1ns
`include "/home/furina/ysyx-workbench/npc/pipeline-vsrc/defines/defines.v"

module EX (
    input             clk,
    input             reset,
    input             id_ready,        // ID -> IF
    input             id_valid,
    output reg        ex_ready,
    input             lsu_ready,
    output reg        ex_lsu_valid,

    input      [4:0]  id_wb_rs1,
    input      [4:0]  id_wb_rs2,
    input      [4:0]  lsu_ex_forward_rd,
    input             lsu_ex_forward_RegWrite,
    input             lsu_ex_forward_MemRead,
    input      [31:0] lsu_wb_wdata,
    input      [4:0]  lsu_wb_rd,
    input             lsu_wb_RegWrite,
    input             lsu_wb_valid,
    output reg        ex_lsu_forward_las,

    input      [31:0] id_ex_inst,
    input      [31:0] id_ex_pc,
    input      [31:0] id_ex_imm,
    input      [4:0]  id_ex_zimm,
    input      [31:0] wb_ex_src1,
    input      [31:0] wb_ex_src2,
    input             id_ex_RegWrite,
    input      [4:0]  id_ex_rd,
    input      [6:0]  id_ex_opcode,
    input      [2:0]  id_ex_func3,
    input      [3:0]  id_ex_alu_op,

    input             id_ex_jal,
    input             id_ex_jalr,
    input             id_ex_MemRead,
    input             id_ex_MemWrite,
    input      [2:0]  id_ex_MemLen,

    input      [31:0] wb_ex_csr_num1,
    input      [31:0] wb_ex_csr_num2,
     
    input             id_ex_csr,
    input             id_ex_csr_wen1,
    input             id_ex_csr_wen2,
    input      [11:0] id_ex_csr_wr_addr1,
    input      [11:0] id_ex_csr_wr_addr2,
    input             id_ex_csr_ecall,
    input             id_ex_csr_mret,
    input             id_ex_csrrw,
    input             id_ex_csrrs,
    input             id_ex_csrrc,
    input             id_ex_csrrwi,
    input             id_ex_csrrsi,
    input             id_ex_csrrci,

    output reg        ex_flush,
    output reg [31:0] ex_flush_pc,
    // input             predict_taken,    // 分支预测输入
    // input      [31:0] predict_target,   // 预测目标地址
    // output reg        ex_mispredict,    // 预测错误信号
    // output reg [31:0] ex_correct_pc,    // 纠正的PC
    // output reg        ex_actual_taken,  // 实际跳转结果
    // output reg [31:0] ex_actual_target, // 实际目标地址

    output reg [31:0] ex_lsu_inst,
    output reg [31:0] ex_lsu_pc,
    output reg [31:0] ex_lsu_src2,
    output reg        ex_lsu_RegWrite,
    output reg [4:0]  ex_lsu_rd,
    output reg        ex_lsu_MemRead,
    output reg        ex_lsu_MemWrite,
    output reg [2:0]  ex_lsu_MemLen,
    output reg [6:0]  ex_lsu_opcode,

    output reg        ex_lsu_csr,
    output reg        ex_lsu_csr_wen1,
    output reg        ex_lsu_csr_wen2,
    output reg [11:0] ex_lsu_csr_wr_addr1,
    output reg [11:0] ex_lsu_csr_wr_addr2,
    output reg [31:0] ex_lsu_csr_wr_data1,
    output reg [31:0] ex_lsu_csr_wr_data2,
    output reg [31:0] ex_lsu_csr_rdata,

    output reg        ex_lsu_csr_ecall,
    output reg        ex_lsu_csr_mret,

    output reg [31:0] ex_lsu_imm,
    output reg [31:0] ex_lsu_process_result
);

    // 前递信号定义
    wire [1:0] forward_rs1;
    wire [1:0] forward_rs2;
    wire       forward_las;
    wire [3:0] load_use_flag;

    assign forward_rs1[1] = ex_lsu_RegWrite & (|ex_lsu_rd) & (ex_lsu_rd == id_wb_rs1) & ex_lsu_valid;
    assign forward_rs1[0] = lsu_wb_RegWrite & (|lsu_wb_rd) & (lsu_wb_rd == id_wb_rs1) & lsu_wb_valid;
    assign forward_rs2[1] = ex_lsu_RegWrite & (|ex_lsu_rd) & (ex_lsu_rd == id_wb_rs2) & ex_lsu_valid;
    assign forward_rs2[0] = lsu_wb_RegWrite & (|lsu_wb_rd) & (lsu_wb_rd == id_wb_rs2) & lsu_wb_valid;

    assign forward_las = id_ex_MemWrite & ex_lsu_MemRead & ex_lsu_RegWrite & ex_lsu_valid &
                         (|ex_lsu_rd) & (ex_lsu_rd != id_wb_rs1) & (ex_lsu_rd == id_wb_rs2);

    assign load_use_flag[3] = lsu_ex_forward_MemRead & lsu_ex_forward_RegWrite & (|lsu_ex_forward_rd) & (lsu_ex_forward_rd == id_wb_rs1);
    assign load_use_flag[2] = lsu_ex_forward_MemRead & lsu_ex_forward_RegWrite & (|lsu_ex_forward_rd) & (lsu_ex_forward_rd == id_wb_rs2);
    assign load_use_flag[1] = ex_lsu_MemRead & ex_lsu_RegWrite & (|ex_lsu_rd) & (ex_lsu_rd == id_wb_rs1) & ex_lsu_valid;
    assign load_use_flag[0] = ex_lsu_MemRead & ex_lsu_RegWrite & ex_lsu_valid & (|ex_lsu_rd) & (ex_lsu_rd == id_wb_rs2);

    // 前递后的源寄存器值
    wire [31:0] src1 = (forward_rs1[1] ? ex_lsu_process_result : 
                       (forward_rs1[0] | load_use_flag[1]) ? lsu_wb_wdata : 
                       wb_ex_src1);
    wire [31:0] src2 = (forward_rs2[1] ? ex_lsu_process_result : 
                       (forward_rs2[0] | load_use_flag[0]) ? lsu_wb_wdata : 
                       wb_ex_src2);

    // ALU 操作中间变量
    reg [31:0] ex_num1;
    reg [31:0] ex_num2;
    reg [31:0] process_result;

    // ALU 输入选择
    always @(*) begin
        if (id_ex_MemRead | id_ex_MemWrite) begin
            ex_num1 = src1;
            ex_num2 = id_ex_imm;
        end
        else if (id_ex_jal | id_ex_jalr) begin
            ex_num1 = id_ex_pc;
            ex_num2 = 32'd4;
        end
        else if(id_ex_opcode == `INST_LUI) begin
            ex_num1 = id_ex_imm;
            ex_num2 = 32'b0;
        end
        else if(id_ex_opcode == `INST_AUIPC) begin
            ex_num1 = id_ex_pc;
            ex_num2 = id_ex_imm;
        end
        // else if (id_ex_opcode == `INST_CSRRW || id_ex_opcode == `INST_CSRRC || id_ex_opcode == `INST_CSRRS ||
        //          id_ex_opcode == `INST_CSRRWI || id_ex_opcode == `INST_CSRRCI || id_ex_opcode == `INST_CSRRSI) begin
        //     ex_num1 = wb_ex_csr_num1;
        //     if (id_ex_csrrw || id_ex_csrrc || id_ex_csrrs) begin
        //         ex_num2 = src1;
        //     end
        //     else begin
        //         ex_num2 = {27'b0, id_ex_zimm};
        // end
        else if(id_ex_alu_op == `ALU_SLL || id_ex_alu_op == `ALU_SRL || id_ex_alu_op == `ALU_SRA) begin
            ex_num1 = src1;
            // ex_num2 = {27'b0, src2[4:0]}; //位移指令只取src2低5位
            // ex_num2 = {27'b0, id_ex_imm[4:0]}; 
            // if(id_ex_opcode[6:2] == `INST_TYPE_I) begin
            //     ex_num2 = {27'b0, id_ex_imm[4:0]};
            // end
            // else if(id_ex_opcode[6:2] == `INST_TYPE_R) begin
            //     ex_num2 = {27'b0, src2[4:0]};
            // end
            // else begin
            //     ex_num2 = 32'b0; // 如果不是位移指令，ex_num2为0
            // end
            ex_num2 = (id_ex_opcode[6:2] == `INST_TYPE_I) ? {27'b0, id_ex_imm[4:0]} :
                        (id_ex_opcode[6:2] == `INST_TYPE_R) ? {27'b0, src2[4:0]} : 32'b0;
        end
        else begin
            ex_num1 = src1;
            ex_num2 = (id_ex_opcode[6:2] == `INST_TYPE_R || id_ex_opcode[6:2] == `INST_TYPE_B) ? src2 : id_ex_imm;
        end
    end

    // ALU 操作
    reg        alu_zero;
    reg        alu_less;

    always @(*) begin
        case (id_ex_alu_op)
            `ALU_ADD:  process_result = ex_num1 + ex_num2;
            `ALU_SUB:  process_result = ex_num1 - ex_num2;
            `ALU_AND:  process_result = ex_num1 & ex_num2;
            `ALU_OR:   process_result = ex_num1 | ex_num2;
            `ALU_XOR:  process_result = ex_num1 ^ ex_num2;
            `ALU_SLTU: process_result = (ex_num1 < ex_num2) ? {31'b0, 1'b1} : 32'b0;
            `ALU_SLT:  process_result = ($signed(ex_num1) < $signed(ex_num2)) ? {31'b0, 1'b1} : 32'b0;
            `ALU_SRA:  process_result = $signed(ex_num1) >>> ex_num2[4:0];
            `ALU_SLL:  process_result = ex_num1 << ex_num2[4:0];
            `ALU_SRL:  process_result = ex_num1 >> ex_num2[4:0];
            default:   process_result = 32'b0;
        endcase
        alu_zero = (process_result == 32'b0);
        alu_less = (id_ex_alu_op == `ALU_SLT) ? ($signed(ex_num1) < $signed(ex_num2)) :
                (id_ex_alu_op == `ALU_SLTU) ? (ex_num1 < ex_num2) : 1'b0;
    end

    // 分支和跳转逻辑
    reg [31:0] jal_target;
    reg [31:0] jalr_target;
    reg        take_branch;
    reg        ex_flush_condition;

    always @(*) begin
        jal_target  = id_ex_pc + id_ex_imm;
        jalr_target = (src1 + id_ex_imm) & ~32'h1;
        take_branch = (id_ex_opcode == `INST_B) && (
                    (id_ex_func3 == `F3_BNE && !alu_zero) || // bne
                    (id_ex_func3 == `F3_BEQ && alu_zero) ||  // beq
                    (id_ex_func3 == `F3_BLT && alu_less) ||  // blt
                    (id_ex_func3 == `F3_BGE && !alu_less) || // bge
                    (id_ex_func3 == `F3_BLTU && alu_less) || // bltu
                    (id_ex_func3 == `F3_BGEU && !alu_less)   // bgeu
        );

        if (id_ex_jal) begin
            ex_flush = 1'b1 & ex_flush_condition & (~(|load_use_flag));//添加加载使用冒险检测
            ex_flush_pc = jal_target;
        end
        else if (id_ex_jalr) begin
            ex_flush = 1'b1 & ex_flush_condition & (~(|load_use_flag));
            ex_flush_pc = jalr_target;
        end
        else if (take_branch) begin
            ex_flush = 1'b1 & ex_flush_condition & (~(|load_use_flag));
            ex_flush_pc = id_ex_pc + id_ex_imm;
        end
        else if (id_ex_csr_ecall) begin
            ex_flush = 1'b1 & ex_flush_condition & (~(|load_use_flag));
            ex_flush_pc = wb_ex_csr_num1;
        end
        else if (id_ex_csr_mret) begin
            ex_flush = 1'b1 & ex_flush_condition & (~(|load_use_flag));
            ex_flush_pc = wb_ex_csr_num2;
        end
        else begin
            ex_flush = 1'b0;
            ex_flush_pc = 32'h0;
        end

        // // 预测对比逻辑
        // if (id_ex_jal) begin
        //     ex_actual_taken = 1;
        //     ex_actual_target = jal_target;
        //     ex_mispredict = (predict_taken != 1) || (predict_target != jal_target);
        //     ex_correct_pc = jal_target;
        // end
        // else if (id_ex_jalr) begin
        //     ex_actual_taken = 1;
        //     ex_actual_target = jalr_target;
        //     ex_mispredict = (predict_taken != 1) || (predict_target != jalr_target);
        //     ex_correct_pc = jalr_target;
        // end
        // else if (id_ex_opcode == `INST_B) begin
        //     ex_actual_taken = take_branch;
        //     ex_actual_target = id_ex_pc + id_ex_imm;
        //     ex_mispredict = (predict_taken != take_branch) || (predict_taken && predict_target != ex_actual_target);
        //     ex_correct_pc = take_branch ? ex_actual_target : (id_ex_pc + 4);
        // end
        // else begin
        //     ex_actual_taken = 0;
        //     ex_actual_target = 32'h0;
        //     ex_mispredict = 0;
        //     ex_correct_pc = 32'h0;
        // end
    end
    
    always @(posedge clk)begin
        if(reset)begin
            ex_flush_condition <= 1'b1;
        end
        else if(ex_flush)begin
            ex_flush_condition <= 1'b0;
        end
        else if(id_ready)begin
            ex_flush_condition <= 1'b1;
        end
    end

    reg [31:0] csr_write_ecall;
    always @(*) begin
        if (id_ex_csr_ecall) begin
            csr_write_ecall = id_ex_pc;
        end
        else begin
            csr_write_ecall = 32'b0;
        end
    end

    wire [31:0] mstatus_t;
    wire [31:0] mpie;
    assign mpie = (wb_ex_csr_num1 >> 7) & 32'h1;
    assign mstatus_t = (((wb_ex_csr_num1 & ~(32'h3 << 11)) & ~(32'h1 << 3)) | (mpie << 3)) | (32'h1 << 7);

    reg [31:0] csr_write_wire;
    always @(*) begin
        if (id_ex_csrrw) begin
            csr_write_wire = src1;
        end
        else if (id_ex_csrrc) begin
            csr_write_wire = (wb_ex_csr_num1 & ~src1);
        end
        else if (id_ex_csrrs) begin
            csr_write_wire = (wb_ex_csr_num1 | src1);
        end
        else if (id_ex_csrrwi) begin
            csr_write_wire = {27'b0,id_ex_zimm};
        end
        else if (id_ex_csrrci) begin
            csr_write_wire = wb_ex_csr_num1 & ~({27'b0,id_ex_zimm});
        end
        else if (id_ex_csrrsi) begin
            csr_write_wire = wb_ex_csr_num1 | ({27'b0,id_ex_zimm});
        end
        else if (id_ex_csr_ecall) begin
            csr_write_wire = 32'd11;
        end
        else if (id_ex_csr_mret) begin
            csr_write_wire = mstatus_t;
        end
        else begin
            csr_write_wire = 32'b0;
        end
    end

    // 流水线控制
    always @(*) begin
        ex_ready = (lsu_ready || !ex_lsu_valid) && (load_use_flag == 4'b0);
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            ex_lsu_valid <= 1'b0;
        end
        else if ((id_valid && ex_ready) && (lsu_ready || !ex_lsu_valid)) begin
            ex_lsu_valid <= 1'b1;
        end
        else if (!(id_valid && ex_ready) && lsu_ready) begin
            ex_lsu_valid <= 1'b0;
        end
    end

    // 输出信号赋值
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            ex_lsu_inst           <= 32'h0;
            ex_lsu_pc             <= 32'h0;
            ex_lsu_src2           <= 32'h0;
            ex_lsu_RegWrite       <= 1'b0;
            ex_lsu_rd             <= 5'b0;
            ex_lsu_MemRead        <= 1'b0;
            ex_lsu_MemWrite       <= 1'b0;
            ex_lsu_MemLen         <= 3'b0;
            ex_lsu_process_result <= 32'h0;
            ex_lsu_forward_las    <= 1'b0;
            ex_lsu_csr            <= 1'b0;
            ex_lsu_csr_wen1       <= 1'b0;
            ex_lsu_csr_wen2       <= 1'b0;
            ex_lsu_csr_wr_addr1   <= 12'b0;
            ex_lsu_csr_wr_addr2   <= 12'b0;
            ex_lsu_csr_wr_data1   <= 32'h0;
            ex_lsu_csr_wr_data2   <= 32'h0;
            ex_lsu_csr_rdata      <= 32'h0;
            ex_lsu_csr_ecall      <= 1'b0;
            ex_lsu_csr_mret       <= 1'b0;
            ex_lsu_imm            <= 32'h0;
            ex_lsu_opcode         <= 7'b0;
        end
        else if (id_valid && ex_ready) begin
            ex_lsu_inst           <= id_ex_inst;
            ex_lsu_pc             <= id_ex_pc;
            ex_lsu_src2           <= src2;
            ex_lsu_RegWrite       <= id_ex_RegWrite;
            ex_lsu_rd             <= id_ex_rd;
            ex_lsu_MemRead        <= id_ex_MemRead;
            ex_lsu_MemWrite       <= id_ex_MemWrite;
            ex_lsu_MemLen         <= id_ex_MemLen;
            ex_lsu_process_result <= process_result;
            ex_lsu_forward_las    <= forward_las;
            ex_lsu_csr            <= id_ex_csr;
            ex_lsu_csr_wen1       <= id_ex_csr_wen1;
            ex_lsu_csr_wen2       <= id_ex_csr_wen2;
            ex_lsu_csr_wr_addr1   <= id_ex_csr_wr_addr1;
            ex_lsu_csr_wr_addr2   <= id_ex_csr_wr_addr2;
            ex_lsu_csr_wr_data1   <= csr_write_wire;
            ex_lsu_csr_wr_data2   <= csr_write_ecall;
            ex_lsu_csr_rdata      <= wb_ex_csr_num1;
            ex_lsu_csr_ecall      <= id_ex_csr_ecall;
            ex_lsu_csr_mret       <= id_ex_csr_mret;
            ex_lsu_imm            <= id_ex_imm;
            ex_lsu_opcode         <= id_ex_opcode;
        end
    end

// always @(posedge clk) begin
//     if (id_valid && ex_ready) begin
//         $display("EX: inst=%h, src1=%h, src2=%h, forward_rs1=%b, ex_lsu_process_result=%h",
//                  id_ex_inst, src1, src2, forward_rs1, ex_lsu_process_result);
//     end
// end
endmodule