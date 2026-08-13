`include "defines.vh"

module decode (
    input  wire                    clk          ,
    input  wire                    rst          ,
    input  wire                    exu_flush_en ,
    input  wire                    ifu_valid    ,
    output wire                    idu_ready    ,
    output reg                     idu_valid    ,
    input  wire                    exu_ready    ,
    // input  wire [            31:0] pc           ,
    // input  wire [            31:0] bpu_dnpc     ,
    // input  wire [            31:0] inst         ,
    input  wire [`IF_TO_ID_WD-1:0] if_to_id_bus ,
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
    assign {
        pc         ,
        bpu_dnpc   ,
        inst       ,
        is_call    ,
        is_ret     ,
        is_jal     ,
        is_jalr    ,
        is_indirect
    } = if_to_id_bus;

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

    assign TYPE_R = (opcode_06_00 == 7'h33);
    assign TYPE_I = (opcode_06_00 == 7'h13) | is_read | inst_jalr | inst_csrrw | inst_csrrs | inst_fence_i; 
    assign TYPE_S = (opcode_06_00 == 7'h23);
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

    assign gpr_we = TYPE_R    | is_read   |
                    inst_addi | inst_jalr | inst_sltiu| inst_srai  | inst_andi | 
                    inst_xori | inst_srli | inst_slli | inst_ori   | inst_csrrw|
                    inst_csrrs| inst_jal  | inst_auipc| inst_lui   | inst_slti;

    assign sw_sh_sb = opcode_14_12[1:0];               // 00: sb, 01: sh, 10: sw
    assign lw_lh_lb = {inst_lw, (inst_lh | inst_lhu)}; // 00: lb/lbu, 01: lh/lhu, 10: lw
    assign is_load_sign = inst_lb | inst_lh; // 是否需要符号扩展
    assign is_write = TYPE_S;
    assign is_read = (opcode_06_00 == 7'h03);

    assign src1_is_pc    = inst_jal | TYPE_B | inst_auipc;
    assign src2_is_imm   = TYPE_I   | TYPE_S | TYPE_J | TYPE_B | inst_lui | inst_auipc | inst_jalr;

    assign jal_or_jalr   = {inst_jal, inst_jalr};

    assign idu_ready = exu_ready;

    always @(posedge clk) begin
        if (rst) begin
            idu_valid <= 1'b0;
            du_bus    <= 'b0;
        end
        else if (exu_ready) begin
            if (ifu_valid) begin
                idu_valid <= !exu_flush_en;
                du_bus    <= {
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
                    inst_ebreak  ,
                    is_call      ,
                    is_ret       ,
                    is_jal       ,
                    is_jalr      ,
                    is_indirect
                };
            end
            else begin
                idu_valid <= 1'b0;
                du_bus    <= 'b0;
            end
        end
    end

endmodule
