`include "defines.vh"
`include "fpu_config.vh"

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
    input  wire [             4:0] rs3          ,
    output wire [            31:0] rf_rs1_data  ,
    output wire [            31:0] rf_rs2_data  ,
    output wire [            31:0] rf_frs1_data ,
    output wire [            31:0] rf_frs2_data ,
    output wire [            31:0] rf_frs3_data ,
    output wire [             2:0] fp_frm       ,
    output wire [             4:0] fp_fflags
);
    wire [              31:0] pc       ; // for difftest
    wire [              31:0] inst     ; // for difftest
    wire                      op_fpu   ;
    wire                      fp_we    ;
    wire [               4:0] fpu_fflags;
    wire                      ecall_op ;
    wire                      mret_op  ;
    wire                      csr_wr_en;
    wire [              11:0] csr_waddr;
    wire [              31:0] csr_wdata;
    wire [               4:0] rd       ;
    wire                      gpr_we   ;
    wire [              31:0] result   ;

    assign {
        op_fpu     ,
        fp_we      ,
        fpu_fflags ,
        pc         , // for difftest
        inst       , // for difftest
        ecall_op   ,
        mret_op    ,
        csr_wr_en  ,
        csr_waddr  ,
        csr_wdata  ,
        rd         ,  
        gpr_we     ,    
        result     
    } = ex_to_wb_bus;

    // for difftest
    always @(posedge clk) begin
        wbu_pc    <= pc;
        wbu_valid <= exu_valid;
        wbu_inst  <= inst;
    end

    wire [31:0] wb_data = result;

    // GPR 寄存器堆, 提交沿写回
    reg [31:0] regs [0:31];

    integer i;
    always @(posedge clk) begin
        if (exu_valid && gpr_we && (|rd)) begin
            regs[rd] <= wb_data;
        end
    end

    assign rf_rs1_data = (|rs1) ? regs[rs1] : 32'h0;
    assign rf_rs2_data = (|rs2) ? regs[rs2] : 32'h0;

    reg [31:0] fp_regs  [0:31];    // FPR 寄存器堆 (f0 为普通可写寄存器)
    reg [ 2:0] frm_r;
    reg [ 4:0] fflags_r;

    always @(posedge clk) begin
        if (exu_valid && fp_we) begin
            fp_regs[rd] <= wb_data;
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            frm_r    <= 3'b000;
            fflags_r <= 5'd0;
        end
        else if (exu_valid) begin
            if (op_fpu)
                fflags_r <= fflags_r | fpu_fflags;
            if (csr_wr_en & (csr_waddr == `FFLAGS))
                fflags_r <= csr_wdata[4:0];
            else if (csr_wr_en & (csr_waddr == `FRM))
                frm_r    <= csr_wdata[7:5];
            else if (csr_wr_en & (csr_waddr == `FCSR)) begin
                frm_r    <= csr_wdata[7:5];
                fflags_r <= csr_wdata[4:0];
            end
        end
    end

    wire bc_wr_fcsr   = exu_valid & csr_wr_en & (csr_waddr == `FCSR)  ;
    wire bc_wr_frm    = exu_valid & csr_wr_en & (csr_waddr == `FRM)   ;
    wire bc_wr_fflags = exu_valid & csr_wr_en & (csr_waddr == `FFLAGS);
    wire bc_fpu_op    = exu_valid & op_fpu                             ;

    wire [ 2:0] fwd_frm    = (bc_wr_fcsr | bc_wr_frm)     ? csr_wdata[`FRM_POS]     : frm_r;
    wire [ 4:0] fwd_fflags = (bc_wr_fcsr | bc_wr_fflags)  ? csr_wdata[`FFLAGS_POS]  :
                             bc_fpu_op                    ? (fflags_r | fpu_fflags) : fflags_r;

    assign rf_frs1_data = fp_regs[rs1];
    assign rf_frs2_data = fp_regs[rs2];
    assign rf_frs3_data = fp_regs[rs3];

    assign fp_frm    = fwd_frm;
    assign fp_fflags = fflags_r;

    wire [31:0] csr_rdata_core;
    assign csr_rdata = ({32{(csr_raddr == `FFLAGS)}} & {27'b0,          fwd_fflags}) |
                       ({32{(csr_raddr == `FRM   )}} & {29'b0, fwd_frm            }) |
                       ({32{(csr_raddr == `FCSR  )}} & {24'b0, fwd_frm, fwd_fflags}) |
                       csr_rdata_core;

    csr u_csr (
        .clk      (clk            ),
        .rst      (rst            ),
        .csr_raddr(csr_raddr      ),
        .csr_rdata(csr_rdata_core ),
        .ecall_en (ecall_en       ),
        .ecall_pc (pc             ),
        .mret_en  (mret_en        ),
        .ecall_op (ecall_op       ),
        .mret_op  (mret_op        ),
        .csr_wr_en(csr_wr_en      ),
        .csr_waddr(csr_waddr      ),
        .csr_wdata(csr_wdata      )
    );

endmodule
