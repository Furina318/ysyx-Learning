`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
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

module rv32e (
    input         clk,
    input         reset
);
    // === IF/ID 流水线寄存器 ===
    reg [31:0] if_id_pc;
    reg [31:0] if_id_instr;
    reg        if_id_valid;

    // === ID/EX 流水线寄存器 ===
    reg [6:0]  id_ex_opcode;
    reg [4:0]  id_ex_rs1, id_ex_rs2, id_ex_rd;
    reg [31:0] id_ex_imm;
    reg [2:0]  id_ex_func3;
    reg [6:0]  id_ex_func7;
    reg        id_ex_RegWrite;
    reg        id_ex_MemWrite;
    reg        id_ex_MemRead;
    reg [3:0]  id_ex_alu_op;
    reg [2:0]  id_ex_MemLen;
    reg [31:0] id_ex_rs1_val, id_ex_rs2_val;
    reg        id_ex_valid;
    reg [31:0] id_ex_pc;

    // === EX/MEM 流水线寄存器 ===
    reg [31:0] ex_mem_alu_result;
    reg        ex_mem_alu_zero;
    reg        ex_mem_alu_less;
    reg        ex_mem_RegWrite;
    reg        ex_mem_MemWrite;
    reg        ex_mem_MemRead;
    reg [2:0]  ex_mem_MemLen;
    reg [4:0]  ex_mem_rd;
    reg [4:0]  ex_mem_rs1;
    reg [4:0]  ex_mem_rs2;
    reg [31:0] ex_mem_rs1_val;
    reg [31:0] ex_mem_rs2_val;
    reg        ex_mem_valid;
    reg [6:0]  ex_mem_opcode;
    reg [2:0]  ex_mem_func3;
    reg [31:0] ex_mem_imm;
    reg [31:0] ex_mem_pc;

    // === MEM/WB 流水线寄存器 ===
    reg        mem_wb_alu_zero;
    reg        mem_wb_alu_less;
    reg [31:0] mem_wb_data_out;
    reg [31:0] mem_wb_alu_result;
    reg [6:0]  mem_wb_opcode;
    reg [2:0]  mem_wb_func3;
    reg        mem_wb_RegWrite;
    reg [4:0]  mem_wb_rd;
    reg [4:0]  mem_wb_rs1;
    reg [4:0]  mem_wb_rs2;
    reg [31:0] mem_wb_rs1_val;
    reg [31:0] mem_wb_rs2_val;
    reg [31:0] mem_wb_pc;
    reg [31:0] mem_wb_imm;
    reg        mem_wb_valid;

    // === Wires for Stage Outputs ===
    // IF 
    wire [31:0] if_pc, if_instr;
    wire        if_ready, if_valid, id_ready, wb_valid;
    wire        if_access_fault;
    wire [31:0] if_fault_addr;
    wire [31:0] branch_target;

    // ID 
    wire [6:0]  id_opcode;
    wire [4:0]  id_rs1, id_rs2, id_rd;
    wire [31:0] id_imm;
    wire [2:0]  id_func3;
    wire [6:0]  id_func7;
    wire        id_RegWrite, id_MemWrite, id_MemRead;
    wire [3:0]  id_alu_op;
    wire [2:0]  id_MemLen;
    wire        id_valid, ex_ready;
    wire [31:0] id_rs1_val, id_rs2_val;
    wire [31:0] rs1_val, rs2_val;

    // EX 
    wire [31:0] ex_alu_result;
    wire        ex_alu_zero, ex_alu_less;
    wire        ex_valid, mem_ready;

    // MEM 
    wire [31:0] mem_data_out;
    wire        mem_valid, wb_ready;
    wire        load_access_fault, store_access_fault;
    wire [31:0] mem_fault_addr;

    // WB 
    wire [31:0] wb_data, wb_jal_target, wb_jalr_target;
    wire        wb_is_jal, wb_is_jalr, wb_take_branch;

    // ===== 冒险信号处理 =====
    wire        stall;          // 数据冒险信号
    wire        flush;          // 控制冒险信号

    // === RegFile Instance ===
    RegFile reg_file (
        .clk(clk),
        .reset(reset),
        .rs1(id_rs1),            // ID 阶段读口
        .rs2(id_rs2),            // ID 阶段读口
        .rd(mem_wb_rd),          // WB 阶段写口
        .we(mem_wb_RegWrite),    // WB 阶段写使能
        .wd(wb_data),            // WB 阶段写数据
        .rs1_val(rs1_val),    // ID 阶段读出的值
        .rs2_val(rs2_val)     // ID 阶段读出的值
    );
    wire forwordA, forwordB;
    assign forwordA = (id_rs1 == mem_wb_rd) ? 1'b1 : 1'b0;
    assign forwordB = (id_rs2 == mem_wb_rd) ? 1'b1 : 1'b0;
    assign id_rs1_val = forwordA ? wb_data : rs1_val;
    assign id_rs2_val = forwordB ? wb_data : rs2_val;

    // = == Stall Unit (Load-Use Hazard) === 数据冒险判断
    assign stall = id_ex_MemRead && id_ex_valid &&
                   (id_ex_rd == id_rs1 || id_ex_rd == id_rs2) &&
                   id_ex_rd != 5'b0;

    // === Flush Unit (Control Hazard) === 控制冒险判断
    assign flush = (wb_is_jal || wb_is_jalr || wb_take_branch) && wb_valid;

    // === Module Instantiations ===
    IF if_stage (
        .clk(clk),
        .reset(reset),
        .branch_target(branch_target),
        .pc_src(wb_is_jal | wb_is_jalr | wb_take_branch),
        .pc(if_pc),
        .instr(if_instr),
        .if_ready(if_ready),
        .wb_valid(wb_valid),
        .if_valid(if_valid),
        .id_ready(id_ready && !stall), // Stall IF if needed
        .if_access_fault(if_access_fault),
        .if_fault_addr(if_fault_addr)
    );

    ID id_stage (
        .clk(clk),
        .reset(reset),
        .instr(if_id_instr),
        .if_valid(if_valid),
        .id_ready(id_ready),
        .id_valid(id_valid),
        .ex_ready(ex_ready && !stall), // Stall ID if needed
        .opcode(id_opcode),
        .rs1(id_rs1),
        .rs2(id_rs2),
        .rd(id_rd),
        .imm(id_imm),
        .func3(id_func3),
        .func7(id_func7),
        .RegWrite(id_RegWrite),
        .MemWrite(id_MemWrite),
        .MemRead(id_MemRead),
        .alu_op(id_alu_op),
        .MemLen(id_MemLen)
    );

    EX ex_stage (
        .clk(clk),
        .reset(reset),
        .id_valid(id_valid),
        .ex_ready(ex_ready),
        .opcode(id_ex_opcode),
        .rs1_val(id_ex_rs1_val), // Directly use register value
        .rs2_val(id_ex_rs2_val), // Directly use register value
        .imm(id_ex_imm),
        .alu_op(id_ex_alu_op),
        .func3(id_ex_func3),
        .pc(id_ex_pc),
        .jal_target(wb_jal_target),
        .jalr_target(wb_jalr_target),
        .is_jal(wb_is_jal),
        .is_jalr(wb_is_jalr),
        .take_branch(wb_take_branch),
        .mem_ready(mem_ready),
        .ex_valid(ex_valid),
        .alu_result(ex_alu_result),
        .alu_zero(ex_alu_zero),
        .alu_less(ex_alu_less)
    );

    MEM mem_stage (
        .clk(clk),
        .reset(reset),
        .ex_valid(ex_valid),
        .mem_ready(mem_ready),
        .wb_ready(wb_ready),
        .mem_valid(mem_valid),
        .MemRead(ex_mem_MemRead),
        .MemWrite(ex_mem_MemWrite),
        .MemLen(ex_mem_MemLen),
        .addr(ex_mem_alu_result),
        .data_in(ex_mem_rs2_val),
        .data_out(mem_data_out),
        .load_access_fault(load_access_fault),
        .store_access_fault(store_access_fault),
        .mem_fault_addr(mem_fault_addr)
    );

    WB wb_stage (
        .clk(clk),
        .reset(reset),
        .mem_valid(mem_valid),
        .wb_ready(wb_ready),
        .if_ready(if_ready),
        .wb_valid(wb_valid),
        .opcode(mem_wb_opcode),
        .func3(mem_wb_func3),
        // .rd(mem_wb_rd),
        // .RegWrite(mem_wb_RegWrite),
        .alu_result(mem_wb_alu_result),
        .data_out(mem_wb_data_out),
        .alu_zero(mem_wb_alu_zero),
        .alu_less(mem_wb_alu_less),
        .pc(mem_wb_pc),
        .imm(mem_wb_imm),
        // .rs1(mem_wb_rs1),
        // .rs2(mem_wb_rs2),
        .rs1_val(mem_wb_rs1_val),
        .rs2_val(mem_wb_rs2_val),
        // .jal_target(wb_jal_target),
        // .jalr_target(wb_jalr_target),
        // .is_jal(wb_is_jal),
        // .is_jalr(wb_is_jalr),
        // .take_branch(wb_take_branch),
        .wb_data(wb_data)
    );

    assign branch_target = wb_is_jalr ? wb_jalr_target : wb_jal_target;

    // === 流水线寄存器更新 ===
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            // Reset IF/ID
            if_id_pc <= 32'h8000_0000;
            if_id_instr <= 32'h0;
            // if_id_valid <= 1'b0;

            // Reset ID/EX
            id_ex_opcode <= 7'b0;
            id_ex_rs1 <= 5'b0;
            id_ex_rs2 <= 5'b0;
            id_ex_rd <= 5'b0;
            id_ex_imm <= 32'h0;
            id_ex_func3 <= 3'b0;
            id_ex_func7 <= 7'b0;
            id_ex_RegWrite <= 1'b0;
            id_ex_MemWrite <= 1'b0;
            id_ex_MemRead <= 1'b0;
            id_ex_alu_op <= 4'b0;
            id_ex_MemLen <= 3'b0;
            id_ex_rs1_val <= 32'b0;
            id_ex_rs2_val <= 32'b0;
            // id_ex_valid <= 1'b0;
            id_ex_pc <= 32'h0;

            // Reset EX/MEM
            ex_mem_alu_result <= 32'b0;
            ex_mem_alu_zero <= 1'b0;
            ex_mem_alu_less <= 1'b0;
            ex_mem_RegWrite <= 1'b0;
            ex_mem_MemWrite <= 1'b0;
            ex_mem_MemRead <= 1'b0;
            ex_mem_MemLen <= 3'b0;
            ex_mem_rd <= 5'b0;
            ex_mem_rs1 <= 5'b0;
            ex_mem_rs2 <= 5'b0;
            ex_mem_rs2_val <= 32'b0;
            // ex_mem_valid <= 1'b0;
            ex_mem_opcode <= 7'b0;
            ex_mem_func3 <= 3'b0;
            ex_mem_imm <= 32'b0;
            ex_mem_pc <= 32'h0;

            // Reset MEM/WB
            mem_wb_alu_zero <= 1'b0;
            mem_wb_alu_less <= 1'b0;
            mem_wb_data_out <= 32'h0;
            mem_wb_alu_result <= 32'h0;
            mem_wb_opcode <= 7'b0;
            mem_wb_func3 <= 3'b0;
            mem_wb_RegWrite <= 1'b0;
            mem_wb_rd <= 5'b0;
            mem_wb_rs1 <= 5'b0;
            mem_wb_rs2 <= 5'b0;
            mem_wb_pc <= 32'h0;
            mem_wb_imm <= 32'h0;
            // mem_wb_valid <= 1'b0;
        end 
        else begin
            // IF/ID 
            if (flush) begin
                if_id_pc <= 32'h0;
                if_id_instr <= 32'h0;
                // if_id_valid <= 1'b0;
            end 
            else if (!stall && if_valid && id_ready) begin//不处于数据冒险+握手
                if_id_pc <= if_pc;
                if_id_instr <= if_instr;
                // if_id_valid <= if_valid;
            end

            // ID/EX   数据冒险处理(ID向下游EX模块发送空指令)
            if (flush || stall) begin
                id_ex_opcode <= 7'b0;
                id_ex_rs1 <= 5'b0;
                id_ex_rs2 <= 5'b0;
                id_ex_rd <= 5'b0;
                id_ex_imm <= 32'h0;
                id_ex_func3 <= 3'b0;
                id_ex_func7 <= 7'b0;
                id_ex_RegWrite <= 1'b0;
                id_ex_MemWrite <= 1'b0;
                id_ex_MemRead <= 1'b0;
                id_ex_alu_op <= 4'b0;
                id_ex_MemLen <= 3'b0;
                id_ex_rs1_val <= 32'h0;
                id_ex_rs2_val <= 32'h0;
                // id_ex_valid <= 1'b0;
                id_ex_pc <= 32'h0;
            end 
            else if (id_valid && ex_ready) begin
                id_ex_opcode <= id_opcode;
                id_ex_rs1 <= id_rs1;
                id_ex_rs2 <= id_rs2;
                id_ex_rd <= id_rd;
                id_ex_imm <= id_imm;
                id_ex_func3 <= id_func3;
                id_ex_func7 <= id_func7;
                id_ex_RegWrite <= id_RegWrite;
                id_ex_MemWrite <= id_MemWrite;
                id_ex_MemRead <= id_MemRead;
                id_ex_alu_op <= id_alu_op;
                id_ex_MemLen <= id_MemLen;
                id_ex_rs1_val <= id_rs1_val;
                id_ex_rs2_val <= id_rs2_val;
                // id_ex_valid <= id_valid;
                id_ex_pc <= if_id_pc;
            end

            // EX/MEM 
            if (flush) begin
                ex_mem_alu_result <= 32'b0;
                ex_mem_alu_zero <= 1'b0;
                ex_mem_alu_less <= 1'b0;
                ex_mem_RegWrite <= 1'b0;
                ex_mem_MemWrite <= 1'b0;
                ex_mem_MemRead <= 1'b0;
                ex_mem_MemLen <= 3'b0;
                ex_mem_rd <= 5'b0;
                ex_mem_rs1 <= 5'b0;
                ex_mem_rs2 <= 5'b0;
                ex_mem_rs1_val <= 32'b0;
                ex_mem_rs2_val <= 32'b0;
                ex_mem_imm <= 32'b0;
                ex_mem_opcode <= 7'b0;
                ex_mem_func3 <= 3'b0;
                ex_mem_pc <= 32'h0;
            end
            else if (ex_valid && mem_ready) begin
                ex_mem_alu_result <= ex_alu_result;
                ex_mem_alu_zero <= ex_alu_zero;
                ex_mem_alu_less <= ex_alu_less;
                ex_mem_RegWrite <= id_ex_RegWrite;
                ex_mem_MemWrite <= id_ex_MemWrite;
                ex_mem_MemRead <= id_ex_MemRead;
                ex_mem_MemLen <= id_ex_MemLen;
                ex_mem_rd <= id_ex_rd;
                ex_mem_rs1 <= id_ex_rs1;
                ex_mem_rs2 <= id_ex_rs2;
                ex_mem_rs1_val <= id_ex_rs1_val; // Directly use register value
                ex_mem_rs2_val <= id_ex_rs2_val; // Directly use register value
                // ex_mem_valid <= ex_valid;
                ex_mem_opcode <= id_ex_opcode;
                ex_mem_func3 <= id_ex_func3;
                ex_mem_imm <= id_ex_imm;
                ex_mem_pc <= id_ex_pc;
            end

            // MEM/WB
            if (flush) begin
                mem_wb_alu_zero <= 1'b0;
                mem_wb_alu_less <= 1'b0;
                mem_wb_data_out <= 32'b0;
                mem_wb_alu_result <= 32'b0;
                mem_wb_opcode <= 7'b0;
                mem_wb_func3 <= 3'b0;
                mem_wb_RegWrite <= 1'b0;
                mem_wb_rd <= 5'b0;
                mem_wb_rs1 <= 5'b0;
                mem_wb_rs2 <= 5'b0;
                mem_wb_rs1_val <= 32'b0;
                mem_wb_rs2_val <= 32'b0;
                mem_wb_pc <= 32'h0;
                mem_wb_imm <= 32'b0;
            end 
            else if (mem_valid && wb_ready) begin
                mem_wb_alu_zero <= ex_mem_alu_zero;
                mem_wb_alu_less <= ex_mem_alu_less;
                mem_wb_data_out <= mem_data_out;
                mem_wb_alu_result <= ex_mem_alu_result;
                mem_wb_opcode <= ex_mem_opcode;
                mem_wb_func3 <= ex_mem_func3;
                mem_wb_RegWrite <= ex_mem_RegWrite;
                mem_wb_rd <= ex_mem_rd;
                mem_wb_rs1 <= ex_mem_rs1;
                mem_wb_rs2 <= ex_mem_rs2;
                mem_wb_rs1_val <= ex_mem_rs1_val; // Directly use register value
                mem_wb_rs2_val <= ex_mem_rs2_val; // Directly use register value
                mem_wb_pc <= ex_mem_pc;
                mem_wb_imm <= ex_mem_imm;
                // mem_wb_valid <= mem_valid;
            end
        end
    end

    // === Debugging and Fault Reporting ===
    always @(*) begin
        if (if_access_fault) begin
            $display("\033[31m[IF]: IF access fault at address: %h\033[0m", if_fault_addr);
        end
        if (load_access_fault) begin
            $display("\033[31m[MEM]: Load access fault at address: %h\033[0m", mem_fault_addr);
        end
        if (store_access_fault) begin
            $display("\033[31m[MEM]: Store access fault at address: %h\033[0m", mem_fault_addr);
        end
    end
    always @(posedge clk) begin    
        if(flush) begin
            $display("\033[32m         [FLUSH]控制冒险触发! branch_target = 0x%h\033[0m", branch_target);
        end
        if(stall) begin
            $display("\033[32m         [STALL]数据冒险触发!!!\033[0m");
        end
    end
endmodule