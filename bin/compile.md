
# GCC搜索路径
## 安装路径
```
gcc --print-search-dirs | tr -s ':' \\012
```
## 编译时头文件的搜索路径及顺序
```
gcc -xc -E -v -
gcc -xc++ -E -v -
cpp -v /dev/null -o /dev/null

#include "..." search starts here:
#include <...> search starts here:
 /usr/lib/gcc/x86_64-linux-gnu/9/include
 /usr/local/include
 /usr/include/x86_64-linux-gnu
 /usr/include
End of search list.
```
1. 先搜索-I指定的目录
2. 然后找gcc的环境变量C_INCLUDE_PATH、CPLUS_INCLUDE_PATH可以通过设置这些环境变量来添加系统include的路径
3. 最后搜索gcc的内定目录(编译时可以通过-nostdinc++选项屏蔽对内定目录搜索头文件)

## 编译时库的搜索路径及顺序
```
ld --verbose | grep SEARCH_DIR | tr -s '; ' \\012

SEARCH_DIR("=/usr/local/lib/x86_64-linux-gnu")
SEARCH_DIR("=/lib/x86_64-linux-gnu")
SEARCH_DIR("=/usr/lib/x86_64-linux-gnu")
SEARCH_DIR("=/usr/lib/x86_64-linux-gnu64")
SEARCH_DIR("=/usr/local/lib64")
SEARCH_DIR("=/lib64")
SEARCH_DIR("=/usr/lib64")
SEARCH_DIR("=/usr/local/lib")
SEARCH_DIR("=/lib")
SEARCH_DIR("=/usr/lib")
SEARCH_DIR("=/usr/x86_64-linux-gnu/lib64")
SEARCH_DIR("=/usr/x86_64-linux-gnu/lib")
```
1. gcc会去找-L
2. 再找gcc的环境变量LIBRARY_PATH
3. 再找内定目录/lib:/usr/lib:/usr/local/lib，这是当初compile gcc时写在程序内的



## 运行时库的搜索路径及顺序

```
zdx@LAPTOP-0DI2LFOJ:~$ readelf -d main | more

Dynamic section at offset 0x2da0 contains 28 entries:
  Tag        Type                         Name/Value
 0x0000000000000001 (NEEDED)             Shared library: [libstdc++.so.6]
 0x0000000000000001 (NEEDED)             Shared library: [libc.so.6]
 0x000000000000000c (INIT)               0x1000
 0x000000000000000d (FINI)               0x12c8

```
1. 库名存在"/"，则基于绝对路径或相对路径查找
2. 存在DT_RPATH ，则基于DT_RPATH指定路径查找
3. 设置LD_LIBRARY_PATH，则基于LD_LIBRARY_PATH路径查找（程序设置了set-user-ID/set-group-ID时，此条忽略）
4. 存在DT_RUNPATH  ，则基于DT_RUNPATH指定路径查找
5. 在/etc/ld.so.cache里查找（如果程序在链接时使用了 -z nodeflib 选项，且是默认库路径中的库时，此条忽略）
6. 在默认路径 /lib、 /usr/lib里搜索（如果程序在链接时使用了 -z nodeflib 选项，此条忽略）

# GCC环境变量
## [预处理](https://gcc.gnu.org/onlinedocs/cpp/Environment-Variables.html)
- C_INCLUDE_PATH 只对预处理 C语言 有效
- CPLUS_INCLUDE_PATH 只对预处理 C++ 有效
- CPATH 对两者都有效
## [编译](https://gcc.gnu.org/onlinedocs/gcc/Environment-Variables.html)
- LIBRARY_PATH 链接时查找库文件的目录列表
## [链接](https://man7.org/linux/man-pages/man8/ld.so.8.html#Environment%20variables)
- LD_LIBRARY_PATH 运行时查找库库的目录列表
- LD_BIND_NOW 立即绑定符号
- LD_PRELOAD 优先加载的动态库。这个功能主要就是用来有选择性的载入不同动态链接库中的相同函数。
- LD_SHOW_AUXU 打印辅助变量
- LD_DYNAMIC_WEAK 开启弱符号覆盖规则（旧规则）
- LD_DEBUG 
  + all: 打印所有调试信息 (除 statistics 和 unused).
  + bindings: 打印符号绑定信息
  + files: 打印程序打开库文件
  + libs: 打印程序库的搜索路径及过程
  + reloc: 打印程序重定位处理信息
  + scopes: 
  + statistics: 打印程序重定位统计信息
  + symbols: 打印符号搜索过程
  + unused: 
  + versions: 打印符号版本依赖信息
