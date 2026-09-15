`include "defines.vh"
`include "fpu_config.vh"

module decode (
    input  wire                    clk          ,
    input  wire                    rst          ,
    input  wire                    exu_flush_en ,
    input  wire                    ibu_valid    ,
    output wire                    idu_ready    ,
    output reg                     idu_valid    ,
    input  wire                    exu_ready    ,
    input  wire [`IF_TO_ID_WD-1:0] ib_to_id_bus ,
    output reg  [`ID_TO_EX_WD-1:0] du_bus       
);
    wire [31:0] pc;
    wire [31:0] bpu_dnpc;
    wire [31:0] inst;
    wire        is_call;
    wire        is_ret;
    wire        is_jal;
    wire        is_jalr;
    wire        is_indirect;
    wire        is_c_inst; // 是否为 C 扩展指令
    assign {
        pc         ,
        bpu_dnpc   ,
        inst       ,
        is_call    ,
        is_ret     ,
        is_jal     ,
        is_jalr    ,
        is_indirect,
        is_c_inst
    } = ib_to_id_bus;

    wire         gpr_we;

    wire [ 4: 0] rs1;
    wire [ 4: 0] rs2;
    wire [ 4: 0] rd;
    wire [31: 0] imm;
    wire [10: 0] alu_op;
    wire [ 5: 0] bru_op;
    wire         mdu_en;
    wire [ 7: 0] mdu_op;
    wire         is_read;
    wire         is_write;
    wire         is_load_sign;
    wire [ 1: 0] lw_lh_lb;
    wire [ 1: 0] sw_sh_sb;
    wire         src1_is_pc;
    wire         src2_is_imm;
    wire [ 1: 0] jal_or_jalr;

    wire [ 6:0] opcode_31_25;
    wire [ 5:0] opcode_31_26;
    wire [ 2:0] opcode_14_12;
    wire [ 6:0] opcode_06_00;
    wire [31:0] immI;
    wire [31:0] immS;
    wire [31:0] immB;
    wire [31:0] immU;
    wire [31:0] immJ;

    wire        inst_add;
    wire        inst_mul;
    wire        inst_mulh;
    wire        inst_mulhsu;
    wire        inst_mulhu;
    wire        inst_div;
    wire        inst_divu;
    wire        inst_rem;
    wire        inst_remu;
    wire        inst_and;
    wire        inst_or;
    wire        inst_ori;
    wire        inst_xor;
    wire        inst_xori;
    wire        inst_sub;
    wire        inst_slt;
    wire        inst_sltu;
    wire        inst_addi;
    wire        inst_andi;
    wire        inst_jalr;
    wire        inst_lb;
    wire        inst_lbu;
    wire        inst_lh;
    wire        inst_lhu;
    wire        inst_lw;
    wire        inst_sll;
    wire        inst_slli;
    wire        inst_slti;
    wire        inst_sltiu;
    wire        inst_sra;
    wire        inst_srai;
    wire        inst_srl;
    wire        inst_srli;
    wire        inst_csrrw;
    wire        inst_csrrs;
    wire        inst_csrrc;
    wire        inst_ecall;
    wire        inst_mret;
    wire        inst_sb;
    wire        inst_sh;
    wire        inst_sw;
    wire        inst_beq;
    wire        inst_bne;
    wire        inst_bge;
    wire        inst_bgeu;
    wire        inst_blt;
    wire        inst_bltu;
    wire        inst_auipc;
    wire        inst_lui;
    wire        inst_jal;
    wire        inst_fence_i;
    wire        inst_ebreak;
    wire        inst_waiting;

    wire        TYPE_R;
    wire        TYPE_I;
    wire        TYPE_S;
    wire        TYPE_B;
    wire        TYPE_U;
    wire        TYPE_J;
    wire        TYPE_N;

    assign opcode_31_25  = inst[31:25];
    assign opcode_31_26  = inst[31:26];
    assign opcode_14_12  = inst[14:12];
    assign opcode_06_00  = inst[ 6: 0];

    assign rs1     = inst[19:15];
    assign rs2     = inst[24:20];
    assign rd      = inst[11: 7];

    assign immI  = {{20{inst[31]}}, inst[31:20]};
    assign immS  = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    assign immB  = {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
    assign immU  = {inst[31:12], 12'b0};
    assign immJ  = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};

    assign inst_add       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h0) & (opcode_31_25 == 7'h00);
    assign inst_mul       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h0) & (opcode_31_25 == 7'h01);
    assign inst_mulh      = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h1) & (opcode_31_25 == 7'h01);
    assign inst_mulhsu    = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h2) & (opcode_31_25 == 7'h01);
    assign inst_mulhu     = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h3) & (opcode_31_25 == 7'h01);
    assign inst_div       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h4) & (opcode_31_25 == 7'h01);
    assign inst_divu      = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h5) & (opcode_31_25 == 7'h01);
    assign inst_rem       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h6) & (opcode_31_25 == 7'h01);
    assign inst_remu      = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h7) & (opcode_31_25 == 7'h01);
    assign inst_and       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h7) & (opcode_31_25 == 7'h00);
    assign inst_or        = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h6) & (opcode_31_25 == 7'h00);
    assign inst_xor       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h4) & (opcode_31_25 == 7'h00);
    assign inst_sll       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h1) & (opcode_31_25 == 7'h00);
    assign inst_sub       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h0) & (opcode_31_25 == 7'h20);
    assign inst_slt       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h2) & (opcode_31_25 == 7'h00);
    assign inst_sltu      = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h3) & (opcode_31_25 == 7'h00);
    assign inst_addi      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h0);
    assign inst_andi      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h7);
    assign inst_jalr      = (opcode_06_00 == 7'h67) & (opcode_14_12 == 3'h0);
    assign inst_lb        = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h0);
    assign inst_lbu       = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h4);
    assign inst_lh        = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h1);
    assign inst_lhu       = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h5);
    assign inst_lw        = (opcode_06_00 == 7'h03) & (opcode_14_12 == 3'h2);
    assign inst_slti      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h2);
    assign inst_sltiu     = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h3);
    assign inst_slli      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h1) & (opcode_31_25 == 7'h00);
    assign inst_sra       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h5) & (opcode_31_25 == 7'h20);
    assign inst_srai      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h5) & (opcode_31_25 == 7'h20);
    assign inst_srl       = (opcode_06_00 == 7'h33) & (opcode_14_12 == 3'h5) & (opcode_31_25 == 7'h00);
    assign inst_srli      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h5) & (opcode_31_25 == 7'h00);
    assign inst_ori       = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h6);
    assign inst_xori      = (opcode_06_00 == 7'h13) & (opcode_14_12 == 3'h4);
    assign inst_csrrw     = (opcode_06_00 == 7'h73) & (opcode_14_12 == 3'h1);
    assign inst_csrrs     = (opcode_06_00 == 7'h73) & (opcode_14_12 == 3'h2);
    assign inst_csrrc     = (opcode_06_00 == 7'h73) & (opcode_14_12 == 3'h3);
    assign inst_sb        = (opcode_06_00 == 7'h23) & (opcode_14_12 == 3'h0);
    assign inst_sh        = (opcode_06_00 == 7'h23) & (opcode_14_12 == 3'h1);
    assign inst_sw        = (opcode_06_00 == 7'h23) & (opcode_14_12 == 3'h2);
    assign inst_beq       = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h0);
    assign inst_bne       = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h1);
    assign inst_bge       = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h5);
    assign inst_bgeu      = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h7);
    assign inst_blt       = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h4);
    assign inst_bltu      = (opcode_06_00 == 7'h63) & (opcode_14_12 == 3'h6);
    assign inst_auipc     = (opcode_06_00 == 7'h17);
    assign inst_lui       = (opcode_06_00 == 7'h37);
    assign inst_jal       = (opcode_06_00 == 7'h6f);
    assign inst_fence_i   = (opcode_06_00 == 7'h0f) & (rd == 5'h00) & (opcode_14_12 == 3'h1) & (rs1 == 5'h00) & (rs2 == 5'h00) & (opcode_31_25 == 7'h00);
    assign inst_mret      = (opcode_06_00 == 7'h73) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h02) & (opcode_31_25 == 7'h18);
    assign inst_ecall     = (opcode_06_00 == 7'h73) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h00) & (opcode_31_25 == 7'h00);
    assign inst_ebreak    = (opcode_06_00 == 7'h73) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h01) & (opcode_31_25 == 7'h00);
    assign inst_waiting   = (opcode_06_00 == 7'h00) & (rd == 5'h00) & (opcode_14_12 == 3'h0) & (rs1 == 5'h00) & (rs2 == 5'h00) & (opcode_31_25 == 7'h00);

    wire [ 2:0] frm          = opcode_14_12;
    wire [ 4:0] rs3          = inst[31:27];
    wire [ 1:0] opcode_26_25 = inst[26:25];

    wire inst_fmadd_s    = (opcode_06_00 == 7'h43) & (opcode_26_25 == 2'b00);
    wire inst_fmsub_s    = (opcode_06_00 == 7'h47) & (opcode_26_25 == 2'b00);
    wire inst_fnmadd_s   = (opcode_06_00 == 7'h4F) & (opcode_26_25 == 2'b00);
    wire inst_fnmsub_s   = (opcode_06_00 == 7'h4B) & (opcode_26_25 == 2'b00);
    wire inst_flw        = (opcode_06_00 == 7'h07) & (opcode_14_12 == 3'b010);
    wire inst_fsw        = (opcode_06_00 == 7'h27 ) & (opcode_14_12 == 3'b010);
    wire inst_fadd_s     = (opcode_06_00 == 7'h53) & (opcode_31_25 == 7'b0000000);
    wire inst_fdiv_s     = (opcode_06_00 == 7'h53) & (opcode_31_25 == 7'b0001100);   
    wire inst_fmul_s     = (opcode_06_00 == 7'h53) & (opcode_31_25 == 7'b0001000);
    wire inst_sub_s      = (opcode_06_00 == 7'h53) & (opcode_31_25 == 7'b0000100);
    wire inst_fcvt_s_w   = (opcode_06_00 == 7'h53) & (rs2 == 5'h00) & (opcode_31_25 == 7'b1101000);
    wire inst_fcvt_s_wu  = (opcode_06_00 == 7'h53) & (rs2 == 5'h01) & (opcode_31_25 == 7'b1101000);
    wire inst_fcvt_w_s   = (opcode_06_00 == 7'h53) & (rs2 == 5'h00) & (opcode_31_25 == 7'b1100000);
    wire inst_fcvt_wu_s  = (opcode_06_00 == 7'h53) & (rs2 == 5'h01) & (opcode_31_25 == 7'b1100000);
    wire inst_fsqrt_s    = (opcode_06_00 == 7'h53) & (rs2 == 5'h00) & (opcode_31_25 == 7'b0101100);           // 暂不实现
    wire inst_fsgnj_s    = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b000) & (opcode_31_25 == 7'b0010000);
    wire inst_fsgnjn_s   = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b001) & (opcode_31_25 == 7'b0010000);
    wire inst_fsgnjx_s   = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b010) & (opcode_31_25 == 7'b0010000);
    wire inst_feq_s      = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b010) & (opcode_31_25 == 7'b1010000);
    wire inst_fle_s      = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b000) & (opcode_31_25 == 7'b1010000);
    wire inst_flt_s      = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b001) & (opcode_31_25 == 7'b1010000);
    wire inst_fmax_s     = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b001) & (opcode_31_25 == 7'b0010100);
    wire inst_fmin_s     = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b000) & (opcode_31_25 == 7'b0010100);
    wire inst_fmv_w_x    = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b000) & (rs2 == 5'h00) & (opcode_31_25 == 7'b1111000); // exu 短路: GPR->FPR
    wire inst_fmv_x_w    = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b000) & (rs2 == 5'h00) & (opcode_31_25 == 7'b1110000); // exu 短路: FPR->GPR
    wire inst_fclass_s   = (opcode_06_00 == 7'h53) & (opcode_14_12 == 3'b001) & (rs2 == 5'h00) & (opcode_31_25 == 7'b1110000);

    reg [ 6:0] fpu_op;
    always @(*) begin
        case (1'b1)
            inst_fadd_s   : fpu_op = `FADD_S;
            inst_sub_s    : fpu_op = `FSUB_S;
            inst_fmul_s   : fpu_op = `FMUL_S;
            inst_fmadd_s  : fpu_op = `FMADD_S;
            inst_fmsub_s  : fpu_op = `FMSUB_S;
            inst_fnmadd_s : fpu_op = `FNMADD_S;
            inst_fnmsub_s : fpu_op = `FNMSUB_S;
            inst_fclass_s : fpu_op = `FCLASS_S;
            inst_fmin_s   : fpu_op = `FMIN_S;
            inst_fmax_s   : fpu_op = `FMAX_S;
            inst_flt_s    : fpu_op = `FLT_S;
            inst_feq_s    : fpu_op = `FEQ_S;
            inst_fle_s    : fpu_op = `FLE_S;
            inst_fsgnj_s  : fpu_op = `FSGNJ_S;
            inst_fsgnjn_s : fpu_op = `FSGNJN_S;
            inst_fsgnjx_s : fpu_op = `FSGNJX_S;
            inst_fcvt_w_s : fpu_op = `FCVT_W_S;
            inst_fcvt_wu_s: fpu_op = `FCVT_WU_S;
            inst_fcvt_s_w : fpu_op = `FCVT_S_W;
            inst_fcvt_s_wu: fpu_op = `FCVT_S_WU;
            inst_fmv_w_x  : fpu_op = `FMV_W_X;
            inst_fmv_x_w  : fpu_op = `FMV_X_W;
            inst_fdiv_s   : fpu_op = `FDIV_S;
            inst_fsqrt_s  : fpu_op = `FSQRT_S;
            default       : fpu_op = 7'd0;
        endcase
    end

    // 送入 fpu 单元的指令(不含 fdiv/fsqrt/fmv 短路)
    wire op_fpu = inst_fadd_s   | inst_sub_s     | inst_fmul_s   | inst_fdiv_s  | inst_fsqrt_s  |
                  inst_fmadd_s  | inst_fmsub_s   | inst_fnmadd_s | inst_fnmsub_s |
                  inst_fclass_s | inst_fmin_s    | inst_fmax_s   |
                  inst_flt_s    | inst_feq_s     | inst_fle_s    |
                  inst_fsgnj_s  | inst_fsgnjn_s  | inst_fsgnjx_s |
                  inst_fcvt_w_s | inst_fcvt_wu_s | inst_fcvt_s_w | inst_fcvt_s_wu;

    // FPU 指令中写 GPR 的子集
    wire fpu_gpr_we = inst_fcvt_w_s | inst_fcvt_wu_s |
                      inst_flt_s    | inst_feq_s     | inst_fle_s |
                      inst_fclass_s | inst_fmv_x_w;

    // 写 FPR 的指令(FPU 计算类 + FLW + FMV.W.X)
    wire fp_we = (op_fpu & ~fpu_gpr_we) | inst_flw | inst_fmv_w_x;

    assign TYPE_R = (opcode_06_00 == 7'h33) | (opcode_06_00 == 7'h53);
    assign TYPE_I = (opcode_06_00 == 7'h13) | is_read | inst_jalr | inst_csrrw | inst_csrrs | inst_csrrc | inst_fence_i; 
    assign TYPE_S = (opcode_06_00 == 7'h23) | inst_fsw;
    assign TYPE_B = (opcode_06_00 == 7'h63);
    assign TYPE_U = inst_auipc  | inst_lui;
    assign TYPE_J = inst_jal;
    assign TYPE_N = inst_ebreak | inst_waiting;

    assign alu_op[ 0] = inst_add  | inst_addi | inst_auipc | inst_jal | inst_sb  |
                        inst_jalr | inst_lw   | inst_lbu   | inst_lh  | inst_lhu |
                        inst_sw   | inst_sh   | inst_lb    | TYPE_B;
    assign alu_op[ 1] = inst_sub;
    assign alu_op[ 2] = inst_slt  | inst_slti;
    assign alu_op[ 3] = inst_sltu | inst_sltiu;
    assign alu_op[ 4] = inst_and  | inst_andi;
    assign alu_op[ 5] = inst_or   | inst_ori;
    assign alu_op[ 6] = inst_xor  | inst_xori;
    assign alu_op[ 7] = inst_slli | inst_sll;
    assign alu_op[ 8] = inst_srli | inst_srl;
    assign alu_op[ 9] = inst_srai | inst_sra;
    assign alu_op[10] = inst_lui;

    assign bru_op[ 0] = inst_bne;
    assign bru_op[ 1] = inst_beq;
    assign bru_op[ 2] = inst_bge;
    assign bru_op[ 3] = inst_bgeu;
    assign bru_op[ 4] = inst_blt;
    assign bru_op[ 5] = inst_bltu;

    assign mdu_en     = inst_mul | inst_mulh | inst_mulhsu | inst_mulhu | 
                        inst_div | inst_divu | inst_rem    | inst_remu;
    assign mdu_op[ 0] = inst_mul;
    assign mdu_op[ 1] = inst_mulh;
    assign mdu_op[ 2] = inst_mulhsu;
    assign mdu_op[ 3] = inst_mulhu;
    assign mdu_op[ 4] = inst_div;
    assign mdu_op[ 5] = inst_divu;
    assign mdu_op[ 6] = inst_rem;
    assign mdu_op[ 7] = inst_remu;

    assign imm = ({32{TYPE_I}} & immI)
               | ({32{TYPE_S}} & immS)
               | ({32{TYPE_B}} & immB)
               | ({32{TYPE_U}} & immU)
               | ({32{TYPE_J}} & immJ);

    // 0x53(OP-FP) 整体从 TYPE_R 中剔除, 由 fpu_gpr_we 单独放行写 GPR 的子集
    assign gpr_we = (TYPE_R & ~(opcode_06_00 == 7'h53)) | (is_read & ~inst_flw) |
                    inst_addi | inst_jalr | inst_sltiu| inst_srai  | inst_andi |
                    inst_xori | inst_srli | inst_slli | inst_ori   | inst_csrrw|
                    inst_csrrs| inst_jal  | inst_auipc| inst_lui   | inst_slti | inst_csrrc |
                    fpu_gpr_we;

    assign sw_sh_sb = opcode_14_12[1:0];                      // 00: sb, 01: sh, 10: sw/fsw
    assign lw_lh_lb = {inst_lw | inst_flw, (inst_lh | inst_lhu)}; // 00: lb/lbu, 01: lh/lhu, 10: lw/flw
    assign is_load_sign = inst_lb | inst_lh; // 是否需要符号扩展
    assign is_write = TYPE_S;
    assign is_read = (opcode_06_00 == 7'h03) | inst_flw;

    assign src1_is_pc    = inst_jal | TYPE_B | inst_auipc;
    assign src2_is_imm   = TYPE_I   | TYPE_S | TYPE_J | TYPE_B | inst_lui | inst_auipc | inst_jalr;

    assign jal_or_jalr   = {inst_jal, inst_jalr};

    assign idu_ready = exu_ready;

    always @(posedge clk) begin
        if (rst) begin
            idu_valid <= 1'b0;
            du_bus    <= 'b0;
        end
        else if (exu_flush_en) begin
            idu_valid <= 1'b0;
        end
        else if (exu_ready) begin
            if (ibu_valid) begin
                idu_valid <= !exu_flush_en;
                du_bus    <= {
                    op_fpu       ,
                    fp_we        ,
                    fpu_op       ,
                    frm          ,
                    rs3          ,
                    inst_fsw     ,
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
                    inst_ecall   ,
                    inst_mret    ,
                    inst_csrrc   ,
                    inst_csrrs   ,
                    inst_csrrw   ,
                    inst_ebreak  ,
                    is_call      ,
                    is_ret       ,
                    is_jal       ,
                    is_jalr      ,
                    is_indirect  ,
                    is_c_inst
                };
            end
            else begin
                idu_valid <= 1'b0;
                du_bus    <= 'b0;
            end
        end
    end

endmodule
