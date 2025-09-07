`include "/home/furina/ysyx-workbench/npc/pipeline-soc-vsrc/defines/defines.v"

module ysyx_25010030 (
    input         clock,
    input         reset,
    input         io_interrupt,

    //====== AXI Master ======//
    input         io_master_awready,
    output        io_master_awvalid,
    output [31:0] io_master_awaddr,
    output [ 3:0] io_master_awid,
    output [ 7:0] io_master_awlen,
    output [ 2:0] io_master_awsize,
    output [ 1:0] io_master_awburst,

    input         io_master_wready,
    output        io_master_wvalid,
    output [31:0] io_master_wdata,
    output [ 3:0] io_master_wstrb,
    output        io_master_wlast,

    output        io_master_bready,
    input         io_master_bvalid,
    input  [ 1:0] io_master_bresp,
    input  [ 3:0] io_master_bid,

    input         io_master_arready,
    output        io_master_arvalid,
    output [31:0] io_master_araddr,
    output [ 3:0] io_master_arid,
    output [ 7:0] io_master_arlen,
    output [ 2:0] io_master_arsize,
    output [ 1:0] io_master_arburst,

    output        io_master_rready,
    input         io_master_rvalid,
    input  [ 1:0] io_master_rresp,
    input  [31:0] io_master_rdata,
    input         io_master_rlast,
    input  [3:0]  io_master_rid,

    //====== AXI Slave ======//
    output        io_slave_awready,
    input         io_slave_awvalid,
    input  [31:0] io_slave_awaddr,
    input  [ 3:0] io_slave_awid,
    input  [ 7:0] io_slave_awlen,
    input  [ 2:0] io_slave_awsize,
    input  [ 1:0] io_slave_awburst,

    output        io_slave_wready,
    input         io_slave_wvalid,
    input  [31:0] io_slave_wdata,
    input  [ 3:0] io_slave_wstrb,
    input         io_slave_wlast,

    input         io_slave_bready,
    output        io_slave_bvalid,
    output [ 1:0] io_slave_bresp,
    output [ 3:0] io_slave_bid,

    output        io_slave_arready,
    input         io_slave_arvalid,
    input  [31:0] io_slave_araddr,
    input  [ 3:0] io_slave_arid,
    input  [ 7:0] io_slave_arlen,
    input  [ 2:0] io_slave_arsize,
    input  [ 1:0] io_slave_arburst,

    input         io_slave_rready,
    output        io_slave_rvalid,
    output [ 1:0] io_slave_rresp,
    output [31:0] io_slave_rdata,
    output        io_slave_rlast,
    output [ 3:0] io_slave_rid
);
`ifdef VERILATOR
    import "DPI-C" function void ebreak(input int station, input int inst);
    // import "DPI-C" function void occupancy(input int ifu_active_cycles, input int exu_active_cycles, input int lsu_active_cycles, input int total_cycles);