# GCC常见场景

## 编译可执行的动态库
```
编译选项：
-Wl,-e,my_main
操作：
make -f Makefile-pie libop.so
```

## 链接静态库全部符号
- 默认情况下，对于未使用到的符号，链接器不会将它们链接进共享库和可执行程序。
- 默认情况下，静态库符号搜索从左向后，被依赖的库放在后面

```
编译选项：
whole-archive、no-whole-archive
start-group、end-group
操作：
make -f Makefile-rdynmic main
nm -D libop.so | grep " T "
```
## 可执行程序导出符号
当主程序通过dlopen来打开动态库，并且动态库用到了主程序的符号（函数）
```
编译选项：
rdynamic 

make -f Makefile-rdynmic main
nm -D main | grep " T "
```
##  指定依赖库运行时的搜索路径
```
编译选项：
-Wl,-rpath,'$ORIGIN/../lib' 
操作：
make -f Makefile-rdynmic main
```
## 指定依赖库一部分为静态库，一部分为动态库
当某些库同时存在静态库和动态库时，需要明确使用动态库还是静态库
```
编译选项：
dn、dy
操作：
make -f Makefile-dndy main
```
## 强制动态库使用内部符号
- 方 法1： 更改dlopen内部符号查找的起点，dlopen(“/libtest.so”,RTLD_LAZY|RTLD_DEEPBIND);RTLD_DEEPBIND的含义就是首先搜索本地符号定义，然后再搜索主程 序的.dynsym。
- 方法2： 在编译动态库时，加入-Wl,-Bsymbolic。它含义是动态库的符号在链接时绑定到本地定义，而不依赖运行时的符号查找。显而易见，这种效率比 RTLD_DEEPBIND效率高。
```
编译选项：
Bsymbolic、symbolic-functions 
操作：
make -f Makefile-bsym main
```
## 控制动态库符号强弱

**对于全局变量，可以分为三种情况：**
1. 初始化非零值
2. 初始化零值
3. 未初始化

在GCC中，前两种情况的全局变量成为强符号，并分别存在 .DATA 和 .BSS 段中，第三种情况成为弱符号，它保存在 .COMMON 段中。

**这些变量必须遵循如下三条规则：**
1. 同名强符号最多只能存在一个
2. 如果存在一个强符号和多个若符号，则弱符号会被强符号覆盖
3. 如果存在多个弱符号，GCC会选择其中内存最大的一个
4. 强弱符号规则是针对静态链接

**搜索动态库符号规则**
1. 当前规则是使用第一个被搜索到的符号
2. 在glibc2.2之前规则是，搜索到第一个符号如果是弱符号，会继续搜索，遇到强符号替换，否则使用第一个

```
使用属性：
__attribute__((weak))
```

## 控制动态库符号版本
### ELF Version Section
- .gnu.version(version symbol section)。dynamic table中的DT_VERSYM tag指向该section。假设.dynsym有N个entries，那么.gnu.version包含N个uint16_t。第i个entry描述第i个dynamic symbol table所属的version
- .gnu.version_r(version requirement section)。dynamic table中的DT_VERNEED/DT_VERNEEDNUM tags标记该section。描述该模块的未定义的versioned符号用到的version信息
- .gnu.version_d(version definition section)。dynamic table中的DT_VERDEF/DT_VERDEFNUM tags标记该section。记录该模块定义的versioned符号用到的version信息

### 定义的版本符号有两种形式：
- foo@@v2，称为默认版本
- foo@v2，称为非默认版本,或者叫隐藏版本
### 未定义版本符号只有一种形式
- foo@v2
### 汇编器行为
**对于.symver foo, foo@v1**
- 如果foo未定义，.o中有一个名为foo@v1的符号
- 如果foo被定义，.o中有两个符号：foo和foo@v1

**对于.symver foo, foo@@v1**
- 如果foo未定义，assembler报错
- 如果foo被定义，.o中有两个符号：foo和foo@@v1

