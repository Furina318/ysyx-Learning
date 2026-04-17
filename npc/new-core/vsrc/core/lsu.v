`include "config.vh"
module lsu (
    input  wire         clk,
    input  wire         rst,
    input  wire         exu_valid,
    output wire         lsu_ready,
    output reg          lsu_valid,
    output reg  [31: 0] rdata_processed,
    input  wire [`EU_TO_LU_BUS_WD -1:0] eu_to_lu_bus,
    output reg  [`LU_TO_WU_BUS_WD -1:0] lu_to_wu_bus,

    output wire [31: 0] dcache_addr,
    output wire         dcache_addr_valid,
    output wire         dcache_we,
    output wire [31: 0] dcache_wdata,
    output wire [ 3: 0] dcache_wstrb,
    input  wire [31: 0] dcache_rdata,
    input  wire         dcache_ready

);
    wire [ 4:0] rd;
    wire [`EU_TO_WU_BUS_WD -1:0] eu_to_wu_bus;
    wire [ 1:0] data_rop;
    wire [ 1:0] data_wop;
    wire        is_write;
    wire        is_read;
    wire [`DU_TO_LU_BUS_WD -1:0] du_to_lu_bus;
    wire        gpr_we;
    wire [31:0] addr;
    wire [31:0] data_channel;
    wire [31:0] addr_off = addr & 32'b11;
    wire [31:0] aligned_wdata = data_channel << (addr_off << 3);
    assign {rd,
            eu_to_wu_bus,
            data_rop,
            data_wop,
            is_write,
            is_read,
            du_to_lu_bus,
            gpr_we,
            data_channel,     
            addr
           } = eu_to_lu_bus;

    wire        bit_sext;
    wire        half_sext;
    assign {bit_sext,
            half_sext
           } = du_to_lu_bus;

    wire [31: 0] lsu_data;

    assign dcache_addr       = addr;
    assign dcache_addr_valid = exu_valid & (is_read | is_write);
    assign dcache_we         = is_write;
    assign dcache_wstrb      = ({4{data_wop == 2'b00}} & (4'b0001 << addr_off))
                             | ({4{data_wop == 2'b01}} & (4'b0011 << addr_off))
                             | ({4{data_wop == 2'b10}} & (4'b1111 << addr_off));
    assign dcache_wdata      = {{8{dcache_wstrb[3]}},{8{dcache_wstrb[2]}},{8{dcache_wstrb[1]}},{8{dcache_wstrb[0]}}} & aligned_wdata;

    wire [31: 0] lsu_rdata;
    assign lsu_rdata = dcache_rdata >> (addr_off << 3);
    always @(*) begin
        case (data_rop)
            2'b00: begin rdata_processed = bit_sext  ? {{24{lsu_rdata[ 7]}}, lsu_rdata[ 7:0]} : {24'b0, lsu_rdata[ 7:0]}; end
            2'b01: begin rdata_processed = half_sext ? {{16{lsu_rdata[15]}}, lsu_rdata[15:0]} : {16'b0, lsu_rdata[15:0]}; end
            default: begin rdata_processed = lsu_rdata; end
        endcase
    end

    assign lsu_ready = dcache_ready;
    assign lsu_data  = is_read ? rdata_processed : addr;
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            lsu_valid <= 1'b0;
        end else begin
            if(exu_valid && dcache_ready) begin
                lsu_valid <= 1'b1;
                lu_to_wu_bus <= {
                    rd,
                    eu_to_wu_bus,
                    gpr_we,
                    data_channel,
                    lsu_data
                };
            end else begin
                lsu_valid <= 1'b0;
                lu_to_wu_bus <= 'b0;
            end
        end
    end

endmodule
