module SRAM(
    input             clk,
    input             rst,

    //=========== AXI-AR ================
    input      [31:0] araddr,           //读地址
    input             arvalid,          //读地址有效
    output reg        arready,          //读地址就绪
    //=========== AXI-R ================
    output reg [31:0] rdata,            //读数据
    output reg [1:0]  rresp,            //读响应
    output reg        rvalid,           //读数据有效
    input             rready,           //读数据就绪
    //=========== AXI-AW ================
    input      [31:0] awaddr,           //写地址
    input             awvalid,          //写地址有效
    output reg        awready,          //写地址就绪
    //=========== AXI-W ================
    input      [31:0] wdata,            //写数据
    input      [3:0]  wstrb,            //0001: byte, 0011: half-word, 1111: word
    input             wvalid,           //写数据有效
    output reg        wready,           //写数据就绪
    //=========== AXI-B ================
    output reg        bvalid,           //写响应有效
    output reg [1:0]  bresp,            //写响应
    input             bready            //写响应就绪
);
    localparam OKAY   = 2'b00;
    localparam SLVERR = 2'b10;
    import "DPI-C" function int unsigned pmem_read(input int unsigned raddr, input int len);
    import "DPI-C" function void pmem_write(input int unsigned waddr, input int unsigned wdata, input int len);

    //读通道状态
    reg        ar_handshaked;
    reg [31:0] araddr_reg;
    reg        r_handshaked;
    //写通道状态
    reg        aw_handshaked;
    reg [31:0] awaddr_reg;
    reg        w_handshaked;
    reg [31:0] wdata_reg;
    reg [3:0]  wstrb_reg;

    //地址检查有效：
    wire addr_valid = (araddr_reg >= 32'h8000_0000 && araddr_reg <= 32'h8fff_ffff) || 
                      (awaddr_reg >= 32'h8000_0000 && awaddr_reg <= 32'h8fff_ffff) ||
                      (araddr_reg >= 32'h1000_0000 && araddr_reg <= 32'h1000_0007) || 
                      (awaddr_reg >= 32'h1000_0000 && awaddr_reg <= 32'h1000_0007) ||
                      (awaddr_reg >= 32'h1000_2000 && awaddr_reg <= 32'h1000_2007);
    //READ
    always @(posedge clk or posedge rst) begin
        if(rst) begin
            arready       <= 1'b1;
            ar_handshaked <= 1'b0;
            rvalid        <= 1'b0;
            rdata         <= 32'b0;
            rresp         <= OKAY;
        end
        else if(arvalid && arready) begin
            ar_handshaked <= 1'b1;
            araddr_reg    <= araddr;
            arready       <= 1'b0;
        end
        else begin
            ar_handshaked <= 1'b0;
        end
    end

    always @(posedge clk or posedge rst) begin
        if(rst) begin
            rvalid        <= 1'b0;
            rdata         <= 32'b0;
            rresp         <= OKAY;
            r_handshaked <= 1'b0;
        end
        else if(rready && rvalid) begin
            rvalid        <= 1'b0;
            r_handshaked  <= 1'b1;
            arready       <= 1'b1;
        end    
        else if(~r_handshaked && ar_handshaked) begin
            if(addr_valid) begin
                rdata  <= pmem_read(araddr_reg, 4);
                // $display("From [0x%08x] read data: 0x%08x", araddr_reg, rdata);
                // rdata  <= pmem_read(araddr, 4);
                rresp  <= OKAY;
            end
            else begin
                rdata <= 32'h0; //地址无效时返回0
                rresp  <= SLVERR; //返回错误响应
            end
            rvalid <= 1'b1;
        end
        else begin
            r_handshaked <= 1'b0;
            rvalid       <= 1'b0;
        end
    end

    //WRITE
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            awready    <= 1'b1;
            wready     <= 1'b1;
            bvalid     <= 1'b0;
            awaddr_reg <= 32'b0;
            wdata_reg  <= 32'b0;
            wstrb_reg  <= 4'b0;
            bresp      <= OKAY;
        end
        else begin
            // AW 通道
            if (awvalid && awready) begin
                awready    <= 1'b0;
                awaddr_reg <= awaddr;
            end
            // W 通道
            if (wvalid && wready) begin
                wready    <= 1'b0;
                wdata_reg <= wdata;
                wstrb_reg <= wstrb;
            end
            // 写响应
            if (!awready && !wready && !bvalid) begin
                if (addr_valid) begin
                    case (wstrb_reg)
                        4'b0001: pmem_write(awaddr_reg, wdata_reg, 1);
                        4'b0011: pmem_write(awaddr_reg, wdata_reg, 2);
                        4'b1111: pmem_write(awaddr_reg, wdata_reg, 4);
                        default: pmem_write(awaddr_reg, wdata_reg, 4);
                    endcase
                    // $display("To [0x%08x] write data: 0x%08x, wstrb: %b", awaddr_reg, wdata_reg, wstrb_reg);
                    bresp <= OKAY;
                end
                else begin
                    bresp <= SLVERR;
                end
                bvalid <= 1'b1;
            end
            // 握手完成后重置
            if (bvalid && bready) begin
                awready <= 1'b1;
                wready  <= 1'b1;
                bvalid  <= 1'b0;
            end
        end
    end
    // always @(posedge clk or posedge rst) begin
    //     if(rst) begin
    //         awready       <= 1'b1;
    //         aw_handshaked <= 1'b0;
    //         awaddr_reg    <= 32'b0;
    //     end
    //     else begin
    //         if(awvalid && awready) begin
    //             aw_handshaked <= 1'b1;
    //             awaddr_reg    <= awaddr;
    //             awready       <= 1'b0;
    //         end
    //         else if(bvalid && bready) begin
    //             awready       <= 1'b1;
    //             // aw_handshaked <= 1'b0;
    //         end
    //         else begin
    //             awready       <= 1'b1;
    //             aw_handshaked <= 1'b0;
    //         end
    //     end
    // end

    // always @(posedge clk or posedge rst) begin
    //     if(rst) begin
    //         wready        <= 1'b1;
    //         w_handshaked  <= 1'b0;
    //         wdata_reg     <= 32'b0;
    //         wstrb_reg     <= 4'b0;
    //         bvalid        <= 1'b0;
    //         bresp         <= OKAY;
    //     end
    //     else begin
    //         if(wvalid && wready) begin
    //             w_handshaked <= 1'b1;
    //             wdata_reg    <= wdata;
    //             wstrb_reg    <= wstrb;
    //             wready       <= 1'b0;
    //         end
    //         else if(bvalid && bready) begin
    //             bvalid       <= 1'b0;
    //             // w_handshaked <= 1'b0;
    //             wready       <= 1'b1;
    //         end
    //         else begin
    //             w_handshaked <= 1'b0;
    //             wready       <= 1'b1;
    //         end

    //         if(~w_handshaked && aw_handshaked) begin
    //             // pmem_write(awaddr_reg, wdata_reg, 4);
    //             if(addr_valid) begin
    //                 case(wstrb_reg)
    //                     4'b0001: pmem_write(awaddr_reg,wdata_reg,1);//sb
    //                     4'b0011: pmem_write(awaddr_reg,wdata_reg,2);//sh
    //                     4'b1111: pmem_write(awaddr_reg,wdata_reg,4);//sw
    //                     default: pmem_write(awaddr_reg,wdata_reg,4);
    //                 endcase
    //                 $display("To [0x%08x] write data: 0x%08x, wstrb: %b", awaddr_reg, wdata_reg, wstrb_reg);
    //                 // case(wstrb)
    //                 //     4'b0001: pmem_write(awaddr,wdata,1);//sb
    //                 //     4'b0011: pmem_write(awaddr,wdata,2);//sh
    //                 //     4'b1111: pmem_write(awaddr,wdata,4);//sw
    //                 //     default: pmem_write(awaddr,wdata,4);
    //                 // endcase
    //                 bresp  <= OKAY;
    //             end
    //             else begin
    //                 bresp  <= SLVERR; //返回错误响应
    //             end
    //             bvalid <= 1'b1;
    //         end
    //     end
    // end
endmodule