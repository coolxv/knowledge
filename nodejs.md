# nodejs
[nodejs](https://nodejs.org/zh-cn/)
- node升级
```
1、检查 node 的当前版本，使用命令
node -v
2、清除npm cache
npm cache clean -f
3、安装 n 模块（只支持linux的）
npm install -g n
4、安装最新的稳定版本
n stable
sudo n 8.1.2
5.Windows升级node，直接下载安装包覆盖原有路径
```
# npm
- [淘宝 NPM 镜像](https://npmmirror.com/)
- npm使用国内镜像
```
1.临时使用
npm --registry https://registry.npm.taobao.org install express
2.持久使用
npm config set registry https://registry.npm.taobao.org
配置后可通过下面方式来验证是否成功
npm config get registry或npm info express
3.通过cnpm使用
npm install -g cnpm --registry=https://registry.npm.taobao.org
使用
cnpm install express
```
- npm升级和镜像源管理
```
npm -v
npm install npm@latest -g 
npm install npm -g

npm install -g nrm
nrm ls
nrm add taobao https://registry.npm.taobao.org/
nrm use taobao
nrm del taobao
nrm test
```

- yarn使用国内镜像
```
npm install yarn@latest -g
yarn config get registry
1. 临时修改
yarn save 软件名 --registry https://registry.npm.taobao.org/
2. 全局修改
yarn config set registry https://registry.npm.taobao.org/
3. 使用第三方软件快速修改、切换 yarn 镜像源
yrm YARN registry manager，yrm 不仅可以快速切换镜像源，还可以测试自己网络访问不同源的速度
安装 yrm
npm install -g yrm
列出当前可用的所有镜像源
yrm ls
    npm -----  https://registry.npmjs.org/
    cnpm ----  http://r.cnpmjs.org/
*   taobao --  https://registry.npm.taobao.org/
    nj ------  https://registry.nodejitsu.com/
    rednpm -- http://registry.mirror.cqupt.edu.cn
    skimdb -- https://skimdb.npmjs.com/registry
    yarn ----  https://registry.yarnpkg.com
使用淘宝镜像源
yrm use taobao
测试访问速度
yrm test taobao

```
- yarn
[yarn](https://yarnpkg.com/)[ | 中文文档](https://yarn.bootcss.com/docs/)
```
yarn install
yarn cache
yarn cache clean
yarn add
yarn global add
yarn remove
yarn run
yarn upgrade
yarn list
```
- yarn 和 npm 
```
start 命令不是用户定义的脚本名称，因此您可能不需要指定 run 命令来执行它。
下列四个命令完全等价：
npm start
npm run start
yarn start
yarn run start
然而，如果用户定义了一个名为 app 的脚本：
npm app (Does not work!) - 用户定义的脚本必须跟 run
npm run app (Works!)
yarn app (Works!)
yarn run app (Works!)
这就是二者细微的差别。
```
```
npm install === yarn
npm install taco --save === yarn add taco
npm uninstall taco --save === yarn remove taco
npm install taco --save-dev === yarn add taco --dev
npm update --save === yarn upgrade
npm install taco@latest --save === yarn add taco
npm install taco --global === yarn global add taco
npm init === yarn init
npm link === yarn link
npm outdated === yarn outdated
npm publish === yarn publish
npm run === yarn run
npm cache clean === yarn cache clean
npm login === yarn login (and logout)
npm test === yarn test
npm install --production === yarn --production
```
- [pnpm | 软件包管理器](https://www.pnpm.cn/)
- [nave | linux](https://github.com/isaacs/nave)
- [nvm | linux](https://github.com/nvm-sh/nvm)
- [nodeenv](https://github.com/ekalinin/nodeenv)
- 使用anaconda
```
conda create -n nodeenv nodejs
conda activate nodeenv
conda deactivate 
conda info --envs 
conda env list 
conda env remove -n nodeenv 
conda create -c conda-forge -n nodeenv nodejs  # Conda-forge渠道是社区维护的代码库
```

## nodejs打包exe
- [pkg](https://github.com/vercel/pkg)
- [nexe](https://github.com/nexe/nexe)
- [node-packer](https://github.com/pmq20/node-packer)
- [enclose](https://github.com/igorklopov/enclose)
## nodejs GUI
- [nodegui](https://github.com/nodegui/nodegui)
- [sixtyfps-node](https://github.com/sixtyfpsui/sixtyfps/tree/master/api/sixtyfps-node)