**对于.symver foo, foo@@@v1**
- 如果foo未定义，.o中有一个名为foo@v1的符号
- 如果foo被定义，.o中有一个名为foo@@v1的符号
### 链接器行为
- 定义的foo可以满足未定义的foo(传统unversioned符号规则)
- 定义的foo@v1可以满足未定义的foo@v1
- 定义的foo@@v1可以同时满足未定义的foo和foo@v1
- 若存在多个默认版本符号的定义(如foo@@v1 foo@@v2)，触发重复定义错误。通常一个符号有零或一个默认版本符号(@@)定义，任意个非默认版本符号(@)定义。

### 动态链接器行为（ld-linux.so）
- 未定义unversioned foo可以解析到定义foo或foo@@v2
- 未定义versioned foo@v1可以解析到定义foo或foo@v1或foo@@v1
- 未定义unversionedfoo解析到定义foo@v1，这种情况是ld-linux.so允许，而链接器不允许的。 假如一个新版本想废弃unversioned bar，可以去除bar而定义bar@compat。依赖该.so的库中的未定义bar仍可以解析，但该库无法重新链接。
```
编译选项：
--version-script,vis.map
操作：
make -f Makefile-vis clean main
readelf --dyn-syms  main
```

## 一个接口存在多个实现
GNU IFUNC，间接函数GNU标准库glibc使用这个特性实现了一些内存和字符串函数的多个版本，包括memmove、memset、memcpy、strcmp、strstr等。
```
使用属性：
__attribute__ ((ifunc ("resolve_my_mul")))
操作：
make -f Makefile-vis clean main
```

## 使用包装函数替换动态库接口
对 symbol 使用包装函数(wrapper function). 任何对 symbol 未定义的引用 (undefined reference) 将解析为 __wrap_symbol.  任何对 __real_symbol 未定义的引用将解析为 symbol.
```
编译选项：
--wrap=xxx
操作：
make -f Makefile-vis clean main
```

## 链接动态库接口的特定版本
memcpy最低版本是("@GLIBC_2.2.5")2.2.5,而默认使用版本是2.14("@@GLIBC_2.14")
```
编译选项：
-fno-builtin
-fno-builtin-memcpy
asm(".symver memcpy, memcpy@GLIBC_2.2.5");
操作：
make -f Makefile-vis clean main
objdump -p main
objdump -T main |grep memcpy
```
## 链接特定版本动态库

- so name是一组具有兼容API的SO库所共有的名字，其命名特征是lib+<库名>+.so.+<数字>这种形式的(libop.so.1)
- real name 是真实具有SO库可执行代码的那个文件，其命名特征是lib+<库名>+.so.+<数字>.+<数字>.+<数字>这种形式的(libop.so.1.1.1)
- linker name 这个名字只是给编译工具链中的连接器使用的名字，其命名特征是lib+<库名>+.so(libop.so)
```
编译选项：
-Wl,-soname,libop.so.101
操作：
make -f Makefile-ver clean main
readelf -d main
readelf -d libop.so
```

## 其他选项
- -finstrument-functions + addr2line
- -fno-access-control
- -fno-inline
- -fno-stack-protector、-fstack-protector、-fstack-protector-all
- -fPIC、-fpic、-fpie、-fPIE、-no-pie、-pie
- -fvisibility=[default|internal|hidden|protected]
- -fprofile-arcs、-ftest-coverage
- -fsanitize=address、-fsanitize=thread、-fsanitize=leak、-fsanitize=undefined
- -Wl,allow-multiple-definition
- -fdump-tree-all、-fdump-ipa-all、-fdump-rtl-all
- gcc --print-file-name=include，打印默认的头文件包含地址
- gcc --print-libgcc-file-name，打印默认libgcc的文件名
- gcc --print-file-name=libstdc++.so，打印默认libstdc++.so的文件名
- gcc --print-file-name=libc.so，打印默认libstdc++.so的文件名
- l:filename
- ld -verbose
- gcc -dumpspecs
- -Wl,-z,lazy
- -fno-plt

# 一些概念
## FFI 
- 语言交互接口(Foreign Function Interface)，FFI 这个术语最早来自 Common Lisp 的规范。目前几乎所有严肃编程的语言都有提供 FFI 的支持，但大多数是单向功能。不同语言称呼这种语言间调用的功能名字可能不同。Common Lisp、Haskell、Python、Rust 这些叫 FFI，Java 叫 JNI 或 JNA，还有一些其它语言叫 “绑定”。

- FFI 有两种内涵。一种是是在当前正在使用的语言（host）中，调用由其它语言（guest）提供的库。第二种内涵与第一种方向相反，即，使用当前语言（host）写库，供其它语言（guest）调用。不过，后者不是任何语言都能做到的，有些语言即使能做，也会非常吃力。

