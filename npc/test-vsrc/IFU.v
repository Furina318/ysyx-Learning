module IFU (
    input         clock,
    input         reset,
    // IFU to IDU interface
    output        ifu_idu_data_valid,
    input         ifu_idu_data_ready,
    output [31:0] ifu_idu_data_inst,
    output [31:0] ifu_idu_data_pc,
    // EXU to IFU interface
    input         exu_ifu_raw_exu_valid,
    input  [31:0] exu_ifu_raw_dnpc,
    input         exu_ifu_raw_isRAW_control,
    // AXI Master interface
    output [31:0] axi_araddr,
    input         axi_arready,
    output        axi_arvalid,
    input  [31:0] axi_rdata,
    input         axi_rvalid,
    output        axi_rready,
    output        axi_awvalid,
    output [31:0] axi_awaddr,
    output [3:0]  axi_awid,
    output [7:0]  axi_awlen,
    output [2:0]  axi_awsize,
    output [1:0]  axi_awburst,
    output        axi_wvalid,
    output [31:0] axi_wdata,
    output [3:0]  axi_wstrb,
    output        axi_wlast,
    output        axi_bready,
    output [3:0]  axi_arid,
    output [7:0]  axi_arlen,
    output [2:0]  axi_arsize,
    output [1:0]  axi_arburst
);

// 添加参数声明
parameter useNPCSim = 0;
parameter useCounter = 1;  // 新增useCounter参数

// Configuration parameters
localparam NPC_SIM = 32'h80000000;
localparam NPC_NORMAL = 32'h30000000;

// Internal registers
reg [31:0] PC;
reg [31:0] finst;
reg [2:0]  state;

// State machine definition
localparam 
    s_idle                 = 3'd0,
    s_wait_rvalid          = 3'd1,
    s_wait_ready           = 3'd2,
    s_wait_control_arready = 3'd3,
    s_begin                = 3'd4,
    s_wait_exu_valid       = 3'd5,
    s_wait_arready         = 3'd6;

// Internal signals
wire [31:0] npc = useNPCSim ? NPC_SIM : NPC_NORMAL;
wire [31:0] araddr;
wire [31:0] predaddr = PC + 32'h4;
reg  [2:0]  next_state;

// 状态转移逻辑优化
always @(*) begin
    case (state)
        s_begin: 
            next_state = axi_arready ? s_wait_exu_valid : s_begin;
        
        s_wait_exu_valid: 
            next_state = exu_ifu_raw_exu_valid ? 
                (axi_arready ? s_wait_rvalid : s_wait_arready) : s_wait_exu_valid;
        
        s_wait_arready: 
            next_state = axi_arready ? s_wait_rvalid : s_wait_arready;
        
        s_idle: 
            next_state = axi_arready ? 
                (axi_rvalid ? s_wait_ready : s_wait_rvalid) : s_idle;
        
        s_wait_rvalid: begin
            if (axi_rvalid) begin
                next_state = exu_ifu_raw_isRAW_control ? 
                    s_wait_control_arready : 
                    (ifu_idu_data_ready ? s_idle : s_wait_ready);
            end else begin
                next_state = s_wait_rvalid;
            end
        end
        
        s_wait_control_arready: 
            next_state = axi_arready ? s_wait_exu_valid : s_wait_control_arready;
        
        s_wait_ready: 
            next_state = exu_ifu_raw_isRAW_control ? 
                s_wait_control_arready : 
                (ifu_idu_data_ready ? s_idle : s_wait_ready);
        
        default: 
            next_state = s_idle;
    endcase
end

// 状态寄存器更新
always @(posedge clock) begin
    if (reset) 
        state <= s_begin;
    else 
        state <= next_state;
end

// PC更新逻辑优化
always @(posedge clock) begin
    if (reset) begin
        PC <= npc;
        finst <= 32'h0;
    end else begin
        case (1'b1)
            exu_ifu_raw_exu_valid && (state == s_wait_exu_valid): 
                PC <= exu_ifu_raw_dnpc;
            
            (state == s_wait_control_arready) && axi_arready: 
                PC <= exu_ifu_raw_dnpc;
            
            ((state == s_wait_ready || (state == s_wait_rvalid && axi_rvalid)) 
             && ifu_idu_data_ready): 
                PC <= predaddr;
            
            default: 
                PC <= PC;
        endcase
        
        if (axi_rvalid)
            finst <= axi_rdata;
    end
end

// AXI地址生成
assign araddr = reset ? npc : 
               (state == s_begin) ? PC :
               (state == s_wait_control_arready) ? exu_ifu_raw_dnpc :
               ((state == s_wait_exu_valid) && exu_ifu_raw_exu_valid) ? exu_ifu_raw_dnpc : PC;

// IFU-IDU接口逻辑
assign ifu_idu_data_valid = 
    ((state == s_wait_ready || (state == s_wait_rvalid && axi_rvalid && ifu_idu_data_ready)) 
     && !exu_ifu_raw_isRAW_control) ||
    (state == s_wait_control_arready && axi_rvalid && ifu_idu_data_ready) ||
    (state == s_wait_exu_valid && axi_rvalid);

assign ifu_idu_data_inst = (axi_rvalid && ifu_idu_data_ready) ? axi_rdata : finst;
assign ifu_idu_data_pc = PC;

// AXI控制信号
assign axi_araddr  = araddr;
assign axi_arvalid = !reset && (
    state == s_idle || 
    state == s_begin || 
    state == s_wait_control_arready || 
    (state == s_wait_exu_valid && exu_ifu_raw_exu_valid) || 
    state == s_wait_arready
);

assign axi_rready  = (state == s_idle) || 
                    (state == s_wait_rvalid) || 
                    (state == s_wait_exu_valid) || 
                    (state == s_wait_control_arready);

// 固定AXI写信号（未使用）
assign axi_awvalid = 1'b0;
assign axi_awaddr  = 32'h0;
assign axi_awid    = 4'h1;
assign axi_awlen   = 8'h0;
assign axi_awsize  = 3'h2;
assign axi_awburst = 2'h1;
assign axi_wvalid  = 1'b0;
assign axi_wdata   = 32'h0;
assign axi_wstrb   = 4'b0011;
assign axi_wlast   = 1'b0;
assign axi_bready  = 1'b0;

// AXI读通道配置
assign axi_arid    = 4'h1;
assign axi_arlen   = 8'h0;
assign axi_arsize  = 3'h2;
assign axi_arburst = 2'h1;

// 性能计数器实例化
generate
if (useCounter) begin : gen_counter
    IFU_COUNTER ifu_counter (
        .clock(clock),
        .state(state),
        .araddr(axi_araddr),
        .arvalid(axi_arvalid)
    );
end
endgenerate

endmodule