# 概念
- CPU架构：是指CPU指令集体系结构（Instruction Set Architecture，简称ISA），是处理器的一个抽象描述，简称称为架构。
- CPU微架构：ISA在处理器中的实现，被称为Microarchitecture（微架构）。
- 计算机的体系架构，英文称为Computer architecture，涉及的工作主要分三部分：
  + 指令集相当于用户界面，是软件和硬件的接口。
  + 微架构是指令集的具体实现。
  + 系统设计主要是支撑微架构的内存、总线、功耗等设计。
- 计算机体系结构= ISA + 微架构 + 硬件(tape out 流片)
- 在冯·诺伊曼架构的核心设计中计算机的组成架构包括运算器、控制器、存储器、输入设备、输出设备五部分。
  + 现有冯·诺伊曼计算系统采用存储和运算分离的架构，存在“存储墙”与“功耗墙”瓶颈，严重制约系统算力和能效的提升。
存储器数据访问速度跟不上处理器的数据处理速度，数据传输就像处在一个巨大的漏斗之中，不管处理器灌进去多少，存储器都只能“细水长流”。两者之间数据交换通路窄以及由此引发的高能耗两大难题，在存储与运算之间筑起了一道“存储墙”。
  + 数据从内存单元传输到计算单元需要的功耗是计算本身的约200倍，因此真正用于计算的能耗和时间占比很低，数据在存储器与处理器之间的频繁迁移带来严重的传输功耗问题，称为“功耗墙”。
  + 打破两堵墙，存算一体芯片、光子芯片、量子芯片，未来可期。
- 链接寄存器（Link Register,LR)当调用一个函数时，返回地址被自动保存到链接寄存器，在函数返回时有效。这使得快速进入和返回“叶”函数（不调用其它函数的函数）成为可能。如果函数是分支的一部分（即函数中又调用另一个函数），则链接寄存器必须入栈。
- 7类指令集
  + Reduced Instruction Set Computer (RISC)， 它的每条指令周期(CPI)比复杂指令集计算机(CISC)少。
  + Complex Instruction Set Computer (CISC)，它比精简指令集计算机(RISC)每个程序的指令数更少。
  + Minimal instruction set computers (MISC)，最小指令集计算机(MISC)是一种具有少量基本指令操作和相应操作码的处理器体系结构，其结果是更小的指令集，更小且更快的指令集解码单元，以及更快的单个指令的操作。缺点是较小的指令集总是有更多的顺序依赖性，减少了指令级的并行性。
  + Very long instruction word (VLIW)，超长指令字(VLIW)是一种用于利用指令级并行(ILP)的指令集体系结构。
  + Explicitly parallel instruction computing (EPIC)，显式并行指令计算(EPIC)是一种指令集，它允许微处理器通过编译器而不是复杂的模上电路来控制并行指令的执行，从而并行地执行软件指令。
  + One instruction set computer (OISC)，单指令集计算机(OISC)是一种抽象机器，它只使用一条指令，不需要机器语言操作码，OISCs已被推荐为计算机体系结构教学指南，并已被用于结构计算研究的计算模型。
  + Zero instruction set computer (ZISC)，零指令集计算机(ZISC)是传统意义上基于模式匹配和无(微)指令的计算机体系结构，这些芯片因其“突触”和“神经元”的数量被认为可与市场上的神经网络相媲美而闻名。

