module CSR (
    input         clk,
    input         reset,
    input         we,
    input  [11:0] addr,
    input  [31:0] wdata,
    output reg [31:0] rdata
);
    reg [31:0] mepc;
    reg [31:0] mcause;
    reg [31:0] mtval;
    reg [31:0] mtvec;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            mepc <= 32'h0;
            mcause <= 32'h0;
            mtval <= 32'h0;
            mtvec <= 32'h80000100; // 硬编码异常处理入口
            rdata <= 32'h0;
        end else begin
            if (we) begin
                case (addr)
                    12'h341: mepc <= wdata;   // mepc
                    12'h342: mcause <= wdata; // mcause
                    12'h343: mtval <= wdata;  // mtval
                    12'h305: mtvec <= wdata;  // mtvec
                    default: begin end
                endcase
            end
            case (addr)
                12'h341: rdata <= mepc;
                12'h342: rdata <= mcause;
                12'h343: rdata <= mtval;
                12'h305: rdata <= mtvec;
                default: rdata <= 32'h0;
            endcase
        end
    end
endmodule