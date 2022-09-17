
# ld | the GNU linker.
# as | the GNU assembler.
# addr2line | Converts addresses into filenames and line numbers.
# ar | A utility for creating, modifying and extracting from archives.
# c++filt | Filter to demangle encoded C++ symbols.
# dlltool | Creates files for building and using DLLs.
# gold | A new, faster, ELF only linker, still in beta test.
# gprof | Displays profiling information.
# nlmconv | Converts object code into an NLM.
# nm | Lists symbols from object files.
# objcopy | Copies and translates object files.
类似windows资源文件，可以把图片写入到可执行程序里
```
objcopy -I binary -O elf64-x86-64 -B i386 strings.txt strings.o
nm strings.o
gcc res.c -c
gcc res.o  strings.o -o res
```
# objdump | Displays information from object files.
```
gcc hello.c -o hello -g
objdump -S -l hello > hello.lst
```
# ranlib | Generates an index to the contents of an archive.
# readelf | Displays information from any ELF format object file.
# size | Lists the section sizes of an object or archive file.
# strings | Lists printable strings from files.
# strip | Discards symbols.
# windmc | A Windows compatible message compiler.
# windres | A compiler for Windows resource files.
# Amalgamate | C++头文件合并
# [cpp_rsc](https://github.com/orex/cpp_rsc)
# e9patch | 一个强大的静态二进制重写工具
# retdec | 一个基于LLVM的可重定向机器代码反编译器
# bin2vex | 使用pyvex提供的C接口将二进制文件转换为VEX IR
# dyninst | 用于二进制检测、分析和修改的工具
# pin | Pin是Intel公司开发的动态二进制插桩框架，可以用于创建基于动态程序分析工具
# binary_bakery | 将二进制文件(图像、字体等)转换成c++源代码，并在编译或运行时访问该数据

# pmap

# pstatck

# strace 
# ltrace

# ftrace

# ptrace 函数

# patchelf
- 设置 interpreter
- 设置 soname
- 设置 rpath
- 设置 needed library




# Qemu 
qemu-system-mips64el -M malta -cpu MIPS64R2-generic -m 2G -append 'root=/dev/vda console=ttyS0 mem=2048m net.ifnames=0 nokaslr' -netdev user,id=user.0  -device virtio-net,netdev=user.0 -serial stdio -device usb-kbd -device usb-tablet -kernel .\vmlinux-4.14.0-3-5kc-malta.mips64el.buster -initrd .\initrd.img-4.14.0-3-5kc-malta.mips64el.buster -drive file=$(echo .\debian-buster-mips64el.qcow2),if=virtio

# [unicorn](https://github.com/unicorn-engine/unicorn)

# Valgrind

# Wine
