# 概念
- HID-compliant device：是HID兼容设备
- xRAM：51单片机中on-chip expanded RAM（简称XRAM）也叫做外部随机存储器
厂商在给出芯片特性时，往往把XRAM和标准52芯片的256字节内部RAM加在一起统称为on-chip RAM容量，有的是512(256+256)，有的是1024(256+768)，有的是1280(256+1024)。
最关键的是对这些XRAM的Enable/Disable上，不同厂商的控制有些差别:所涉及的SFR地址、在SFR中和XRAM相关的位所在位置和上电复位后XRAM的状态。
- iRAM：internal ram 内部RAM，指的是集成到SoC内部的RAM
- 上拉、下拉电阻
- GPIO（General Purpose Input Output ）为通用输入/输出，通用端口，总线扩展器， 利用工业标准I2C、SMBus或SPI接口简化了I/O口的扩展。当微控制器或芯片组没有足够的I/O端口，或当系统需要采用远端串行通信或控制时，GPIO产品能够提供额外的控制和监视功能。
- SPI(Serial Peripheral Interface：串行外设接口);是一种标准的四线同步双向串行总线，SPI接口主要应用在 EEPROM，FLASH，实时时钟，AD转换器，还有数字信号处理器和数字信号解码器之间。SPI，是一种高速的，全双工，同步的通信总线，并且在芯片的管脚上只占用四根线，节约了芯片的管脚，同时为PCB的布局上节省空间，提供方便，正是出于这种简单易用的特性，现在越来越多的芯片集成了这种通信协议。
- I2C(INTER IC BUS：意为IC之间总线)：由PHILIPS公司开发的两线式串行总线，用于连接微控制器及其外围设备。是微电子通信控制领域广泛采用的一种总线标准。它是同步通信的一种特殊形式，具有接口线少，控制方式简单，器件封装形式小，通信速率较高等优点。
- I2S（Inter-IC Sound Bus）是飞利浦公司为数字音频设备之间的音频数据传输而制定的一种总线标准。I2S，PCM，IOM-2都是数字音频接口，传数据的。
- UART(Universal Asynchronous Receiver Transmitter：通用异步收发器)：通用异步接收/发送装置。
- USART:通用同步异步收发器；
- USB（Universal Serial BUS）：通用串行总线
- CAN（Controller Area Network）：现场总线
- JTAG (Joint Test Action Group 联合测试行动小组)是一种国际标准测试协议（IEEE 1149.1兼容），主要用于芯片内部测试。
- CSMA/CD（Carrier Sense Multiple Access with Collision Detect）是“载波侦听多路访问/冲突检测”的缩写。

```
Putting the MCU into USB Bootloader mode

There are two possible bootloader pins ton the CH552 the default from the factory is on P3.6. To active the bootloader the pin must be pulled to 3V3 briefly after reset. This can, however, be very problematic as the same pin is shared with USB DP. So for my purposes, I like to set up the bootloader pin as the available alternative which is P1.5 there is a catch though this pin ins needed to be pulled to GND.
```

