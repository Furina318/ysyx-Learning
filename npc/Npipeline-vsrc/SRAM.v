`timescale 1ns/1ns

module SRAM(
    input             clk,
    input             rst, 

    input             lsu_sram_read_valid,
    input      [31:0] lsu_sram_read_addr,
    output reg        sram_lsu_read_ready,
    output reg [31:0] sram_lsu_read_data,

    input             lsu_sram_write_valid,
    input      [31:0] lsu_sram_write_addr,
    input      [31:0] lsu_sram_write_data,
    input      [7:0]  lsu_sram_write_mask,
    output reg        sram_lsu_write_ready
);
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);

    always @(posedge clk) begin
        if(rst) begin
            sram_lsu_read_ready <= 0;
            sram_lsu_write_ready <= 0;
        end
        else if(lsu_sram_read_valid && sram_lsu_read_ready) begin
            sram_lsu_read_ready <= 0;
            sram_lsu_read_data <= 32'h0;
        end
        else if(lsu_sram_read_valid) begin
            sram_lsu_read_ready <= 1;
            sram_lsu_read_data <= plsu_read(lsu_sram_read_addr, 4);
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            sram_lsu_write_ready <= 0;
        end
        else if(lsu_sram_write_valid) begin
            sram_lsu_write_ready <= 1;
            plsu_write(lsu_sram_write_addr, lsu_sram_write_data, lsu_sram_write_mask);
        end
        else begin
            sram_lsu_write_ready <= 0;
        end
    end
endmodule