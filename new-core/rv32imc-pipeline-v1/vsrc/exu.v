`include "defines.vh"

module exu (
    input  wire                    clk              ,
    input  wire                    rst              ,

    input  wire                    idu_valid        ,
    output wire                    exu_ready        ,
    output reg                     exu_valid        ,
    input  wire                    lsu_ready        ,
    input  wire                    lsu_valid        ,
    input  wire                    wbu_ready        ,

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
    output wire [            4: 0] rd_w_bypass      ,
    output wire [           31: 0] rd_w_bypass_data ,
    output wire                    rd_w_bypass_en   ,
    output wire                    is_read          ,
    // to bpu
    output reg  [            31:0] bru_pc           ,
    output reg  [            31:0] bru_dnpc         ,
    output reg                     bru_dnpc_valid   ,
    output reg                     bru_taken        ,
    output reg                     bru_is_call      ,
    output reg                     bru_is_ret       ,
    output reg                     bru_is_jal       ,
    output reg                     bru_is_jalr      ,
    output reg                     bru_is_indirect  ,
    output reg                     bru_is_c_inst    ,
    // dcache
    input  wire                       fence_done       ,
    // lsu
    output wire                       lsu_en           ,
    output wire [   `EX_TO_LS_WD-1:0] ex_to_ls_bus     ,
    input  wire [              31: 0] lsu_data         ,
    input  wire [`STB_DEPTH_LOG2-1:0] lsu_stb_id       ,
    // to cmt
    output reg                        cmt_valid    ,
    output reg [`STB_DEPTH_LOG2-1:0]  cmt_stb_id   , 
    output reg                        cmt_is_store ,
    // csr
    output wire [               11:0] csr_raddr    ,
    output wire                       ecall_en     ,
    output wire                       mret_en      ,
    input  wire [               31:0] csr_rdata    ,
    // to wbu 
    output reg  [`EX_TO_WB_WD-1:0] ex_to_wb_bus
);
`ifdef VERILATOR
    import "DPI-C" function void ebreak(input int station, input int inst);
`endif

    wire [31:0] pc;
    wire [31:0] inst; // for difftest
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
    // wire        ecall_en;
    // wire        mret_en;
    wire        csrrc_op;
    wire        csrrs_op;
    wire        csrrw_op;
    wire        inst_ebreak;
    wire        is_call;
    wire        is_ret;
    wire        is_jal;
    wire        is_jalr;
    wire        is_indirect;
    wire        is_c_inst;

    assign {
        pc           ,
        inst         , // for difftest
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
        ecall_en     ,
        mret_en      ,
        csrrc_op     ,
        csrrs_op     ,
        csrrw_op     ,
        inst_ebreak  ,
        is_call      ,
        is_ret       ,
        is_jal       ,
        is_jalr      , 
        is_indirect  ,
        is_c_inst
    } = id_to_ex_bus;

`ifdef VERILATOR
    always @(posedge clk) begin
        if (inst_ebreak) ebreak(`HIT_TRAP, `INST_EBREAK);
    end
`endif

    wire csr_gpr_we  = csrrc_op | csrrs_op | csrrw_op;
    assign csr_raddr = imm[11:0];
    wire [11:0] csr_waddr = imm[11:0];

    assign is_fencei = inst_fence_i;
    assign lsu_en    = idu_valid & (is_read | is_write) & !exu_flush_en;

    assign ex_to_ls_bus = {
        rd           ,
        lw_lh_lb     ,
        sw_sh_sb     ,
        is_load_sign ,
        is_write     ,
        is_read      ,
        src1         ,
        src2         ,
        imm
    };

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
        .clk             (clk        ),
        .rst             (rst        ),
        .pipeline_ready  (lsu_ready  ),
        .mdu_en          (mdu_en     ),
        .mdu_op          (mdu_op     ),
        .mdu_src1        (mdu_src1   ),
        .mdu_src2        (mdu_src2   ),
        .mdu_ready       (mdu_ready  ),
        .mdu_result      (mdu_result )
    );

    // bru
    wire [31:0] bru_src1;
    wire [31:0] bru_src2;

    assign bru_src1 = src1;
    assign bru_src2 = src2;

    bru bru(
        .clk            (clk            ),
        .rst            (rst            ),
        .bru_op         (bru_op         ),
        .bru_src1       (bru_src1       ),
        .bru_src2       (bru_src2       ),
        .pc             (pc             ),
        .jal_or_jalr    (jal_or_jalr    ),
        .is_fencei      (inst_fence_i   ),
        .alu_result     (alu_result     ),
        .pipeline_ready (lsu_ready      ),
        .mdu_ready      (mdu_ready      ),
        .idu_valid      (idu_valid      ),
        .pc_update      (pc_update      ),
        .bpu_dnpc       (bpu_dnpc       ),
        .flush_en       (exu_flush_en   ),
        .flush_dnpc     (exu_flush_dnpc ),
        .is_call        (is_call        ),
        .is_ret         (is_ret         ),
        .is_jal         (is_jal         ),
        .is_jalr        (is_jalr        ),
        .is_indirect    (is_indirect    ),
        .ecall_en       (ecall_en       ),
        .mret_en        (mret_en        ),
        .csr_rdata      (csr_rdata      ),
        .is_c_inst      (is_c_inst      ),
        .bru_is_c_inst  (bru_is_c_inst  ),
        .bru_pc         (bru_pc        ),
        .bru_dnpc       (bru_dnpc      ),
        .bru_dnpc_valid (bru_dnpc_valid),
        .bru_taken      (bru_taken     ),
        .bru_is_call    (bru_is_call   ),
        .bru_is_ret     (bru_is_ret    ),
        .bru_is_jal     (bru_is_jal    ),
        .bru_is_jalr    (bru_is_jalr   ),
        .bru_is_indirect(bru_is_indirect)
    );

    wire [31:0] snpc = is_c_inst ? (pc + 2) : (pc + 4);

    wire [31:0] csr_wdata = ({32{csrrw_op}} & src1              ) |
                            ({32{csrrs_op}} & (src1 | csr_rdata)) |
                            ({32{csrrc_op}} & (~src1 | csr_rdata));
    wire [31:0] result = |jal_or_jalr ? snpc       :
                          csr_gpr_we  ? csr_rdata  :
                          mdu_en      ? mdu_result : 
                          lsu_en      ? lsu_data   : alu_result;

    assign rd_w_bypass_en   = gpr_we;
    assign rd_w_bypass_data = result;
    assign rd_w_bypass          = rd;

    assign exu_ready = wbu_ready & lsu_ready & mdu_ready & (is_fencei | fence_done);

    always @(posedge clk) begin
        cmt_valid    <= !exu_flush_en & (idu_valid & mdu_ready & lsu_ready & (is_fencei | fence_done));
        cmt_is_store <= is_write;
        cmt_stb_id   <= lsu_stb_id;
    end

    always @(posedge clk) begin
        if (rst) begin
            exu_valid    <= 1'b0;
            ex_to_wb_bus <= 'b0;
        end
        else begin
            if (wbu_ready) begin
                if (idu_valid & mdu_ready & lsu_ready & (is_fencei | fence_done)) begin
                    exu_valid    <= !exu_flush_en;
                    ex_to_wb_bus <= {
                        pc           , // for difftest
                        inst         , // for difftest
                        ecall_en     ,
                        mret_en      ,
                        csr_gpr_we   ,
                        csr_waddr    ,
                        csr_wdata    ,
                        rd           ,
                        gpr_we       ,
                        result
                    };
                end
                else begin
                    exu_valid    <= 1'b0;
                    ex_to_wb_bus <= 'b0;
                end
            end
        end
    end

endmodule
