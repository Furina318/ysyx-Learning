`include "/home/furina/ysyx-workbench/npc/vsrc/defines.v"
module IF (
    input         clk,
    input         reset,
    input  [31:0] branch_target,
    input         pc_src,
    input         id_ready,  // 来自 ID 的 ready
    input         wb_valid,//wb写回信号有效
    output reg    if_ready,//if就绪
    output reg    if_valid,  // 指令是否有效
    output reg [31:0] pc,
    output reg [31:0] instr,
    output reg        if_access_fault,//异常取指
    output reg [31:0] if_fault_addr//异常地址
);
    
    //状态机定义(IDLE等待上游valid信号, BUSY处理, STALL等待下游ready信号)
    typedef enum {IDLE, READ_ADDR, READ_DATA, STALL} state_t;
    state_t state, next_state;
    wire [1:0] rresp;

    //======ifu_sram接口======
    //AR channel
    reg  [31:0] sram_araddr;
    reg         sram_arvalid;
    wire        sram_arready;
    //R channel
    wire [31:0] sram_rdata;
    wire        sram_rvalid;
    reg         sram_rready;
    wire [1:0]  sram_rresp;
    //AW channel(not used)仅声明
    reg  [31:0] sram_awaddr;
    reg         sram_awvalid;
    wire        sram_awready;
    //W channel(not used)仅声明
    reg  [31:0] sram_wdata;
    reg  [3:0]  sram_wstrb;
    reg         sram_wvalid;
    wire        sram_wready;
    //B channel(not used)仅声明
    wire [1:0]  sram_bresp;
    wire        sram_bvalid;
    reg         sram_bready;

    ifu_sram ifu_sram_inst(
                .clk(clk),
                .reset(reset),
                //AR channel
                .araddr(sram_araddr),
                .arvalid(sram_arvalid),
                .arready(sram_arready),
                //R channel
                .rdata(sram_rdata),
                .rvalid(sram_rvalid),
                .rready(sram_rready),
                .rresp(sram_rresp),
                //AW channel(not used)仅声明
                .awaddr(sram_awaddr),
                .awvalid(sram_awvalid),
                .awready(sram_awready),
                //W channel(not used)仅声明
                .wdata(sram_wdata),
                .wstrb(sram_wstrb),
                .wvalid(sram_wvalid),
                .wready(sram_wready),
                //B channel(not used)仅声明
                .bresp(sram_bresp),
                .bvalid(sram_bvalid),
                .bready(sram_bready)
    );

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 32'h8000_0000;
            sram_araddr <= 32'h8000_0000;

            if_valid <= 1'b0;
            if_ready <= 1'b1;
            state = READ_ADDR;
            next_state = READ_ADDR;
            // delay_counter <= 2'b00;
            sram_arvalid <= 1'b1;

            sram_rready <= 1'b1;
            if_access_fault <= 1'b0;
            if_fault_addr <= 32'h0;
        end else begin
            state = next_state;
            case (state)
                IDLE: begin
                    if_ready <= 1'b1;
                    if_valid <= 1'b0;
                    sram_arvalid <= 1'b0;
                    sram_rready <= 1'b0;
                    // if(wb_valid) begin
                        pc <= pc_src ? branch_target : pc + 4; //更新pc
                        sram_araddr <= pc_src ? branch_target : pc + 4;
                        sram_arvalid <= 1'b1;
                        next_state = READ_ADDR;
                    // end
                    // else begin
                    //     next_state = IDLE;
                    // end
                end
                READ_ADDR: begin
                    if_ready <= 1'b0;
                    if_valid <= 1'b0;
                    if(sram_arready && sram_arvalid) begin
                        sram_rready <= 1'b1;
                        next_state  = READ_DATA;
                    end 
                    else begin
                        next_state = READ_ADDR;
                    end
                end
                READ_DATA: begin
                    if_valid <= 1'b0;
                    if_ready <= 1'b0;
                    if(sram_rvalid && sram_rready) begin
                        sram_arvalid <= 1'b0;
                        instr <= sram_rdata;
                        if(sram_rresp != `OKAY) begin
                            if_access_fault <= 1'b1;
                            if_fault_addr <= sram_araddr;
                        end 
                        else begin
                            if_access_fault <= 1'b0;
                            if_fault_addr <= 32'h0;
                        end
                        next_state = STALL;
                    end 
                    else begin
                        next_state = READ_DATA;
                    end
                end
                STALL: begin
                    if_ready <= 1'b0;
                    if_valid <= 1'b1;
                    sram_arvalid <= 1'b0;
                    if(id_ready) begin
                        next_state = IDLE;
                    end 
                    else begin
                        next_state = STALL;
                    end
                end
                default: begin
                    if_ready <= 1'b0;
                    if_valid <= 1'b0;
                    sram_arvalid <= 1'b0;
                    sram_rready <= 1'b0;
                    next_state = IDLE;
                end
            endcase
        end
    end

    always @(posedge clk) begin
        $display("\033[36m[IF] PC = 0x%h | instr = 0x%h\033[0m", pc, instr);
    //     $display("\033[35m[IF] state=%d | pc=0x%h | instr=0x%h | if_valid=%b | if_ready=%b\033[0m",
    //              state, pc, instr, if_valid, if_ready);
    end

    always @(posedge clk) begin
        assert(!(sram_arvalid && sram_arready && state != READ_ADDR)) else $error("[IF] AR channel handshake in wrong state");
        assert(!(sram_rvalid && sram_rready && state != READ_DATA)) else $error("[IF] R channel handshake in wrong state");
    end
endmodule