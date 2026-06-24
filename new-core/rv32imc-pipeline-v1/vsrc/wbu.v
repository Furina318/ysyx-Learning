`include "defines.vh"

module wbu (
    input  wire                    clk          ,
    input  wire                    rst          ,

    // for difftest
    output reg                     wbu_valid    ,
    output reg  [            31:0] wbu_pc       ,
    output reg  [            31:0] wbu_inst     ,

    input  wire [            11:0] csr_raddr    ,
    input  wire                    ecall_en     ,
    input  wire                    mret_en      ,
    output wire [            31:0] csr_rdata    ,

    input  wire                    exu_valid    ,
    input  wire [`EX_TO_WB_WD-1:0] ex_to_wb_bus ,
    input  wire [             4:0] rs1          ,
    input  wire [             4:0] rs2          ,
    output wire [            31:0] rf_rs1_data  ,
    output wire [            31:0] rf_rs2_data
);
    wire [               31:0] pc       ; // for difftest
    wire [               31:0] inst     ; // for difftest
    wire                       ecall_op ;
    wire                       mret_op  ;
    wire                       csr_wr_en;
    wire [               11:0] csr_waddr;
    wire [               31:0] csr_wdata;
    wire [                4:0] rd       ;
    wire                       gpr_we   ;
    wire [               31:0] result   ;

    assign {
        pc       , // for difftest
        inst     , // for difftest
        ecall_op ,
        mret_op  ,
        csr_wr_en,
        csr_waddr,
        csr_wdata,
        rd       ,  
        gpr_we   ,    
        result    
    } = ex_to_wb_bus;

    // for difftest
    always @(posedge clk) begin
        wbu_pc    <= pc;
        wbu_valid <= exu_valid;
        wbu_inst  <= inst;
    end

    wire [31:0] wb_data = result;

    reg [31:0] regs [0:31];

    integer i;
    always @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < 32; i = i + 1) begin
                regs[i] <= 32'h0;
            end
        end
        else if (exu_valid && gpr_we && (|rd)) begin
            regs[rd] <= wb_data;
        end
    end

    assign rf_rs1_data = (|rs1) ? regs[rs1] : 32'h0;
    assign rf_rs2_data = (|rs2) ? regs[rs2] : 32'h0;

    csr u_csr (
        .clk      (clk      ),
        .rst      (rst      ),
        .csr_raddr(csr_raddr),
        .csr_rdata(csr_rdata),
        .ecall_en (ecall_en ),
        .ecall_pc (pc       ),
        .mret_en  (mret_en  ),
        .ecall_op (ecall_op ),
        .mret_op  (mret_op  ),
        .csr_wr_en(csr_wr_en),
        .csr_waddr(csr_waddr),
        .csr_wdata(csr_wdata)        
    );

endmodule
