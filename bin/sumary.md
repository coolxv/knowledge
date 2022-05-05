

![](pic/topic.png)
# 主题
- [编译](compile.md)
- [程序](program.md)
- [语言](language.md)
- [二进制](bin.md)
- [打桩](stub.md)
# 案例
- [交易系统API SafeEngine和openssl1.1.1符号冲突](symbolic.md)
- [Linux高版本编译的程序在低版本上运行，依赖高版本glibc符号](abi.md)
- 六期itas向交易系统注入动态库，支持查询内存数据
- 信创并行编译问题，导致TE程序运行异常
- 出入金低版本预编译库在高版本编译运行异常
- 交易系统升级红帽8 libstdc++ 库中的 std::string 和 std::list 类的应用程序二进制接口(ABI)在 RHEL 7(GCC 4.8)和 RHEL 8(GCC 8)之间有所改变，以符合 C++11 标准。
- GCC -O2时对一个函数符号产生了两个符号一个全局一个局部符号，导致stub时失败。通过加上-fno-inline解决。


# 二进制兼容
- [API/ABI changes review for glibc](https://abi-laboratory.pro/?view=timeline&l=glibc)
- [abi-tracker](https://github.com/lvc/abi-tracker)
- [abi-compliance-checker](https://github.com/lvc/abi-compliance-checker)
- [Linux Foundation Referenced Specifications](https://refspecs.linuxfoundation.org/)
# 扩展
- [Code Models](https://alittleresearcher.blogspot.com/2017/03/understanding-the-x64-code-models.html)
- [Data Models](https://en.wikipedia.org/wiki/64-bit_computing#64-bit_data_models)
- [Memory Models](https://en.wikipedia.org/wiki/Intel_Memory_Model)
