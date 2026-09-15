`include "defines.vh"

module bypass #(
    parameter PHY_REG_WIDTH = 6
) (
    // 从 phy_regfile 读出的原始数据 (4 读端口)
    input  wire [           31: 0]  rf_rdata1, rf_rdata2, rf_rdata3, rf_rdata4,

    // 读地址 (物理寄存器号, 用于与 CDB 标签比较)
    input  wire [PHY_REG_WIDTH-1:0] raddr1, raddr2, raddr3, raddr4,

    // CDB 写回 (零周期旁路)
    input  wire                     cdb_valid_1,
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_1,
    input  wire [            31: 0] cdb_data_1,
    input  wire                     cdb_valid_2,
    input  wire [PHY_REG_WIDTH-1:0] cdb_tag_2,
    input  wire [            31: 0] cdb_data_2,

    // 最终输出: slot1 src1/src2, slot2 src1/src2
    output wire [           31: 0]  src1_slot1, src2_slot1,
    output wire [           31: 0]  src1_slot2, src2_slot2
);

    // CDB 旁路比较: CDB1 > CDB2 > phy_regfile
    function [31:0] bypass_mux;
        input [31:0] rf_data;
        input [PHY_REG_WIDTH-1:0] addr;
        begin
            if (addr != {PHY_REG_WIDTH{1'b0}}) begin
                if (cdb_valid_1 && (cdb_tag_1 == addr))
                    bypass_mux = cdb_data_1;
                else if (cdb_valid_2 && (cdb_tag_2 == addr))
                    bypass_mux = cdb_data_2;
                else
                    bypass_mux = rf_data;
            end else
                bypass_mux = 32'b0;
        end
    endfunction

    assign src1_slot1 = bypass_mux(rf_rdata1, raddr1);
    assign src2_slot1 = bypass_mux(rf_rdata2, raddr2);
    assign src1_slot2 = bypass_mux(rf_rdata3, raddr3);
    assign src2_slot2 = bypass_mux(rf_rdata4, raddr4);

endmodule
