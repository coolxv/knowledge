
# qemu
- [User space emulator](https://www.qemu.org/docs/master/user/main.html)
- [System Emulation](https://www.qemu.org/docs/master/system/index.html)
- [qemu-user-static](https://github.com/multiarch/qemu-user-static)
- [DebianOnQEMU](https://github.com/wtdcode/DebianOnQEMU)[ | debian](https://www.debian.org/releases/stable/mips64el/ch02s01.zh-cn.html)
- [qemu虚拟镜像文件格式：raw、qcow2](https://access.redhat.com/documentation/zh-cn/red_hat_virtualization/4.0/html/technical_reference/qcow2)
- [cloud-image-ubuntu-from-scratch](https://github.com/mvallim/cloud-image-ubuntu-from-scratch)
- [initramfs 与 initrd](https://zh.wikipedia.org/wiki/Initrd)

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
- [protocol-debian-mips64el](https://gist.github.com/sergev/1cb8abf6d64c63378cca1bed00bdd4d2)
- [qemu-mips](https://people.debian.org/~jcowgill/qemu-mips/)
```
qemu-system-mips64el -cpu 5KEf -M malta -m 1024 -kernel ./vmlinuz-5.10.0-18-5kc-malta -initrd ./initrd.img-5.10.0-18-5kc-malta  -hda ./debian-bullseye-mips64el-malta.qcow2 -append "console=ttyS0 debug root=/dev/sda net.ifnames=0"  -nographic -nic user,model=virtio-net-pci,hostfwd=tcp::5555-:22

chcp 65001
vi /etc/ssh/sshd_config
  PermitRootLogin yes
/etc/init.d/ssh restart

sudo apt update
sudo apt install build-essential
apt-get install manpages-dev
```
# ppc
- [qemu-ppc-boot](https://github.com/legoater/qemu-ppc-boot)
