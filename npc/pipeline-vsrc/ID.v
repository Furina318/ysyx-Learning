`timescale 1ns/1ns
`include "/home/furina/ysyx-workbench/npc/pipeline-vsrc/defines/defines.v"
module ID (
    input             clk,                    // 时钟信号
    input             reset,                  // 复位信号
    input      [31:0] if_id_pc,               // 从IFU传递的PC值
    input      [31:0] if_id_pc2,              // 用于分支预测的PC值
    input      [31:0] if_id_inst,             // 从IFU传递的指令
    input             ex_flush,               // 执行单元的冲刷信号

    // 握手信号
    input             if_valid,                // IFU到ID的有效信号
    output reg        id_ready,                // ID到IFU的就绪信号
    input             ex_ready,                // EXU到ID的就绪信号
    output reg        id_valid,                // ID到EXU的有效信号

    output reg [31:0] id_ex_pc,               // 传递到EXU的PC值
    output reg [31:0] id_ex_pc2,              // 用于分支预测的PC值
    output reg [31:0] id_ex_inst,             // 传递到EXU的指令
    output reg        id_ex_RegWrite,         // 寄存器写使能
    output reg [4:0]  id_ex_rd,               // 寄存器写地址
    output reg [4:0]  id_wb_rs1,              // 源寄存器1地址
    output reg [4:0]  id_wb_rs2,              // 源寄存器2地址
    output reg [4:0]  id_ex_zimm,             // CSR立即数（zimm）
    output reg [31:0] id_ex_imm,              // 立即数值
    output reg [5:0]  id_ex_shamt,              // 移位量

    output reg [3:0]  id_ex_alu_op,
    output reg [2:0]  id_ex_MemLen,
    output reg        id_ex_MemWrite,
    output reg        id_ex_MemRead,
    output reg [6:0]  id_ex_opcode,
    output reg [2:0]  id_ex_func3,

    output reg        id_ex_jal,              // JAL跳转信号
    output reg        id_ex_jalr,             // JALR跳转信号

    input             predict_taken,         // 分支预测输入
    input      [31:0] predict_target,       // 预测目标地址
    output reg        id_ex_predict_taken,       // 分支预测输出
    output reg [31:0] id_ex_predict_target,       // 分支预测实际目标地址

    output reg        id_ex_csr,              // CSR指令信号
    output reg        id_ex_csr_wen1,         // CSR写使能1
    output reg        id_ex_csr_wen2,         // CSR写使能2
    output reg        id_ex_csr_ecall,        // ECALL信号
    output reg        id_ex_csr_mret,         // MRET信号
    output reg [1:0]  id_ex_csr_op,

    output reg [11:0] id_ex_csr_wr_addr1,     // CSR写地址1
    output reg [11:0] id_ex_csr_wr_addr2,     // CSR写地址2
    output reg [11:0] id_wb_csr_addr1,       // CSR读地址1
    output reg [11:0] id_wb_csr_addr2        // CSR读地址2
);
    wire [31:0] instr = if_id_inst;
    
    wire [31:0] immI = {{20{instr[31]}}, instr[31:20]};
    wire [31:0] immU = {instr[31:12], 12'b0};
    wire [31:0] immS = {{20{instr[31]}}, instr[31:25], instr[11:7]};
    wire [31:0] immB = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    wire [31:0] immJ = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
    wire [31:0] immR = 32'b0;
    wire [31:0] immCSR = {27'b0, instr[19:15]};

    wire [6:0] opcode = instr[6:0];
    wire [4:0] rs1    = instr[19:15];
    wire [4:0] rs2    = instr[24:20];
    wire [4:0] rd     = instr[11:7];
    wire [2:0] func3  = instr[14:12];
    wire [6:0] func7  = instr[31:25];
    wire [5:0] shamt  = instr[25:20];
    wire [4:0] get_opcode = opcode[6:2];

    wire [31:0] imm;
    assign imm = (get_opcode == `INST_TYPE_AUIPC || get_opcode == `INST_TYPE_LUI) ? immU :
                (get_opcode == `INST_TYPE_JAL) ? immJ :
                (get_opcode == `INST_TYPE_JALR || get_opcode == `INST_TYPE_L || get_opcode == `INST_TYPE_I) ? immI :
                (get_opcode == `INST_TYPE_R) ? immR :
                (get_opcode == `INST_TYPE_S) ? immS :
                (get_opcode == `INST_TYPE_B) ? immB :
                (opcode == `INST_CSR && (func3 == `F3_CSRRCI || func3 == `F3_CSRRSI || func3 == `F3_CSRRWI)) ? immCSR : 32'h0;

    wire [3:0] alu_op;

    // assign alu_op = ((get_opcode == `INST_TYPE_R && func3 == 3'b000 && func7[5]) ||
    //             (get_opcode == `INST_TYPE_B && (func3 == `F3_BEQ || func3 == `F3_BNE))) ? `ALU_SUB :
    //              ((get_opcode == `INST_TYPE_I && func3 == `F3_SLTI) ||
    //              (get_opcode == `INST_TYPE_B && (func3 == `F3_BLT || func3 == `F3_BGE)) ||
    //              ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_SLT && func7 == 7'b0000000)) ? `ALU_SLT :
    //              ((get_opcode == `INST_TYPE_B && (func3 == `F3_BLTU || func3 == `F3_BGEU)) ||
    //              (get_opcode == `INST_TYPE_R && func3 == `F3_SLTU && func7 == 7'b0000000) ||
    //              (get_opcode == `INST_TYPE_I && func3 == `F3_SLTU)) ? `ALU_SLTU :
    //              ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_ORI) ? `ALU_OR :
    //              ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_XORI) ? `ALU_XOR :
    //              ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_ANDI) ? `ALU_AND :
    //              ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_RSH && func7 == 7'b0000000) ? `ALU_SRL :
    //              ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_RSH && func7 == 7'b0100000) ? `ALU_SRA :
    //              ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_LSH && func7 == 7'b0000000) ? `ALU_SLL : `ALU_ADD;
    
        // assign alu_op = (get_opcode == `INST_TYPE_R && func3 == 3'b000 && func7[5]) ? `ALU_SUB :
        //          (get_opcode == `INST_TYPE_R && func3 == 3'b000 && !func7[5]) ? `ALU_ADD :
        //          (get_opcode == `INST_TYPE_I && func3 == `F3_ADDI) ? `ALU_ADD :
        //          (get_opcode == `INST_TYPE_I && func3 == `F3_SLTI) ? `ALU_SLT :
        //          (get_opcode == `INST_TYPE_B && (func3 == `F3_BEQ || func3 == `F3_BNE)) ? `ALU_SUB :
        //          (get_opcode == `INST_TYPE_B && (func3 == `F3_BLT || func3 == `F3_BGE)) ? `ALU_SLT :
        //          (get_opcode == `INST_TYPE_B && (func3 == `F3_BLTU || func3 == `F3_BGEU)) ? `ALU_SLTU :
        //          ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_ORI) ? `ALU_OR :
        //          ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_XORI) ? `ALU_XOR :
        //          ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_ANDI) ? `ALU_AND :
        //          (get_opcode == `INST_TYPE_R && func3 == `F3_SLTU && func7 == 7'b0000000) ? `ALU_SLTU :
        //          (get_opcode == `INST_TYPE_I && func3 == `F3_SLTU) ? `ALU_SLTU :
        //          ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_RSH && func7 == 7'b0000000) ? `ALU_SRL :
        //          ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_RSH && func7 == 7'b0100000) ? `ALU_SRA :
        //          ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_LSH && func7 == 7'b0000000) ? `ALU_SLL :
        //          ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_SLT && func7 == 7'b0000000) ? `ALU_SLT :
        //          (get_opcode == `INST_TYPE_L || get_opcode == `INST_TYPE_AUIPC) ? `ALU_ADD : `ALU_ADD;
    // reg [3:0] alu_op;
    // always @(*) begin
    //     casez ({get_opcode, func3, func7[5]})
    //         // R-type
    //         {`INST_TYPE_R, 3'b000, 1'b1}:  alu_op = `ALU_SUB;
    //         {`INST_TYPE_R, 3'b000, 1'b0}:  alu_op = `ALU_ADD;
    //         {`INST_TYPE_R, 3'b010, ?}:     alu_op = `ALU_SLT;
    //         {`INST_TYPE_R, 3'b011, ?}:     alu_op = `ALU_SLTU;
    //         {`INST_TYPE_R, 3'b100, ?}:     alu_op = `ALU_XOR;
    //         {`INST_TYPE_R, 3'b110, ?}:     alu_op = `ALU_OR;
    //         {`INST_TYPE_R, 3'b111, ?}:     alu_op = `ALU_AND;
    //         {`INST_TYPE_R, 3'b001, ?}:     alu_op = `ALU_SLL;
    //         {`INST_TYPE_R, 3'b101, 1'b0}:  alu_op = `ALU_SRL;
    //         {`INST_TYPE_R, 3'b101, 1'b1}:  alu_op = `ALU_SRA;
            
    //         // I-type
    //         {`INST_TYPE_I, `F3_ADDI, ?}:   alu_op = `ALU_ADD;
    //         {`INST_TYPE_I, `F3_SLTI, ?}:   alu_op = `ALU_SLT;
    //         {`INST_TYPE_I, `F3_SLTIU, ?}:  alu_op = `ALU_SLTU;
    //         {`INST_TYPE_I, `F3_XORI, ?}:   alu_op = `ALU_XOR;
    //         {`INST_TYPE_I, `F3_ORI, ?}:    alu_op = `ALU_OR;
    //         {`INST_TYPE_I, `F3_ANDI, ?}:   alu_op = `ALU_AND;
    //         {`INST_TYPE_I, `F3_LSH, ?}:    alu_op = `ALU_SLL;
    //         {`INST_TYPE_I, `F3_RSH, 1'b0}: alu_op = `ALU_SRL;
    //         {`INST_TYPE_I, `F3_RSH, 1'b1}: alu_op = `ALU_SRA;
            
    //         // B-type
    //         {`INST_TYPE_B, `F3_BEQ, ?}:    alu_op = `ALU_SUB;
    //         {`INST_TYPE_B, `F3_BNE, ?}:    alu_op = `ALU_SUB;
    //         {`INST_TYPE_B, `F3_BLT, ?}:    alu_op = `ALU_SLT;
    //         {`INST_TYPE_B, `F3_BGE, ?}:    alu_op = `ALU_SLT;
    //         {`INST_TYPE_B, `F3_BLTU, ?}:   alu_op = `ALU_SLTU;
    //         {`INST_TYPE_B, `F3_BGEU, ?}:   alu_op = `ALU_SLTU;
            
    //         // 其他情况
    //         default: alu_op = `ALU_ADD;
    //     endcasez
    // end
    assign alu_op = (get_opcode == `INST_TYPE_R && func3 == 3'b000 && !func7[5]) ? `ALU_ADD :
                 (get_opcode == `INST_TYPE_L || get_opcode == `INST_TYPE_AUIPC) ? `ALU_ADD :
                 (get_opcode == `INST_TYPE_I && func3 == `F3_ADDI) ? `ALU_ADD :
                 (get_opcode == `INST_TYPE_B && (func3 == `F3_BEQ || func3 == `F3_BNE)) ? `ALU_SUB :
                 (get_opcode == `INST_TYPE_R && func3 == 3'b000 && func7[5]) ? `ALU_SUB :
                 (get_opcode == `INST_TYPE_I && func3 == `F3_SLTI) ? `ALU_SLT :
                 (get_opcode == `INST_TYPE_B && (func3 == `F3_BLT || func3 == `F3_BGE)) ? `ALU_SLT :
                 ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_SLT && func7 == 7'b0000000) ? `ALU_SLT :
                 (get_opcode == `INST_TYPE_B && (func3 == `F3_BLTU || func3 == `F3_BGEU)) ? `ALU_SLTU :
                 (get_opcode == `INST_TYPE_R && func3 == `F3_SLTU && func7 == 7'b0000000) ? `ALU_SLTU :
                 (get_opcode == `INST_TYPE_I && func3 == `F3_SLTU) ? `ALU_SLTU :
                 ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_RSH && func7 == 7'b0000000) ? `ALU_SRL :
                 ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_RSH && func7 == 7'b0100000) ? `ALU_SRA :
                 ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_LSH && func7 == 7'b0000000) ? `ALU_SLL :
                 ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_ORI) ? `ALU_OR :
                 ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_XORI) ? `ALU_XOR :
                 ((get_opcode == `INST_TYPE_R || get_opcode == `INST_TYPE_I) && func3 == `F3_ANDI) ? `ALU_AND : `ALU_ADD;

    wire MemRead = (get_opcode == `INST_TYPE_L) &&
                    ((func3 == `F3_LW) || (func3 == `F3_LH) || (func3 == `F3_LB) || (func3 == `F3_LHU) || (func3 == `F3_LBU));
    wire MemWrite = (get_opcode == `INST_TYPE_S);

    wire [2:0] MemLen;
    assign MemLen =  ((get_opcode == `INST_TYPE_S || get_opcode == `INST_TYPE_L) && (func3 == `F3_SW || func3 == `F3_LW)) ? `Mem_Word :
                    ((get_opcode == `INST_TYPE_S || get_opcode == `INST_TYPE_L) && (func3 == `F3_SH || func3 == `F3_LH)) ? `Mem_Half :
                    ((get_opcode == `INST_TYPE_S || get_opcode == `INST_TYPE_L) && (func3 == `F3_SB || (func3 == `F3_LB && opcode == 7'b00000_11))) ? `Mem_Bit :
                    (get_opcode == `INST_TYPE_L && func3 == `F3_LHU) ? `Mem_UHalf : 
                    (get_opcode == `INST_TYPE_L && func3 == `F3_LBU) ? `Mem_UBit : `Mem_Word; 
    
    wire jal = (opcode == `INST_JAL);
    wire jalr = (opcode == `INST_JALR) & (func3 == 3'b000);
    wire is_branch = (get_opcode == `INST_TYPE_B);

    // CSR信号
    wire csr       = (opcode == `INST_CSR);
    wire csr_ecall = csr && (instr == `INST_ECALL);
    wire csr_mret  = csr && (instr == `INST_MRET);
    wire [11:0] csr_wr_addr1 = csr_ecall ? `MCAUSE : (csr_mret ? `MSTATUS : (csr ? instr[31:20] : 12'b0));
    wire [11:0] csr_wr_addr2 = csr_ecall ? `MEPC : 12'b0;
    wire [11:0] csr_rd_addr1 = csr_mret ? `MSTATUS : (csr_ecall ? `MTVEC : (csr ? instr[31:20] : 12'b0));
    wire [11:0] csr_rd_addr2 = csr_mret ? `MEPC : 12'b0;

    wire [1:0] csr_op = (csr && ((func3 == `F3_CSRRW) || (func3 == `F3_CSRRWI))) ? `CSR_CSRRW :
                        (csr && ((func3 == `F3_CSRRS) || (func3 == `F3_CSRRSI))) ? `CSR_CSRRS :
                        (csr && ((func3 == `F3_CSRRC) || (func3 == `F3_CSRRCI))) ? `CSR_CSRRC : `CSR_NONE;

    wire csr_rd_en = csr && !csr_ecall && !csr_mret;
    wire rd_en = (get_opcode == `INST_TYPE_LUI || get_opcode == `INST_TYPE_AUIPC || get_opcode == `INST_TYPE_L ||
                    get_opcode == `INST_TYPE_JAL || get_opcode == `INST_TYPE_JALR || get_opcode == `INST_TYPE_R ||
                    get_opcode == `INST_TYPE_I || csr_rd_en);

    // 握手逻辑
    always @(*) begin
        id_ready = (ex_ready || ~id_valid) && ~ex_flush;
    end

    always @(posedge clk) begin
        if (reset) begin
            id_valid <= 1'b0;
        end
        else if ((if_valid && id_ready) && (ex_ready || ~id_valid)) begin
            id_valid <= 1'b1;
        end
        else if ((~(if_valid && id_ready)) && ex_ready) begin
            id_valid <= 1'b0;
        end
    end

    // 输出信号赋值
    // always @(posedge clk) begin
    //     if (reset) begin
    //         id_ex_RegWrite <= 1'b0;
    //         id_ex_rd <= 5'b0;
    //         id_wb_rs1 <= 5'b0;
    //         id_wb_rs2 <= 5'b0;
    //         id_ex_zimm <= 5'b0;
    //         id_ex_imm <= 32'b0;
    //         id_ex_shamt <= 6'b0;
    //         id_ex_pc <= 32'b0;
    //         id_ex_inst <= 32'b0;
    //         id_ex_alu_op <= 4'b0;
    //         id_ex_MemWrite <= 1'b0;
    //         id_ex_MemRead <= 1'b0;
    //         id_ex_MemLen <= 3'b0;
    //         id_ex_opcode <= 7'b0;
    //         id_ex_func3 <= 3'b0;

    //         id_ex_jal <= 1'b0;
    //         id_ex_jalr <= 1'b0;
    //         id_ex_csr <= 1'b0;
    //         id_ex_csr_wen1 <= 1'b0;
    //         id_ex_csr_wen2 <= 1'b0;
    //         id_ex_csr_ecall <= 1'b0;
    //         id_ex_csr_mret <= 1'b0;
    //         id_ex_csr_op <= 2'b0;
    //         id_ex_csr_wr_addr1 <= 12'b0;
    //         id_ex_csr_wr_addr2 <= 12'b0;
    //         id_wb_csr_addr1 <= 12'b0;
    //         id_wb_csr_addr2 <= 12'b0;
    //         id_ex_predict_taken <= 1'b0;
    //         id_ex_predict_target <= 32'b0; // 分支预测实际目标地址
    //     end
    //     else if (if_valid && id_ready) begin
    //     // if(if_valid && id_ready && !reset) begin
    //         id_ex_RegWrite <= rd_en;
    //         id_ex_rd <= rd;
    //         id_wb_rs1 <= rs1;
    //         id_wb_rs2 <= rs2;
    //         id_ex_zimm <= rs1;
    //         id_ex_imm <= imm;
    //         id_ex_shamt <= shamt;

    //         id_ex_pc <= if_id_pc;
    //         id_ex_pc2 <= if_id_pc2; // 用于分支预测
    //         id_ex_inst <= if_id_inst;
    //         id_ex_opcode <= opcode;
    //         id_ex_MemRead <= MemRead;
    //         id_ex_MemWrite <= MemWrite;
    //         id_ex_MemLen <= MemLen;
    //         id_ex_alu_op <= alu_op;
    //         id_ex_func3 <= func3;

    //         id_ex_jal <= jal;
    //         id_ex_jalr <= jalr;
    //         id_ex_csr <= csr;
    //         id_ex_csr_wen1 <= csr;
    //         id_ex_csr_wen2 <= csr_ecall;
    //         id_ex_csr_ecall <= csr_ecall;
    //         id_ex_csr_mret <= csr_mret;
    //         id_ex_csr_op <= csr_op;
    //         id_ex_csr_wr_addr1 <= csr_wr_addr1;
    //         id_ex_csr_wr_addr2 <= csr_wr_addr2;
    //         id_wb_csr_addr1 <= csr_rd_addr1;
    //         id_wb_csr_addr2 <= csr_rd_addr2;
    //         id_ex_predict_taken <= predict_taken & (is_branch || jalr || jal);
    //         id_ex_predict_target <= predict_target; // 分支预测实际目标地址
    //     end
    // end
    always @(posedge clk) begin
        if (reset) begin
            // 第一组: 控制信号
            id_ex_RegWrite <= 1'b0;
            id_ex_MemWrite <= 1'b0;
            id_ex_MemRead <= 1'b0;
            id_ex_jal <= 1'b0;
            id_ex_jalr <= 1'b0;
            id_ex_csr <= 1'b0;
            id_ex_csr_wen1 <= 1'b0;
            id_ex_csr_wen2 <= 1'b0;
            id_ex_csr_ecall <= 1'b0;
            id_ex_csr_mret <= 1'b0;
            
            // 第二组: 地址和立即数
            id_ex_rd <= 5'b0;
            id_wb_rs1 <= 5'b0;
            id_wb_rs2 <= 5'b0;
            id_ex_zimm <= 5'b0;
            id_ex_imm <= 32'b0;
            id_ex_shamt <= 6'b0;
            
            // 第三组: 指令和PC
            id_ex_pc <= 32'b0;
            id_ex_pc2 <= 32'b0;
            id_ex_inst <= 32'b0;
        end
        else if (if_valid && id_ready) begin
            // 第一组: 控制信号
            id_ex_RegWrite <= rd_en;
            id_ex_MemWrite <= MemWrite;
            id_ex_MemRead <= MemRead;
            id_ex_jal <= jal;
            id_ex_jalr <= jalr;
            id_ex_csr <= csr;
            id_ex_csr_wen1 <= csr;
            id_ex_csr_wen2 <= csr_ecall;
            id_ex_csr_ecall <= csr_ecall;
            id_ex_csr_mret <= csr_mret;
            
            // 第二组: 地址和立即数
            id_ex_rd <= rd;
            id_wb_rs1 <= rs1;
            id_wb_rs2 <= rs2;
            id_ex_zimm <= rs1;
            id_ex_imm <= imm;
            id_ex_shamt <= shamt;
            
            // 第三组: 指令和PC
            id_ex_pc <= if_id_pc;
            id_ex_pc2 <= if_id_pc2;
            id_ex_inst <= if_id_inst;
        end
    end
    
    // 7. 低扇出信号分组
    always @(posedge clk) begin
        if (reset) begin
            // 第四组: ALU和功能信号
            id_ex_alu_op <= 4'b0;
            id_ex_MemLen <= 3'b0;
            id_ex_opcode <= 7'b0;
            id_ex_func3 <= 3'b0;
            id_ex_csr_op <= 2'b0;
            
            // 第五组: CSR地址
            id_ex_csr_wr_addr1 <= 12'b0;
            id_ex_csr_wr_addr2 <= 12'b0;
            id_wb_csr_addr1 <= 12'b0;
            id_wb_csr_addr2 <= 12'b0;
            
            // 第六组: 分支预测
            id_ex_predict_taken <= 1'b0;
            id_ex_predict_target <= 32'b0;
        end
        else if (if_valid && id_ready) begin
            // 第四组: ALU和功能信号
            id_ex_alu_op <= alu_op;
            id_ex_MemLen <= MemLen;
            id_ex_opcode <= opcode;
            id_ex_func3 <= func3;
            id_ex_csr_op <= csr_op;
            
            // 第五组: CSR地址
            id_ex_csr_wr_addr1 <= csr_wr_addr1;
            id_ex_csr_wr_addr2 <= csr_wr_addr2;
            id_wb_csr_addr1 <= csr_rd_addr1;
            id_wb_csr_addr2 <= csr_rd_addr2;
            
            // 第六组: 分支预测
            id_ex_predict_taken <= predict_taken & (is_branch || jalr || jal);
            id_ex_predict_target <= predict_target;
        end
    end


endmodule
