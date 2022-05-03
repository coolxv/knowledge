# 遇到的问题
- 交易系统需要支持国密算法
- 当前交易系统是红帽7.5使用Openssl 1.0.2k，不支持国密算法
- 红帽8使用OpenSSL 1.1.1，支持国密SM2/SM3/SM4加密算法
- API和BU依赖上海CA的SafeEngine(openssl 1.0.2套壳)
- 由于Openssl1.1.1与openssl1.0.2k的下述主要变化导致，OPENSSL_ia32_cpuid ()函数：在1.0.2无参数，在1.1.1增加一个参数
  
# 解决方案

## 方案1
改造API使用dlopen(“/libsafeengine.so”,RTLD_LAZY|RTLD_DEEPBIND)

## 方案2
safeengine基于opensssl1.0.2加-Wl,-Bsymbolic重新编译，需要上海CA配合

## 方案3
写个假的safeengine，适合临时使用