# 硬件
- [potato | 用于FPGA设计的一个简单的RISC-V处理器](https://github.com/skordal/potato)
- [forth-cpu | 基于J1的第四种基于VHDL语言的CPU和芯片上系统](https://github.com/howerj/forth-cpu)
- [microwatt | 一个用VHDL 2008编写的小型Open POWER ISA软内核](https://github.com/antonblanchard/microwatt)

# 单核CPU性能
- [CPU 单核性能为什么难以提升？](https://www.zhihu.com/question/365639711)
- [ 计算机系统性能评价与性能分析](https://foxsen.github.io/archbase/%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%B3%BB%E7%BB%9F%E6%80%A7%E8%83%BD%E8%AF%84%E4%BB%B7%E4%B8%8E%E6%80%A7%E8%83%BD%E5%88%86%E6%9E%90.html)

# X86
## 资料
- 《x64汇编语言：从新手到AVX专家》，基于Intel语法
- 《汇编语言程序设计》（英文：《Professional Assembly Language》），基于AT&T语法

# RISC-V
## 资料
- 《手把手教你设计CPU - RISC-V处理器》
- 《手把手教你RISC-V CPU（上） 处理器设计》
- 《手把手教你RISC-V CPU（下） 工程与实践》
- 《RISC-V架构与嵌入式开发快速入门》
- [《RISC-V 手册一本开源指令集的指南》](http://riscvbook.com/chinese/RISC-V-Reader-Chinese-v2p1.pdf)
- [RISC-V Specifications](https://riscv.org/technical/specifications/)
- [xv6-riscv](https://github.com/mit-pdos/xv6-riscv)[ | 环境搭建](https://zhuanlan.zhihu.com/p/537461426)

## IP
- [SparrowRV | Verilog编写的RISC-V处理器](https://gitee.com/xiaowuzxc/SparrowRV)



# MIPS
## 资料
- [MIPS Architectures](https://www.mips.com/products/architectures/)
- [Debian MIPS Port](https://wiki.debian.org/MIPSPort)
- [mips64r2含义](https://sourceware.org/binutils/docs-2.39/as.html#MIPS-ISA)

# PowerPC
## 资料
- [Instruction Set Architecture (ISA) | IBM](https://www-50.ibm.com/systems/power/openpower/posting.xhtml?postingId=01F8EF905EC4A2CD85257EAF0069612D)
- [Instruction Set Architecture | OpenPOWER](https://openpowerfoundation.org/specifications/isa/)

# ARM
## 资料
- 《ARM64 体系结构编程与实践》
## ARM分类
- 指令集架构
```
指令集架构命名格式:
Armv + [n] + [variants] + [x(variants)]
  Armv：固定字符, 即ARM Version
  n：指令集版本号, 迄今为之, ARM架构版本发布了9个系列, 所以n=[1~9]
  variants：变种
  x(variants)：表示不支持x后指定的变种
大版本：ARMv1 ~ ARMv9
然后可以进一步划分，比如：ARMv8-A、 ARMv8-R、 ARMv8-M
ARMv9架构是2021年推出的
```
- 处理器系列
```
自ARMv6架构开始，ARM根据处理器的性能和应用场景把处理器进一步划分为：Cortex-A、Cortex-R、Cortex-M、Machine Learning、SecurCore不同类别的处理器系列。

早期的处理器其实没有进行这一步大分类。
```
- 处理器型号
```
早期（ARMv6之前）的处理器型号命名规则：
ARM + [x][y][z] + [varians]

  x：处理器系列, 有6, 7, 9 , 11等多个系列
  y：存储管理/保护单元
  z：cache
  variants有以下字母可选：
    T：支持Thumb指令集
    D：支持片上调试
    M：支持快速乘法器
    I：支持Embedded ICE, 支持嵌入式跟踪调试
    E：支持增强型DSP指令
    J：支持Jazelle
    (F)：具备向量浮点单元VFP
    -S：可综合版本
比如：ARM926, 属于ARMv5指令集架构的, CPU是ARM9系列的, 具备2个存储管理/保护单元, 6个 Cache。

ARMv6及之后的处理器型号就是现在大家比较熟悉的了，比如：
  Cortex-M0、Cortex-M3、Cortex-M4
  Cortex-R4、 Cortex-R5
  Cortex-A55、 Cortex-A73
```


- [List of ARM processors](https://en.wikipedia.org/wiki/List_of_ARM_processors)
- [ARM Product Filter](https://www.arm.com/products/silicon-ip-cpu)

## ARM Thumb Thumb-2 Thumb-2EE指令集区别
- 执行 Thumb 指令的处理器工作在 Thumb 状态。 当直接通过 BX、BLX 等指令完成时，处理器可切换到 ARM 状态（以识别 ARM 指令）。
- [Thumb-2](https://developer.arm.com/documentation/ddi0344/c/programmer-s-model/thumb-2-instruction-set) 是 Thumb 指令集的一项主要增强功能，并且由 ARMv6T2 和 ARMv7M体系结构定义。 Thumb-2 提供了几乎与 ARM 指令集完全一样的功能。 它兼有16 位和 32 位指令，并可检索与 ARM 类似的性能，但其代码密度与 Thumb 代码类似。
- [Thumb-2EE](https://developer.arm.com/documentation/ddi0344/c/programmer-s-model/thumbee-instruction-set) 指令集基于 Thumb-2，前者进行了一些更改和添加，使得动态生成的代码具有更好的目标，也就是说，就在执行之前或在执行过程中即可在该设备上编译代码。执行 Thumb-2EE 指令的处理器正在以 ThumbEE 状态运行。 在此状态下，该指令集几乎与 Thumb 指令集相同。 不过，有些指令已经修改了行为，有些原有的指令已不再提供，另外还新添了一些指令。

## AArch64、AArch32
- A32模式（ARM instruction sets），指令固定的编码长度为32bit
- T32模式（Thumb instruction sets），指令可以编码成16bit长，也可编码成32bit长
- A64模式（AArch64 instruction sets）,指令固定的编码长度为32bit
- 在ARM32状态下，当前执行指令的地址通常是pc-8，而在Thumb状态下通常是pc-4。在AARCH64状态下，当前执行指令的地址通常是pc。
```
ARMv8拥有两种执行模式（two execution modes）：
  AArch64 ：64-bit registers and memory accesses, new instruction set；
  AArch32 ： backwards compatible with ARMv7-A；
对于A32来说，ARM和thumb的切换，通过bx指令即可切换。但是对于A64和A32两种执行状态，只能通过异常，进行切换。
```

## 开发工具
- [ADS](https://developer.arm.com/downloads/-/arm-compiler-for-embedded)
- IAR 
- KEIL 