# 资料
- [USB中文网](http://www.usbzh.com/)
- [USB官网 hid](https://www.usb.org/hid)
- [HID复合设备实例—键盘+鼠标](http://usb.baiheee.com/usb_projects/easy_usb_51_programer_plus/usb_keyboard_mouse.html)
- [USB虚拟设备](http://www.usbzh.com/article/forum-48.html)
- [Interpreting Mouse Axis Data](https://docs.microsoft.com/en-us/previous-versions/windows/desktop/ee418272(v=vs.85))
- [Windows HID 显示器亮度控制](https://docs.microsoft.com/zh-cn/windows-hardware/drivers/hid/display-brightness-control)
- [hidapi](https://github.com/libusb/hidapi)
- [hidapitester](https://github.com/todbot/hidapitester)
- [HID device](https://github.com/NicoHood/HID)
- [keil c51 Interrupt Functions](https://www.keil.com/support/man/docs/c51/c51_le_interruptfuncs.htm)
- [CH55X 8位 MCU系列应用参考示例](http://www.wch.cn/bbs/thread-65023-1.html))
- [CH554 USB Composite Device Demo ](https://github.com/rikka0w0/CH55x_USB_CompositeDevice)
- [CH551实现USB键盘和鼠标符合设备](https://github.com/zhuhuijia0001/usb-device-ch551)
- [CH554 例子](http://bbs.eeworld.com.cn/thread-643132-1-1.html)
- [ch55x-isptool | bootloader出厂已固化，支持USB和UART ISP。可多次使用](https://github.com/ishiyakazuo/ch55x-isptool)
- [ch552isptool](https://github.com/platunus/ch552isptool)
- [CH55x在linux的C开发环境建立](https://blog.csdn.net/nicechao/article/details/103094470)
- [发个CH55x系列芯片的keil烧写插件](https://whycan.com/t_2220.html)[github](https://github.com/posystorage/CH55x-Keil-Plugin)
- [Keil中添加沁恒单片机型号](https://blog.csdn.net/qq_25848569/article/details/106150185)
- [github chxxx](https://github.com/search?o=desc&q=IE_USB&s=indexed&type=Code)
- [无线蓝牙键盘](https://wiki.lotlab.org/index.html)
- [CH552做一个 USB 提醒器](http://www.lab-z.com/usbnt/)
- [zadig | 安装通用 USB 驱动程序（例如 WinUSB、libusb-win32/libusb0.sys 或 libusbK）以帮助您访问 USB 设备的 Windows 应用程序](https://zadig.akeo.ie/)
- [ch554 sdcc(Small Device C Compiler)](https://github.com/Blinkinlabs/ch554_sdcc)
- [python flashing WCH CH551/CH552/CH554/CH558/CH559 USB microcontroller with bootloader v2.30 or v2.31 (and maybe v2.40)](https://github.com/ishiyakazuo/ch55x-tool)
- [CH551 to CH554 One Click SDCC Compiler](https://github.com/atc1441/CH55xOneClickCompiler)
- [CH551 usb连线](https://github.com/ishiyakazuo/CH551-4NES4SNES)
- [CH55x flashing tool](https://github.com/rgwan/librech551)
- [ch551介绍](http://rabid-inventor.blogspot.com/2020/05/getting-started-with-ch55x.html)
- [Ch55x Arduino ](https://hackaday.io/project/172143/instructions)[ch55xduino](https://github.com/DeqingSun/ch55xduino)
- [CH55x Use-as-USB-Serial-Converter](https://github-wiki-see.page/m/ElectronicCats/DAP-Cat-Programmer/wiki/Use-as-USB-Serial-Converter)
- [CH551 Custom Keyboard](https://github.com/TabbycatPie/CustomKeyboard)
- [CH552 / CH551 USB State Light](https://github.com/andreasb242/CH55xG-StateLight)
- [badusb_ch551](https://github.com/tantaizining/badusb_ch551)
- [ch552 python tool](https://github.com/MarsTechHAN/ch552tool)
- [CH552X_HidKeyboard](https://github.com/hexesdesu/CH552X_HidKeyboard)
- [CH551-4NES4SNES](https://github.com/ishiyakazuo/CH551-4NES4SNES)
- [USB-Screen](https://github.com/chenxuuu/USB-Screen)
- [CH551立创商城](https://item.szlcsc.com/110178.html)
- [芯芸 探索芯世界](https://github.com/SoCXin)
- [南京沁恒芯片价格](https://list.szlcsc.com/brand/271.html)
- [如何发送 USB 控制传输全过程分析](https://docs.microsoft.com/zh-cn/windows-hardware/drivers/usbcon/usb-control-transfer)
- [rawhid](https://www.pjrc.com/teensy/rawhid.html)


# 工具
- [HID Descriptor Tool](https://www.usb.org/document-library/hid-descriptor-tool)
- [TeenyDT - Online USB Descriptor Generator](https://teenydt.github.io/)
- [USB Descriptor and Request Parser](https://eleccelerator.com/usbdescreqparser/)
- [UsbTreeView | USB Device Tree Viewer](https://www.uwe-sieber.de/english.html)
- [wireshark](https://www.wireshark.org/)
