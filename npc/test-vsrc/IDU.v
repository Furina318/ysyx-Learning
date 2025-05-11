module ysyx_23060336_IDU (
    input  wire        clk,
    input  wire        reset,
    // IFU_IDU_DATA interface
    input  wire        ifu_idu_valid,
    output reg         ifu_idu_ready,
    input  wire [31:0] ifu_idu_pc,
    input  wire [31:0] ifu_idu_inst,
    // IDU_EXU_DATA interface
    output reg         idu_exu_valid,
    input  wire        idu_exu_ready,
    output reg  [63:0] idu_exu_data,
    // IDU_REG_DATA interface
    output reg  [4:0]  idu_reg_rs1,
    output reg  [4:0]  idu_reg_rs2,
    input  wire [63:0] idu_reg_src1,
    input  wire [63:0] idu_reg_src2,
    // IDU_CSR_DATA interface
    output reg  [63:0] idu_csr_data,
    // EXU_IDU_RAW interface
    input  wire [4:0]  exu_idu_rd,
    input  wire        exu_idu_rden,
    input  wire [63:0] exu_idu_regdata,
    input  wire        exu_idu_MemtoReg,
    // LSU_IDU_RAW interface
    input  wire [4:0]  lsu_idu_rd,
    input  wire        lsu_idu_rden,
    input  wire [63:0] lsu_idu_regdata,
    input  wire        lsu_idu_MemtoReg,
    input  wire        lsu_idu_valid,
    // WBU_IDU_RAW interface
    input  wire [4:0]  wbu_idu_rd,
    input  wire        wbu_idu_rden,
    input  wire [63:0] wbu_idu_regdata
);
    // State machine
    localparam S_IDLE = 1'b0, S_WAIT_READY = 1'b1;
    reg state;
    wire isRAW_data;

    // Instantiate DECODE module
    wire        decode_rs1en, decode_rs2en, decode_recsr;
    wire [2:0]  decode_immType;
    wire [63:0] decode_idu_exu_data;
    wire [4:0]  decode_idu_reg_rs1, decode_idu_reg_rs2;
    wire [63:0] decode_idu_csr_data;
    wire [63:0] immgen_src1, immgen_src2, immgen_zimm, immgen_imm;
    wire [63:0] immgen_rers1, immgen_rezimm;
    wire        immgen_isRAW_data;

    DECODE decode (
        .clk(clk),
        .reset(reset),
        .pc(ifu_idu_pc),
        .inst(ifu_idu_inst),
        .idu_valid(state == S_WAIT_READY),
        .exu_idu_rd(exu_idu_rd),
        .exu_idu_rden(exu_idu_rden),
        .exu_idu_regdata(exu_idu_regdata),
        .exu_idu_MemtoReg(exu_idu_MemtoReg),
        .lsu_idu_rd(lsu_idu_rd),
        .lsu_idu_rden(lsu_idu_rden),
        .lsu_idu_regdata(lsu_idu_regdata),
        .lsu_idu_MemtoReg(lsu_idu_MemtoReg),
        .lsu_idu_valid(lsu_idu_valid),
        .wbu_idu_rd(wbu_idu_rd),
        .wbu_idu_rden(wbu_idu_rden),
        .wbu_idu_regdata(wbu_idu_regdata),
        .rs1en(decode_rs1en),
        .rs2en(decode_rs2en),
        .immType(decode_immType),
        .recsr(decode_recsr),
        .idu_exu_data(decode_idu_exu_data),
        .idu_reg_rs1(decode_idu_reg_rs1),
        .idu_reg_rs2(decode_idu_reg_rs2),
        .idu_reg_src1(idu_reg_src1),
        .idu_reg_src2(idu_reg_src2),
        .idu_csr_data(decode_idu_csr_data),
        .immgen_src1(immgen_src1),
        .immgen_src2(immgen_src2),
        .immgen_zimm(immgen_zimm),
        .immgen_imm(immgen_imm),
        .immgen_isRAW_data(immgen_isRAW_data),
        .immgen_rers1(immgen_rers1),
        .immgen_rezimm(immgen_rezimm)
    );

    // Instantiate IMMGEN module
    wire [4:0] immgen_rs1, immgen_rs2;

    IMMGEN immgen (
        .clk(clk),
        .reset(reset),
        .rs1en(decode_rs1en),
        .rs2en(decode_rs2en),
        .immType(decode_immType),
        .recsr(decode_recsr),
        .inst(ifu_idu_inst),
        .exu_rd(exu_idu_rd),
        .lsu_rd(lsu_idu_rd),
        .wbu_rd(wbu_idu_rd),
        .exu_rden(exu_idu_rden),
        .lsu_rden(lsu_idu_rden),
        .wbu_rden(wbu_idu_rden),
        .exu_regdata(exu_idu_regdata),
        .lsu_regdata(lsu_idu_regdata),
        .wbu_regdata(wbu_idu_regdata),
        .exu_MemtoReg(exu_idu_MemtoReg),
        .lsu_MemtoReg(lsu_idu_MemtoReg),
        .lsu_valid(lsu_idu_valid),
        .reg_src1(idu_reg_src1),
        .reg_src2(idu_reg_src2),
        .idu_valid(state == S_WAIT_READY),
        .rs1(immgen_rs1),
        .rs2(immgen_rs2),
        .src1(immgen_src1),
        .src2(immgen_src2),
        .zimm(immgen_zimm),
        .imm(immgen_imm),
        .isRAW_data(immgen_isRAW_data),
        .rers1(immgen_rers1),
        .rezimm(immgen_rezimm)
    );

    assign isRAW_data = immgen_isRAW_data;

    // State machine
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= S_IDLE;
        end else begin
            case (state)
                S_IDLE: state <= ifu_idu_valid ? S_WAIT_READY : S_IDLE;
                S_WAIT_READY: state <= isRAW_data ? S_WAIT_READY : (idu_exu_ready ? S_IDLE : S_WAIT_READY);
                default: state <= S_IDLE;
            endcase
        end
    end

    // Output assignments
    always @(*) begin
        idu_exu_valid = (state == S_WAIT_READY);
        ifu_idu_ready = (state == S_IDLE);
        idu_exu_data = decode_idu_exu_data;
        idu_reg_rs1 = decode_idu_reg_rs1;
        idu_reg_rs2 = decode_idu_reg_rs2;
        idu_csr_data = decode_idu_csr_data;
    end

    // Conditional IDU_COUNTER instantiation
    `ifdef USE_COUNTER
    IDU_COUNTER idu_counter (
        .clock(clk),
        .state(state),
        .isRAW_data(isRAW_data)
    );
    `endif
endmodule