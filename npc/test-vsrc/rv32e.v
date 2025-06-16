`timescale 1ns/1ns

module rv32e(
    input  clk,
    input  rst,
    output  [31:0] pc,
    output  [31:0] next_pc,
    output  [31:0] instruction
);
assign pc = WBU_pc;
assign instruction = WBU_inst;
assign next_pc = IFU_IDU_pc;
// 声明中间信号
wire [31:0] trapcode1;

//IDU
wire [31:0] IDU_EXU_pc;
wire [31:0] IDU_EXU_imm;
wire [ 4:0] IDU_EXU_zimm;

wire        IDU_EXU_rd_en;
wire [4:0]  IDU_EXU_rd_addr;

wire [4:0]  IDU_WBU_rs1;
wire [4:0]  IDU_WBU_rs2;
wire        IDU_EXU_imm_valid;
wire        IDU_EXU_imm_unsigned;

wire        IDU_EXU_load;
wire        IDU_EXU_store;
wire        IDU_EXU_byte;
wire        IDU_EXU_half_byte;
wire        IDU_EXU_word;
wire        IDU_EXU_shift;
wire        IDU_EXU_logic;
wire        IDU_EXU_left;
wire        IDU_EXU_arithmetic;
wire        IDU_EXU_add;
wire        IDU_EXU_lui;
wire        IDU_EXU_auipc;
wire        IDU_EXU_logical_cal;
wire        IDU_EXU_xor;
wire        IDU_EXU_or;
wire        IDU_EXU_and;
wire        IDU_EXU_compare_reset;
wire        IDU_EXU_branch;
wire        IDU_EXU_beq;
wire        IDU_EXU_bne;
wire        IDU_EXU_blt;
wire        IDU_EXU_bge;
wire        IDU_EXU_jal;
wire        IDU_EXU_jalr;

wire        IDU_EXU_csr_ecall;
wire        IDU_EXU_csr_mret;

wire        IDU_EXU_csr;
wire        IDU_EXU_csrrw;
wire        IDU_EXU_csrrs;
wire        IDU_EXU_csrrc;
wire        IDU_EXU_csrrwi;
wire        IDU_EXU_csrrsi;
wire        IDU_EXU_csrrci;
wire        IDU_EXU_csr_wen1;
wire        IDU_EXU_csr_wen2;
wire [11:0] IDU_EXU_csr_wr_addr1;       
wire [11:0] IDU_EXU_csr_wr_addr2;
wire [11:0] IDU_WBU_csr_addr1;
wire [11:0] IDU_WBU_csr_addr2;

//EXU
wire [31:0] WBU_EXU_src1;
wire [31:0] WBU_EXU_src2;
wire [31:0] EXU_LSU_src2;
wire        EXU_LSU_rd_en;
wire [ 4:0] EXU_LSU_rd_addr;

wire [31:0] WBU_EXU_csr_num1;
wire [31:0] WBU_EXU_csr_num2;

wire        EXU_LSU_load;
wire        EXU_LSU_store;
wire        EXU_LSU_byte;
wire        EXU_LSU_half_byte;
wire        EXU_LSU_word;
wire        EXU_LSU_extern_flag;

wire        EXU_LSU_csr;
wire        EXU_LSU_csr_ecall;
wire        EXU_LSU_csr_mret;

wire        EXU_LSU_csr_wen1;
wire        EXU_LSU_csr_wen2;
wire [11:0] EXU_LSU_csr_wr_addr1;
wire [11:0] EXU_LSU_csr_wr_addr2;

wire [31:0] EXU_LSU_csr_wr_data1;
wire [31:0] EXU_LSU_csr_wr_data2;
wire [31:0] EXU_LSU_csr_rdata;

wire [31:0] EXU_LSU_process_result;

//LSU
wire [31:0] LSU_WBU_csr_wr_data1;
wire [31:0] LSU_WBU_csr_wr_data2;
wire [11:0] LSU_WBU_csr_wr_addr1;
wire [11:0] LSU_WBU_csr_wr_addr2;
wire        LSU_WBU_csr_wen1;
wire        LSU_WBU_csr_wen2;

wire        LSU_WBU_rd_en;
wire [ 4:0] LSU_WBU_rd_addr;
reg  [31:0] LSU_WBU_write_rd_data;


// 例化IFU模块
wire        EXU_out_flush;
wire [31:0] EXU_out_flush_pc;
wire        IDU_IFU_ready;
wire        IFU_IDU_valid;
wire [31:0] IFU_IDU_pc;
wire [31:0] IFU_IDU_inst;
// wire [31:0] MEM_IFU_inst;
// wire        MEM_IFU_valid;
// wire        IFU_MEM_ready;
// wire [31:0] IFU_MEM_pc;
IFU ifu(
    .clk(clk),
    .rst(rst),
    .EXU_out_flush(EXU_out_flush),
    .EXU_out_flush_pc(EXU_out_flush_pc),
    .IDU_IFU_ready(IDU_IFU_ready),
    .IFU_IDU_valid(IFU_IDU_valid),
    .IFU_IDU_pc(IFU_IDU_pc),
    .IFU_IDU_inst(IFU_IDU_inst)
    // .MEM_IFU_inst(MEM_IFU_inst),
    // .MEM_IFU_valid(MEM_IFU_valid),
    // .IFU_MEM_ready(IFU_MEM_ready),
    // .IFU_MEM_pc(IFU_MEM_pc)
);

// 例化IDU模块
wire EXU_IDU_ready;
wire IDU_EXU_valid;
wire [31:0] IDU_EXU_inst;
IDU idu (
    .clk(clk),
    .rst(rst),
    .IFU_IDU_pc(IFU_IDU_pc),
    .IFU_IDU_inst(IFU_IDU_inst),

    .EXU_out_flush(EXU_out_flush),
    .IFU_IDU_valid(IFU_IDU_valid),
    .IDU_IFU_ready(IDU_IFU_ready),
    .EXU_IDU_ready(EXU_IDU_ready),
    .IDU_EXU_valid(IDU_EXU_valid),

    .IDU_EXU_pc(IDU_EXU_pc),
    .IDU_EXU_inst(IDU_EXU_inst),
    .IDU_EXU_imm(IDU_EXU_imm),
    .IDU_EXU_zimm(IDU_EXU_zimm),
    .IDU_EXU_rd_en(IDU_EXU_rd_en),
    .IDU_EXU_rd_addr(IDU_EXU_rd_addr),

    .IDU_WBU_rs1(IDU_WBU_rs1),
    .IDU_WBU_rs2(IDU_WBU_rs2),

    .IDU_EXU_imm_valid(IDU_EXU_imm_valid),
    .IDU_EXU_imm_unsigned(IDU_EXU_imm_unsigned),

    .IDU_EXU_load(IDU_EXU_load),
    .IDU_EXU_store(IDU_EXU_store),
    .IDU_EXU_byte(IDU_EXU_byte),
    .IDU_EXU_half_byte(IDU_EXU_half_byte),
    .IDU_EXU_word(IDU_EXU_word),
    .IDU_EXU_shift(IDU_EXU_shift),
    .IDU_EXU_logic(IDU_EXU_logic),
    .IDU_EXU_left(IDU_EXU_left),
    .IDU_EXU_arithmetic(IDU_EXU_arithmetic),
    .IDU_EXU_add(IDU_EXU_add),
    .IDU_EXU_lui(IDU_EXU_lui),
    .IDU_EXU_auipc(IDU_EXU_auipc),
    .IDU_EXU_logical_cal(IDU_EXU_logical_cal),
    .IDU_EXU_xor(IDU_EXU_xor),
    .IDU_EXU_or(IDU_EXU_or),
    .IDU_EXU_and(IDU_EXU_and),
    .IDU_EXU_compare_reset(IDU_EXU_compare_reset),
    .IDU_EXU_branch(IDU_EXU_branch),
    .IDU_EXU_beq(IDU_EXU_beq),
    .IDU_EXU_bne(IDU_EXU_bne),
    .IDU_EXU_blt(IDU_EXU_blt),
    .IDU_EXU_bge(IDU_EXU_bge),
    .IDU_EXU_jal(IDU_EXU_jal),
    .IDU_EXU_jalr(IDU_EXU_jalr),

    .IDU_EXU_csr_ecall(IDU_EXU_csr_ecall),
    .IDU_EXU_csr_mret(IDU_EXU_csr_mret),

    .IDU_EXU_csr(IDU_EXU_csr),
    .IDU_EXU_csrrw(IDU_EXU_csrrw),
    .IDU_EXU_csrrs(IDU_EXU_csrrs),
    .IDU_EXU_csrrc(IDU_EXU_csrrc),
    .IDU_EXU_csrrwi(IDU_EXU_csrrwi),
    .IDU_EXU_csrrsi(IDU_EXU_csrrsi),
    .IDU_EXU_csrrci(IDU_EXU_csrrci),

    .IDU_EXU_csr_wen1(IDU_EXU_csr_wen1),
    .IDU_EXU_csr_wen2(IDU_EXU_csr_wen2),
    .IDU_EXU_csr_wr_addr1(IDU_EXU_csr_wr_addr1),
    .IDU_EXU_csr_wr_addr2(IDU_EXU_csr_wr_addr2),
    .IDU_WBU_csr_addr1(IDU_WBU_csr_addr1),
    .IDU_WBU_csr_addr2(IDU_WBU_csr_addr2)
);

// 例化EXU模块
wire [31:0] EXU_LSU_inst;
wire [31:0] EXU_LSU_pc;
wire EXU_LSU_valid;
wire LSU_EXU_ready;

wire [4:0] LSU_EXU_forward_rd_addr;
wire LSU_EXU_forward_rd_en;
wire LSU_EXU_forward_load;
wire EXU_LSU_forward_las;
EXU exu (
    .clk(clk),
    .rst(rst),
//##################  AXI ################\\
    .IDU_IFU_ready(IDU_IFU_ready),
    .IDU_EXU_valid(IDU_EXU_valid),
    .EXU_IDU_ready(EXU_IDU_ready),
    .EXU_LSU_valid(EXU_LSU_valid),
    .LSU_EXU_ready(LSU_EXU_ready),

    .IDU_WBU_rs1(IDU_WBU_rs1),
    .IDU_WBU_rs2(IDU_WBU_rs2),
    .LSU_EXU_forward_rd_addr(LSU_EXU_forward_rd_addr),
    .LSU_EXU_forward_rd_en(LSU_EXU_forward_rd_en),
    .LSU_EXU_forward_load(LSU_EXU_forward_load),
    .LSU_WBU_value(LSU_WBU_write_rd_data),
    .LSU_WBU_rd_addr(LSU_WBU_rd_addr),
    .LSU_WBU_rd_en(LSU_WBU_rd_en),
    .LSU_WBU_valid(LSU_WBU_valid),
    .EXU_LSU_forward_las(EXU_LSU_forward_las),
//##################  AXI ################\\
    .EXU_LSU_inst(EXU_LSU_inst),
    .EXU_LSU_pc(EXU_LSU_pc),

    .IDU_EXU_inst(IDU_EXU_inst),
    .IDU_EXU_pc(IDU_EXU_pc),
    .IDU_EXU_imm(IDU_EXU_imm),
    .IDU_EXU_zimm(IDU_EXU_zimm),

    .WBU_EXU_csr_num1(WBU_EXU_csr_num1),
    .WBU_EXU_csr_num2(WBU_EXU_csr_num2),

    .WBU_EXU_src1(WBU_EXU_src1),
    .WBU_EXU_src2(WBU_EXU_src2),
    .IDU_EXU_rd_en(IDU_EXU_rd_en),
    .IDU_EXU_rd_addr(IDU_EXU_rd_addr),
    .IDU_EXU_imm_valid(IDU_EXU_imm_valid),
    .IDU_EXU_imm_unsigned(IDU_EXU_imm_unsigned),
    .IDU_EXU_load(IDU_EXU_load),
    .IDU_EXU_store(IDU_EXU_store),
    .IDU_EXU_byte(IDU_EXU_byte),
    .IDU_EXU_half_byte(IDU_EXU_half_byte),
    .IDU_EXU_word(IDU_EXU_word),
    .IDU_EXU_shift(IDU_EXU_shift),
    .IDU_EXU_logic(IDU_EXU_logic),
    .IDU_EXU_left(IDU_EXU_left),
    .IDU_EXU_arithmetic(IDU_EXU_arithmetic),
    .IDU_EXU_add(IDU_EXU_add),
    .IDU_EXU_lui(IDU_EXU_lui),
    .IDU_EXU_auipc(IDU_EXU_auipc),
    .IDU_EXU_logical_cal(IDU_EXU_logical_cal),
    .IDU_EXU_xor(IDU_EXU_xor),
    .IDU_EXU_or(IDU_EXU_or),
    .IDU_EXU_and(IDU_EXU_and),
    .IDU_EXU_compare_reset(IDU_EXU_compare_reset),
    .IDU_EXU_branch(IDU_EXU_branch),
    .IDU_EXU_beq(IDU_EXU_beq),
    .IDU_EXU_bne(IDU_EXU_bne),
    .IDU_EXU_blt(IDU_EXU_blt),
    .IDU_EXU_bge(IDU_EXU_bge),
    .IDU_EXU_jal(IDU_EXU_jal),
    .IDU_EXU_jalr(IDU_EXU_jalr),

    .IDU_EXU_csr_ecall(IDU_EXU_csr_ecall),
    .IDU_EXU_csr_mret(IDU_EXU_csr_mret),

    .IDU_EXU_csr(IDU_EXU_csr),
    .IDU_EXU_csrrw(IDU_EXU_csrrw),
    .IDU_EXU_csrrs(IDU_EXU_csrrs),
    .IDU_EXU_csrrc(IDU_EXU_csrrc),
    .IDU_EXU_csrrwi(IDU_EXU_csrrwi),
    .IDU_EXU_csrrsi(IDU_EXU_csrrsi),
    .IDU_EXU_csrrci(IDU_EXU_csrrci),

    .IDU_EXU_csr_wen1(IDU_EXU_csr_wen1),
    .IDU_EXU_csr_wen2(IDU_EXU_csr_wen2),
    .IDU_EXU_csr_wr_addr1(IDU_EXU_csr_wr_addr1),
    .IDU_EXU_csr_wr_addr2(IDU_EXU_csr_wr_addr2),

    .EXU_out_flush(EXU_out_flush),
    .EXU_out_flush_pc(EXU_out_flush_pc),

    .EXU_LSU_src2(EXU_LSU_src2),
    .EXU_LSU_rd_en(EXU_LSU_rd_en),
    .EXU_LSU_rd_addr(EXU_LSU_rd_addr),
    .EXU_LSU_load(EXU_LSU_load),
    .EXU_LSU_store(EXU_LSU_store),
    .EXU_LSU_byte(EXU_LSU_byte),
    .EXU_LSU_half_byte(EXU_LSU_half_byte),
    .EXU_LSU_word(EXU_LSU_word),
    .EXU_LSU_extern_flag(EXU_LSU_extern_flag),

    .EXU_LSU_csr(EXU_LSU_csr),
    .EXU_LSU_csr_ecall(EXU_LSU_csr_ecall),
    .EXU_LSU_csr_mret(EXU_LSU_csr_mret),

    .EXU_LSU_csr_wen1(EXU_LSU_csr_wen1),
    .EXU_LSU_csr_wen2(EXU_LSU_csr_wen2),
    .EXU_LSU_csr_wr_addr1(EXU_LSU_csr_wr_addr1),
    .EXU_LSU_csr_wr_addr2(EXU_LSU_csr_wr_addr2),
    .EXU_LSU_csr_wr_data1(EXU_LSU_csr_wr_data1),
    .EXU_LSU_csr_wr_data2(EXU_LSU_csr_wr_data2),
    .EXU_LSU_csr_rdata(EXU_LSU_csr_rdata),
    .EXU_LSU_process_result(EXU_LSU_process_result)
);

wire [31:0] MEM_LSU_rd_data;
wire [31:0] LSU_MEM_rd_addr;
wire        LSU_MEM_read_valid;
wire        MEM_LSU_read_ready;
wire [31:0] LSU_MEM_wr_data;
wire [31:0] LSU_MEM_wr_addr;
wire [7:0]  LSU_MEM_wr_mask;
wire        LSU_MEM_write_valid;
wire        MEM_LSU_write_ready;

wire WBU_LSU_ready;
wire LSU_WBU_valid;
wire [31:0] LSU_WBU_inst;
wire [31:0] LSU_WBU_pc;
LSU lsu(
    .clk(clk),
    .rst(rst),

//##################  AXI ################\\
    .EXU_LSU_valid(EXU_LSU_valid),
    .LSU_EXU_ready(LSU_EXU_ready),
    .WBU_LSU_ready(WBU_LSU_ready),
    .LSU_WBU_valid(LSU_WBU_valid),

    .LSU_EXU_forward_rd_addr(LSU_EXU_forward_rd_addr),
    .LSU_EXU_forward_rd_en(LSU_EXU_forward_rd_en),
    .LSU_EXU_forward_load(LSU_EXU_forward_load),
    .EXU_LSU_forward_las(EXU_LSU_forward_las),

    .MEM_LSU_rd_data(MEM_LSU_rd_data),
    .LSU_MEM_rd_addr(LSU_MEM_rd_addr),
    .LSU_MEM_read_valid(LSU_MEM_read_valid),
    .MEM_LSU_read_ready(MEM_LSU_read_ready),
    .LSU_MEM_wr_data(LSU_MEM_wr_data),
    .LSU_MEM_wr_addr(LSU_MEM_wr_addr),
    .LSU_MEM_wr_mask(LSU_MEM_wr_mask),
    .LSU_MEM_write_valid(LSU_MEM_write_valid),
    .MEM_LSU_write_ready(MEM_LSU_write_ready),
//##################  AXI ################\\
    .EXU_LSU_inst(EXU_LSU_inst),
    .EXU_LSU_pc(EXU_LSU_pc),
    .EXU_LSU_src2(EXU_LSU_src2),
    .EXU_LSU_rd_en(EXU_LSU_rd_en),
    .EXU_LSU_rd_addr(EXU_LSU_rd_addr),
    .EXU_LSU_load(EXU_LSU_load),
    .EXU_LSU_store(EXU_LSU_store),
    .EXU_LSU_byte(EXU_LSU_byte),
    .EXU_LSU_half_byte(EXU_LSU_half_byte),
    .EXU_LSU_word(EXU_LSU_word),
    .EXU_LSU_extern_flag(EXU_LSU_extern_flag),

    .EXU_LSU_csr(EXU_LSU_csr),
    .EXU_LSU_csr_ecall(EXU_LSU_csr_ecall),
    .EXU_LSU_csr_mret(EXU_LSU_csr_mret),

    .EXU_LSU_csr_wen1(EXU_LSU_csr_wen1),
    .EXU_LSU_csr_wen2(EXU_LSU_csr_wen2),
    .EXU_LSU_csr_wr_addr1(EXU_LSU_csr_wr_addr1),
    .EXU_LSU_csr_wr_addr2(EXU_LSU_csr_wr_addr2),
    .EXU_LSU_csr_wr_data1(EXU_LSU_csr_wr_data1),
    .EXU_LSU_csr_wr_data2(EXU_LSU_csr_wr_data2),
    .EXU_LSU_csr_rdata(EXU_LSU_csr_rdata),

    .EXU_LSU_process_result(EXU_LSU_process_result),

    .LSU_WBU_inst(LSU_WBU_inst),
    .LSU_WBU_pc(LSU_WBU_pc),
    .LSU_WBU_csr_wr_data1(LSU_WBU_csr_wr_data1),  
    .LSU_WBU_csr_wr_data2(LSU_WBU_csr_wr_data2),
    .LSU_WBU_csr_wr_addr1(LSU_WBU_csr_wr_addr1),
    .LSU_WBU_csr_wr_addr2(LSU_WBU_csr_wr_addr2),
    .LSU_WBU_csr_wen1(LSU_WBU_csr_wen1),
    .LSU_WBU_csr_wen2(LSU_WBU_csr_wen2),

    .LSU_WBU_rd_en(LSU_WBU_rd_en),
    .LSU_WBU_rd_addr(LSU_WBU_rd_addr),
    .LSU_WBU_write_rd_data(LSU_WBU_write_rd_data)
);
wire [31:0] WBU_inst;
wire [31:0] WBU_pc;
WBU wbu(
    .clk(clk),
    .rst(rst),

//##################  AXI ################\\
    .WBU_LSU_ready(WBU_LSU_ready),
    .LSU_WBU_valid(LSU_WBU_valid),
    .LSU_WBU_inst(LSU_WBU_inst),
    .LSU_WBU_pc(LSU_WBU_pc),
//##################  AXI ################\\  
    .WBU_inst(WBU_inst),
    .WBU_pc(WBU_pc),

    .wen(LSU_WBU_rd_en),
    .wdata(LSU_WBU_write_rd_data),
    .waddr(LSU_WBU_rd_addr),
    .rs1(IDU_WBU_rs1),           // IDU信号输入
    .rs2(IDU_WBU_rs2),           // IDU信号输入
    .src1(WBU_EXU_src1),         // EXU信号输出
    .src2(WBU_EXU_src2),         // EXU信号输出
    .trapcode1(trapcode1),       // 输出到TOP

    .raddr_csr1(IDU_WBU_csr_addr1),
    .raddr_csr2(IDU_WBU_csr_addr2),
    .rdata_csr1(WBU_EXU_csr_num1),
    .rdata_csr2(WBU_EXU_csr_num2),

    .wen_csr1(LSU_WBU_csr_wen1),
    .wen_csr2(LSU_WBU_csr_wen2),
    .wdata_csr1(LSU_WBU_csr_wr_data1),
    .wdata_csr2(LSU_WBU_csr_wr_data2),
    .waddr_csr1(LSU_WBU_csr_wr_addr1),
    .waddr_csr2(LSU_WBU_csr_wr_addr2)
);

//#################  SRAM  ##################
/*wire [31:0]  ARB_MEM_araddr;
wire         ARB_MEM_arvalid;
wire         MEM_ARB_arready;

wire [31:0]  MEM_ARB_rdata;
wire [1:0]   MEM_ARB_rresp;
wire         MEM_ARB_rvalid;
wire         ARB_MEM_rready;

wire [31:0]  ARB_MEM_awaddr;
wire         ARB_MEM_awvalid;
wire         MEM_ARB_awready;

wire [31:0]  ARB_MEM_wdata;
wire [7:0]   ARB_MEM_wstrb;
wire         ARB_MEM_wvalid;
wire         MEM_ARB_wready;

wire [1:0]   MEM_ARB_bresp;
wire         MEM_ARB_bvalid;
wire         ARB_MEM_bready;*/

// 实例化 SRAM 模块
SRAM sram(
    .clk(clk),
    .rst(rst),
    // .MEM_IFU_inst(MEM_IFU_inst),
    // .MEM_IFU_valid(MEM_IFU_valid),
    // .IFU_MEM_ready(IFU_MEM_ready),
    // .IFU_MEM_pc(IFU_MEM_pc),
    .LSU_MEM_read_valid(LSU_MEM_read_valid),
    .MEM_LSU_read_ready(MEM_LSU_read_ready),
    .MEM_LSU_rd_data(MEM_LSU_rd_data),
    .LSU_MEM_rd_addr(LSU_MEM_rd_addr),

    .LSU_MEM_wr_data(LSU_MEM_wr_data),
    .LSU_MEM_wr_addr(LSU_MEM_wr_addr),
    .LSU_MEM_wr_mask(LSU_MEM_wr_mask),
    .LSU_MEM_write_valid(LSU_MEM_write_valid),
    .MEM_LSU_write_ready(MEM_LSU_write_ready)
);

//##################  UART  ################
/*wire [31:0] ARB_UART_awaddr;
wire        ARB_UART_awvalid;
wire        UART_ARB_awready;

wire [31:0] ARB_UART_wdata;
wire [7:0]  ARB_UART_wstrb;
wire        ARB_UART_wvalid;
wire        UART_ARB_wready;

wire [31:0] ARB_UART_araddr;
wire        ARB_UART_arvalid;
wire        UART_ARB_arready;

wire [31:0] UART_ARB_rdata;
wire [1:0]  UART_ARB_rresp;
wire        UART_ARB_rvalid;
wire        ARB_UART_rready;

wire [1:0]  UART_ARB_bresp;
wire        UART_ARB_bvalid;
wire        ARB_UART_bready;

// 实例化 UART 模块
UART uart(
    .clk(clk),
    .rst(rst),
    .CPU_MEM_awaddr(ARB_UART_awaddr),
    .CPU_MEM_awvalid(ARB_UART_awvalid),
    .MEM_CPU_awready(UART_ARB_awready),

    .CPU_MEM_wdata(ARB_UART_wdata),
    .CPU_MEM_wstrb(ARB_UART_wstrb),
    .CPU_MEM_wvalid(ARB_UART_wvalid),
    .MEM_CPU_wready(UART_ARB_wready),

    .CPU_MEM_araddr(ARB_UART_araddr),
    .CPU_MEM_arvalid(ARB_UART_arvalid),
    .MEM_CPU_arready(UART_ARB_arready),

    .MEM_CPU_rdata(UART_ARB_rdata),
    .MEM_CPU_rresp(UART_ARB_rresp),
    .MEM_CPU_rvalid(UART_ARB_rvalid),
    .CPU_MEM_rready(ARB_UART_rready),

    .MEM_CPU_bresp(UART_ARB_bresp),
    .MEM_CPU_bvalid(UART_ARB_bvalid),
    .CPU_MEM_bready(ARB_UART_bready)
);*/

//##################  CLINT  ################
/*wire [31:0] ARB_CLINT_awaddr;
wire        ARB_CLINT_awvalid;
wire        CLINT_ARB_awready;

wire [31:0] ARB_CLINT_wdata;
wire [7:0]  ARB_CLINT_wstrb;
wire        ARB_CLINT_wvalid;
wire        CLINT_ARB_wready;

wire [31:0] ARB_CLINT_araddr;
wire        ARB_CLINT_arvalid;
wire        CLINT_ARB_arready;

wire [31:0] CLINT_ARB_rdata;
wire [1:0]  CLINT_ARB_rresp;
wire        CLINT_ARB_rvalid;
wire        ARB_CLINT_rready;

wire [1:0]  CLINT_ARB_bresp;
wire        CLINT_ARB_bvalid;
wire        ARB_CLINT_bready;*/

// 实例化 CLINT 模块
/*CLINT CLINT(
    .clk(clk),
    .rst(rst),
    .CPU_MEM_awaddr(ARB_CLINT_awaddr),
    .CPU_MEM_awvalid(ARB_CLINT_awvalid),
    .MEM_CPU_awready(CLINT_ARB_awready),

    .CPU_MEM_wdata(ARB_CLINT_wdata),
    .CPU_MEM_wstrb(ARB_CLINT_wstrb),
    .CPU_MEM_wvalid(ARB_CLINT_wvalid),
    .MEM_CPU_wready(CLINT_ARB_wready),

    .CPU_MEM_araddr(ARB_CLINT_araddr),
    .CPU_MEM_arvalid(ARB_CLINT_arvalid),
    .MEM_CPU_arready(CLINT_ARB_arready),

    .MEM_CPU_rdata(CLINT_ARB_rdata),
    .MEM_CPU_rresp(CLINT_ARB_rresp),
    .MEM_CPU_rvalid(CLINT_ARB_rvalid),
    .CPU_MEM_rready(ARB_CLINT_rready),

    .MEM_CPU_bresp(CLINT_ARB_bresp),
    .MEM_CPU_bvalid(CLINT_ARB_bvalid),
    .CPU_MEM_bready(ARB_CLINT_bready)
);*/

//##################  ARB ################\\ 
//IFU Interface
/*wire           IFU_ARB_req;
wire [31:0]    IFU_ARB_araddr;
wire           IFU_ARB_arvalid;
wire           ARB_IFU_arready;

wire [31:0]    ARB_IFU_rdata;
wire [1:0]     ARB_IFU_rresp;
wire           ARB_IFU_rvalid;
wire           IFU_ARB_rready;

wire [31:0]    IFU_ARB_awaddr;
wire           IFU_ARB_awvalid;
wire           ARB_IFU_awready;

wire [31:0]    IFU_ARB_wdata;
wire [7:0]     IFU_ARB_wstrb;
wire           IFU_ARB_wvalid;
wire           ARB_IFU_wready;

wire [1:0]     ARB_IFU_bresp;
wire           ARB_IFU_bvalid;
wire           IFU_ARB_bready;*/

// LSU Interface
/*wire           LSU_ARB_req;
wire [31:0]    LSU_ARB_araddr;
wire           LSU_ARB_arvalid;
wire           ARB_LSU_arready;

wire [31:0]    ARB_LSU_rdata;
wire [1:0]     ARB_LSU_rresp;
wire           ARB_LSU_rvalid;
wire           LSU_ARB_rready;

wire [31:0]    LSU_ARB_awaddr;
wire           LSU_ARB_awvalid;
wire           ARB_LSU_awready;

wire [31:0]    LSU_ARB_wdata;
wire [7:0]     LSU_ARB_wstrb;
wire           LSU_ARB_wvalid;
wire           ARB_LSU_wready;

wire [1:0]     ARB_LSU_bresp;
wire           ARB_LSU_bvalid;
wire           LSU_ARB_bready;*/

//ARB
/*ARB arb(
    // IFU Interface
    .IFU_ARB_req(IFU_ARB_req),
    .IFU_ARB_araddr(IFU_ARB_araddr),
    .IFU_ARB_arvalid(IFU_ARB_arvalid),
    .ARB_IFU_arready(ARB_IFU_arready),

    .ARB_IFU_rdata(ARB_IFU_rdata),
    .ARB_IFU_rresp(ARB_IFU_rresp),
    .ARB_IFU_rvalid(ARB_IFU_rvalid),
    .IFU_ARB_rready(IFU_ARB_rready),

    .IFU_ARB_awaddr(IFU_ARB_awaddr),
    .IFU_ARB_awvalid(IFU_ARB_awvalid),
    .ARB_IFU_awready(ARB_IFU_awready),

    .IFU_ARB_wdata(IFU_ARB_wdata),
    .IFU_ARB_wstrb(IFU_ARB_wstrb),
    .IFU_ARB_wvalid(IFU_ARB_wvalid),
    .ARB_IFU_wready(ARB_IFU_wready),

    .ARB_IFU_bresp(ARB_IFU_bresp),
    .ARB_IFU_bvalid(ARB_IFU_bvalid),
    .IFU_ARB_bready(IFU_ARB_bready),

    // LSU Interface
    .LSU_ARB_req(LSU_ARB_req),
    .LSU_ARB_araddr(LSU_ARB_araddr),
    .LSU_ARB_arvalid(LSU_ARB_arvalid),
    .ARB_LSU_arready(ARB_LSU_arready),

    .ARB_LSU_rdata(ARB_LSU_rdata),
    .ARB_LSU_rresp(ARB_LSU_rresp),
    .ARB_LSU_rvalid(ARB_LSU_rvalid),
    .LSU_ARB_rready(LSU_ARB_rready),

    .LSU_ARB_awaddr(LSU_ARB_awaddr),
    .LSU_ARB_awvalid(LSU_ARB_awvalid),
    .ARB_LSU_awready(ARB_LSU_awready),

    .LSU_ARB_wdata(LSU_ARB_wdata),
    .LSU_ARB_wstrb(LSU_ARB_wstrb),
    .LSU_ARB_wvalid(LSU_ARB_wvalid),
    .ARB_LSU_wready(ARB_LSU_wready),

    .ARB_LSU_bresp(ARB_LSU_bresp),
    .ARB_LSU_bvalid(ARB_LSU_bvalid),
    .LSU_ARB_bready(LSU_ARB_bready),

    // SRAM Interface
    .ARB_MEM_araddr(ARB_MEM_araddr),
    .ARB_MEM_arvalid(ARB_MEM_arvalid),
    .MEM_ARB_arready(MEM_ARB_arready),

    .MEM_ARB_rdata(MEM_ARB_rdata),
    .MEM_ARB_rresp(MEM_ARB_rresp),
    .MEM_ARB_rvalid(MEM_ARB_rvalid),
    .ARB_MEM_rready(ARB_MEM_rready),

    .ARB_MEM_awaddr(ARB_MEM_awaddr),
    .ARB_MEM_awvalid(ARB_MEM_awvalid),
    .MEM_ARB_awready(MEM_ARB_awready),

    .ARB_MEM_wdata(ARB_MEM_wdata),
    .ARB_MEM_wstrb(ARB_MEM_wstrb),
    .ARB_MEM_wvalid(ARB_MEM_wvalid),
    .MEM_ARB_wready(MEM_ARB_wready),

    .MEM_ARB_bresp(MEM_ARB_bresp),
    .MEM_ARB_bvalid(MEM_ARB_bvalid),
    .ARB_MEM_bready(ARB_MEM_bready),

    // UART Interface
    .ARB_UART_araddr(ARB_UART_araddr),
    .ARB_UART_arvalid(ARB_UART_arvalid),
    .UART_ARB_arready(UART_ARB_arready),

    .UART_ARB_rdata(UART_ARB_rdata),
    .UART_ARB_rresp(UART_ARB_rresp),
    .UART_ARB_rvalid(UART_ARB_rvalid),
    .ARB_UART_rready(ARB_UART_rready),

    .ARB_UART_awaddr(ARB_UART_awaddr),
    .ARB_UART_awvalid(ARB_UART_awvalid),
    .UART_ARB_awready(UART_ARB_awready),

    .ARB_UART_wdata(ARB_UART_wdata),
    .ARB_UART_wstrb(ARB_UART_wstrb),
    .ARB_UART_wvalid(ARB_UART_wvalid),
    .UART_ARB_wready(UART_ARB_wready),

    .UART_ARB_bresp(UART_ARB_bresp),
    .UART_ARB_bvalid(UART_ARB_bvalid),
    .ARB_UART_bready(ARB_UART_bready),

    // CLINT Interface
    .ARB_CLINT_araddr(ARB_CLINT_araddr),
    .ARB_CLINT_arvalid(ARB_CLINT_arvalid),
    .CLINT_ARB_arready(CLINT_ARB_arready),

    .CLINT_ARB_rdata(CLINT_ARB_rdata),
    .CLINT_ARB_rresp(CLINT_ARB_rresp),
    .CLINT_ARB_rvalid(CLINT_ARB_rvalid),
    .ARB_CLINT_rready(ARB_CLINT_rready),

    .ARB_CLINT_awaddr(ARB_CLINT_awaddr),
    .ARB_CLINT_awvalid(ARB_CLINT_awvalid),
    .CLINT_ARB_awready(CLINT_ARB_awready),

    .ARB_CLINT_wdata(ARB_CLINT_wdata),
    .ARB_CLINT_wstrb(ARB_CLINT_wstrb),
    .ARB_CLINT_wvalid(ARB_CLINT_wvalid),
    .CLINT_ARB_wready(CLINT_ARB_wready),

    .CLINT_ARB_bresp(CLINT_ARB_bresp),
    .CLINT_ARB_bvalid(CLINT_ARB_bvalid),
    .ARB_CLINT_bready(ARB_CLINT_bready)
);*/


always @(*) begin
    if (IFU_IDU_inst == 32'h00100073) begin
        end_simulation(IFU_IDU_pc,trapcode1);
    end
end

endmodule
