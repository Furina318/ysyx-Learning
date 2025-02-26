module Branch_Cond(
    input [2:0] Branch,
    input Less,
    input zero,
    output PCAsrc,
    output PCBsrc.
);
    assign PCAsrc=1'b0;
    assign PCBsrc=1'b0;
    always @(*) begin
        case(Branch)
            3'b000:begin
                PCAsrc=1'b0;
                PCBsrc=1'b0;
            end
            3'b001:begin
                PCAsrc=1'b1;
                PCBsrc=1'b0;
            end
            3'b010:begin
                PCAsrc=1'b1;
                PCBsrc=1'b1;
            end
            3'b100:begin
                case(Zero)
                    1'b0:begin
                        PCAsrc=1'b0;
                        PCBsrc=1'b0;
                    end
                    1'b1:begin
                        PCAsrc=1'b1;
                        PCBsrc=1'b0;
                    end
                endcase
            end
            3'b101:begin
                case(Zero)
                    1'b0:begin
                        PCAsrc=1'b1;
                        PCBsrc=1'b0;
                    end
                    1'b1:begin
                        PCAsrc=1'b0;
                        PCBsrc=1'b0;
                    end
                endcase
            end
            3'b110:begin
                case(Less)
                    1'b0:begin
                        PCAsrc=1'b0;
                        PCBsrc=1'b0;
                    end
                    1'b1:begin
                        PCAsrc=1'b1;
                        PCBsrc=1'b0;
                    end
                endcase
            end
            3'b111:begin
                case(Less)
                    1'b0:begin
                        PCAsrc=1'b1;
                        PCBsrc=1'b0;
                    end
                    1'b1:begin
                        PCAsrc=1'b0;
                        PCBsrc=1'b0;
                    end
                endcase
            end
        endcase
    end
endmodule