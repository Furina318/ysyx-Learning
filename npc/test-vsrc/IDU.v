`timescale 1ns/1ns
module IDU(
    input       clk,
    input       rst,
    input       [31:0] IFU_IDU_pc,
    input       [31:0] IFU_IDU_inst,

    // 握手信号定义
    input              EXU_out_flush,
    input              IFU_IDU_valid,          // 从IFU到IDU的有效信号
    output reg         IDU_IFU_ready,          // IDU到IFU的就绪信号
    input              EXU_IDU_ready,          // 从执行单元(EXU)到IDU的就绪信号
    output reg         IDU_EXU_valid,          // IDU到EXU的有效信号

    output reg [31:0] IDU_EXU_pc,
    output reg [31:0] IDU_EXU_inst,

    output reg        IDU_EXU_rd_en,
    output reg [4:0]  IDU_EXU_rd_addr,

    output reg [4:0]  IDU_WBU_rs1,
    output reg [4:0]  IDU_WBU_rs2,
    output reg [4:0]  IDU_EXU_zimm,

    output reg  [31:0] IDU_EXU_imm,
    output reg  IDU_EXU_imm_valid,
    output reg  IDU_EXU_imm_unsigned,

    output reg  IDU_EXU_load,           // load指令信号
    output reg  IDU_EXU_store,          // store指令信号
    output reg  IDU_EXU_byte,           // 操作1字节数据的信号
    output reg  IDU_EXU_half_byte,      // 操作半字数据的信号
    output reg  IDU_EXU_word,           // 操作字数据的信号

    output reg  IDU_EXU_shift,          // 位移操作信号
    output reg  IDU_EXU_logic,          // 逻辑位移操作信号
    output reg  IDU_EXU_left,           // 左移操作信号

    output reg  IDU_EXU_arithmetic,      
    output reg  IDU_EXU_add,             
    output reg  IDU_EXU_lui,             
    output reg  IDU_EXU_auipc,           

    output reg  IDU_EXU_logical_cal,    
    output reg  IDU_EXU_xor,             
    output reg  IDU_EXU_or,             
    output reg  IDU_EXU_and,            

    output reg  IDU_EXU_compare_reset, 

    output reg  IDU_EXU_branch,       
    output reg  IDU_EXU_beq,          
    output reg  IDU_EXU_bne,          
    output reg  IDU_EXU_blt,           
    output reg  IDU_EXU_bge,           

    output reg  IDU_EXU_jal,          
    output reg  IDU_EXU_jalr,

    output reg IDU_EXU_csr,
    output reg IDU_EXU_csr_wen1,
    output reg IDU_EXU_csr_wen2,

    output reg IDU_EXU_csr_ecall,
    output reg IDU_EXU_csr_mret,
    
    output reg IDU_EXU_csrrw,
    output reg IDU_EXU_csrrs,
    output reg IDU_EXU_csrrc,
    output reg IDU_EXU_csrrwi,
    output reg IDU_EXU_csrrsi,
    output reg IDU_EXU_csrrci,
    output reg [11:0] IDU_EXU_csr_wr_addr1,  //写入csr寄存器的地址，往下传递至WBU
    output reg [11:0] IDU_EXU_csr_wr_addr2,
    output reg [11:0] IDU_WBU_csr_addr1,   //用来读取csr寄存器的值
    output reg [11:0] IDU_WBU_csr_addr2
);
wire [31:0] inst;
assign inst = IFU_IDU_inst;

wire [6:0] opcode    = inst[6:0];
wire [4:0] rs1   = inst[19:15];
wire [4:0] rs2   = inst[24:20];
wire [4:0] rd    = inst[11:7];
wire [2:0] func3 = inst[14:12];
//wire [4:0] func7 = inst[31:25];

wire [31:0] immI = {{20{inst[31]}},inst[31:20]};
wire [31:0] immU = {inst[31:12],12'b0};
wire [31:0] immS = {{20{inst[31]}}, inst[31:25], inst[11:7]};
wire [31:0] immB = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
wire [31:0] immJ = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};

localparam [6:0]    OPCODE_LUI = 7'b0110111;
localparam [6:0]    OPCODE_AUIPC = 7'b0010111;
localparam [6:0]    OPCODE_JAL = 7'b1101111;
localparam [6:0]    OPCODE_JALR = 7'b1100111;
localparam [6:0]    OPCODE_BRANCH = 7'b1100011;
localparam [6:0]    OPCODE_LOAD = 7'b0000011;
localparam [6:0]    OPCODE_SOTRE = 7'b0100011;
localparam [6:0]    OPCODE_ADDI = 7'b0010011;
localparam [6:0]    OPCODE_ADD = 7'b0110011;

localparam [2:0]    U_type = 3'b001; // U-type指令类型
localparam [2:0]    B_type = 3'b010; // B-type指令类型
localparam [2:0]    J_type = 3'b011; // J-type指令类型
localparam [2:0]    S_type = 3'b100; // S-type指令类型
localparam [2:0]    I_type = 3'b101; // I-type指令类型
localparam [2:0]    R_type = 3'b110; // R-type指令类型

// reg [2:0] inst_type;
// always @(*) begin
//         if(opcode==OPCODE_LUI || opcode==OPCODE_AUIPC) inst_type = U_type;              // U-type指令
//         else if (opcode==OPCODE_BRANCH) inst_type = B_type;                         // B-type指令
//         else if (opcode==OPCODE_JAL) inst_type = J_type;                            // J-type指令
//         else if (opcode==OPCODE_SOTRE) inst_type = S_type;                          // S-type指令     
//         else if (opcode==OPCODE_ADDI || opcode==OPCODE_JALR || opcode==OPCODE_LOAD)  inst_type = I_type;                           // I-type指令
//         else if (opcode==OPCODE_ADD  ) inst_type = R_type;    // R-type指令
//         else inst_type = 3'b111; // 未定义类型
// end
// always @(*) begin
//         case (inst_type)
//             U_type : IDU_EXU_imm = immU;                               // U-type立即数选择
//             B_type : IDU_EXU_imm = immB;                               // B-type立即数选择
//             J_type : IDU_EXU_imm = immJ;                               // J-type立即数选择
//             S_type : IDU_EXU_imm = immS;                               // S-type立即数选择
//             I_type : IDU_EXU_imm = immI;                               // I-type立即数选择
//             default: IDU_EXU_imm = 32'b0;                              // 默认立即数
//         endcase
// end

wire [2:0] inst_type;
assign inst_type = (opcode==OPCODE_LUI || opcode==OPCODE_AUIPC) ? U_type : 
                   (opcode==OPCODE_BRANCH) ? B_type : 
                   (opcode==OPCODE_JAL)    ? J_type : 
                   (opcode==OPCODE_SOTRE)  ? S_type : 
                   (opcode==OPCODE_ADDI || opcode==OPCODE_JALR || opcode==OPCODE_LOAD) ? I_type : 
                   (opcode==OPCODE_ADD)    ? R_type : 3'b111; // 未定义类型

// 确定立即数
wire [31:0] imm;
assign imm = (inst_type == U_type) ? immU :
            (inst_type == B_type) ? immB :
            (inst_type == J_type) ? immJ :
            (inst_type == S_type) ? immS :
            (inst_type == I_type) ? immI : 32'b0;


// 判断是否是位移指令
wire    shift = (opcode==OPCODE_ADD || opcode==OPCODE_ADDI) &&(func3==3'b001 || func3==3'b101);   // 确定是否是位移操作

reg [1:0]           shift_type;
// shift_type[0] 1表示左移，0表示右移
// shift_type[1] 0表示逻辑位移，1表示算术位移
always @(*) begin
    case (func3) 
        3'b001 : shift_type = 2'b10;               // SLL：左逻辑位移
        3'b101 : shift_type = {1'b0, inst[30]};    // SRA和SRL，根据funct7的第5位确定是逻辑还是算术右移
        default: shift_type = 0;                   // 默认不进行位移操作
    endcase
end
wire                logical = shift & ~shift_type[0];                                                   // 是否逻辑位移
wire                left = shift & shift_type[1];                                                       // 是否左移

// 判断指令是否为load或store
wire                load      = (opcode == OPCODE_LOAD);                                               // 是否为加载指令
wire                store     = (opcode == OPCODE_SOTRE);                                              // 是否为存储指令
wire                _byte     = (load | store) && (func3[1:0]==2'b00);                                 // 是否操作1字节数据
wire                half_byte = (load | store) && (func3[1:0]==2'b01);                                 // 是否操作半字数据
wire                word      = (load | store) && (func3[1:0]==2'b10);                                 // 是否操作整字数据                                                  // 是否为8字节存储
wire                unsigned_load   = (load | store) && func3[2];                                      // 是否为无符号加载

// 判断指令是否为算术操作
wire                arithmetic = (opcode==OPCODE_ADD || opcode==OPCODE_ADDI) && (func3==3'b0);         // 确定是否为算术操作
wire                add = arithmetic & (func3==3'b000) & (inst_type != R_type | ~inst[30]);            // 确定是否为加法操作,取反就是减法
wire                lui = (opcode==OPCODE_LUI);                                                        // 确定是否为LUI指令
wire                auipc = (opcode==OPCODE_AUIPC);                                                    // 确定是否为AUIPC指令

// 判断指令是否为逻辑计算
wire                logical_cal = (opcode==OPCODE_ADD || opcode==OPCODE_ADDI) && func3[2];             // 确定是否为逻辑计算
wire                cal_xor = logical_cal & (func3[1:0]==2'b0);                                        // XOR操作
wire                cal_or = logical_cal & (func3==3'b110);                                            // OR操作
wire                cal_and = logical_cal & (func3==3'b111);                                           // AND操作

// 判断指令是否为比较和置位操作
wire                compare_set = (opcode==OPCODE_ADD || opcode==OPCODE_ADDI) && (func3[2:1]==2'b01);                                                 // 比较-置位
wire                unsigned_cmpr_rst = compare_set & func3[0];                                        // 无符号比较-置位

// 判断指令是否为分支跳转
wire                branch = (opcode==OPCODE_BRANCH);                                                  // 是否分支
wire                beq = branch && (func3==3'b000);                                                   // BEQ分支
wire                bne = branch && (func3==3'b001);                                                   // BNE分支
wire                blt = branch && (func3[2] & (~func3[0]));                                          // BLT分支
wire                bge = branch && (func3[0] & func3[2]);                                             // BGE分支
wire                unsigned_branch = branch & (func3[2:1]==2'b11);                                    // 无符号分支

// 判断指令是否为跳转
wire            jal = opcode==OPCODE_JAL;                                                               // JAL跳转
wire            jalr = opcode==OPCODE_JALR;                                                             // JALR跳转

// 无符号和宽位操作信号综合
wire imm_unsigned;
wire imm_valid;
wire rd_en;

assign imm_unsigned = unsigned_branch | unsigned_cmpr_rst | unsigned_load;//// 无符号操作综合信号
assign imm_valid = (~(inst_type[2] & inst_type[1])); // 立即数有效性判断
assign rd_en = ((inst_type==R_type) || (inst_type==U_type) || (inst_type==J_type)  || (inst_type==I_type) || csr_rd_en);

//csr部分
wire csr;
wire csr_ecall;
wire csr_mret;
wire csr_rd_en;
wire csrrw;
wire csrrs;
wire csrrc;
wire csrrwi;
wire csrrsi;
wire csrrci;
wire [11:0] csr_wr_addr1;
wire [11:0] csr_wr_addr2;
wire [11:0] csr_rd_addr1;
wire [11:0] csr_rd_addr2;

assign csr       = (opcode == 7'b1110011) ? 1 : 0;
assign csr_rd_en = csr & !csr_ecall & !csr_mret;   //CSR指令中需要写入rd的指令
assign csr_ecall = csr ? (inst[31:20] == 12'b0 ? 1 : 0) : 0;
assign csr_mret  = csr ? (inst[31:20] == 12'b0011000_00010 ? 1 : 0) : 0;
assign csrrw     = csr ? (func3 == 3'b001 ? 1 : 0) : 0;
assign csrrs     = csr ? (func3 == 3'b010 ? 1 : 0) : 0;
assign csrrc     = csr ? (func3 == 3'b011 ? 1 : 0) : 0;
assign csrrwi    = csr ? (func3 == 3'b101 ? 1 : 0) : 0;
assign csrrsi    = csr ? (func3 == 3'b110 ? 1 : 0) : 0;
assign csrrci    = csr ? (func3 == 3'b111 ? 1 : 0) : 0;
assign csr_wr_addr1  = (csr_ecall) ? 12'h342 : (csr_mret ? 12'h300 : (csr ? inst[31:20] : 0));
assign csr_wr_addr2  = (csr_ecall) ? 12'h341 : 0;
assign csr_rd_addr1  = csr_mret ? 12'h300 : (csr_ecall ? 12'h305 : (csr ? inst[31:20] : 0));
assign csr_rd_addr2  = csr_mret ? 12'h341 : 0;  //指定读pc的值

//赋值
always @(*) begin
    IDU_IFU_ready = (EXU_IDU_ready | ~IDU_EXU_valid) & ~EXU_out_flush;
end
always @(posedge clk) begin
    if (rst) begin
        IDU_EXU_valid <= 0;
    end
    else if((IFU_IDU_valid & IDU_IFU_ready) & (EXU_IDU_ready | ~IDU_EXU_valid)) begin
        IDU_EXU_valid <= 1;
    end
    else if ((~(IFU_IDU_valid & IDU_IFU_ready)) & EXU_IDU_ready) begin
        IDU_EXU_valid <= 0;
    end
end

always @(posedge clk) begin
    if (rst) begin
        IDU_EXU_rd_en <= 0;
        IDU_EXU_rd_addr <= 0;
        IDU_EXU_imm <= 0;
        IDU_EXU_zimm <= 0;
        IDU_EXU_imm_valid <= 0;
        IDU_EXU_imm_unsigned <= 0;

        IDU_WBU_rs2 <= 0;
        IDU_WBU_rs1 <= 0;

        IDU_EXU_pc        <= 0;
        IDU_EXU_load      <= 0;           // load指令信号
        IDU_EXU_store     <= 0;          // store指令信号
        IDU_EXU_byte      <= 0;          // 操作1字节数据的信号
        IDU_EXU_half_byte <= 0;      // 操作半字数据的信号
        IDU_EXU_word      <= 0;           // 操作字数据的信号

        IDU_EXU_shift     <= 0;          // 位移操作信号
        IDU_EXU_logic     <= 0;     // 逻辑位移操作信号
        IDU_EXU_left      <= 0;           // 左移操作信号

        IDU_EXU_arithmetic      <= 0;
        IDU_EXU_add             <= 0;
        IDU_EXU_lui             <= 0;
        IDU_EXU_auipc           <= 0;

        IDU_EXU_logical_cal     <= 0;
        IDU_EXU_xor             <= 0;
        IDU_EXU_or              <= 0;
        IDU_EXU_and             <= 0;

        IDU_EXU_compare_reset   <= 0;

        IDU_EXU_branch          <= 0;
        IDU_EXU_beq             <= 0;
        IDU_EXU_bne             <= 0;
        IDU_EXU_blt             <= 0;
        IDU_EXU_bge             <= 0;

        IDU_EXU_jal             <= 0;
        IDU_EXU_jalr            <= 0;

        IDU_EXU_csr       <= 0;
        IDU_EXU_csr_wen1  <= 0;
        IDU_EXU_csr_wen2  <= 0;

        IDU_EXU_csr_ecall <= 0;
        IDU_EXU_csr_mret  <= 0;

        IDU_EXU_csrrw     <= 0;
        IDU_EXU_csrrs     <= 0;
        IDU_EXU_csrrc     <= 0;
        IDU_EXU_csrrwi    <= 0;
        IDU_EXU_csrrsi    <= 0;
        IDU_EXU_csrrci    <= 0;

        IDU_EXU_csr_wr_addr1  <= 0;
        IDU_EXU_csr_wr_addr2  <= 0;
        IDU_WBU_csr_addr1  <= 0;
        IDU_WBU_csr_addr2  <= 0;
    end
    else if (IFU_IDU_valid & IDU_IFU_ready) begin
        IDU_EXU_rd_en <= rd_en;
        IDU_EXU_rd_addr <= rd;
        IDU_EXU_imm <= imm;
        IDU_EXU_zimm <= rs1;
        IDU_EXU_imm_valid <= imm_valid;
        IDU_EXU_imm_unsigned <= imm_unsigned;

        IDU_WBU_rs2 <= rs2;
        IDU_WBU_rs1 <= rs1;

        IDU_EXU_pc        <= IFU_IDU_pc;
        IDU_EXU_inst      <= IFU_IDU_inst;
        IDU_EXU_load      <= load;           // load指令信号
        IDU_EXU_store     <= store;          // store指令信号
        IDU_EXU_byte      <= _byte;          // 操作1字节数据的信号
        IDU_EXU_half_byte <= half_byte;      // 操作半字数据的信号
        IDU_EXU_word      <= word;           // 操作字数据的信号

        IDU_EXU_shift     <= shift;          // 位移操作信号
        IDU_EXU_logic     <= logical;     // 逻辑位移操作信号
        IDU_EXU_left      <= left;           // 左移操作信号

        IDU_EXU_arithmetic      <= arithmetic;
        IDU_EXU_add             <= add;
        IDU_EXU_lui             <= lui;
        IDU_EXU_auipc           <= auipc;

        IDU_EXU_logical_cal     <= logical_cal;
        IDU_EXU_xor             <= cal_xor;
        IDU_EXU_or              <= cal_or;
        IDU_EXU_and             <= cal_and;

        IDU_EXU_compare_reset   <= compare_set;

        IDU_EXU_branch          <= branch;
        IDU_EXU_beq             <= beq;
        IDU_EXU_bne             <= bne;
        IDU_EXU_blt             <= blt;
        IDU_EXU_bge             <= bge;

        IDU_EXU_jal             <= jal;
        IDU_EXU_jalr            <= jalr;

        IDU_EXU_csr       <= csr;
        IDU_EXU_csr_wen1  <= csr;
        IDU_EXU_csr_wen2  <= csr_ecall;

        IDU_EXU_csr_ecall <= csr_ecall;
        IDU_EXU_csr_mret  <= csr_mret;

        IDU_EXU_csrrw     <= csrrw;
        IDU_EXU_csrrs     <= csrrs;
        IDU_EXU_csrrc     <= csrrc;
        IDU_EXU_csrrwi    <= csrrwi;
        IDU_EXU_csrrsi    <= csrrsi;
        IDU_EXU_csrrci    <= csrrci;

        IDU_EXU_csr_wr_addr1  <= csr_wr_addr1;
        IDU_EXU_csr_wr_addr2  <= csr_wr_addr2;
        IDU_WBU_csr_addr1  <= csr_rd_addr1;
        IDU_WBU_csr_addr2  <= csr_rd_addr2;
    end
end

endmodule 


