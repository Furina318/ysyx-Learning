`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// 取指模块
module IF (
    input         clk,
    input         reset,
    input  [31:0] branch_target,
    input         pc_src,
    output reg [31:0] pc,
    output reg [31:0] instr
);
    
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    

    always @(posedge clk or posedge reset) begin
        if (reset)      pc <= 32'h7fff_fffc; // 初始PC值
        else if (pc_src) pc <= branch_target;
        else            pc <= pc + 4;
    end

    always @(*) begin
        instr=pmem_read(pc,4); // 同步读取指令
        $display("PC=0x%08x | instr=0x%08x",pc,instr);
    end

endmodule
