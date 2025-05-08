`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"

module ForwardingUnit (
    input  wire [4:0]  id_rs1,         // ID 阶段的 rs1 寄存器号
    input  wire [4:0]  id_rs2,         // ID 阶段的 rs2 寄存器号
    input  wire [31:0] rs1_val,        // 寄存器文件提供的 rs1 值
    input  wire [31:0] rs2_val,        // 寄存器文件提供的 rs2 值
    input  wire [4:0]  ex_mem_rd,      // EX/MEM 阶段的 rd 寄存器号
    input  wire        ex_mem_RegWrite,// EX/MEM 阶段是否写寄存器
    input  wire [31:0] ex_mem_alu_result,// EX/MEM 阶段的 ALU 结果
    input  wire        ex_mem_valid,   // EX/MEM 阶段是否有效
    input  wire [4:0]  mem_wb_rd,      // MEM/WB 阶段的 rd 寄存器号
    input  wire        mem_wb_RegWrite,// MEM/WB 阶段是否写寄存器
    input  wire [31:0] wb_data,        // MEM/WB 阶段的写回数据
    input  wire        mem_wb_valid,   // MEM/WB 阶段是否有效

    output wire [31:0] src1,           // 前递后的 rs1 值
    output wire [31:0] src2            // 前递后的 rs2 值
);

    // 冲突检测
    wire conflict_exu_rs1 = (id_rs1 == ex_mem_rd) && (id_rs1 != 5'b0) && ex_mem_RegWrite && ex_mem_valid;
    wire conflict_exu_rs2 = (id_rs2 == ex_mem_rd) && (id_rs2 != 5'b0) && ex_mem_RegWrite && ex_mem_valid;

    wire conflict_wbu_rs1 = (id_rs1 == mem_wb_rd) && (id_rs1 != 5'b0) && mem_wb_RegWrite && mem_wb_valid;
    wire conflict_wbu_rs2 = (id_rs2 == mem_wb_rd) && (id_rs2 != 5'b0) && mem_wb_RegWrite && mem_wb_valid;

    // 旁路优先级
    wire bypass_exu_rs1 = conflict_exu_rs1;
    wire bypass_wbu_rs1 = conflict_wbu_rs1 && !conflict_exu_rs1;

    wire bypass_exu_rs2 = conflict_exu_rs2;
    wire bypass_wbu_rs2 = conflict_wbu_rs2 && !conflict_exu_rs2;

    // 前递数据选择
    assign src1 = bypass_exu_rs1 ? ex_mem_alu_result :
                  bypass_wbu_rs1 ? wb_data :
                  rs1_val;

    assign src2 = bypass_exu_rs2 ? ex_mem_alu_result :
                  bypass_wbu_rs2 ? wb_data :
                  rs2_val;

endmodule
