`timescale 1ns/1ns

module SRAM (
    input clk,
    input rst,

    // input IFU_MEM_ready,
    // output MEM_IFU_valid,

    // output reg [31:0] MEM_IFU_inst,
    // input      [31:0] IFU_MEM_pc,

    input LSU_MEM_read_valid,
    input [31:0] LSU_MEM_rd_addr,
    output reg MEM_LSU_read_ready,
    output reg [31:0] MEM_LSU_rd_data,

    input [31:0] LSU_MEM_wr_data,
    input [31:0] LSU_MEM_wr_addr,
    input [7:0]  LSU_MEM_wr_mask,
    input LSU_MEM_write_valid,
    output reg MEM_LSU_write_ready
);
import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);

always @(posedge clk) begin
    if (rst) begin
        MEM_LSU_read_ready <= 0;
        MEM_LSU_rd_data <= 0;
    end
    else if (LSU_MEM_read_valid && MEM_LSU_read_ready)begin
        MEM_LSU_read_ready <= 0;
        MEM_LSU_rd_data <= 0;
    end
    else if (LSU_MEM_read_valid) begin
        MEM_LSU_read_ready <= 1;
        MEM_LSU_rd_data <= pmem_read(LSU_MEM_rd_addr, 4);
    end
end

always @(posedge clk) begin
    if (rst) begin
        MEM_LSU_write_ready <= 0;
    end
    else if (LSU_MEM_write_valid) begin
        MEM_LSU_write_ready <= 1;
        case(LSU_MEM_wr_mask)
            8'h1: pmem_write(LSU_MEM_wr_addr, LSU_MEM_wr_data, 1);
            8'h3: pmem_write(LSU_MEM_wr_addr, LSU_MEM_wr_data, 2);
            8'hf: pmem_write(LSU_MEM_wr_addr, LSU_MEM_wr_data, 4);
            default: begin
                $display("[SRAM] Unsupported write mask: %h", LSU_MEM_wr_mask);
            end
        endcase
    end
    else begin
        MEM_LSU_write_ready <= 0;
    end
end



endmodule

