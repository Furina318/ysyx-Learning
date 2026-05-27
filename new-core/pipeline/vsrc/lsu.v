`include "defines.vh"

module lsu (
    input  wire                    clk          ,
    input  wire                    rst          ,
    input  wire                    exu_valid    ,
    output wire                    lsu_ready    ,
    output reg                      lsu_valid    ,

    input  wire [`EX_TO_LS_WD-1:0] ex_to_ls_bus ,
    output reg  [`LS_TO_WB_WD-1:0] ls_to_wb_bus ,

    output reg  [            31:0] rdata_processed  ,

    output wire [            31:0] dcache_addr  ,
    output wire                    dcache_valid ,
    output wire                    dcache_we    ,
    output wire [            31:0] dcache_wdata ,
    output wire [             3:0] dcache_wstrb ,
    input  wire [            31:0] dcache_rdata ,
    input  wire                    dcache_ready
);
    wire [31:0] pc          ;
    wire [ 4:0] rd          ;
    wire [ 1:0] lw_lh_lb    ;
    wire [ 1:0] sw_sh_sb    ;
    wire        is_load_sign;
    wire        is_write    ;
    wire        is_read     ;
    wire        gpr_we      ;
    wire [31:0] addr        ;
    wire [31:0] result      ;
    assign {
        pc          , // for difftest
        rd          ,
        lw_lh_lb    ,
        sw_sh_sb    ,
        is_load_sign,
        is_write    ,
        is_read     ,
        gpr_we      ,
        result      ,
        addr
    } = ex_to_ls_bus;

    wire [31:0] addr_off = addr & 32'b11;
    wire [31:0] align_wdata = result << (addr_off << 3);

    assign dcache_addr  = addr;
    assign dcache_valid = exu_valid & (is_read | is_write);
    assign dcache_we    = is_write;
    assign dcache_wstrb = ({4{sw_sh_sb == 2'b00}} & (4'b0001 << addr_off))
                        | ({4{sw_sh_sb == 2'b01}} & (4'b0011 << addr_off))
                        | ({4{sw_sh_sb == 2'b10}} & (4'b1111 << addr_off));
    assign dcache_wdata = {{8{dcache_wstrb[3]}},{8{dcache_wstrb[2]}},{8{dcache_wstrb[1]}},{8{dcache_wstrb[0]}}} & align_wdata;

    wire [31:0] lsu_rdata = dcache_rdata >> (addr_off << 3);
    // reg  [31:0] rdata_processed;
    always @(*) begin
        case (lw_lh_lb)
            2'b00: rdata_processed = is_load_sign ? {{24{lsu_rdata[ 7]}}, lsu_rdata[ 7:0]} : {24'b0, lsu_rdata[ 7:0]};
            2'b01: rdata_processed = is_load_sign ? {{16{lsu_rdata[15]}}, lsu_rdata[15:0]} : {16'b0, lsu_rdata[15:0]};
            default: rdata_processed = lsu_rdata;
        endcase
    end

    assign lsu_ready = dcache_ready;
    wire [31:0] lsu_data = is_read ? rdata_processed : addr;

    always @(posedge clk) begin
        if (rst) begin
            lsu_valid <= 1'b0;
        end
        else begin
            if (exu_valid && dcache_ready) begin
                lsu_valid    <= 1'b1;
                ls_to_wb_bus <= {
                    pc       , // for difftest
                    rd       ,
                    gpr_we   ,
                    addr     ,
                    lsu_data
                };
            end
            else begin
                lsu_valid    <= 1'b0;
                ls_to_wb_bus <= 'b0;
            end
        end
    end

endmodule
