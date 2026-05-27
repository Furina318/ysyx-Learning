module axi_bridge (
    input  wire         clk,
    input  wire         rst,

    output wire         ifu_arready,
    input  wire         ifu_arvalid,
    input  wire [31: 0] ifu_araddr,
    input  wire [ 3: 0] ifu_arid,
    input  wire [ 7: 0] ifu_arlen,
    input  wire [ 2: 0] ifu_arsize,
    input  wire [ 1: 0] ifu_arburst,
    input  wire         ifu_rready,
    output wire         ifu_rvalid,
    output wire [ 1: 0] ifu_rresp,
    output wire [31: 0] ifu_rdata,
    output wire         ifu_rlast,
    output wire [ 3: 0] ifu_rid,

    output wire         lsu_awready,
    input  wire         lsu_awvalid,
    input  wire [31: 0] lsu_awaddr,
    input  wire [ 3: 0] lsu_awid,
    input  wire [ 7: 0] lsu_awlen,
    input  wire [ 2: 0] lsu_awsize,
    input  wire [ 1: 0] lsu_awburst,
    input  wire [ 3: 0] lsu_wid,
    output wire         lsu_wready,
    input  wire         lsu_wvalid,
    input  wire [31: 0] lsu_wdata,
    input  wire [ 3: 0] lsu_wstrb,
    input  wire         lsu_wlast,
    input  wire         lsu_bready,
    output wire         lsu_bvalid,
    output wire [ 1: 0] lsu_bresp,
    output wire [ 3: 0] lsu_bid,
    output wire         lsu_arready,
    input  wire         lsu_arvalid,
    input  wire [31: 0] lsu_araddr,
    input  wire [ 3: 0] lsu_arid,
    input  wire [ 7: 0] lsu_arlen,
    input  wire [ 2: 0] lsu_arsize,
    input  wire [ 1: 0] lsu_arburst,
    input  wire         lsu_rready,
    output wire         lsu_rvalid,
    output wire [ 1: 0] lsu_rresp,
    output wire [31: 0] lsu_rdata,
    output wire         lsu_rlast,
    output wire [ 3: 0] lsu_rid,

    input  wire         awready,
    output wire         awvalid,
    output wire [31: 0] awaddr,
    output wire [ 3: 0] awid,
    output wire [ 7: 0] awlen,
    output wire [ 2: 0] awsize,
    output wire [ 1: 0] awburst,
    output wire [ 3: 0] wid,
    input  wire         wready,
    output wire         wvalid,
    output wire [31: 0] wdata,
    output wire [ 3: 0] wstrb,
    output wire         wlast,
    output wire         bready,
    input  wire         bvalid,
    input  wire [ 1: 0] bresp,
    input  wire [ 3: 0] bid,
    input  wire         arready,
    output wire         arvalid,
    output wire[31: 0]  araddr,
    output wire[ 3: 0]  arid,
    output wire[ 7: 0]  arlen,
    output wire[ 2: 0]  arsize,
    output wire[ 1: 0]  arburst,
    output wire         rready,
    input  wire         rvalid,
    input  wire [ 1: 0] rresp,
    input  wire [31: 0] rdata,
    input  wire         rlast,
    input  wire [ 3: 0] rid
);
localparam IDLE        = 2'b00;
localparam IFU_ACCESS  = 2'b01;
localparam LSU_ACCESS  = 2'b10;

reg [1:0] current_master, next_master;

always @(posedge clk) begin
    if (rst) begin
        current_master <= IDLE;
    end else begin
        case (next_master)
            IDLE      : current_master <= next_master;
            IFU_ACCESS: current_master <= next_master;
            LSU_ACCESS: current_master <= next_master;
            default   : current_master <= current_master;
        endcase
    end
end

