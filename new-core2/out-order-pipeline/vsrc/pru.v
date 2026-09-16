`include "defines.vh"

module pru (
    input  wire        clk        ,
    input  wire        rst        ,
    input  wire        pru_en     ,
    output wire        pru_done   ,

    input  wire [31:0] pru_pc     ,
    input  wire [31:0] pru_imm    ,
    input  wire [ 4:0] pru_rs1    ,
    input  wire [ 5:0] csr_op     ,
    input  wire        inst_ebreak,
    input  wire [31:0] pru_src1   ,
    input  wire [31:0] pru_src2   ,

    output wire [11:0] pru_raddr  ,
    input  wire [31:0] pru_rdata  ,
    output wire [11:0] pru_waddr  ,
    output wire [31:0] pru_wdata  ,
    output wire        pru_we
);  
    wire csrrw_op  = csr_op[0];
    wire csrrs_op  = csr_op[1];
    wire csrrc_op  = csr_op[2];
    wire csrrwi_op = csr_op[3];
    wire csrrsi_op = csr_op[4];
    wire csrrci_op = csr_op[5];

    assign pru_raddr = pru_imm[11:0];
    assign pru_waddr = pru_imm[11:0];
    assign pru_we    = |csr_op;

    wire [ 4:0] zimm        = pru_rs1;
    wire [31:0] csrrw_data  = pru_src1;
    wire [31:0] csrrwi_data = {27'b0, zimm};
    wire [31:0] csrrs_data  = pru_src1 | pru_rdata;
    wire [31:0] csrrsi_data = {27'b0, zimm} | pru_rdata;
    wire [31:0] csrrc_data  = ~pru_src1 & pru_rdata;
    wire [31:0] csrrci_data = ~{27'b0, zimm} & pru_rdata;

    assign pru_wdata = ({32{csrrw_op }} & csrrw_data ) |
                       ({32{csrrs_op }} & csrrs_data ) |
                       ({32{csrrc_op }} & csrrc_data ) |
                       ({32{csrrwi_op}} & csrrwi_data) |
                       ({32{csrrsi_op}} & csrrsi_data) |
                       ({32{csrrci_op}} & csrrci_data);
    assign pru_done   = pru_en;

// `ifdef VERILATOR
//     import "DPI-C" function void ebreak(input int station, input int inst);
//     always @(posedge clk) begin
//         if (inst_ebreak) ebreak(`HIT_TRAP, `INST_EBREAK);
//     end
// `endif

endmodule
