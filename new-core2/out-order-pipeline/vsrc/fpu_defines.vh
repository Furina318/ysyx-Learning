`define RM    7:5
`define FLAGS 4:0
// 非法操作 除以零 上溢 下溢 不精确
`define NV    4
`define DZ    3
`define OF    2
`define UF    1
`define NX    0

// 舍入
// 最近偶数舍入 向零舍入 向下/上舍入 向最大尾数舍入
`define RTE 3'b000
`define RTZ 3'b001
`define RDN 3'b010
`define RUP 3'b011
`define RMM 3'b110