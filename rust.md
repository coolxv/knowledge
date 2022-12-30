
- [awesome-rust](https://github.com/rust-unofficial/awesome-rust)
- [awesome-rust-zh](https://github.com/chinanf-boy/awesome-rust-zh)

# 教程
- [rust-course](https://github.com/sunface/rust-course)

# 命令
- 升级：rustup update
- 卸载：rustup self uninstall

# 项目

- SWC: (Speedy Web Compiler) 基于 Rust 的前端构建工具，可以理解为 Rust 版本的 Babel，但是性能有 10 倍提升。目前被 Next.js、Deno 使用。
- Tauri：Tauri 是目前最流行的 Electron 替代方案，通过使用 Rust 和 Webview2 成功解决了 Electron 的包体积大和内存占用高的问题。具体可以参见底部参考文章，微软为什么最终放弃了 Electron。相信 Atom 团队也是看到了 Tauri 的成功，才决定基于 Rust 去做 Zed 编辑器。
- Rome：可以理解为 Babel 作者的新作品，Rome 旨在取代许多现有的 JavaScript 工具，集代码检测、打包、编译、测试等功能于一身。
- Parcel：零配置构建工具，特点是快速编译和不需要配置
- Wgpu：是 WebGPU API 标准的 Rust 实现。WebGPU 是由 W3C 发布的规范，目标是让网页代码能安全可靠地访问 GPU 功能。其实现方式借鉴了 Vulkan API，会翻译到宿主硬件所用的各式 API（如 DirectX、Metal、Vulkan 等）上执行。
- Bevy：基于 Rust 语言开发，数据驱动的游戏引擎。同时支持 2D 和 3D 图形渲染，以及图可视化的渲染。
- Cube.js: cube.js 是开源的 BI 分析工具框架，其中的 Cube Store 用于分析查询的性能优化以及通过跨数据库连接的数据联合等附加功能，就是由 Rust 来实现的。
- [rustviz](https://github.com/rustviz/rustviz)

