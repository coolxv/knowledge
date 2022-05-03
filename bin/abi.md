# 遇到的问题
- rule项目使用C++11语法，需要在红帽7.5上编译
- 部署的机器时红帽6.4
- 应用依赖高版本glibc符号，而运行在低版本glibc上，导致找不到符号  
- Centos6.5 glibc版本最高为2.12
- Centos7.5 glibc版本最高为2.17
- strings  /lib/x86_64-linux-gnu/libc.so.6 | grep GLIBC_
# 解决方案

## 方案1
使用glibc版本的低版本符号
asm(".symver memcpy, memcpy@GLIBC_2.2.5");
-Wl,--wrap=memcpy
```cpp
#include <string.h>

void *__memcpy_old(void *, const void *, size_t);

asm(".symver __memcpy_old, memcpy@GLIBC_2.2.5");
void *__wrap_memcpy(void *dest, const void *src, size_t n)
{
    return __memcpy_old(dest, src, n); 
}
```

## 方案2
拷贝高版本环境相关glibc、stdc++等库到低版本系统应用目录中。
1. 执行下面脚本，拷贝程序test依赖到lib目录里
```sh
#!/bin/bash

LibDir=$PWD"/lib"
Target=$1
lib_array=`ldd $Target | grep -o "/.*" | grep -o "/.*/[^[:space:]]*"`
mkdir -p $LibDir
for Variable in ${lib_array}
do
    cp -f "$Variable" $LibDir
done
```
2. 通过patchelf添加test程序rpath引用高版本库
```
patchelf --set-rpath <prefix>/lib  test
patchelf --set-interpreter <prefix>/lib/ld-linux-x86-64.so.2 test
```
## 方案3
如果您有旧glibc及其头文件的副本，就可以基于新的gcc但引用旧glibc构建一程序。
1. 编译glibc
```
 ../glibc-2.23/configure --with-headers=/opt/linux/linux-3.0.101-108.84-obj/x86_64/default/usr/include --prefix=$HOME/glibc --disable-werror --without-selinux --enable-add-ons
```
2. 编译程序
```
gcc glibc-version.c  -Wl,--rpath=$HOME/glibc/2.23/lib -Wl,--dynamic-linker=$HOME/glibc/2.23/lib/ld-linux-x86-64.so.2
```
3. 如果使用的glibc版本不对，可能会出现这种错误：
```
Inconsistency detected by ld.so: dl-version.c: 224: _dl_check_map_versions:
Assertion `needed != ((void *)0)' failed!
```
## 方案4
静态编译依赖
```
-static-libstdc++、-static-libgcc、-static、-no-pie
```
