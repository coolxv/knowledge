

# arm
- [clfs-arm | 预编译系统](https://github.com/LeeKyuHyuk/clfs-arm)
- [clfs-arm64 | 搭建脚本](https://github.com/nextfoe/clfs-arm64)

# loongarch64
- [CLFS-for-LoongArch | 预编译系统](https://github.com/sunhaiyong1978/CLFS-for-LoongArch)

```
./qemu-system-loongarch64 -m 4G -smp 2 --cpu la464 --machine virt  -bios ./QEMU_EFI.fd  -serial stdio   -monitor telnet:localhost:4495,server,nowait -kernel vmlinux-5.18.0+ -initrd ramdisk  -append "root=/dev/ram  rdinit=/sbin/init console=ttyS0,115200" --nographic

```

# mips
- [QEMU-4-MIPS](https://github.com/PaulTomchik/QEMU-4-MIPS)
- [QEMU MIPS](https://gist.github.com/sergev/1cb8abf6d64c63378cca1bed00bdd4d2)

# ppc
- [qemu-ppc-boot](https://github.com/legoater/qemu-ppc-boot)
