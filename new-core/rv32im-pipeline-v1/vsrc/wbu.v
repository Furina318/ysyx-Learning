`include "defines.vh"

module wbu (
    input  wire                    clk          ,
    input  wire                    rst          ,

    // for difftest
    output reg                     wbu_valid    ,
    output reg  [            31:0] wbu_pc       ,
    output reg  [            31:0] wbu_inst     ,

    // to stb
    output reg                       wbu_is_store ,
    output reg [`STB_DEPTH_LOG2-1:0] wbu_stb_id   ,

    input  wire                    exu_valid    ,
    input  wire [`EX_TO_WB_WD-1:0] ex_to_wb_bus ,
    input  wire [             4:0] rs1          ,
    input  wire [             4:0] rs2          ,
    output wire [            31:0] rf_rs1_data  ,
    output wire [            31:0] rf_rs2_data
);
    wire [               31:0] pc       ; // for difftest
    wire [               31:0] inst     ; // for difftest
    wire                       is_store ;
    wire [`STB_DEPTH_LOG2-1:0] stb_id   ;
    wire [                4:0] rd       ;
    wire                       gpr_we   ;
    wire [               31:0] result   ;

    assign {
        pc       , // for difftest
        inst     , // for difftest
        is_store ,
        stb_id   ,
        rd       ,  
        gpr_we   ,    
        result    
    } = ex_to_wb_bus;

    // for difftest
    always @(posedge clk) begin
        wbu_pc    <= pc;
        wbu_valid <= exu_valid;
        wbu_inst  <= inst;
        wbu_is_store <= is_store;
        wbu_stb_id   <= stb_id;
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

endmodule
