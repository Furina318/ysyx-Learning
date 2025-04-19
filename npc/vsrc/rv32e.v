/*********************************************************************/
//                    _ooOoo_
//                   o8888888o
//                   88" . "88
//                   (| -_- |)
//                   O\  =  /O
//                ____/`---'\____
//              .'  \\|     |//  `.
//             /  \\|||  :  |||//  \
//            /  _||||| -:- |||||-  \
//            |   | \\\  -  /// |   |
//            | \_|  ''\---/''  |   |
//            \  .-\__  `-`  ___/-. /
//          ___`. .'  /--.--\  `. . __
//       ."" '<  `.___\_<|>_/___.'  >'"".
//      | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//      \  \ `-.   \_ __\ /__ _/   .-` /  /
// ======`-.____`-.___\_____/___.-`____.-'======
//                    `=---='
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//             佛祖保佑        永无BUG
//           南无阿弥陀佛   就算报错也让我看懂
//                    佛祖保佑
/*********************************************************************/

`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
module rv32e (
    input         clk,
    input         reset
);
    //===== IF =====//
    wire [31:0]  pc;
    wire [31:0]  instr;
    wire         if_ready;
    wire         wb_valid;
    wire         if_valid;
    wire         id_ready;
    wire         if_access_fault;
    wire [31:0]  if_fault_addr;
    wire [31:0]  trap_pc;
    //===== ID =====//
    wire [6:0]   opcode;
    wire [4:0]   rs1, rs2, rd;
    wire [31:0]  imm;
    wire [2:0]   func3;
    wire [6:0]   func7;
    wire         RegWrite;
    wire         MemWrite;
    wire         MemRead;
    wire [3:0]   alu_op;
    wire [1:0]   MemLen;
    wire         id_valid;
    wire         ex_ready;

    //===== RegFile =====//
    wire         reg_valid;
    wire         reg_ready;

    //===== EX =====//
    wire [31:0]  rs1_val, rs2_val;
    wire [31:0]  alu_result;
    wire         alu_zero;
    wire         alu_less;
    wire         ex_valid;
    wire         mem_ready;

    //===== MEM =====//
    wire [31:0]  data_out;
    wire         mem_valid;
    wire         wb_ready;
    wire         load_access_fault;
    wire         store_access_fault;
    wire [31:0]  mem_fault_addr;
    //===== WB =====//
    wire [31:0]  wb_data;
    wire [31:0]  jal_target;
    wire [31:0]  jalr_target;
    wire         is_jal, is_jalr;
    wire         take_branch;
    wire [31:0]  branch_target;
    // assign branch_target=is_jalr ? jalr_target : jal_target;
    
    wire [4:0]   rd_wb;
    wire         RegWrite_wb;
    wire         wb_MemRead, wb_MemWrite;
    wire [1:0]   wb_MemLen;
    wire [31:0]  wb_addr, wb_data_in;
    // 取指模块
    IF if_stage (
        .clk(clk),
        .reset(reset),
        // .branch_target(is_jalr ? jalr_target : jal_target),
        .branch_target(branch_target),
        .pc_src(is_jal | is_jalr | take_branch),
        .pc(pc),
        .instr(instr),
        .if_ready(if_ready),
        .wb_valid(wb_valid),
        .if_valid(if_valid),
        .id_ready(id_ready),
        .if_access_fault(if_access_fault),
        .if_fault_addr(if_fault_addr)
    );

    // 译码模块
    ID id_stage (
        .clk(clk),
        .reset(reset),
        .instr(instr),
        // .reset(reset),
        .if_valid(if_valid),
        .id_ready(id_ready),
        .id_valid(id_valid),
        .ex_ready(ex_ready),
        .opcode(opcode),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .imm(imm),
        .func3(func3),
        .func7(func7),
        .RegWrite(RegWrite),
        .MemWrite(MemWrite),
        .MemRead(MemRead),
        .alu_op(alu_op),
        .MemLen(MemLen)
    );
    
    EX ex_stage(
        .clk(clk), 
        .reset(reset),
        .id_valid(id_valid),
        .ex_ready(ex_ready),
        .opcode(opcode), 
        .rs1_val(rs1_val),
        .rs2_val(rs2_val),
        .imm(imm),
        .alu_op(alu_op),
        .mem_ready(mem_ready),
        .ex_valid(ex_valid),
        .alu_result(alu_result),
        .alu_zero(alu_zero),   
        .alu_less(alu_less)
    );
    // 内存模块
    MEM mem_stage(
        .clk(clk),
        .reset(reset),
        .ex_valid(ex_valid),
        .mem_ready(mem_ready),
        .wb_ready(wb_ready),
        .mem_valid(mem_valid),
        .MemRead(MemRead),
        .MemWrite(MemWrite),
        .MemLen(MemLen),
        .addr(rs1_val + imm),
        .data_in(rs2_val),
        .data_out(data_out),
        .load_access_fault(load_access_fault),
        .store_access_fault(store_access_fault),
        .mem_fault_addr(mem_fault_addr)
    );

    // 写回模块
    WB wb_stage (
        .clk(clk), 
        .reset(reset),
        .mem_valid(mem_valid),
        .wb_ready(wb_ready),
        .if_ready(if_ready),
        .wb_valid(wb_valid),
        .opcode(opcode),
        .func3(func3),

        .id_rd(rd),
        .id_RegWrite(RegWrite),
        // .id_MemRead(MemRead),
        // .id_MemWrite(MemWrite),
        // .id_MemLen(MemLen),
        // .id_addr(alu_result),
        // // .id_addr(rs1_val + imm), 
        // .id_data_in(rs2_val),

        .rs1(rs1),
        .rs2(rs2),
        .rs1_val(rs1_val),
        .rs2_val(rs2_val),

        .pc(pc),
        .imm(imm),
        // .rs1_val(rs1_val),
        .alu_less(alu_less),
        .alu_zero(alu_zero),
        .alu_result(alu_result),
        .data_out(data_out),
        .is_jal(is_jal),
        .is_jalr(is_jalr),
        .take_branch(take_branch),
        .jal_target(jal_target),
        .jalr_target(jalr_target),
        .wb_data(wb_data)

        // .rd_wb(rd_wb),
        // .RegWrite_wb(RegWrite_wb),
        // .wb_MemRead(wb_MemRead),
        // .wb_MemWrite(wb_MemWrite),
        // .wb_MemLen(wb_MemLen),
        // .wb_addr(wb_addr),
        // .wb_data_in(wb_data_in)
    );
    assign branch_target = is_jalr ? jalr_target : jal_target;

    always @(*) begin
        if(if_access_fault) begin
            $display("[IF]:IF access fault at address: %h", if_fault_addr);
        end
        if(load_access_fault) begin
            $display("[MEM]:Load access fault at address: %h", mem_fault_addr);
        end
        if(store_access_fault) begin
            $display("[MEM]:Store access fault at address: %h", mem_fault_addr);
        end
    end 
endmodule
