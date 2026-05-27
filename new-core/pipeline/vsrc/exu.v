`include "defines.vh"

module exu (
    input  wire                    clk              ,
    input  wire                    rst              ,

    input  wire                    idu_valid        ,
    output wire                    exu_ready        ,
    output reg                     exu_valid        ,
    input  wire                    lsu_ready        ,

    output wire                    is_fencei        ,
    input  wire                    pc_update        ,
    output wire                    exu_flush_en     ,
    output wire [           31: 0] exu_flush_dnpc   ,

    input  wire [`ID_TO_EX_WD-1:0] id_to_ex_bus     ,
    
    // bypass
    output wire [            4: 0] rs1_addr         ,
    output wire [            4: 0] rs2_addr         ,
    input  wire [           31: 0] bypass_rs1_data  ,
    input  wire [           31: 0] bypass_rs2_data  ,
    output wire [            4: 0] rd_addr          ,
    output wire [           31: 0] rd_w_bypass_data ,
    output wire                    rd_w_bypass_en   ,
    output wire                    is_read          ,

    // lsu
    output reg  [`EX_TO_LS_WD-1:0] ex_to_ls_bus
);
`ifdef VERILATOR
    import "DPI-C" function void ebreak(input int station, input int inst);
`endif

    wire [31:0] pc;
    wire [31:0] bpu_dnpc;
    wire [ 1:0] lw_lh_lb;
    wire [ 1:0] sw_sh_sb;
    wire        is_load_sign;
    wire        inst_fence_i;
    wire [31:0] imm;
    wire [ 4:0] rd;
    wire [ 4:0] rs1;
    wire [ 4:0] rs2;
    wire        is_write;
    // wire        is_read;
    wire        gpr_we;
    wire [10:0] alu_op;
    wire [ 5:0] bru_op;
    wire        mdu_en;
    wire [ 7:0] mdu_op;
    wire        src1_is_pc;
    wire        src2_is_imm;
    wire [ 1:0] jal_or_jalr;  
    wire        inst_ecall;
    wire        inst_mret;
    wire        inst_csrrs;
    wire        inst_csrrw;
    wire        inst_ebreak;

    assign {
        pc           ,
        bpu_dnpc     ,
        lw_lh_lb     ,
        sw_sh_sb     ,
        is_load_sign ,
        inst_fence_i ,
        imm          ,
        rd           ,
        rs1          ,
        rs2          ,
        is_write     ,
        is_read      ,
        gpr_we       ,
        alu_op       ,
        bru_op       ,
        mdu_en       ,
        mdu_op       ,
        src1_is_pc   ,
        src2_is_imm  ,
        jal_or_jalr  ,
        inst_ecall   ,
        inst_mret    ,
        inst_csrrs   ,
        inst_csrrw   ,
        inst_ebreak 
    } = id_to_ex_bus;

`ifdef VERILATOR
    always @(posedge clk) begin
        if (inst_ebreak) ebreak(`HIT_TRAP, `INST_EBREAK);
    end
`endif

    assign is_fencei = inst_fence_i;

    // to bypass
    assign rs1_addr = rs1;
    assign rs2_addr = rs2;
    // from bypass
    wire [31:0] src1 = bypass_rs1_data;
    wire [31:0] src2 = bypass_rs2_data;

    // alu
    wire [31:0] alu_src1;
    wire [31:0] alu_src2;
    wire [31:0] alu_result;

    assign alu_src1 = src1_is_pc  ? pc  : src1;
    assign alu_src2 = src2_is_imm ? imm : src2;

    alu alu(
        .alu_op     (alu_op     ),
        .alu_src1   (alu_src1   ),
        .alu_src2   (alu_src2   ),
        .alu_result (alu_result )
    );

    // mdu
    wire [31:0] mdu_src1;
    wire [31:0] mdu_src2;
    wire        mdu_ready;
    wire [31:0] mdu_result;

    assign mdu_src1 = src1;
    assign mdu_src2 = src2;

    mdu mdu(
        .clk        (clk        ),
        .rst        (rst        ),
        .lsu_ready  (lsu_ready  ),
        .mdu_en     (mdu_en     ),
        .mdu_op     (mdu_op     ),
        .mdu_src1   (mdu_src1   ),
        .mdu_src2   (mdu_src2   ),
        .mdu_ready  (mdu_ready  ),
        .mdu_result (mdu_result )
    );

    // bru
    wire [31:0] bru_src1;
    wire [31:0] bru_src2;

    assign bru_src1 = src1;
    assign bru_src2 = src2;

    bru bru(
        .clk         (clk            ),
        .rst         (rst            ),
        .bru_op      (bru_op         ),
        .bru_src1    (bru_src1       ),
        .bru_src2    (bru_src2       ),
        .pc          (pc             ),
        .jal_or_jalr (jal_or_jalr    ),
        .is_fencei   (inst_fence_i   ),
        .alu_result  (alu_result     ),
        .lsu_ready   (lsu_ready      ),
        .mdu_ready   (mdu_ready      ),
        .idu_valid   (idu_valid      ),
        .pc_update   (pc_update      ),
        .bpu_dnpc    (bpu_dnpc       ),
        .flush_en    (exu_flush_en   ),
        .flush_dnpc  (exu_flush_dnpc )
    );

    wire [31:0] snpc = pc + 4;

    wire [31:0] result = |jal_or_jalr ? snpc       :
                          mdu_en      ? mdu_result : alu_result;

    assign rd_w_bypass_en   = gpr_we;
    assign rd_w_bypass_data = result;
    assign rd_addr          = rd;

    assign exu_ready = lsu_ready & mdu_ready;

    always @(posedge clk) begin
        if (rst) begin
            exu_valid    <= 1'b0;
            ex_to_ls_bus <= 'b0;
        end
        else begin
            if (lsu_ready) begin
                if (idu_valid & mdu_ready) begin
                    exu_valid    <= !exu_flush_en;
                    ex_to_ls_bus <= {
                        pc           , // for difftest
                        rd           ,
                        lw_lh_lb     ,
                        sw_sh_sb     ,
                        is_load_sign ,
                        is_write     ,
                        is_read      ,
                        gpr_we       ,
                        src2         ,
                        result
                    };
                end
                else begin
                    exu_valid    <= 1'b0;
                    ex_to_ls_bus <= 'b0;
                end
            end
        end
    end

endmodule
