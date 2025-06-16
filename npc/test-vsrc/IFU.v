module IFU (
    input             clk,
    input             rst,
    
    input             EXU_out_flush,
    input      [31:0] EXU_out_flush_pc,

    input             IDU_IFU_ready,
    output reg        IFU_IDU_valid,
    output reg [31:0] IFU_IDU_pc,
    output reg [31:0] IFU_IDU_inst
);
import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);
reg count;
always @(posedge clk) begin
    if (rst) begin
        count <= 0;
        IFU_IDU_pc <= 32'h80000000;
    end
    else if (count == 0) begin
        count <= 1;
        IFU_IDU_pc <= IFU_IDU_pc;
    end
    else if (EXU_out_flush & count) begin
        IFU_IDU_pc <= EXU_out_flush_pc;
    end
    else if (count && IFU_IDU_valid && IDU_IFU_ready)begin
        IFU_IDU_pc <= IFU_IDU_pc + 4;
    end
end

always @(*) begin
    if (rst | !count) begin
        IFU_IDU_valid = 0;
        IFU_IDU_inst = 0;
    end
    else if (EXU_out_flush) begin
        IFU_IDU_valid = IDU_IFU_ready;
        IFU_IDU_inst = 0;
    end
    else begin
        IFU_IDU_valid = 1;
        IFU_IDU_inst = pmem_read(IFU_IDU_pc, 4);
    end
end

endmodule

