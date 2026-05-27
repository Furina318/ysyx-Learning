`include "defines.vh"
module lsu #(
    parameter ID_WIDTH      = 4
) (
    input  wire                clk          ,
    input  wire                rst          ,
    // to exu
    input  wire                issue_valid  ,
    output wire                lsu_free     ,
    input  wire [        31:0] pc           ,
    input  wire [        31:0] imm          ,
    input  wire [        31:0] rs1_data     ,
    input  wire [        31:0] rs2_data     ,
    input  wire                gpr_we       ,
    input  wire [ID_WIDTH-1:0] inst_id      ,
    input  wire [         5:0] phy_rd       ,
    input  wire                bit_sext     ,
    input  wire                half_sext    ,
    input  wire                is_write     ,
    input  wire                is_read      ,
    input  wire [        2: 0] lw_lh_lb     ,
    input  wire [        2: 0] sw_sh_sb     ,
    input  wire                lsu_cmt      , // 该指令被exu提交了
    output wire                lsu_done     ,
    output wire [       31: 0] lsu_ld_data  ,
    output wire [       31: 0] lsu_pc       ,
    output wire [        5: 0] lsu_phy_rd   ,
    output wire [ID_WIDTH-1:0] lsu_inst_id  ,
    output wire                lsu_gpr_we   ,

    output wire [       31: 0] dcache_addr  ,
    output wire                dcache_valid ,
    output wire                dcache_we    ,
    output wire [       31: 0] dcache_wdata ,
    output wire [        3: 0] dcache_wstrb ,
    input  wire [       31: 0] dcache_rdata ,
    input  wire                dcache_ready

); 
    wire is_lsu_inst    = is_read | is_write;
    reg                 occupid       ;
    reg                 lsu_finish    ;
    reg  [31:0]         pc_r          ;
    reg  [31:0]         imm_r         ;
    reg  [31:0]         rs1_data_r    ;
    reg  [31:0]         rs2_data_r    ;
    reg                 gpr_we_r      ;
    reg  [ID_WIDTH-1:0] inst_id_r     ;  
    reg  [ 5:0]         phy_rd_r      ;
    reg                 bit_sext_r    ;
    reg                 half_sext_r   ;
    reg                 is_write_r    ;
    reg                 is_read_r     ;
    reg  [ 2:0]         lw_lh_lb_r    ;
    reg  [ 2:0]         sw_sh_sb_r    ;
    always @(posedge clk  or posedge rst) begin
        if(rst) begin
            occupid        <= 'b0;
            lsu_finish     <= 'b0;
            is_write_r     <= 'b0;
            is_read_r      <= 'b0;
        end else begin
            lsu_finish     <= occupid & dcache_ready ? 1'b1 : lsu_finish;
            if (issue_valid & ~occupid) begin
                occupid        <= is_lsu_inst ;
                pc_r           <= pc          ;
                imm_r          <= imm         ;
                rs1_data_r     <= rs1_data    ;
                rs2_data_r     <= rs2_data    ;
                gpr_we_r       <= gpr_we      ;
                inst_id_r      <= inst_id     ;
                phy_rd_r       <= phy_rd      ;
                bit_sext_r     <= bit_sext    ;
                half_sext_r    <= half_sext   ;
                is_write_r     <= is_write    ;
                is_read_r      <= is_read     ;
                lw_lh_lb_r     <= lw_lh_lb    ;
                sw_sh_sb_r     <= sw_sh_sb    ;
            end else if (lsu_cmt) begin
                occupid        <= 'b0;
                lsu_finish     <= 'b0;
                is_write_r     <= 'b0;
                is_read_r      <= 'b0;
            end
        end
    end

    wire [31:0] lsu_addr;
    wire [31:0] lsu_st_data;
    assign      lsu_addr    = rs1_data_r + imm_r;
    assign      lsu_st_data = rs2_data_r;

    wire [31:0] addr_off = lsu_addr & 32'b11;
    wire [31:0] aligned_wdata = lsu_st_data << (addr_off << 3);

    wire        half_op  ;
    wire        word_op  ;
    assign half_op  = lw_lh_lb_r[1] | sw_sh_sb_r[1];
    assign word_op  = lw_lh_lb_r[2] | sw_sh_sb_r[2];

    wire         uncache_en;

    assign dcache_addr       = lsu_addr;
    assign dcache_valid      = (is_read_r | is_write_r) && ~lsu_finish;
    assign dcache_we         = is_write_r;
    assign dcache_wstrb      = ({4{sw_sh_sb_r[0]}} & (4'b0001 << addr_off))
                             | ({4{sw_sh_sb_r[1]}} & (4'b0011 << addr_off))
                             | ({4{sw_sh_sb_r[2]}} & (4'b1111 << addr_off));
    assign dcache_wdata      = {{8{dcache_wstrb[3]}},{8{dcache_wstrb[2]}},{8{dcache_wstrb[1]}},{8{dcache_wstrb[0]}}} & aligned_wdata;

    wire [31: 0] rdata;
    reg  [31: 0] rdata_temp;
    assign rdata = dcache_rdata >> (addr_off << 3);
    always @(*) begin
        case (lw_lh_lb_r)
            3'b001:  begin rdata_temp = bit_sext_r  ? {{24{rdata[ 7]}}, rdata[ 7:0]} : {24'b0, rdata[ 7:0]}; end
            3'b010:  begin rdata_temp = half_sext_r ? {{16{rdata[15]}}, rdata[15:0]} : {16'b0, rdata[15:0]}; end
            default: begin rdata_temp = rdata; end
        endcase
    end

    assign lsu_free       = ~(occupid | is_lsu_inst);
    assign lsu_done       = occupid & dcache_ready;
    assign lsu_ld_data    = rdata_temp;
    assign lsu_pc         = pc_r;
    assign lsu_phy_rd     = phy_rd_r;
    assign lsu_inst_id    = inst_id_r;
    assign lsu_gpr_we     = gpr_we_r;

endmodule
