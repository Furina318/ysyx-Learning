`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// 译码模块
module ID (
    input  [31:0] instr,
    output reg [6:0]  opcode,
    output reg [4:0]  rs1,
    output reg [4:0]  rs2,
    output reg [4:0]  rd,
    output reg [31:0] imm,
    output reg [2:0]  func3,
    output reg [6:0]  func7,
    output reg        RegWrite,
    output reg        MemWrite,
    output reg        MemRead,
    output reg [3:0]  alu_op,
    output reg [1:0]  MemLen
);
    import "DPI-C" function void ebreak(input int station, input int inst);

    reg [31:0] immI;
    reg [31:0] immU;
    reg [31:0] immS;
    reg [31:0] immB;
    reg [31:0] immJ;
    reg [31:0] immR;
    reg [4:0] get_opcode;
    
    assign immI = {{20{instr[31]}}, instr[31:20]};
    assign immU = {instr[31:12], 12'b0};
    assign immS = {{20{instr[31]}}, instr[31:25], instr[11:7]};
    assign immB = {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
    assign immJ = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
    assign immR = 32'b0;

    always @(*) begin
        opcode = instr[6:0];
        rs1    = instr[19:15];
        rs2    = instr[24:20];
        rd     = instr[11:7];
        func3  = instr[14:12];
        func7  = instr[31:25];

        imm      = 32'b0;
        RegWrite = 1'b0;
        MemWrite = 1'b0;
        MemRead  = 1'b0;
        alu_op   = `ALU_ADD;
        MemLen   = `Mem_Word;
 
        assign get_opcode = opcode[6:2];

        case(get_opcode)
            // LUI
            `INST_TYPE_LUI: begin
                imm = immU;
                RegWrite = 1'b1;
            end
            // AUIPC
            `INST_TYPE_AUIPC: begin
                imm = immU;
                RegWrite = 1'b1;
                alu_op=`ALU_ADD;//PC+imm
            end
            // JAL
            `INST_TYPE_JAL: begin
                imm = immJ;
                RegWrite = 1'b1;
            end
            // JALR
            `INST_TYPE_JALR: begin
                if (func3 == 3'b000) begin
                    imm = immI;
                    RegWrite = 1'b1;
                end
            end
    
            `INST_TYPE_S: begin
                // if (func3 == 3'b010) begin
                //     imm=immS;
                //     MemWrite=1'b1;
                // end
                // else if(func3 == 3'b001) begin
                //     imm=immS;
                //     MemWrite=1'b1;
                //     MemLen=`Mem_Half;
                // end
                imm=immS;
                MemWrite=1'b1;
                case(func3)
                    `F3_SW: MemLen=`Mem_Word;
                    `F3_SH: MemLen=`Mem_Half;
                    `F3_SB: MemLen=`Mem_Bit;
                    default: begin
                        ebreak(`ABORT,instr);
                        $display("ID : Uknown S instruction with func3 = %b",func3);
                    end
                endcase
            end

            `INST_TYPE_L: begin
                // imm = immI;
                // RegWrite = 1'b1;
                // MemRead = 1'b1;
                // alu_op = `ALU_ADD;
                // case(func3)
                //     `F3_LW:  MemLen = `Mem_Word;
                //     `F3_LBU: MemLen = `Mem_Bit;
                //     `F3_LH:  MemLen = `Mem_Half;
                //     `F3_LHU: MemLen = `Mem_UHalf;
                //     default: begin
                //         ebreak(`ABORT,instr);
                //         $display("ID : Uknown L instruction with func3 = %b",func3);
                //     end
                // endcase
                if(func3 == `F3_LW) begin
                    imm=immI;
                    RegWrite=1'b1;
                    MemRead=1'b1;
                    alu_op = `ALU_ADD;

                    MemLen = `Mem_Word;
                end
                else if(func3 == `F3_LBU) begin
                    imm=immI;
                    RegWrite=1'b1;
                    MemRead=1'b1;
                    alu_op = `ALU_ADD;

                    MemLen = `Mem_Bit;//单字节读取
                end
                else if(func3 == `F3_LH) begin
                    imm=immI;
                    RegWrite=1'b1;
                    MemRead=1'b1;
                    alu_op = `ALU_ADD;

                    MemLen = `Mem_Half;
                end
                else if(func3 == `F3_LHU) begin
                    imm=immI;
                    RegWrite=1'b1;
                    MemRead=1'b1;
                    alu_op = `ALU_ADD;

                    MemLen = `Mem_UHalf;
                end
            end

            `INST_TYPE_R: begin
                RegWrite = 1'b1;
                imm = immR;
                case (func3)
                    3'b000:   alu_op = (func7[5]) ? `ALU_SUB : `ALU_ADD; // add, sub
                    `F3_ANDI: alu_op = `ALU_AND; // and
                    `F3_ORI:  alu_op = `ALU_OR; // or
                    `F3_XORI:   alu_op = `ALU_XOR;// xor
                    `F3_SLTU: begin
                        if(func7==7'b0000000) alu_op=`ALU_SLTU;
                        else if(func7==7'b0000000) alu_op=`ALU_SRL;
                    end
                    `F3_RSH: begin
                        if(func7 == 7'b0100000) alu_op=`ALU_SRA;
                        else if(func7 == 7'b0000000) alu_op=`ALU_SRL;
                    end
                    `F3_LSH: begin
                        if(func7==7'b0000000) alu_op=`ALU_SLL;
                    end
                    `F3_SLT: begin
                        if(func7==7'b0000000) alu_op=`ALU_SLT;//slt
                    end
                    default: begin
                        ebreak(`ABORT, instr);
                        $display("ID : Unknown R instruction with func3 = %b", func3);
                    end
                endcase
            end

            `INST_TYPE_I: begin
                imm=immI;
                RegWrite=1'b1;
                case(func3)
                    `F3_ADDI: alu_op = `ALU_ADD;
                    `F3_ANDI: alu_op = `ALU_AND;
                    `F3_ORI:  alu_op = `ALU_OR;
                    `F3_SLTU: alu_op = `ALU_SLTU;//sltiu(支持seqz)
                    `F3_SLTI: alu_op = `ALU_SLT;
                    `F3_XORI: alu_op = `ALU_XOR;
                    `F3_RSH: begin
                        if(func7==7'b0100000) alu_op=`ALU_SRA;
                        else if(func7==7'b0000000) alu_op=`ALU_SRL;
                    end
                    `F3_LSH: begin
                        if(func7==7'b0000000) alu_op=`ALU_SLL;
                    end
                    default:  begin
                        ebreak(`ABORT,instr);
                        $display("ID : Unknown I instruction with func3 = %b", func3);
                    end
                endcase
            end

            `INST_TYPE_B: begin
                imm=immB;
                // alu_op=`ALU_SUB;//用于减法比较
                case(func3)
                    `F3_BEQ:  alu_op = `ALU_SUB;
                    `F3_BNE:  alu_op = `ALU_SUB;
                    `F3_BLT:  alu_op = `ALU_SLT;//blt,bltz
                    `F3_BGE:  alu_op = `ALU_SLT;//bge,blez
                    `F3_BLTU: alu_op = `ALU_SLTU;
                    `F3_BGEU: alu_op = `ALU_SLTU;
                    default: begin
                        ebreak(`ABORT,instr);
                        $display("ID : Unknown B instruction with func3 = %b",func3);
                    end
                endcase
            end

            `INST_TYPE_E: begin
                if(instr==`INST_EBREAK) begin
                    ebreak(`HIT_TRAP,instr);
                    $display("ebreak instruction");
                end
            end

            default: begin
                    ebreak(`ABORT, instr);
                    $display("ID : Unknow instruction with inst = %h", instr);
                end
        endcase
    end

endmodule
