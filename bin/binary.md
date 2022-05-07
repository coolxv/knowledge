- [ELFkickers](https://github.com/BR903/ELFkickers)
- [patchelf](https://github.com/NixOS/patchelf)
- [elfutils](https://sourceware.org/elfutils/)
- [elftoolchain](https://sourceforge.net/p/elftoolchain/wiki/Home/)
- [binutils](https://www.gnu.org/software/binutils/)


# patchelf
- 设置 interpreter
- 设置 soname
- 设置 rpath
- 设置 needed library


# objcopy
类似windows资源文件，可以把图片写入到可执行程序里
```
objcopy -I binary -O elf64-x86-64 -B i386 strings.txt strings.o
nm strings.o
gcc res.c -c
gcc res.o  strings.o -o res
```

# Qemu 
qemu-system-mips64el -M malta -cpu MIPS64R2-generic -m 2G -append 'root=/dev/vda console=ttyS0 mem=2048m net.ifnames=0 nokaslr' -netdev user,id=user.0  -device virtio-net,netdev=user.0 -serial stdio -device usb-kbd -device usb-tablet -kernel .\vmlinux-4.14.0-3-5kc-malta.mips64el.buster -initrd .\initrd.img-4.14.0-3-5kc-malta.mips64el.buster -drive file=$(echo .\debian-buster-mips64el.qcow2),if=virtio
# Valgrind

# Wine