always @(*) begin
    case (current_master)
    // 优先处理访存事务
        IDLE       : next_master = (lsu_arvalid || lsu_awvalid) ? LSU_ACCESS  :
                                   (ifu_arvalid)                ? IFU_ACCESS  : IDLE;
        IFU_ACCESS : next_master = (ifu_rvalid && ifu_rready && ifu_rlast) ? IDLE : IFU_ACCESS;
        LSU_ACCESS : next_master = (((lsu_rvalid && lsu_rready && lsu_rlast) || 
                                     (bvalid & bready))) ? IDLE : LSU_ACCESS;
        default: next_master = IDLE;
    endcase
end

    assign ifu_arready       = current_master == IFU_ACCESS ? arready : 'b0;
    assign ifu_rdata         = current_master == IFU_ACCESS ? rdata   : 'b0;
    assign ifu_rresp         = current_master == IFU_ACCESS ? rresp   : 'b0;
    assign ifu_rlast         = current_master == IFU_ACCESS ? rlast   : 'b0;
    assign ifu_rvalid        = current_master == IFU_ACCESS ? rvalid  : 'b0;
    assign ifu_rid           = current_master == IFU_ACCESS ? rid     : 'b0;

    assign lsu_arready       = current_master == LSU_ACCESS ? arready : 'b0;
    assign lsu_rdata         = current_master == LSU_ACCESS ? rdata   : 'b0;
    assign lsu_rresp         = current_master == LSU_ACCESS ? rresp   : 'b0;
    assign lsu_rlast         = current_master == LSU_ACCESS ? rlast   : 'b0;
    assign lsu_rvalid        = current_master == LSU_ACCESS ? rvalid  : 'b0;
    assign lsu_rid           = current_master == LSU_ACCESS ? rid     : 'b0;
    assign lsu_awready       = current_master == LSU_ACCESS ? awready : 'b0;
    assign lsu_wready        = current_master == LSU_ACCESS ? wready  : 'b0;
    assign lsu_bvalid        = current_master == LSU_ACCESS ? bvalid  : 'b0;
    assign lsu_bresp         = current_master == LSU_ACCESS ? bresp   : 'b0;
    assign lsu_bid           = current_master == LSU_ACCESS ? bid     : 'b0;

    assign arvalid = current_master == IFU_ACCESS ? ifu_arvalid : (current_master == LSU_ACCESS) ? lsu_arvalid : 'b0;
    assign araddr  = current_master == IFU_ACCESS ? ifu_araddr  : (current_master == LSU_ACCESS) ? lsu_araddr  : 'b0;
    assign arid    = current_master == IFU_ACCESS ? ifu_arid    : (current_master == LSU_ACCESS) ? lsu_arid    : 'b0;
    assign arlen   = current_master == IFU_ACCESS ? ifu_arlen   : (current_master == LSU_ACCESS) ? lsu_arlen   : 'b0;
    assign arsize  = current_master == IFU_ACCESS ? ifu_arsize  : (current_master == LSU_ACCESS) ? lsu_arsize  : 'b0;
    assign arburst = current_master == IFU_ACCESS ? ifu_arburst : (current_master == LSU_ACCESS) ? lsu_arburst : 'b0;
    assign rready  = current_master == IFU_ACCESS ? ifu_rready  : (current_master == LSU_ACCESS) ? lsu_rready  : 'b0;
    assign awvalid = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_awvalid : 'b0;
    assign awaddr  = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_awaddr  : 'b0;
    assign awid    = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_awid    : 'b0;
    assign awlen   = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_awlen   : 'b0;
    assign awsize  = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_awsize  : 'b0;
    assign awburst = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_awburst : 'b0;
    assign wid     = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_wid     : 'b0;
    assign wvalid  = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_wvalid  : 'b0;
    assign wdata   = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_wdata   : 'b0;
    assign wstrb   = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_wstrb   : 'b0;
    assign wlast   = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_wlast   : 'b0;
    assign bready  = current_master == IFU_ACCESS ? 'b0         : (current_master == LSU_ACCESS) ? lsu_bready  : 'b0;

endmodule