`endif
    // 顶层信号声明
    wire [31:0] IF_ID_pc;         // IF 到 ID：程序计数器
    wire [31:0] IF_ID_inst;       // IF 到 ID：指令
    wire        IF_valid;         // IF 到 ID：有效信号
    wire        id_ready;         // ID 到 IF：就绪信号

    wire [31:0] id_ex_pc;         // ID 到 EX：程序计数器
    wire [31:0] id_ex_inst;       // ID 到 EX：指令
    wire        id_valid;         // ID 到 EX：有效信号
    wire        ex_ready;         // EX 到 ID：就绪信号
    wire        id_ex_RegWrite;   // ID 到 EX：寄存器写使能
    wire [ 3:0] id_ex_rd;         // ID 到 EX：目标寄存器
    wire [ 3:0] id_wb_rs1;        // ID 到 WB：源寄存器 1
    wire [ 3:0] id_wb_rs2;        // ID 到 WB：源寄存器 2
    wire [ 4:0] id_ex_zimm;       // ID 到 EX：CSR 立即数
    wire [31:0] id_ex_imm;        // ID 到 EX：立即数
    wire [ 5:0] id_ex_shamt;      // ID 到 EX：移位量
    wire [ 3:0] id_ex_alu_op;     // ID 到 EX：ALU 操作
    wire [ 4:0] id_ex_MemLen;     // ID 到 EX：内存访问长度
    wire        id_ex_MemWrite;   // ID 到 EX：内存写使能
    wire        id_ex_MemRead;    // ID 到 EX：内存读使能
    wire [ 6:0] id_ex_opcode;     // ID 到 EX：操作码
    wire [ 2:0] id_ex_func3;      // ID 到 EX：功能码 3
    wire        id_ex_jal;        // ID 到 EX：JAL 信号
    wire        id_ex_jalr;       // ID 到 EX：JALR 信号
    // wire        id_ex_csr;        // ID 到 EX：CSR 指令信号
    wire        id_ex_csr_wen1;   // ID 到 EX：CSR 写使能 1
    wire        id_ex_csr_wen2;   // ID 到 EX：CSR 写使能 2
    wire        id_ex_csr_ecall;  // ID 到 EX：ECALL 信号
    wire        id_ex_csr_mret;   // ID 到 EX：MRET 信号
    wire [ 1:0] id_ex_csr_op;
    wire [11:0] id_ex_csr_wr_addr1; // ID 到 EX：CSR 写地址 1
    wire [11:0] id_ex_csr_wr_addr2; // ID 到 EX：CSR 写地址 2
    wire [11:0] id_wb_csr_addr1;  // ID 到 WB：CSR 读地址 1
    wire [11:0] id_wb_csr_addr2;  // ID 到 WB：CSR 读地址 2

    // wire [31:0] ex_lsu_pc;        // EX 到 MEM：程序计数器
    wire [31:0] ex_lsu_inst;      // EX 到 MEM：指令
    wire        ex_lsu_valid;     // EX 到 MEM：有效信号
    wire        lsu_ex_ready;     // MEM 到 EX：就绪信号
    wire [31:0] ex_lsu_src2;      // EX 到 MEM：源操作数 2
    wire        ex_lsu_RegWrite;  // EX 到 MEM：寄存器写使能
    wire [ 3:0] ex_lsu_rd;        // EX 到 MEM：目标寄存器
    wire        ex_lsu_MemRead;   // EX 到 MEM：内存读使能
    wire        ex_lsu_MemWrite;  // EX 到 MEM：内存写使能
    wire [ 4:0] ex_lsu_MemLen;    // EX 到 MEM：内存访问长度
    wire [31:0] ex_lsu_process_result; // EX 到 MEM：ALU/内存地址结果
    wire        ex_flush;         // EX 到 IF：冲刷信号
    wire [31:0] ex_flush_pc;      // EX 到 IF：冲刷目标 PC
    wire        ex_lsu_csr;       // EX 到 MEM：CSR 指令信号
    wire        ex_lsu_csr_wen1;  // EX 到 MEM：CSR 写使能 1
    wire        ex_lsu_csr_wen2;  // EX 到 MEM：CSR 写使能 2
    wire [11:0] ex_lsu_csr_wr_addr1; // EX 到 MEM：CSR 写地址 1
    wire [11:0] ex_lsu_csr_wr_addr2; // EX 到 MEM：CSR 写地址 2
    wire [31:0] ex_lsu_csr_wr_data1; // EX 到 MEM：CSR 写数据 1
    wire [31:0] ex_lsu_csr_wr_data2; // EX 到 MEM：CSR 写数据 2
    wire [31:0] ex_lsu_csr_rdata; // EX 到 MEM：CSR 读数据
    wire        ex_lsu_csr_ecall; // EX 到 MEM：ECALL 信号
    wire        ex_lsu_csr_mret;  // EX 到 MEM：MRET 信号

    wire        lsu_wb_valid;     // MEM 到 WB：有效信号
    wire        wb_lsu_ready;     // WB 到 MEM：就绪信号
    wire        lsu_wb_RegWrite;  // MEM 到 WB：寄存器写使能
    wire [ 3:0] lsu_wb_rd;        // MEM 到 WB：目标寄存器
    wire [31:0] lsu_wb_write_rd_data; // MEM 到 WB：写回数据
    wire [31:0] lsu_wb_csr_wr_data1;  // MEM 到 WB：CSR 写数据 1
    wire [31:0] lsu_wb_csr_wr_data2;  // MEM 到 WB：CSR 写数据 2
    wire [11:0] lsu_wb_csr_wr_addr1;  // MEM 到 WB：CSR 写地址 1
    wire [11:0] lsu_wb_csr_wr_addr2;  // MEM 到 WB：CSR 写地址 2
    wire        lsu_wb_csr_wen1;      // MEM 到 WB：CSR 写使能 1
    wire        lsu_wb_csr_wen2;      // MEM 到 WB：CSR 写使能 2
    wire        wb_valid;         

    wire [31:0] wb_ex_src1;       // WB 到 EX：源操作数 1（前递）
    wire [31:0] wb_ex_src2;       // WB 到 EX：源操作数 2（前递）
    wire [31:0] wb_ex_csr_num1;   // WB 到 EX：CSR 读数据 1
    wire [31:0] wb_ex_csr_num2;   // WB 到 EX：CSR 读数据 2

    // 前递信号
    wire [ 3:0] lsu_ex_forward_rd;        // MEM 到 EX：前递的目标寄存器
    wire        lsu_ex_forward_RegWrite;  // MEM 到 EX：前递写使能
    wire        lsu_ex_forward_MemRead;   // MEM 到 EX：前递读使能
    wire        ex_lsu_forward_las;       // EX 到 MEM：加载后存储前递标志

    // LSU - ARB 的 AXI4-Lite 接口信号
    wire        lsu_axi_arvalid;
    wire        axi_lsu_arready;
    wire [31:0] lsu_axi_araddr;
    wire [3:0]  lsu_axi_arid;
    wire [7:0]  lsu_axi_arlen;
    wire [2:0]  lsu_axi_arsize;
    wire [1:0]  lsu_axi_arburst;
    wire [31:0] axi_lsu_rdata;
    wire        axi_lsu_rvalid;
    wire [ 3:0] axi_lsu_rid;
    wire        axi_lsu_rlast;
    wire        lsu_axi_rready;
    wire [ 1:0] axi_lsu_rresp;
    wire [31:0] lsu_axi_awaddr;
    wire [ 3:0] lsu_axi_awid;
    wire [ 7:0] lsu_axi_awlen;
    wire [ 2:0] lsu_axi_awsize;
    wire [ 1:0] lsu_axi_awburst;
    wire        lsu_axi_awvalid;
    wire        axi_lsu_awready;
    wire [31:0] lsu_axi_wdata;
    wire [ 3:0] lsu_axi_wstrb;
    wire        lsu_axi_wvalid;
    wire        lsu_axi_wlast;
    wire        axi_lsu_wready;
    wire [ 1:0] axi_lsu_bresp;
    wire [ 3:0] axi_lsu_bid;
    wire        axi_lsu_bvalid;
    wire        lsu_axi_bready;

    // IF - ARB 的 AXI4-Lite 接口信号
    wire        if_axi_arvalid;    
    wire        axi_if_arready;      
    wire [31:0] if_axi_araddr;      
    wire [ 3:0] if_axi_arid;
    wire [ 7:0] if_axi_arlen;
    wire [ 2:0] if_axi_arsize;
    wire [ 1:0] if_axi_arburst;
    wire [31:0] axi_if_rdata;        
    wire        axi_if_rvalid;      
    wire [ 3:0] axi_if_rid;
    wire        axi_if_rlast;
    wire        if_axi_rready;      
    wire [ 1:0] axi_if_rresp;    

     //====== CLINT =======//
    //AR channel
    wire [31:0] clint_araddr;
    wire        clint_arvalid;
    wire [ 3:0] clint_arid;
    wire [ 7:0] clint_arlen;
    wire [ 2:0] clint_arsize;
    wire [ 1:0] clint_arburst;
    wire        clint_arready;
    //R channel
    wire [ 1:0] clint_rresp;
    wire [31:0] clint_rdata;
    wire        clint_rvalid;
    wire [ 3:0] clint_rid;
    wire        clint_rlast;
    wire        clint_rready;
    //AW channel
    // wire [31:0] clint_awaddr;
    // wire        clint_awvalid;
    // wire [ 3:0] clint_awid;
    // wire [ 7:0] clint_awlen;
    // wire [ 2:0] clint_awsize;
    // wire [ 1:0] clint_awburst;
    // wire        clint_awready;
    //W channel
    // wire [31:0] clint_wdata;
    // wire [ 3:0] clint_wstrb;
    // wire        clint_wvalid;
    // wire        clint_wlast;
    // wire        clint_wready;
    //B channel
    // wire [ 1:0] clint_bresp;
    // wire [ 3:0] clint_bid;
    // wire        clint_bvalid;
    // wire        clint_bready;

    // wire [31:0] ifu_active_cycles;
    // wire [31:0] exu_active_cycles;
    // wire [31:0] lsu_active_cycles;

    CLINT clint (
        .clk(clock),
        .reset(reset),
        // .awvalid(clint_awvalid),
        // .awready(clint_awready),
        // .awaddr(clint_awaddr),
        // .wdata(clint_wdata),
        // .wstrb(clint_wstrb),
        // .wvalid(clint_wvalid),
        // .wready(clint_wready),
        // .bresp(clint_bresp),
        // .bvalid(clint_bvalid),
        // .bready(clint_bready),
        .arvalid(clint_arvalid),
        .araddr(clint_araddr),
        .arready(clint_arready),
        .rready(clint_rready),
        .rvalid(clint_rvalid),
        .rlast(clint_rlast),
        .rresp(clint_rresp),
        .rdata(clint_rdata)
    );

    // assign clint_awready = 1'b0;
    // assign clint_wready  = 1'b0;
    // assign clint_bvalid  = 1'b0;
    // assign clint_bresp   = 2'b00;

    AXI_ARB_BURST axi_arb (
        .clk(clock),
        .reset(reset),

        // IFU master 接口（读通道）
        .ifu_arready(axi_if_arready),
        .ifu_arvalid(if_axi_arvalid),
        .ifu_araddr(if_axi_araddr),
        .ifu_arid(if_axi_arid),
        .ifu_arlen(if_axi_arlen),
        .ifu_arsize(if_axi_arsize),
        .ifu_arburst(if_axi_arburst),
        .ifu_rready(if_axi_rready),
        .ifu_rvalid(axi_if_rvalid),
        .ifu_rresp(axi_if_rresp),
        .ifu_rdata(axi_if_rdata),
        .ifu_rlast(axi_if_rlast),
        .ifu_rid(axi_if_rid),

        // LSU master 接口（写通道）
        .lsu_awready(axi_lsu_awready),
        .lsu_awvalid(lsu_axi_awvalid),
        .lsu_awaddr(lsu_axi_awaddr),
        .lsu_awid(lsu_axi_awid),
        .lsu_awlen(lsu_axi_awlen),
        .lsu_awsize(lsu_axi_awsize),
        .lsu_awburst(lsu_axi_awburst),
        .lsu_wready(axi_lsu_wready),
        .lsu_wvalid(lsu_axi_wvalid),
        .lsu_wdata(lsu_axi_wdata),
        .lsu_wstrb(lsu_axi_wstrb),
        .lsu_wlast(lsu_axi_wlast),
        .lsu_bready(lsu_axi_bready),
        .lsu_bvalid(axi_lsu_bvalid),
        .lsu_bresp(axi_lsu_bresp),
        .lsu_bid(axi_lsu_bid),

        // LSU master 接口（读通道）
        .lsu_arready(axi_lsu_arready),
        .lsu_arvalid(lsu_axi_arvalid),
        .lsu_araddr(lsu_axi_araddr),
        .lsu_arid(lsu_axi_arid),
        .lsu_arlen(lsu_axi_arlen),
        .lsu_arsize(lsu_axi_arsize),
        .lsu_arburst(lsu_axi_arburst),
        .lsu_rready(lsu_axi_rready),
        .lsu_rvalid(axi_lsu_rvalid),
        .lsu_rresp(axi_lsu_rresp),
        .lsu_rdata(axi_lsu_rdata),
        .lsu_rlast(axi_lsu_rlast),
        .lsu_rid(axi_lsu_rid),

        // IO master 接口（写通道）
        .io_master_awready(io_master_awready),
        .io_master_awvalid(io_master_awvalid),
        .io_master_awaddr(io_master_awaddr),
        .io_master_awid(io_master_awid),
        .io_master_awlen(io_master_awlen),
        .io_master_awsize(io_master_awsize),
        .io_master_awburst(io_master_awburst),
        .io_master_wready(io_master_wready),
        .io_master_wvalid(io_master_wvalid),
        .io_master_wdata(io_master_wdata),
        .io_master_wstrb(io_master_wstrb),
        .io_master_wlast(io_master_wlast),
        .io_master_bready(io_master_bready),
        .io_master_bvalid(io_master_bvalid),
        .io_master_bresp(io_master_bresp),
        .io_master_bid(io_master_bid),

        // IO master 接口（读通道）
        .io_master_arready(io_master_arready),
        .io_master_arvalid(io_master_arvalid),
        .io_master_araddr(io_master_araddr),
        .io_master_arid(io_master_arid),
        .io_master_arlen(io_master_arlen),
        .io_master_arsize(io_master_arsize),
        .io_master_arburst(io_master_arburst),
        .io_master_rready(io_master_rready),
        .io_master_rvalid(io_master_rvalid),
        .io_master_rresp(io_master_rresp),
        .io_master_rdata(io_master_rdata),
        .io_master_rlast(io_master_rlast),
        .io_master_rid(io_master_rid),

        // CLINT从设备接口（读通道）
        .clint_araddr(clint_araddr),
        .clint_arvalid(clint_arvalid),
        .clint_arready(clint_arready),
        .clint_arid(clint_arid),
        .clint_arlen(clint_arlen),
        .clint_arsize(clint_arsize),
        .clint_arburst(clint_arburst),
        .clint_rready(clint_rready),
        .clint_rvalid(clint_rvalid),
        .clint_rresp(clint_rresp),
        .clint_rdata(clint_rdata),
        .clint_rlast(clint_rlast),
        .clint_rid(clint_rid)

        // CLINT从设备接口（写通道，始终无效）
        // .clint_awaddr(clint_awaddr),
        // .clint_awvalid(clint_awvalid),
        // .clint_awready(clint_awready),
        // .clint_awid(clint_awid),
        // .clint_awlen(clint_awlen),
        // .clint_awsize(clint_awsize),
        // .clint_awburst(clint_awburst),
        // .clint_wdata(clint_wdata),
        // .clint_wstrb(clint_wstrb),
        // .clint_wvalid(clint_wvalid),
        // .clint_wlast(clint_wlast),
        // .clint_wready(clint_wready),
        // .clint_bready(clint_bready),
        // .clint_bvalid(clint_bvalid),
        // .clint_bresp(clint_bresp),
        // .clint_bid(clint_bid)
    );

    // IF（指令获取）模块
    IF_AXI ifu (
        .clk(clock),
        .reset(reset),
        .EX_flush(ex_flush),
        .EX_flush_pc(ex_flush_pc),
        .ID_ready(id_ready),
        .IF_valid(IF_valid),
        .IF_ID_pc(IF_ID_pc),
        .IF_ID_inst(IF_ID_inst),
        .if_axi_arvalid(if_axi_arvalid),
        .axi_if_arready(axi_if_arready),
        .if_axi_araddr(if_axi_araddr),
        .if_axi_arid(if_axi_arid),
        .if_axi_arlen(if_axi_arlen),
        .if_axi_arsize(if_axi_arsize),
        .if_axi_arburst(if_axi_arburst),
        .axi_if_rdata(axi_if_rdata),
        .axi_if_rvalid(axi_if_rvalid),
        .if_axi_rready(if_axi_rready),
        .axi_if_rresp(axi_if_rresp),
        .axi_if_rid(axi_if_rid),
        .axi_if_rlast(axi_if_rlast)
        // .ifu_active_cycles(ifu_active_cycles)
    );

    // ID（指令解码）模块
    ID idu (
        .clk(clock),
        .reset(reset),
        .if_id_pc(IF_ID_pc),
        .if_id_inst(IF_ID_inst),
        .ex_flush(ex_flush),
        .if_valid(IF_valid),
        .id_ready(id_ready),
        .ex_ready(ex_ready),
        .id_valid(id_valid),
        .id_ex_pc(id_ex_pc),
        .id_ex_inst(id_ex_inst),
        .id_ex_RegWrite(id_ex_RegWrite),
        .id_ex_rd(id_ex_rd),
        .id_wb_rs1(id_wb_rs1),
        .id_wb_rs2(id_wb_rs2),
        .id_ex_zimm(id_ex_zimm),
        .id_ex_imm(id_ex_imm),
        .id_ex_shamt(id_ex_shamt),
        .id_ex_alu_op(id_ex_alu_op),
        .id_ex_MemLen(id_ex_MemLen),
        .id_ex_MemWrite(id_ex_MemWrite),
        .id_ex_MemRead(id_ex_MemRead),
        .id_ex_opcode(id_ex_opcode),
        .id_ex_func3(id_ex_func3),
        .id_ex_jal(id_ex_jal),
        .id_ex_jalr(id_ex_jalr),
        // .id_ex_csr(id_ex_csr),
        .id_ex_csr_wen1(id_ex_csr_wen1),
        .id_ex_csr_wen2(id_ex_csr_wen2),
        .id_ex_csr_ecall(id_ex_csr_ecall),
        .id_ex_csr_mret(id_ex_csr_mret),
        .id_ex_csr_op(id_ex_csr_op),
        .id_ex_csr_wr_addr1(id_ex_csr_wr_addr1),
        .id_ex_csr_wr_addr2(id_ex_csr_wr_addr2),
        .id_wb_csr_addr1(id_wb_csr_addr1),
        .id_wb_csr_addr2(id_wb_csr_addr2)
    );

    // EX（执行）模块
    EX exu (
        .clk(clock),
        .reset(reset),
        .id_ready(id_ready),
        .id_valid(id_valid),
        .ex_ready(ex_ready),
        .lsu_ready(lsu_ex_ready),
        .ex_lsu_valid(ex_lsu_valid),
        .id_wb_rs1(id_wb_rs1),
        .id_wb_rs2(id_wb_rs2),
        .lsu_ex_forward_rd(lsu_ex_forward_rd),
        .lsu_ex_forward_RegWrite(lsu_ex_forward_RegWrite),
        .lsu_ex_forward_MemRead(lsu_ex_forward_MemRead),
        .lsu_wb_wdata(lsu_wb_write_rd_data),
        .lsu_wb_rd(lsu_wb_rd),
        .lsu_wb_RegWrite(lsu_wb_RegWrite),
        .lsu_wb_valid(lsu_wb_valid),
        .ex_lsu_forward_las(ex_lsu_forward_las),
        .id_ex_inst(id_ex_inst),
        .id_ex_pc(id_ex_pc),
        .id_ex_imm(id_ex_imm),
        .id_ex_zimm(id_ex_zimm),
        .id_ex_shamt(id_ex_shamt),
        .wb_ex_src1(wb_ex_src1),
        .wb_ex_src2(wb_ex_src2),
        .id_ex_RegWrite(id_ex_RegWrite),
        .id_ex_rd(id_ex_rd),
        .id_ex_opcode(id_ex_opcode),
        .id_ex_func3(id_ex_func3),
        .id_ex_alu_op(id_ex_alu_op),
        .id_ex_jal(id_ex_jal),
        .id_ex_jalr(id_ex_jalr),
        .id_ex_MemRead(id_ex_MemRead),
        .id_ex_MemWrite(id_ex_MemWrite),
        .id_ex_MemLen(id_ex_MemLen),
        .wb_ex_csr_num1(wb_ex_csr_num1),
        .wb_ex_csr_num2(wb_ex_csr_num2),
        // .id_ex_csr(id_ex_csr),
        .id_ex_csr_wen1(id_ex_csr_wen1),
        .id_ex_csr_wen2(id_ex_csr_wen2),
        .id_ex_csr_wr_addr1(id_ex_csr_wr_addr1),
        .id_ex_csr_wr_addr2(id_ex_csr_wr_addr2),
        .id_ex_csr_ecall(id_ex_csr_ecall),
        .id_ex_csr_mret(id_ex_csr_mret),
        .id_ex_csr_op(id_ex_csr_op),
        .ex_flush(ex_flush),
        .ex_flush_pc(ex_flush_pc),
        .ex_lsu_inst(ex_lsu_inst),
        // .ex_lsu_pc(ex_lsu_pc),
        .ex_lsu_src2(ex_lsu_src2),
        .ex_lsu_RegWrite(ex_lsu_RegWrite),
        .ex_lsu_rd(ex_lsu_rd),
        .ex_lsu_MemRead(ex_lsu_MemRead),
        .ex_lsu_MemWrite(ex_lsu_MemWrite),
        .ex_lsu_MemLen(ex_lsu_MemLen),
        .ex_lsu_csr(ex_lsu_csr),
        .ex_lsu_csr_wen1(ex_lsu_csr_wen1),
        .ex_lsu_csr_wen2(ex_lsu_csr_wen2),
        .ex_lsu_csr_wr_addr1(ex_lsu_csr_wr_addr1),
        .ex_lsu_csr_wr_addr2(ex_lsu_csr_wr_addr2),
        .ex_lsu_csr_wr_data1(ex_lsu_csr_wr_data1),
        .ex_lsu_csr_wr_data2(ex_lsu_csr_wr_data2),
        .ex_lsu_csr_rdata(ex_lsu_csr_rdata),
        .ex_lsu_csr_ecall(ex_lsu_csr_ecall),
        .ex_lsu_csr_mret(ex_lsu_csr_mret),
        // .exu_active_cycles(exu_active_cycles),
        .ex_lsu_process_result(ex_lsu_process_result)
    );

    // MEM（内存访问）模块
    LSU_AXI lsu (
        .clk(clock),
        .rst(reset),
        .ex_lsu_valid(ex_lsu_valid),
        .lsu_ex_ready(lsu_ex_ready),
        .wb_lsu_ready(wb_lsu_ready),
        .lsu_wb_valid(lsu_wb_valid),
        .ex_lsu_forward_las(ex_lsu_forward_las),
        .ex_lsu_RegWrite(ex_lsu_RegWrite),
        .ex_lsu_rd(ex_lsu_rd),
        .ex_lsu_MemRead(ex_lsu_MemRead),
        .ex_lsu_MemWrite(ex_lsu_MemWrite),
        .ex_lsu_MemLen(ex_lsu_MemLen),
        // .ex_lsu_pc(ex_lsu_pc),
        .addr(ex_lsu_process_result), // 从 EX 传入的内存地址
        .data_in(ex_lsu_src2),        // 从 EX 传入的写数据
        .lsu_ex_forward_rd(lsu_ex_forward_rd),
        .lsu_ex_forward_RegWrite(lsu_ex_forward_RegWrite),
        .lsu_ex_forward_MemRead(lsu_ex_forward_MemRead),
        .ex_lsu_csr(ex_lsu_csr),
        .ex_lsu_csr_wen1(ex_lsu_csr_wen1),
        .ex_lsu_csr_wen2(ex_lsu_csr_wen2),
        .ex_lsu_csr_wr_data1(ex_lsu_csr_wr_data1),
        .ex_lsu_csr_wr_data2(ex_lsu_csr_wr_data2),
        .ex_lsu_csr_wr_addr1(ex_lsu_csr_wr_addr1),
        .ex_lsu_csr_wr_addr2(ex_lsu_csr_wr_addr2),
        .ex_lsu_csr_rdata(ex_lsu_csr_rdata),
        .ex_lsu_csr_ecall(ex_lsu_csr_ecall),
        .ex_lsu_csr_mret(ex_lsu_csr_mret),
        .ex_lsu_process_result(ex_lsu_process_result),
        .lsu_wb_csr_wr_data1(lsu_wb_csr_wr_data1),
        .lsu_wb_csr_wr_data2(lsu_wb_csr_wr_data2),
        .lsu_wb_csr_wr_addr1(lsu_wb_csr_wr_addr1),
        .lsu_wb_csr_wr_addr2(lsu_wb_csr_wr_addr2),
        .lsu_wb_csr_wen1(lsu_wb_csr_wen1),
        .lsu_wb_csr_wen2(lsu_wb_csr_wen2),
        .lsu_wb_RegWrite(lsu_wb_RegWrite),
        .lsu_wb_rd(lsu_wb_rd),
        .lsu_axi_arvalid(lsu_axi_arvalid),
        .axi_lsu_arready(axi_lsu_arready),
        .lsu_axi_araddr(lsu_axi_araddr),
        .lsu_axi_arid(lsu_axi_arid),
        .lsu_axi_arlen(lsu_axi_arlen),
        .lsu_axi_arsize(lsu_axi_arsize),
        .lsu_axi_arburst(lsu_axi_arburst),
        .axi_lsu_rdata(axi_lsu_rdata),
        .axi_lsu_rvalid(axi_lsu_rvalid),
        .lsu_axi_rready(lsu_axi_rready),
        .axi_lsu_rresp(axi_lsu_rresp),
        .axi_lsu_rid(axi_lsu_rid),
        .axi_lsu_rlast(axi_lsu_rlast),
        .lsu_axi_awaddr(lsu_axi_awaddr),
        .lsu_axi_awvalid(lsu_axi_awvalid),
        .axi_lsu_awready(axi_lsu_awready),
        .lsu_axi_awid(lsu_axi_awid),
        .lsu_axi_awlen(lsu_axi_awlen),
        .lsu_axi_awsize(lsu_axi_awsize),
        .lsu_axi_awburst(lsu_axi_awburst),
        .lsu_axi_wdata(lsu_axi_wdata),
        .lsu_axi_wstrb(lsu_axi_wstrb),
        .lsu_axi_wvalid(lsu_axi_wvalid),
        .lsu_axi_wlast(lsu_axi_wlast),
        .axi_lsu_wready(axi_lsu_wready),
        .axi_lsu_bresp(axi_lsu_bresp),
        .axi_lsu_bvalid(axi_lsu_bvalid),
        .lsu_axi_bready(lsu_axi_bready),
        .axi_lsu_bid(axi_lsu_bid),
        // .lsu_active_cycles(lsu_active_cycles),
        .lsu_wb_write_rd_data(lsu_wb_write_rd_data)
    );

    // WBU（写回）模块
    WBU wbu (
        .clk(clock),
        .rst(reset),
        .wen(lsu_wb_RegWrite),
        .lsu_wb_valid(lsu_wb_valid),
        .wb_lsu_ready(wb_lsu_ready),
        .wdata(lsu_wb_write_rd_data),
        .waddr(lsu_wb_rd),
        .rs1(id_wb_rs1),
        .rs2(id_wb_rs2),
        .src1(wb_ex_src1),
        .src2(wb_ex_src2),
        .wb_valid(wb_valid),
        .raddr_csr1(id_wb_csr_addr1),
        .raddr_csr2(id_wb_csr_addr2),
        .wen_csr1(lsu_wb_csr_wen1),
        .wen_csr2(lsu_wb_csr_wen2),
        .wdata_csr1(lsu_wb_csr_wr_data1),
        .wdata_csr2(lsu_wb_csr_wr_data2),
        .waddr_csr1(lsu_wb_csr_wr_addr1),
        .waddr_csr2(lsu_wb_csr_wr_addr2),
        .rdata_csr1(wb_ex_csr_num1),
        .rdata_csr2(wb_ex_csr_num2)
    );

    // reg [31:0] inst_cnt;
    // reg [31:0] cycle_cnt;

    // always @(posedge clock) begin
    //     if(reset) begin
    //         inst_cnt <= 0;
    //         cycle_cnt <= 0;
    //     end
    //     else begin
    //         cycle_cnt <= cycle_cnt + 1;
    //         if(wb_valid) begin
    //             inst_cnt <= inst_cnt + 1;
    //         end
    //     end
    // end
    // EBREAK 处理
`ifdef VERILATOR
    always @(posedge clock) begin
        if (IF_ID_inst == 32'h00100073) begin
            // occupancy(ifu_active_cycles, exu_active_cycles, lsu_active_cycles, cycle_cnt);
            ebreak(`HIT_TRAP, ex_lsu_inst);
        end
    end
`endif
endmodule