module SRAM (
    input  wire         clk     ,
    input  wire         rst     ,

    output reg          awready ,
    input  wire         awvalid ,
    input  wire [31: 0] awaddr  ,
    input  wire [ 3: 0] awid    ,
    input  wire [ 7: 0] awlen   ,
    input  wire [ 2: 0] awsize  ,
    input  wire [ 1: 0] awburst ,

    output reg          wready  ,
    input  wire         wvalid  ,
    input  wire [31: 0] wdata   ,
    input  wire [ 3: 0] wstrb   ,
    input  wire         wlast   ,

    input  wire         bready  ,
    output reg          bvalid  ,
    output reg  [ 1: 0] bresp   ,
    output reg  [ 3: 0] bid     ,

    output reg          arready ,
    input  wire         arvalid ,
    input  wire [31: 0] araddr  ,
    input  wire [ 3: 0] arid    ,
    input  wire [ 7: 0] arlen   ,
    input  wire [ 2: 0] arsize  ,
    input  wire [ 1: 0] arburst ,
    
    input  wire         rready  ,
    output reg          rvalid  ,
    output reg  [ 1: 0] rresp   ,
    output reg  [31: 0] rdata   ,
    output reg          rlast   ,
    output reg  [ 3: 0] rid
);

    localparam IDLE         = 1'b0;
    localparam BUSY         = 1'b1;
    reg          state, next_state;
    reg  [31: 0] read_addr, write_addr;
    reg          is_read_req, is_write_req;
    reg  [ 3: 0] read_id, write_id;

    // 读/写突发计数器: rd_cnt/wr_cnt 装载自 arlen/awlen,
    // 表示"除首拍外还需传输的数据拍数"(AW/AR 握手拍即第 0 个数据拍)。
    // 仅支持 INCR 突发(地址每拍 +4), 与 dcache/icache 的用法一致。
    reg  [ 7: 0] rd_cnt;
    reg  [ 7: 0] wr_cnt;

    `ifdef __ICARUS__
        localparam SRAM_DEPTH = 8 * 1024 * 1024;
        reg [7:0]  sram_array [0:SRAM_DEPTH-1]; 

        wire [31:0] sram_addr_r  = {read_addr[31:2], 2'b0} - 32'h80000000;
        wire [31:0] sram_addr_w  = {write_addr[31:2], 2'b0} - 32'h80000000;
        wire [7:0] b0, b1, b2, b3;
        assign b0 = sram_array[sram_addr_r + 0];
        assign b1 = sram_array[sram_addr_r + 1];
        assign b2 = sram_array[sram_addr_r + 2];
        assign b3 = sram_array[sram_addr_r + 3];

        wire [7:0] byte0, byte1, byte2, byte3;
        wire [31:0] init_inst;

        assign byte0 = sram_array[0];
        assign byte1 = sram_array[1];
        assign byte2 = sram_array[2];
        assign byte3 = sram_array[3];
        assign init_inst = {byte3, byte2, byte1, byte0};

        localparam TARGET_PC1 = 32'h30000000;
        localparam INSTR1     = 32'h800000b7;      // lui ra 0x80000
        localparam TARGET_PC2 = 32'h30000004;
        localparam INSTR2     = 32'h00008067;      // jalr ra
        //填充4条指令
        localparam TARGET_PC3 = 32'h30000008;
        localparam TARGET_PC4 = 32'h3000000c;

        wire [31:0] sram_rdata = {b3, b2, b1, b0};
        wire [31:0] final_rdata;
        assign final_rdata = (read_addr == TARGET_PC1) ? INSTR1 :
                             (read_addr == TARGET_PC2) ? INSTR2 :
                             (read_addr == TARGET_PC3) ? INSTR1 :
                             (read_addr == TARGET_PC4) ? INSTR1 :
                              sram_rdata;

        `ifndef MEM_INIT_PATH
            `define MEM_INIT_PATH "../build/iverilog/mem_init.hex"
        `endif

        initial begin
            integer i;
            for (i = 0; i < SRAM_DEPTH; i = i + 1) begin
                sram_array[i] = 8'h00;
            end
            $readmemh(`MEM_INIT_PATH, sram_array);
        end

        always @(*) begin
            case (state)
                IDLE: next_state = (arvalid | awvalid) ? BUSY : IDLE;      
                BUSY: next_state = ((is_read_req && rlast && rvalid) | (is_write_req && bready && bvalid)) ? IDLE : BUSY; 
                default: next_state = IDLE;
            endcase
        end



        always @(posedge clk or posedge rst) begin
            if (rst) begin
                state   <= IDLE;    
                arready <= 1'b1;
                rvalid  <= 1'b0;
                rresp   <= 2'b00;
                rdata   <= 32'h0;
                rlast   <= 1'b0;
                rid     <= 4'h0;
                awready <= 1'b0;
                wready  <= 1'b0;
                bvalid  <= 1'b0;
                bresp   <= 2'b00;
                bid     <= 4'h0;
                is_read_req  <= 1'b0;
                is_write_req <= 1'b0;
                read_addr  <= 32'h0;
                write_addr <= 32'h0;
                read_id    <= 4'h0;
                write_id   <= 4'h0;
                rd_cnt     <= 8'h0;
                wr_cnt     <= 8'h0;
            end else begin
                state <= next_state;
                case (state)
                    IDLE: begin
                        rvalid <= 1'b0;
                        bvalid <= 1'b0;
                        rlast  <= 1'b0;
                        is_read_req  <= 1'b0;
                        is_write_req <= 1'b0;
                        wready <= 1'b0;
                        
                        if (arvalid) begin
                            read_addr   <= araddr;
                            read_id     <= arid;
                            arready     <= 1'b1;
                            is_read_req <= 1'b1;
                            rd_cnt      <= arlen;
                        end else if (awvalid & wvalid) begin
                            // AW+W 同拍到达: 只锁存, 数据拍在 BUSY 收 (wready 必须为 1
                            // 供主端完成 AW+W 握手, 否则 dcache 的写握手永不成立会死锁)
                            write_addr <= awaddr;
                            write_id   <= awid;
                            awready    <= 1'b1;
                            wready     <= 1'b1;
                            is_write_req <= 1'b1;
                            wr_cnt     <= awlen;
                        end
                    end
                    BUSY: begin
                        if (is_read_req) begin
                            if (rd_cnt != 8'h0) begin
                                // 突发读: 每拍返回一个 32 位字, rlast 在最后一拍
                                // (地址每拍无条件推进, 保持与原实现一致: 首拍 rvalid 刚拉高,
                                //  握手不成立不递减, 地址仍前进, 保证数据/地址对齐)
                                rvalid <= 1'b1;
                                rresp  <= 2'b00;
                                rdata  <= final_rdata;
                                rlast  <= (rd_cnt == 8'h1);
                                read_addr <= read_addr + 32'd4;
                                rid    <= read_id;
                                if (rvalid & rready) begin
                                    if (rd_cnt == 8'h0) begin
                                        // 多出的清理拍 (最后一拍 rd_cnt==1 时 rlast=1 且 rvalid 保持)
                                        rvalid <= 1'b0;
                                        rlast  <= 1'b0;
                                    end
                                    else begin
                                        rd_cnt <= rd_cnt - 8'd1;
                                    end
                                end
                            end
                            else begin
                                // 单拍读
                                rvalid <= 1'b1;
                                rresp  <= 2'b00;
                                rdata  <= final_rdata;
                                rlast  <= 1'b1;
                                rid    <= read_id;
                                if (rvalid & rready) begin
                                    rvalid <= 1'b0;
                                    rlast  <= 1'b0;
                                end
                            end
                        end 
                        else if (is_write_req) begin
                            if (wvalid & wready) begin
                                // 一个有效数据拍: 按 wstrb 逐字节写入
                                if (wstrb[0]) sram_array[sram_addr_w + 0] <= wdata[7:0];
                                if (wstrb[1]) sram_array[sram_addr_w + 1] <= wdata[15:8];
                                if (wstrb[2]) sram_array[sram_addr_w + 2] <= wdata[23:16];
                                if (wstrb[3]) sram_array[sram_addr_w + 3] <= wdata[31:24];
                                if (wr_cnt == 8'h0) begin
                                    // 最后一拍 (共 awlen+1 拍): 完成并停止接收
                                    // (dcache 的 wlast 晚一拍, 多余拍因 wready=0 被拒, 不会误写)
                                    wready <= 1'b0;
                                    bvalid <= 1'b1;
                                    bresp  <= 2'b00;
                                    bid    <= write_id;
                                end
                                else begin
                                    wr_cnt     <= wr_cnt - 8'd1;
                                    write_addr <= write_addr + 32'd4;
                                end
                            end
                            if (bvalid & bready) begin
                                awready <= 1'b0;
                                bvalid  <= 1'b0;
                            end
                        end
                    end
                endcase
            end
        end
    `else
        import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
        import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);
        always @(*) begin
            case (state)
                IDLE: next_state = (arvalid | awvalid) ? BUSY : IDLE;      
                BUSY: next_state = ((is_read_req && rlast && rvalid) | (is_write_req && bready && bvalid)) ? IDLE : BUSY; 
                default: next_state = IDLE;
            endcase
        end


        always @(posedge clk or posedge rst) begin
            if (rst) begin
                state   <= IDLE;    
                arready <= 1'b1;
                rvalid  <= 1'b0;
                rresp   <= 2'b00;
                rdata   <= 32'h0;
                rlast   <= 1'b0;
                rid     <= 4'h0;
                awready <= 1'b0;
                wready  <= 1'b0;
                bvalid  <= 1'b0;
                bresp   <= 2'b00;
                bid     <= 4'h0;
                is_read_req  <= 1'b0;
                is_write_req <= 1'b0;
                read_addr    <= 32'h0;
                write_addr   <= 32'h0;
                read_id      <= 4'h0;
                write_id     <= 4'h0;
                rd_cnt       <= 8'h0;
                wr_cnt       <= 8'h0;
            end else begin
                state <= next_state;
                case (state)
                    IDLE: begin
                        rvalid <= 1'b0;
                        bvalid <= 1'b0;
                        rlast  <= 1'b0;
                        is_read_req  <= 1'b0;
                        is_write_req <= 1'b0;
                        wready <= 1'b0;
                        if (arvalid) begin
                            read_addr   <= araddr;
                            read_id     <= arid;
                            arready     <= 1'b1;
                            is_read_req <= 1'b1;
                            rd_cnt      <= arlen;
                        end else if (awvalid & wvalid) begin
                            // AW+W 同拍到达: 只锁存, 数据拍在 BUSY 收 (wready 必须为 1
                            // 供主端完成 AW+W 握手, 否则 dcache 的写握手永不成立会死锁)
                            write_addr   <= awaddr;
                            write_id     <= awid;
                            awready      <= 1'b1;
                            wready       <= 1'b1;
                            is_write_req <= 1'b1;
                            wr_cnt       <= awlen;
                        end
                    end
                    BUSY: begin
                        if (is_read_req) begin
                            if (rd_cnt != 8'h0) begin
                                // 突发读: 每拍返回一个 32 位字, rlast 在最后一拍
                                // (地址每拍无条件推进, 保持与原实现一致: 首拍 rvalid 刚拉高,
                                //  握手不成立不递减, 地址仍前进, 保证数据/地址对齐)
                                rvalid <= 1'b1;
                                rresp  <= 2'b00;
                                rdata  <= pmem_read(read_addr, 4);
                                rlast  <= (rd_cnt == 8'h1);
                                read_addr <= read_addr + 32'd4;
                                rid    <= read_id;
                                if (rvalid & rready) begin
                                    if (rd_cnt == 8'h0) begin
                                        // 多出的清理拍 (最后一拍 rd_cnt==1 时 rlast=1 且 rvalid 保持)
                                        rvalid <= 1'b0;
                                        rlast  <= 1'b0;
                                    end
                                    else begin
                                        rd_cnt <= rd_cnt - 8'd1;
                                    end
                                end
                            end
                            else begin
                                // 单拍读 (设备路径): 返回对齐字, 左移使目标字节到对应位置
                                rvalid <= 1'b1;
                                rresp  <= 2'b00;
                                rdata  <= pmem_read(read_addr, 4) << ((read_addr & 32'b11) << 3);
                                rlast  <= 1'b1;
                                rid    <= read_id;
                                if (rvalid & rready) begin
                                    rvalid <= 1'b0;
                                    rlast  <= 1'b0;
                                end
                            end
                        end
                        else if (is_write_req) begin
                            if (wvalid & wready) begin
                                // 一个有效数据拍: 按 wstrb 写字节, 地址低位偏移对齐
                                case (wstrb)
                                    4'b0001, 4'b0010, 4'b0100, 4'b1000: pmem_write(write_addr, wdata >> ((write_addr & 32'h3) << 3), 1);
                                    4'b0011, 4'b1100:                   pmem_write(write_addr, wdata >> ((write_addr & 32'h3) << 3), 2);
                                    default:                            pmem_write(write_addr, wdata >> ((write_addr & 32'h3) << 3), 4);
                                endcase
                                if (wr_cnt == 8'h0) begin
                                    // 最后一拍 (共 awlen+1 拍): 完成并停止接收
                                    // (dcache 的 wlast 晚一拍, 多余拍因 wready=0 被拒, 不会误写)
                                    wready <= 1'b0;
                                    bvalid <= 1'b1;
                                    bresp  <= 2'b00;
                                    bid    <= write_id;
                                end
                                else begin
                                    wr_cnt     <= wr_cnt - 8'd1;
                                    write_addr <= write_addr + 32'd4;
                                end
                            end
                            if (bvalid & bready) begin
                                awready <= 1'b0;
                                bvalid  <= 1'b0;
                            end
                        end
                    end
                    default: begin end
                endcase
            end
        end
    `endif
endmodule
