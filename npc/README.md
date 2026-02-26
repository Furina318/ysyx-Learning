# ysyx-npc

## 一、核心功能模块（支持 RISCV32e 指令集）
1. **五级流水线模块（pipeline-vsrc）**  
   - 特性：集成 RAS（返回地址栈）分支预测器  
   - 备注：为第九届集创赛竞业达赛道参赛代码，编写时未学习 B 阶段知识，存在数据前递路径过长、面积偏大问题，后续将优化。
2. **适配SoC 五级流水线模块（pipeline-soc-vsrc）（支持rv32imc）**  
   - 特性：在基础五级流水线基础上，支持突发传输，可对接 SoC 系统。目前接入了iCache、dCache模块（dCache模块在当前测试并不具备明显优势，故添加相关开关，如何使用参考Makefile）和可控防递归的结合RAS和BTB的分支预测器，接入MDU乘除法单元（通过传参fpu=1开启，能通过riscv-test测试）
   - 工具：添加波形模式，支持三种不同的波形记录方式.（0:从复位开始记录波形，直到结束；1:从WAVE_START_TIME开始记录波形，到WAVE_END_TIME结束； 2:当记录波形周期大于CONFIG_WAVE_MAX_UPDATE_CYCLES时更新波形文件重新记录）可以通过include/conf.h中控制。
   - 备注：已经通过iverilog四值仿真、网表仿真和一生一芯的CI流片测试
   -      同时可通过makefile完成riscv32e-ysyxsoc和riscv32e-npc之间的切换。两者共用一个cpu内核，但是riscv32e-npc接上本人自己编写的simple-SoC，主要是用于测试仿真
   -      启用的使用可以通过键入 make ARCH=riscv32e-ysyxsoc -C ${NPC_HOME}/../am-kernels/tests/cpu-tests run nvboard=1 dcache=0 (开启nvboard，关闭dcache)
   -      键入make ARCH=riscv32e-npc -C ${NPC_HOME}/../am-kernels/tests/cpu-tests run diff=1 (开启difftest功能，目前只能运行在npc架构)
3. **多周期模块（mul-vsrc）**  
   - 特性：基于 AXI4-Lite 总线协议实现，适用于对时序要求较高、面积受限的场景。
   - 备注：不包含CSR指令，无法运行rtt
4. **SoC 适配多周期模块（soc-vsrc）**  
   - 特性：多周期架构的 SoC 兼容版本，支持与外部 SoC 组件交互。
   - 备注：不包含CSR指令，无法运行rtt
5. **单周期模块（single-vsrc）**  
   - 特性：单周期执行架构，指令延迟低，适合对响应速度要求高的简单场景。
6. **轻量级模块（minirv 版本）**  
   - 特性：仅支持 8 条核心指令，需搭配新版 `am`（抽象机）使用，体积小巧、资源占用少。
7. **专用运算单元（oper、FPU）**  
   - **乘法器（booth_wallace_multiplier）**：基于 Booth 编码与 Wallace 树结构，高效实现乘法运算。  
   - **除法器（divider）**：支持整数除法运算。  
   - **FPU 浮点运算单元**：支持 IEEE 标准的浮点加减乘除指令，覆盖基础浮点运算需求。


## 二、辅助工具
- **logo_creat.py**：ASCII 艺术字转数组工具，可生成自定义数组用于 NPC 的logo欢迎界面显示。
- **run_test.sh**: 一键自动测试脚本，用于提高测试效率，收集报错的信息等功能。目前仍在完善中...


## 三、版本切换方式
运行不同功能模块（如单周期/五级流水线/SoC 版本），需通过修改项目根目录的 `makefile` 配置实现（具体修改对应模块的编译入口、链接参数等）。


## 四、现存问题和TODO
- 当platform为ysyxsoc时，开着分支预测器（bpu=1）:采用stdio(1)跑cpu-test在自己写的str-mem-cpy测试fail，以及rt-thread跑飞;
stdio(2)会导致microbench卡在dinic测试，且通过rt-thread运行microbench会在ssort测试fail。   
- 当编译架构为riscv32im时候，icache开突发跑microbench和rt-thread会失败，不开突发则可以通过所有测试