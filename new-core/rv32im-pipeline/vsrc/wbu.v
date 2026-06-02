`include "defines.vh"

module wbu (
    input  wire                    clk          ,
    input  wire                    rst          ,

    // for difftest
    output reg                     wbu_valid    ,
    output reg  [            31:0] wbu_pc       ,

    input  wire                    lsu_valid    ,
    input  wire [`LS_TO_WB_WD-1:0] ls_to_wb_bus ,
    input  wire [             4:0] rs1          ,
    input  wire [             4:0] rs2          ,
    output wire [            31:0] rf_rs1_data  ,
    output wire [            31:0] rf_rs2_data
);
    wire [31:0] pc       ;
    wire [ 4:0] rd       ;
    wire        gpr_we   ;
    wire [31:0] result   ;
    wire [31:0] lsu_data ;

    assign {
        pc       , // for difftest
        rd       ,  
        gpr_we   ,  
        result   ,  
        lsu_data    
    } = ls_to_wb_bus;

    // for difftest
    always @(posedge clk) begin
        wbu_pc    <= pc;
        wbu_valid <= lsu_valid;
    end

    wire [31:0] wb_data = lsu_data;

    reg [31:0] regs [0:31];

    integer i;
    always @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < 32; i = i + 1) begin
                regs[i] <= 32'h0;
            end
        end
        else if (lsu_valid && gpr_we && (|rd)) begin
            regs[rd] <= wb_data;
        end
    end

    assign rf_rs1_data = (|rs1) ? regs[rs1] : 32'h0;
    assign rf_rs2_data = (|rs2) ? regs[rs2] : 32'h0;

endmodule
