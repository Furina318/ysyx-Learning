`include "defines.vh"

module lsu (
    input  wire                    clk          ,
    input  wire                    rst          ,
    input  wire                    lsu_en       ,
    output wire                    lsu_ready    ,
    output reg                     lsu_valid    , 

    input  wire [`EX_TO_LS_WD-1:0] ex_to_ls_bus ,
    output wire [            31:0] lsu_data     ,

    output wire [            31:0] dcache_addr  ,
    output wire                    dcache_valid ,
    output wire                    dcache_we    ,
    output wire [            31:0] dcache_wdata ,
    output wire [             3:0] dcache_wstrb ,
    input  wire [            31:0] dcache_rdata ,
    input  wire                    dcache_ready ,

    // stb allocate
    output wire                       stb_alloc_valid,
    output wire [               31:0] stb_alloc_addr ,
    output wire [               31:0] stb_alloc_data ,
    output wire [                3:0] stb_alloc_wstrb,
    input  wire                       stb_ready      ,
    input  wire [`STB_DEPTH_LOG2-1:0] stb_alloc_id   ,
    output wire [`STB_DEPTH_LOG2-1:0] lsu_stb_id     ,

    // stb forwarding
    output wire [            31:0] stb_forward_addr,
    input  wire [             3:0] stb_forward_mask,
    input  wire [            31:0] stb_forward_data,

    // stb drain
    input  wire                    stb_drain_valid,
    input  wire [            31:0] stb_drain_addr ,
    input  wire [            31:0] stb_drain_data ,
    input  wire [             3:0] stb_drain_wstrb,
    output wire                    stb_drain_ready
);

    wire [ 4:0] rd          ;
    wire [ 1:0] lw_lh_lb    ;
    wire [ 1:0] sw_sh_sb    ;
    wire        is_load_sign;
    wire        is_write    ;
    wire        is_read     ;
    wire [31:0] src1        ;
    wire [31:0] src2        ;
    wire [31:0] imm         ;
    assign {
        rd          ,
        lw_lh_lb    ,
        sw_sh_sb    ,
        is_load_sign,
        is_write    ,
        is_read     ,
        src1        ,
        src2        ,
        imm
    } = ex_to_ls_bus;

    wire [31:0] addr        = src1 + imm;
    wire [31:0] addr_off    = addr & 32'b11;
    wire [31:0] align_wdata = src2 << (addr_off << 3);
    
    wire [ 3:0] wstrb = ({4{sw_sh_sb == 2'b00}} & (4'b0001 << addr_off))
                      | ({4{sw_sh_sb == 2'b01}} & (4'b0011 << addr_off))
                      | ({4{sw_sh_sb == 2'b10}} & (4'b1111 << addr_off));
    wire [31:0] wdata = {{8{wstrb[3]}},{8{wstrb[2]}},{8{wstrb[1]}},{8{wstrb[0]}}} & align_wdata;

    assign stb_forward_addr = addr;

    assign stb_alloc_valid = lsu_en & is_write;
    assign stb_alloc_addr  = addr;
    assign stb_alloc_data  = wdata;
    assign stb_alloc_wstrb = wstrb;
    assign lsu_stb_id      = stb_alloc_id; 

    // 引入锁定寄存器：当 Drain 请求已经发出且 DCache 未完成时，锁定仲裁
    reg drain_active;
    always @(posedge clk) begin
        if (rst) begin
            drain_active <= 1'b0;
        end
        else begin
            if (grant_drain && !dcache_ready) begin
                drain_active <= 1'b1;  // 写回操作进入多周期流程，锁定通道
            end
            else if (dcache_ready) begin
                drain_active <= 1'b0;  // DCache 响应完成，解锁
            end
        end
    end

    wire exu_load_req = lsu_en & is_read;

    // 仲裁核心：如果处于 Drain 锁定状态，必须强制保持；否则，Load 具有更高优先级
    wire grant_drain  = drain_active || (stb_drain_valid && !exu_load_req); 
    wire grant_load   = exu_load_req && !drain_active;

    // 只有在被选中（grant_drain）时，D-cache的回应才属于STB
    assign stb_drain_ready = grant_drain && dcache_ready;

    assign dcache_valid = grant_load || grant_drain;
    assign dcache_we    = grant_drain; // Load 不会产生写使能，只有 STB Drain 才是写操作
    assign dcache_addr  = grant_load ? addr : stb_drain_addr;
    assign dcache_wdata = stb_drain_data;
    assign dcache_wstrb = grant_drain ? stb_drain_wstrb : 4'b0;

    wire [31:0] dcache_rdata_final;
    assign dcache_rdata_final[ 7: 0] = stb_forward_mask[0] ? stb_forward_data[ 7: 0] : dcache_rdata[ 7: 0];
    assign dcache_rdata_final[15: 8] = stb_forward_mask[1] ? stb_forward_data[15: 8] : dcache_rdata[15: 8];
    assign dcache_rdata_final[23:16] = stb_forward_mask[2] ? stb_forward_data[23:16] : dcache_rdata[23:16];
    assign dcache_rdata_final[31:24] = stb_forward_mask[3] ? stb_forward_data[31:24] : dcache_rdata[31:24];    

    wire [31:0] lsu_rdata = dcache_rdata_final >> (addr_off << 3);

    reg [31:0] rdata_processed;
    always @(*) begin
        case (lw_lh_lb)
            2'b00: rdata_processed = is_load_sign ? {{24{lsu_rdata[ 7]}}, lsu_rdata[ 7:0]} : {24'b0, lsu_rdata[ 7:0]};
            2'b01: rdata_processed = is_load_sign ? {{16{lsu_rdata[15]}}, lsu_rdata[15:0]} : {16'b0, lsu_rdata[15:0]};
            default: rdata_processed = lsu_rdata;
        endcase
    end

    // Load 指令: 等待自己(grant_load)被响应
    // Store 指令: 只需要 STB 还有空位(stb_ready)即可
    assign lsu_ready = (!lsu_en)  ? 1'b1 : 
                       (is_write) ? stb_ready : 
                       (is_read)  ? (grant_load && dcache_ready) : 1'b1;
                       
    assign lsu_data  = is_read ? rdata_processed : addr;

    always @(posedge clk) begin
        if (rst) begin
            lsu_valid <= 1'b0;
        end
        else begin
            if (lsu_en && ((is_write && stb_ready) || (is_read && grant_load && dcache_ready))) begin
                lsu_valid <= 1'b1;
            end
            else if (!lsu_en) begin
                lsu_valid <= 1'b1;
            end
            else begin
                lsu_valid <= 1'b0;
            end
        end
    end

endmodule
