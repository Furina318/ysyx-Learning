`include "/home/furina/ysyx-workbench/npc/soc-vsrc/defines.v"
module IF (
    input         clk,
    input         reset,
    input  [31:0] branch_target,
    input         pc_src,
    input         id_ready,
    input         wb_valid,
    // input         flush,          //预测错误冲刷信号
    // input  [31:0] actual_target,  //实际跳转目标（预测错误时使用）
    // input  [1:0]  ghr,            //全局历史寄存器
    output reg    if_ready,
    output reg    if_valid,
    output reg [31:0] pc,
    output reg [31:0] instr,
    output reg        if_access_fault,
    output reg [31:0] if_fault_addr,
    // output reg        predict_taken,    // 预测是否跳转
    // output reg [31:0] predict_target,   // 预测跳转目标

    output reg [31:0] sram_araddr,
    output reg        sram_arvalid,
    input wire        sram_arready,
    input wire [31:0] sram_rdata,
    input wire        sram_rvalid,
    output reg        sram_rready,
    input wire [1:0]  sram_rresp,
    output reg [31:0] sram_awaddr,
    output reg        sram_awvalid,
    input wire        sram_awready,
    output reg [31:0] sram_wdata,
    output reg [3:0]  sram_wstrb,
    output reg        sram_wvalid,
    input wire        sram_wready,
    input wire [1:0]  sram_bresp,
    input wire        sram_bvalid,
    output reg        sram_bready
);
    typedef enum {IDLE, READ_ADDR, READ_DATA, STALL} state_t;
    state_t state, next_state;
    // wire [1:0] rresp;

    // // IFU SRAM 接口
    // //AR channel
    // reg  [31:0] sram_araddr;
    // reg         sram_arvalid;
    // wire        sram_arready;
    // //R channel
    // wire [31:0] sram_rdata;
    // wire        sram_rvalid;
    // reg         sram_rready;
    // wire [1:0]  sram_rresp;
    // //AW channel(not used)仅声明
    // reg  [31:0] sram_awaddr;
    // reg         sram_awvalid;
    // wire        sram_awready;
    // //W channel(not used)仅声明
    // reg  [31:0] sram_wdata;
    // reg  [3:0]  sram_wstrb;
    // reg         sram_wvalid;
    // wire        sram_wready;
    // //B channel(not used)仅声明
    // wire [1:0]  sram_bresp;
    // wire        sram_bvalid;
    // reg         sram_bready;

    // SRAM isram(
    //             .clk(clk),
    //             .reset(reset),
    //             //AR channel
    //             .araddr(sram_araddr),
    //             .arvalid(sram_arvalid),
    //             .arready(sram_arready),
    //             //R channel
    //             .rdata(sram_rdata),
    //             .rvalid(sram_rvalid),
    //             .rready(sram_rready),
    //             .rresp(sram_rresp),
    //             //AW channel(not used)仅声明
    //             .awaddr(32'h0),
    //             .awvalid(1'b0),
    //             .awready(),
    //             //W channel(not used)仅声明
    //             .wdata(32'h0),
    //             .wstrb(4'b0),
    //             .wvalid(1'b0),
    //             .wready(),
    //             //B channel(not used)仅声明
    //             .bresp(),
    //             .bvalid(),
    //             .bready(1'b0)
    // );
    always @(posedge clk) begin
        sram_awaddr <= 0;
        sram_awvalid <= 0;
        sram_wdata <= 0;
        sram_wstrb <= 0;
        sram_wvalid <= 0;
        sram_bready <= 0;
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= `RESET_FLASH_PC;
            sram_araddr <= `RESET_FLASH_PC;

            if_valid <= 1'b0;
            if_ready <= 1'b1;
            state <= READ_ADDR;
            // next_state = READ_ADDR;
            // delay_counter <= 2'b00;
            sram_arvalid <= 1'b1;

            sram_rready <= 1'b1;
            if_access_fault <= 1'b0;
            if_fault_addr <= 32'h0;
        end else begin
            // state = next_state;
            case (state)
                IDLE: begin
                    if_ready <= 1'b1;
                    if_valid <= 1'b0;
                    // delay_counter <= 2'b10;
                    sram_arvalid <= 1'b0;
                    sram_rready <= 1'b0;
                    if (wb_valid) begin
                        pc <= pc_src ? branch_target : pc + 4;
                        sram_araddr <= pc_src ? branch_target : pc + 4;
                        sram_arvalid <= 1'b1;
                        state <= READ_ADDR;
                    end
                    else begin
                        state <= IDLE;
                    end
                end
                READ_ADDR: begin
                    if_ready <= 1'b0;
                    if_valid <= 1'b0;
                    if(sram_arready && sram_arvalid) begin
                        sram_arvalid <= 1'b0;
                        sram_rready <= 1'b1;
                        state  <= READ_DATA;
                    end 
                    else begin
                        state <= READ_ADDR;
                    end
                end
                READ_DATA: begin
                    if_valid <= 1'b0;
                    if_ready <= 1'b0;
                    if(sram_rvalid && sram_rready) begin
                        // sram_arvalid <= 1'b0;
                        sram_rready <= 1'b0;
                        instr <= sram_rdata;
                        if(sram_rresp != `OKAY) begin
                            if_access_fault <= 1'b1;
                            if_fault_addr <= sram_araddr;
                        end 
                        else begin
                            if_access_fault <= 1'b0;
                            if_fault_addr <= 32'h0;
                        end
                        state <= STALL;
                    end 
                    else begin
                        state <= READ_DATA;
                    end
                end
                STALL: begin
                    if_ready <= 1'b0;
                    if_valid <= 1'b1; 
                    sram_arvalid <= 1'b0;
                    if(id_ready) begin
                        state <= IDLE;
                    end 
                    else begin
                        state <= STALL;
                    end
                end
                default: begin
                    if_ready <= 1'b0;
                    if_valid <= 1'b0;
                    sram_arvalid <= 1'b0;
                    sram_rready <= 1'b0;
                    state <= IDLE;
                end
            endcase
        end
    end

    always @(posedge clk) begin
        assert(!(sram_arvalid && sram_arready && state != READ_ADDR)) else $error("[IF] AR channel handshake in wrong state");
        assert(!(sram_rvalid && sram_rready && state != READ_DATA)) else $error("[IF] R channel handshake in wrong state");
    end
endmodule