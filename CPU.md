# 单核CPU性能
- [CPU 单核性能为什么难以提升？](https://www.zhihu.com/question/365639711)
- [ 计算机系统性能评价与性能分析](https://foxsen.github.io/archbase/%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%B3%BB%E7%BB%9F%E6%80%A7%E8%83%BD%E8%AF%84%E4%BB%B7%E4%B8%8E%E6%80%A7%E8%83%BD%E5%88%86%E6%9E%90.html)



# RISC-V
- [SparrowRV | Verilog编写的RISC-V处理器](https://gitee.com/xiaowuzxc/SparrowRV)




# ARM
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
- 