## JIT(Just In Time)
在程序运行起来之后，实时地把脚本语言编译为机器语言然后执行。

## AOT(Ahead Of Time)
在程序运行之前直接把脚本代码编译为机器语言。

## AST(Abstract Syntax Tree)
抽象语法树是源代码语法结构的一种抽象表示。它以树状的形式表现编程语言的语法结构，树上的每个节点都表示源代码中的一种结构。
- 编辑器的错误提示、代码格式化、代码高亮、代码自动补全；
- lint对代码错误或风格的检查；
- 代码转译；

## CFG(Control Flow Graph)
表示计算机程序执行过程中所经过的所有路径，控制流图中的每个顶点都对应一个程式基本块，也就是一段没有分支指令，也没有分支目的的程式码，基本块的开始是分支目的，而基本块会以分支为结束。控制流程中会用有向边来表示分支。
- 编译器优化
- 静态程序分析

## 确定性构建(Deterministic Build)
可再现构建，也称为确定性编译，是一个编译软件的过程，以确保生成的二进制代码可以被再现。使用确定性编译的源代码将始终输出相同的二进制文件

## 增量编译(Incremental Compiler)
只重新编译程序修改过的那部分代码
## IR(Intermediate Representation)
### 虚拟机/模拟器/仿真机 IR
- Qemu TCG，Qemu的中端MIR称为TCG，Qemu已经有20种处理器二进制代码转化成TCG，有5种还有64位的，因此Qemu有25种前端HIR转化成中端MIR的源码实现。
- Valgrind VEX，Valgrind的中端MIR称为VEX，Valgrind已经有6种处理器二进制代码转化成VEX，4种还有64位的，因此Valgrind有10种前端HIR转化成中端MIR的源码实现。

### 二进制逆向分析工具IR
- IDA Pro MircoCode，IDA Pro，最好的反汇编工具，闭源，价格昂贵。中端MIR称为MircoCode，它是三元式格式，AT&T-like语法，当前有72条指令。IDA Pro SDK从7.1版本开始，已经有部分中端MIR相关操作的API。
- Binary Ninja LLIL，类似于IDA Pro的反汇编工具，闭源，价格比IDA Pro便宜。中端MIR称为LLIL。
- Rose Sage III，Rose，类似于IDA Pro的反汇编框架工具，开源。中端MIR称为Sage III
- Radare2 ESIL，Radare2，类似于IDA Pro的反汇编框架工具，开源。中端MIR称为ESIL
- BinNavi REIL，BinNavi，类似于IDA Pro的反汇编界面框架工具，开源。中端MIR称为REIL
- Miasm MIR，Miasm，开源，中端MR有些类似Valgrind VEX

### 代码生成器IR
- Cretonne IL，Cretonne，用于WASM虚拟机JIT编译器的实现，开源。中端MIR称为Creton IL，类似于LLVM IR
- Firm IL，Firm，可用于编译器的实现，开源
### 符号执行IR
- Angr IR，Angr，使用Valgrind VEX作为中端MIR，开源
- KLEE IR，KLEE，使用LLVM IR作为中端MIR，开源
- Triton IR，Triton，开源
### 编译器IR
- LLVM MachineIR/LLVM IR
- GCC RTL/GCC Gimple

### 反编译器IR
- Boomerang SSL，Boomerang，一个完成度很高的开源反编译器，中端MIR称为SSL
- RetDec MIR，RetDec，开源，采用LLVM IR作为中端MIR
- Hex-Rays Decompiler MIR，IDA Pro反编译插件Hex-Rays Decompiler是反编译器的事实标准，采用IDA Pro官方定义的MircoCode作为中端MIR


## 编译器
- GCC
- LLVM(Clang)
- MSVC
- NativeAOT in .NET 7
- GraalVM 
- 方舟编译器
- Emscripten
- AMD ROCm | HIP
- Intel oneAPI toolkit | DPC++
- Nvidia HPC SDK | CUDA


## 构建系统
- make
- cmake
- xmake
- ninja 
- [sccache](https://github.com/mozilla/sccache)
- [ccache](https://github.com/ccache/ccache)
- [distcc](https://github.com/distcc/distcc)
- [fastbuild](https://github.com/fastbuild/fastbuild)
- [blade-build](https://github.com/chen3feng/blade-build)
