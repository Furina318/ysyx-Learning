# ysyx-npc

内含：

1）五级流水线(含RAS分支预测器)pipeline-vsrc 

2)接SoC的五级流水线(支持突发传输)pipeline-soc-vsrc  

3)多周期(AXI4-Lite总线协议)mul-vsrc  

4)接SoC的多周期soc-vsrc

5)单周期single-vsrc

6)minirv(仅支持8条指令，且需要搭配新版am使用)的版本

7)乘法器(booth_wallace_multiplier) 

8)除法器(divider)， 均可支持RISCV32e指令集。

9)FPU浮点运算单元，支持IEEE基本加减乘除浮点指令

以及内含小工具logo_creat.py文件用于将ASCII艺术字转为数组，可作为npc的一个欢迎界面

运行不同的版本需要切换通过修改makefile完成

PS:其中pipeline-vsrc是本人参加第九届集创赛竞业达赛道的五级流水线代码，编写的时候B阶段还没开始学习，存在数据前递路径过长的问题，面积偏大，后续会进行优化处理。顺序双发射代码(order-dual-issue)仍在编写开发中...