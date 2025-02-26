<<<<<<< HEAD
# ysyx-NEMU
A NEMU for ysyx-PAs learning(update to PA2)

【仅供交流学习使用，未经许可禁止传播！】相对于2021年的代码这些代码有了一定的更新变化

NEMU(NJU Emulator) is a simple but complete full-system emulator designed for teaching purpose. Originally it supports x86, mips32, riscv64, and riscv32. **This repo only guarantees the support for riscv32.（updating)**

**For the sake of academic integrity,this code is for reference,see the handout for details.(https://ysyx.oscc.cc)**

NEMU runs on Linux, and before you use it, some tool chain you need to download according to the handout.If you have any optimization suggestions or doubts about the NEMU code,you can contact the author directly.
=======
# NEMU

NEMU(NJU Emulator) is a simple but complete full-system emulator designed for teaching purpose.
Currently it supports x86, mips32, riscv32 and riscv64.
To build programs run above NEMU, refer to the [AM project](https://github.com/NJU-ProjectN/abstract-machine).
>>>>>>> 00904ae (first commit)

The main features of NEMU include
* a small monitor with a simple debugger
  * single step
  * register/memory examination
  * expression evaluation without the support of symbols
  * watch point
<<<<<<< HEAD
  * differential testing against reference design (e.g. QEMU)
  * snapshot
* CPU core with support of most common ISAs
  * riscv32
    * floating point instructions are not supported
    * those instructions that are only in RV32IC are not supported
* memory
* interrupt and exception
* I/O and devices are not supply now, but it will happen in the near future


About the debugger, here are some instructions(EXPR and N are you need to enter):

* "c", Continue the execution of the program(defined in nemu/src/monitor/sdb/sdb.c file)
* "help", Display information about all supported commands
* "q", Exit NEMU
* "si N", Let the program excute N instuctions and then suspend the excution(if the N is not given or N is negative, the default value is 1)
* "info r/w", Print register status with "r", or print the moniter status with "w"
* "x EXPR", Scan N pieces of memory base on 'EXPR'
* "p EXPR", Find the value of the expression 'EXPR'
* "w EXPR", Set watchpoint on 'EXPR',the programme will stop when it change
* "d N", Delete a watchpoint NO.n you set
  
* Trace:
* (open the Testing-and-Debugging directory in the NEMU by typing 'make menuconfig' and open the corresponding option)
  * itrace: It can record every instruction executed by the client,and display the error instruction and disassembly result(by'-->') when the program is abnormal terminal(defined nemu/src/cpu/cpu-exe.c file)
  * mtrace: Trace memory reads and wirtes,you can enter 'mtrace SART END FILTER_EN FILTER' to see more details
  * ftrace: Trace the address,name and call of the function
* Trace module has optimized.Such as ftrace statistics function calls memory alignment,itrace filters out the execution of branch junmp instructions,and so on.
=======
  * differential testing with reference design (e.g. QEMU)
  * snapshot
* CPU core with support of most common used instructions
  * x86
    * real mode is not supported
    * x87 floating point instructions are not supported
  * mips32
    * CP1 floating point instructions are not supported
  * riscv32
    * only RV32IM
  * riscv64
    * only RV64IM
* memory
* paging
  * TLB is optional (but necessary for mips32)
  * protection is not supported
* interrupt and exception
  * protection is not supported
* 5 devices
  * serial, timer, keyboard, VGA, audio
  * most of them are simplified and unprogrammable
* 2 types of I/O
  * port-mapped I/O and memory-mapped I/O
>>>>>>> 00904ae (first commit)
