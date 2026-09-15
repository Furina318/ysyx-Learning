/* 
 * C拓展转译模块
 * 将C拓展指令转译为正常32位指令
*/
module c_decode (
    input  wire        clk      ,
    input  wire        reset    ,
    input  wire [15:0] c_inst   ,
    output wire [31:0] inst     ,
    output wire        valid
);
    wire [ 1:0] c_opcode ;
    wire [ 2:0] c_func3  ;
    wire [ 5:0] c_func6  ;
    wire [ 4:0] c_rd     ;
    wire [ 4:0] c_rs1    ;
    wire [ 4:0] c_rs2    ;
    wire [ 2:0] c_rd_4_2 ; 
    wire [ 2:0] c_rs1_9_7;
    wire [ 2:0] c_rd_s   ;
    wire [ 2:0] c_rs1_s  ;
    wire [ 2:0] c_rs2_s  ;

    wire [17:0] c_imm18    ;
    wire [ 9:0] c_imm10    ;
    wire [ 5:0] c_imm6     ;
    wire [ 9:0] c_uimm10   ;
    wire [ 7:0] c_uimm8_l  ;
    wire [ 7:0] c_uimm8_s  ;
    wire [ 6:0] c_uimm7    ;
    wire [ 5:0] c_uimm6    ;
    wire [ 8:0] c_offset9  ;
    wire [11:0] c_offset12 ;

    wire [ 4:0] rs1    ;
    wire [ 4:0] rs2    ;
    wire [ 4:0] rd     ;
    wire [31:0] imm    ;

    assign c_opcode = c_inst[ 1: 0];
    assign c_func3  = c_inst[15:13];
    assign c_func6  = c_inst[15:10];
    assign c_rd     = c_inst[11: 7];
    assign c_rs1    = c_inst[11: 7];
    assign c_rs2    = c_inst[ 6: 2];
    assign c_rd_4_2 = c_inst[ 4: 2];
    assign c_rs1_9_7= c_inst[ 9: 7];
    assign c_rd_s   = c_inst[ 9: 7];
    assign c_rs1_s  = c_inst[ 9: 7];
    assign c_rs2_s  = c_inst[ 4: 2];
    
    assign c_imm6     = {c_inst[12], c_inst[6:2]};
    assign c_imm10    = {c_inst[12], c_inst[4:3], c_inst[5], c_inst[2], c_inst[6], 4'b0000};
    assign c_imm18    = {c_inst[12], c_inst[6:2], 12'b0};
    assign c_uimm6    = {c_inst[12], c_inst[6:2]};
    assign c_uimm7    = {c_inst[5], c_inst[12:10], c_inst[6], 2'b00};
    assign c_uimm8_l  = {c_inst[3:2], c_inst[12], c_inst[6:4], 2'b00};
    assign c_uimm8_s  = {c_inst[8:7], c_inst[12:9], 2'b00};
    assign c_uimm10   = {c_inst[10:7], c_inst[12:11], c_inst[5], c_inst[6], 2'b00};
    assign c_offset9  = {c_inst[12], c_inst[6:5], c_inst[2], c_inst[11:10], c_inst[4:3], 1'b0};
    assign c_offset12 = {c_inst[12], c_inst[8], c_inst[10:9], c_inst[6], c_inst[7], c_inst[2], c_inst[11], c_inst[5:3], 1'b0};

    wire inst_c_ebreak   ;
    wire inst_c_add      ;
    wire inst_c_addi     ;
    wire inst_c_addi16sp ;
    wire inst_c_addi4spn ;
    wire inst_c_and      ;
    wire inst_c_andi     ;
    wire inst_c_beqz     ;
    wire inst_c_bnez     ;
    wire inst_c_j        ;
    wire inst_c_jal      ;
    wire inst_c_jalr     ;
    wire inst_c_jr       ; //ret返回
    wire inst_c_or       ;
    wire inst_c_xor      ;
    wire inst_c_mv       ;
    wire inst_c_sub      ;
    wire inst_c_slli     ;
    wire inst_c_srai     ;
    wire inst_c_srli     ;
    wire inst_c_li       ;
    wire inst_c_lui      ;
    wire inst_c_lw       ;
    wire inst_c_lwsp     ;
    wire inst_c_sw       ;
    wire inst_c_swsp     ;

    assign inst_c_ebreak   = (c_inst == 16'b100_1_00000_00000_10);
    assign inst_c_add      = (c_func3 == 3'b100) & (c_opcode == 2'b10) & (c_inst[12] == 1'b1) & (c_rd != 5'b00000) & (c_rs2 != 5'b00000);
    assign inst_c_addi     = (c_func3 == 3'b000) & (c_opcode == 2'b01);
    assign inst_c_addi16sp = (c_func3 == 3'b011) & (c_opcode == 2'b01) & (c_inst[11:7] == 5'b00010) & (c_imm10 != 10'b0);
    assign inst_c_addi4spn = (c_func3 == 3'b000) & (c_opcode == 2'b00) & (c_uimm10 != 10'b0);
    assign inst_c_and      = (c_func6 == 6'b100011) & (c_opcode == 2'b01) & (c_inst[6:5] == 2'b11);
    assign inst_c_andi     = (c_func3 == 3'b100) & (c_opcode == 2'b01) & (c_inst[11:10] == 2'b10);
    assign inst_c_beqz     = (c_func3 == 3'b110) & (c_opcode == 2'b01);
    assign inst_c_bnez     = (c_func3 == 3'b111) & (c_opcode == 2'b01);
    assign inst_c_j        = (c_func3 == 3'b101) & (c_opcode == 2'b01);
    assign inst_c_jal      = (c_func3 == 3'b001) & (c_opcode == 2'b01);
    assign inst_c_jalr     = (c_func3 == 3'b100) & (c_opcode == 2'b10) & (c_rs2 == 5'b00000) & (c_rs1 != 5'b00000) & (c_inst[12] == 1'b1);
    assign inst_c_jr       = (c_func3 == 3'b100) & (c_opcode == 2'b10) & (c_rs2 == 5'b00000) & (c_rs1 != 5'b00000) & (c_inst[12] == 1'b0);
    assign inst_c_or       = (c_func6 == 6'b100011) & (c_opcode == 2'b01) & (c_inst[6:5] == 2'b10);
    assign inst_c_xor      = (c_func6 == 6'b100011) & (c_opcode == 2'b01) & (c_inst[6:5] == 2'b01);
    assign inst_c_mv       = (c_func3 == 3'b100) & (c_opcode == 2'b10) & (c_inst[12] == 1'b0) & (c_rs2 != 5'b00000);
    assign inst_c_sub      = (c_func6 == 6'b100011) & (c_opcode == 2'b01) & (c_inst[6:5] == 2'b00);
    assign inst_c_slli     = (c_func3 == 3'b000) & (c_opcode == 2'b10);
    assign inst_c_srai     = (c_func3 == 3'b100) & (c_opcode == 2'b01) & (c_inst[11:10] == 2'b01);
    assign inst_c_srli     = (c_func3 == 3'b100) & (c_opcode == 2'b01) & (c_inst[11:10] == 2'b00);
    assign inst_c_li       = (c_func3 == 3'b010) & (c_opcode == 2'b01);
    assign inst_c_lui      = (c_func3 == 3'b011) & (c_opcode == 2'b01) & (c_rd != 5'b00010) & (c_imm18 != 18'b0);
    assign inst_c_lw       = (c_func3 == 3'b010) & (c_opcode == 2'b00);
    assign inst_c_lwsp     = (c_func3 == 3'b010) & (c_opcode == 2'b10) & (c_rd != 5'b00000);
    assign inst_c_sw       = (c_func3 == 3'b110) & (c_opcode == 2'b00);
    assign inst_c_swsp     = (c_func3 == 3'b110) & (c_opcode == 2'b10);

    wire need_switch; // 需要转换处理
    assign need_switch = inst_c_addi4spn |
                         inst_c_and      |
                         inst_c_andi     |
                         inst_c_beqz     |
                         inst_c_bnez     |
                         inst_c_or       |
                         inst_c_xor      |
                         inst_c_sub      |
                         inst_c_srai     |
                         inst_c_srli     |
                         inst_c_sw       ;

    wire rd_is_sp;
    wire rd_is_ra;
    wire rd_is_x0; //0号寄存器
    wire rd_is_4_2;

    wire rs1_is_sp;
    wire rs1_is_ra;
    wire rs1_is_x0;
    wire rs1_is_9_7;

    assign rd_is_sp  = inst_c_addi16sp;
    assign rd_is_ra  = inst_c_jal | inst_c_jalr;
    assign rd_is_x0  = inst_c_j   | inst_c_jr;
    assign rd_is_4_2 = inst_c_lw  | inst_c_addi4spn;

    assign rs1_is_sp = inst_c_addi16sp | inst_c_addi4spn | inst_c_lwsp | inst_c_swsp;
    assign rs1_is_ra = 1'b0;
    assign rs1_is_x0 = inst_c_mv | inst_c_li;
    assign rs1_is_9_7 = inst_c_lw;

    assign rd  = rd_is_sp    ? 5'b00010 : //sp
                 rd_is_ra    ? 5'b00001 : //ra
                 rd_is_x0    ? 5'b00000 :
                 rd_is_4_2   ? ({2'b00, c_rd_4_2} + 8) :
                 need_switch ? ({2'b00, c_rd_s} + 8  ) : c_rd;

    assign rs1 = rs1_is_sp   ? 5'b00010 : //sp
                 rs1_is_ra   ? 5'b00001 : //ra
                 rs1_is_x0   ? 5'b00000 :
                 rs1_is_9_7  ? ({2'b00, c_rs1_9_7} + 8) :
                 need_switch ? ({2'b00, c_rs1_s} + 8  ) : c_rs1;

    assign rs2 = need_switch ? ({2'b00, c_rs2_s} + 8) : c_rs2;

    wire need_imm0     ;
    wire need_imm6     ;
    wire need_imm10    ;
    wire need_imm18    ;
    wire need_uimm6    ;
    wire need_uimm8_l  ;
    wire need_uimm8_s  ;
    wire need_uimm7    ;
    wire need_uimm10   ;
    wire need_offset9  ;
    wire need_offset12 ;

    assign need_imm0     = inst_c_jr;
    assign need_imm6     = inst_c_addi | inst_c_andi | inst_c_li;
    assign need_imm10    = inst_c_addi16sp;
    assign need_imm18    = inst_c_lui;
    assign need_uimm6    = inst_c_slli | inst_c_srai | inst_c_srli;
    assign need_uimm7    = inst_c_sw | inst_c_lw;  
    assign need_uimm8_l  = inst_c_lwsp; 
    assign need_uimm8_s  = inst_c_swsp;
    assign need_uimm10   = inst_c_addi4spn;
    assign need_offset9  = inst_c_beqz | inst_c_bnez;
    assign need_offset12 = inst_c_j | inst_c_jal;

    assign imm = ({32{need_imm6    }} & {{26{c_imm6[5]}}, c_imm6}         ) |
                 ({32{need_imm10   }} & {{22{c_imm10[9]}}, c_imm10}       ) |
                 ({32{need_imm18   }} & {{14{c_imm18[17]}}, c_imm18}      ) |
                 ({32{need_uimm6   }} & {26'b0, c_uimm6}                  ) |
                 ({32{need_uimm7   }} & {25'b0, c_uimm7}                  ) |
                 ({32{need_uimm8_l }} & {24'b0, c_uimm8_l}                ) |
                 ({32{need_uimm8_s }} & {24'b0, c_uimm8_s}                ) |
                 ({32{need_uimm10  }} & {22'b0, c_uimm10}                 ) |
                 ({32{need_offset9 }} & {{23{c_offset9[8]}}, c_offset9}   ) |
                 ({32{need_offset12}} & {{20{c_offset12[11]}}, c_offset12}) |
                 ({32{need_imm0    }} & 32'h0                             );   
 
    localparam OPCODE_R = 7'b0110011;  
    localparam OPCODE_I = 7'b0010011;  
    localparam OPCODE_B = 7'b1100011;  
    localparam OPCODE_J = 7'b1101111;
    localparam OPCODE_U = 7'b0110111;
    localparam OPCODE_L = 7'b0000011;
    localparam OPCODE_S = 7'b0100011;
    localparam OPCODE_E = 7'b1110011;  // 系统指令（ebreak）
    localparam OPCODE_JALR = 7'b1100111;

    assign inst = ({32{inst_c_ebreak}} & {32'h00100073}                              ) |
                  ({32{inst_c_and   }} & {7'b0000000, rs2, rs1, 3'b111, rd, OPCODE_R}) |
                  ({32{inst_c_andi  }} & {imm[11:0], rs1, 3'b111, rd, OPCODE_I}      ) |
                  ({32{inst_c_lui   }} & {imm[31:12], rd, OPCODE_U}                  ) |
                  ({32{inst_c_or    }} & {7'b0000000, rs2, rs1, 3'b110, rd, OPCODE_R}) |
                  ({32{inst_c_xor   }} & {7'b0000000, rs2, rs1, 3'b100, rd, OPCODE_R}) |
                  ({32{inst_c_sub   }} & {7'b0100000, rs2, rs1, 3'b000, rd, OPCODE_R}) |
                  ({32{inst_c_slli  }} & {6'b000000, imm[5:0], rs1, 3'b001, rd, OPCODE_I}) |
                  ({32{inst_c_srai  }} & {6'b010000, imm[5:0], rs1, 3'b101, rd, OPCODE_I}) |
                  ({32{inst_c_srli  }} & {6'b000000, imm[5:0], rs1, 3'b101, rd, OPCODE_I}) |
                  ({32{inst_c_beqz  }} & {imm[12], imm[10:5], 5'b00000, rs1, 3'b000, imm[4:1], imm[11], OPCODE_B}) |
                  ({32{inst_c_bnez  }} & {imm[12], imm[10:5], 5'b00000, rs1, 3'b001, imm[4:1], imm[11], OPCODE_B}) |
                  ({32{(inst_c_lw   | inst_c_lwsp)}} & {imm[11:0], rs1, 3'b010, rd, OPCODE_L}                        ) |
                  ({32{(inst_c_sw   | inst_c_swsp)}} & {imm[11:5], rs2, rs1, 3'b010, imm[4:0], OPCODE_S}             ) |
                  ({32{(inst_c_add  | inst_c_mv  )}} & {7'b0000000, rs2, rs1, 3'b000, rd, OPCODE_R}                  ) |
                  ({32{(inst_c_jal  | inst_c_j   )}} & {imm[20], imm[10:1], imm[11], imm[19:12], rd, OPCODE_J}       ) |
                  ({32{(inst_c_jalr | inst_c_jr  )}} & {imm[11:0], rs1, 3'b000, rd, OPCODE_JALR}                     ) |
                  ({32{(inst_c_addi | inst_c_addi16sp | inst_c_addi4spn | inst_c_li)}} & {imm[11:0], rs1, 3'b000, rd, OPCODE_I}) ;

    assign valid = reset ? 1'b0 : (inst_c_ebreak   | inst_c_add      | inst_c_addi     | 
                                   inst_c_addi16sp | inst_c_addi4spn | inst_c_and      | 
                                   inst_c_andi     | inst_c_beqz     | inst_c_bnez     |
                                   inst_c_j        | inst_c_jal      | inst_c_jalr     |
                                   inst_c_jr       | inst_c_or       | inst_c_xor      |
                                   inst_c_mv       | inst_c_li       | inst_c_lui      |
                                   inst_c_slli     | inst_c_srai     | inst_c_srli     |
                                   inst_c_sub      | inst_c_lw       | inst_c_lwsp     |
                                   inst_c_sw       | inst_c_swsp     );
endmodule
