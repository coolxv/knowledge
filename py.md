# pip使用
```
#生成依赖
pip freeze > requirements.txt
pip install -r requirements.txt
pip install pipreqs
pipreqs .  --encoding=utf8 --force    # 当前项目的依赖
#使用第三方源
pip install -r requirements.txt -i https://pypi.tuna.tsinghua.edu.cn/simple/
阿里云：https://mirrors.aliyun.com/pypi/simple/
中国科技大学：https://pypi.mirrors.ustc.edu.cn/simple/
豆瓣：https://pypi.douban.com/simple/
清华大学：https://pypi.tuna.tsinghua.edu.cn/simple/
中国科学技术大学：https://pypi.mirrors.ustc.edu.cn/simple/
华中理工大学  http://pypi.hustunique.com/simple/  
山东理工大学  http://pypi.sdutlinux.org/simple/ 
#查看已安装的库
pip list
#更新库
pip install--upgrade 库名
卸载库
pip uninstall 库的名字
```

# conda使用
```
conda update -n base -c defaults conda
conda install --yes --file requirements.txt
#创建环境
conda create --name paddle python=3.9
#删除环境
conda remove --name paddle --all
#激活环境
activate paddle # for Windows
source activate paddle # for Linux & Mac
deactivate paddle # for Windows
source deactivate paddle # for Linux & Mac
#查看环境
conda info -e
#包管理
conda install numpy
conda install -n paddle numpy # 如果不用-n指定环境名称，则被安装在当前活跃环境
conda list
conda list -n paddle # 查看某个指定环境的已安装包
conda search numpy
conda update -n paddle numpy
conda remove -n paddle numpy
conda update python
conda update anaconda
```
# 资料
- [Python官网中文文档](https://docs.python.org/zh-cn/3/index.html)
- [python3 cookbook](https://python3-cookbook.readthedocs.io/zh_CN/latest/index.html)
- [pip官方手册](https://pip.pypa.io/en/stable/getting-started/)
- [pdb调式器](https://docs.python.org/zh-cn/3/library/pdb.html)
- [python 算法大全](https://github.com/TheAlgorithms/Python)[ | 100天](https://github.com/coells/100days)
- [python 100天](https://github.com/jackfrued/Python-100-Days)
- [Python Cheat Sheet](https://github.com/crazyguitar/pysheeet)
- [python-cheatsheet](https://github.com/gto76/python-cheatsheet)
- [Python Cheatsheet](https://www.pythoncheatsheet.org/)
- [python-cheat-sheet 可打印](https://blog.finxter.com/python-cheat-sheet/)
- [python 版本、环境、包管理](https://modelpredict.com/python-dependency-management-tools)[ | 中文](https://blog.simon7.top/20200602/python%E4%BE%9D%E8%B5%96%E6%80%A7%E7%AE%A1%E7%90%86%E5%B7%A5%E5%85%B7%E6%A6%82%E8%BF%B0-%E8%AF%91/)
# awesome
- [awesome-python](https://github.com/vinta/awesome-python)
- [awesome-python-cn](https://github.com/jobbole/awesome-python-cn)

# 工具
- [miniconda](https://conda.io/en/latest/miniconda.html)[ | Conda vs. Miniconda vs. Anaconda](https://www.quora.com/What-is-miniconda3)
- [miniforge](https://github.com/conda-forge/miniforge)
- [poetry](https://python-poetry.org/)
- [pipx](https://github.com/pypa/pipx)
- [Binder | 免费的Jupyter](https://mybinder.org/)
- [nbviewer | 免费的Jupyter](https://nbviewer.org/)
- [Numba | 局部JIT](https://numba.pydata.org/)
- [PyEGo | 环境依赖推理工具](https://github.com/PyEGo/PyEGo)
- [micropython | 嵌入式环境python](https://micropython.org/)
- [cython | AOT](https://cython.org/)
- [Pyjion  | JIT](https://github.com/tonybaloney/Pyjion)
- [pyright | 静态检测](https://github.com/microsoft/pyright)

# 关键点
- [非package下的源文件导入模块的顺序](https://www.letianbiji.com/python/python-module.html)[ | Python3相对导入变化](https://stackoverflow.com/questions/12172791/changes-in-import-statement-python3)[ | 使用相对路径名导入包中子模块](https://python3-cookbook.readthedocs.io/zh_CN/latest/c10/p03_import_submodules_by_relative_names.html)

# Numpy

# CuPy
- [CuPy](https://cupy.dev/)
# Scipy

# statsmodels

# Pandas
- [pandastutor](https://pandastutor.com/)
# blaze
- [blaze](https://github.com/blaze/blaze)

# Matplotlib

# Seaborn

# Sklearn

# pymc
- [pymc](https://github.com/pymc-devs/pymc)

