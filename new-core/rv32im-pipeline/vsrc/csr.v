module csr (
    input  wire         clk     ,
    input  wire         rst
);
    localparam MSTATUS = 12'h300;
    localparam MTVEC   = 12'h305;
    localparam MEPC    = 12'h341;
    localparam MCAUSE  = 12'h342;

endmodule
