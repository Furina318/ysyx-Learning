module IMMGEN (
    input  wire        clk,
    input  wire        reset,
    // IMMGEN_DECODE_DATA interface (simplified)
    input  wire        rs1en,
    input  wire        rs2en,
    input  wire [2:0]  immType,
    input  wire        recsr,
    input  wire [31:0] inst,
    input  wire [4:0]  exu_rd,
    input  wire [4:0]  lsu_rd,
    input  wire [4:0]  wbu_rd,
    input  wire        exu_rden,
    input  wire        lsu_rden,
    input  wire        wbu_rden,
    input  wire [63:0] exu_regdata,
    input  wire [63:0] lsu_regdata,
    input  wire [63:0] wbu_regdata,
    input  wire        exu_MemtoReg,
    input  wire        lsu_MemtoReg,
    input  wire        lsu_valid,
    input  wire [63:0] reg_src1,
    input  wire [63:0] reg_src2,
    input  wire        idu_valid,
    output reg  [4:0]  rs1,
    output reg  [4:0]  rs2,
    output reg  [63:0] src1,
    output reg  [63:0] src2,
    output reg  [63:0] zimm,
    output reg  [63:0] imm,
    output reg         isRAW_data,
    output reg  [63:0] rers1,
    output reg  [63:0] rezimm
);
    // Internal signals
    wire [4:0] rd;
    wire [4:0] rs1_wire;
    wire [4:0] rs2_wire;
    reg  [63:0] imm_u, imm_i, imm_s, imm_b, imm_j, imm_shamtw;
    wire        conflict_idu_src1;
    wire        conflict_idu_src2;
    wire        conflict_exu_rs1;
    wire        conflict_exu_rs2;
    wire        conflict_lsu_rs1;
    wire        conflict_lsu_rs2;
    wire        conflict_wbu_rs1;
    wire        conflict_wbu_rs2;
    wire        bypass_exu;
    wire        bypass_lsu;
    wire        bypass_exu_rs1;
    wire        bypass_exu_rs2;
    wire        bypass_lsu_rs1;
    wire        bypass_lsu_rs2;
    wire        bypass_wbu_rs1;
    wire        bypass_wbu_rs2;
    wire        isRAW_data_src1;
    wire        isRAW_data_src2;

    // Instruction fields
    assign rd = inst[11:7];
    assign rs1_wire = inst[19:15];
    assign rs2_wire = inst[24:20];

    // Immediate generation
    always @(*) begin
        imm_u = {inst[31:12], 12'b0};
        imm_i = {{20{inst[31]}}, inst[31:20]};
        imm_s = {{20{inst[31]}}, inst[31:25], inst[11:7]};
        imm_b = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
        imm_j = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
        imm_shamtw = {27'b0, inst[24:20]};
    end

    // Conflict detection
    assign conflict_idu_src1 = rs1en;
    assign conflict_idu_src2 = rs2en;
    assign conflict_exu_rs1 = (rs1_wire == exu_rd) && (rs1_wire != 5'b0) && exu_rden && conflict_idu_src1;
    assign conflict_exu_rs2 = (rs2_wire == exu_rd) && (rs2_wire != 5'b0) && exu_rden && conflict_idu_src2;
    assign conflict_lsu_rs1 = (rs1_wire == lsu_rd) && (rs1_wire != 5'b0) && lsu_rden && conflict_idu_src1;
    assign conflict_lsu_rs2 = (rs2_wire == lsu_rd) && (rs2_wire != 5'b0) && lsu_rden && conflict_idu_src2;
    assign conflict_wbu_rs1 = (rs1_wire == wbu_rd) && (rs1_wire != 5'b0) && wbu_rden && conflict_idu_src1;
    assign conflict_wbu_rs2 = (rs2_wire == wbu_rd) && (rs2_wire != 5'b0) && wbu_rden && conflict_idu_src2;

    // Bypass logic
    assign bypass_exu = !exu_MemtoReg;
    assign bypass_lsu = (lsu_MemtoReg && lsu_valid) || !lsu_MemtoReg;
    assign bypass_exu_rs1 = conflict_exu_rs1 && bypass_exu;
    assign bypass_exu_rs2 = conflict_exu_rs2 && bypass_exu;
    assign bypass_lsu_rs1 = conflict_lsu_rs1 && bypass_lsu && !conflict_exu_rs1;
    assign bypass_lsu_rs2 = conflict_lsu_rs2 && bypass_lsu && !conflict_exu_rs2;
    assign bypass_wbu_rs1 = conflict_wbu_rs1 && !conflict_exu_rs1 && !conflict_lsu_rs1;
    assign bypass_wbu_rs2 = conflict_wbu_rs2 && !conflict_exu_rs2 && !conflict_lsu_rs2;

    // RAW data detection
    assign isRAW_data_src1 = (conflict_exu_rs1 && !bypass_exu_rs1) || (conflict_lsu_rs1 && !bypass_lsu_rs1);
    assign isRAW_data_src2 = (conflict_exu_rs2 && !bypass_exu_rs2) || (conflict_lsu_rs2 && !bypass_lsu_rs2);
    assign isRAW_data = (isRAW_data_src1 || isRAW_data_src2) && idu_valid;

    // Source selection
    always @(*) begin
        src1 = bypass_exu_rs1 ? exu_regdata :
               bypass_lsu_rs1 ? lsu_regdata :
               bypass_wbu_rs1 ? wbu_regdata : reg_src1;
        src2 = bypass_exu_rs2 ? exu_regdata :
               bypass_lsu_rs2 ? lsu_regdata :
               bypass_wbu_rs2 ? wbu_regdata : reg_src2;
    end

    // Immediate selection
    always @(*) begin
        case (immType)
            3'b000: imm = imm_i;
            3'b001: imm = imm_s;
            3'b010: imm = imm_b;
            3'b011: imm = imm_u;
            3'b100: imm = imm_j;
            3'b101: imm = imm_shamtw;
            default: imm = 64'b0;
        endcase
        imm = isRAW_data ? 64'b0 : imm;
    end

    // Output assignments
    always @(*) begin
        rs1 = rs1_wire;
        rs2 = rs2_wire;
        zimm = {27'b0, rs1_wire};
        rers1 = recsr ? ~src1 : src1;
        rezimm = recsr ? ~zimm : zimm;
    end
endmodule