`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
// 内存模块
module MEM (
    input         clk,
    input         MemRead,
    input         MemWrite,
    input  [31:0] addr,
    input  [31:0] data_in,
    output reg [31:0] data_out
);
    
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);
    
    // assign data_out = MemRead ? 32'b0 : pmem_read(addr,4);

    // always @(posedge clk) begin
    //     if (MemWrite) pmem_write(addr, data_in, 4);
    // end
    always @(posedge clk) begin
        if(MemRead) data_out = pmem_read(addr,4);
        else if(MemWrite) pmem_write(addr,data_in,4);
        else data_out = 32'b0;
    end

endmodule