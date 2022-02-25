# 名词解释
- [FLOPS](https://zh.wikipedia.org/wiki/%E6%AF%8F%E7%A7%92%E6%B5%AE%E9%BB%9E%E9%81%8B%E7%AE%97%E6%AC%A1%E6%95%B8)(Floating-point operations per second)，每秒浮点运算次数，亦称每秒峰值速度，即每秒所运行的浮点运算次数
  * 一个MFLOPS（megaFLOPS）等于每秒一百万（10的6）次的浮点运算
  * 一个GFLOPS（gigaFLOPS）等于每秒十亿/十亿（10的9）次的浮点运算
  * 一个TFLOPS（teraFLOPS）等于每秒一兆/一万亿（10的12）次的浮点运算
  * 一个PFLOPS（petaFLOPS）等于每秒一千兆/一千万亿（10的15）次的浮点运算
  * 一个EFLOPS（exaFLOPS）等于每秒一百京/一百亿亿（10的18）次的浮点运算
- [FP64, FP32, FP16, BFLOAT16, TF32, INT8](https://moocaholic.medium.com/fp64-fp32-fp16-bfloat16-tf32-and-other-members-of-the-zoo-a1ca7897d407)
- [IPS](https://zh.wikipedia.org/wiki/%E6%AF%8F%E7%A7%92%E6%8C%87%E4%BB%A4)(Instructions per second),MIPS是每秒百万指令 "Millions of Instructions per Second"
- 分类(classification)
- 回归(regression)
- 聚类(clustering)
- 降维(dimensionality reduction)
- 插值
- 逼近
- 拟合，过拟合，欠拟合
- 近似
- 神经单元
- 连接
- 激活函数：将神经网络上一层的输入，经过神经网络层的非线性变换转换后，通过激活函数，得到输出。常见的激活函数包括：sigmoid, tanh, relu等。又被称为转移函数、激励函数、传输函数或限幅函数。
- 损失函数：度量神经网络的输出的预测值，与实际值之间的差距的一种方式。常见的损失函数包括：最小二乘损失函数、交叉熵损失函数、回归中使用的smooth L1等。
- 优化函数：也就是如何把损失值从神经网络的最外层传递到最前面。如最基础的梯度下降算法，随机梯度下降算法，批量梯度下降算法，带动量的梯度下降算法。优化器算法Optimizer（BGD、SGD、MBGD、Momentum、NAG、Adagrad、Adadelta、Adamax、RMSprop、Adam）。
- 前向传播
- [反向传播](https://www.cnblogs.com/charlotte77/p/5629865.html)
- 学习速率
- [机器学习 = 模型 + 策略 + 算法](https://zhuanlan.zhihu.com/p/48914251)
- [机器学习 = 数据 + 模型 + 算法](https://blog.51cto.com/u_15088375/3250056)
- 自然神经网络、人工神经网络
- [人工神经网络的三要素：神经元模型、网络模型、网络的学习规则](https://zhuanlan.zhihu.com/p/46790199)
- [人工智能(机器学习<深度学习>) = 数据 + 算法 +  算力](https://www.leiphone.com/category/aihealth/e4qym3ESJ2M9hdPt.html)
- [深度学习软件的三个层次](https://ml-ops.org/content/three-levels-of-ml-software)
- [人工智能 （AI Artificial Intelligence）](https://easyai.tech/ai-definition/ai/)
- 机器学习 （ML Machine Learning）
- 深度学习 （DL Deep Learning）,DL 是 ML 算法中的一种。ML 是实现 AI 的方法，包含关系，AI > ML > DL。
- 强化学习
- 对抗学习
- 对比学习
- 迁移学习
- 联邦学习
- 多模态学习
- 偏好学习
- 表征学习
- 元学习
- 自动化机器学习
- 量子机器学习
- 有监督学习、无监督学习、强化学习、半监督学习、自监督学习、多实例学习
- [动态图、静态图、计算图](http://pointborn.com/article/2021/7/4/1546.html)
- 可解释性
- SOTA，全称「state-of-the-art」
- 图像分类（image classification）、目标检测（object detection）、语义分割（semantic segmentation）、实例分割（instance segmentation）、全景分割（panoptic segmentation）
- [数据集：训练集、验证集、测试集](https://easyaitech.medium.com/%E4%B8%80%E6%96%87%E7%9C%8B%E6%87%82-ai-%E6%95%B0%E6%8D%AE%E9%9B%86-%E8%AE%AD%E7%BB%83%E9%9B%86-%E9%AA%8C%E8%AF%81%E9%9B%86-%E6%B5%8B%E8%AF%95%E9%9B%86-%E9%99%84-%E5%88%86%E5%89%B2%E6%96%B9%E6%B3%95-%E4%BA%A4%E5%8F%89%E9%AA%8C%E8%AF%81-9b3afd37fd58)
  * 训练集相当于上课学知识
  * 验证集相当于课后的的练习题，用来纠正和强化学到的知识
  * 测试集相当于期末考试，用来最终评估学习效果
- MLOps是一组旨在可靠有效地在生产中部署和维护机器学习模型的实践
- [超参数](https://github.com/zoomc/DeepLearning_Notes_CV/blob/master/other/tensorflow%E4%BC%98%E5%8C%96%E5%99%A8%E5%8F%82%E6%95%B0%E8%AF%A6%E8%A7%A3.md)：learning rate、weight decay和momentum
- momentum 用于梯度下降算法中加速模型收敛
- weight decay 该参数是损失函数中的正则化项的系数。正则化用于防止过拟合，因为当网络出现过拟合现象时网络权值逐渐变大的，而正则化能降低权重。因此，为了避免出现overfitting，会给损失函数添加一个惩罚项，常用的惩罚项是所有权重的平方乘以一个衰减常量之和（L2正则化）用来惩罚大的权值。权值衰减惩罚项使得权值收敛到较小的绝对值，而惩罚大的权值。因为大的权值会使得系统出现过拟合，降低其泛化性能
- epoch：中文翻译为时期。一个时期 = 所有训练样本的一个正向传递和一个反向传递。
比如对于一个有 2000 个训练样本的数据集。将 2000 个样本分成大小为 500 的 batch，那么完成一个 epoch 需要 4 个 iteration。
- Iteration: 中文翻译为迭代。迭代是重复反馈的动作，神经网络中我们希望通过迭代进行多次的训练以到达所需的目标或结果。每一次迭代得到的结果都会被作为下一次迭代的初始值。
一个迭代 = 一个正向通过+一个反向通过
- batch size：中文翻译为批大小（批尺寸）。简单点说，批量大小将决定我们一次训练的样本数目。batch_size将影响到模型的优化程度和速度。
## 统计学、统计模型、统计推断、数理统计、概率论、统计学习、深度学习、机器学习、人工智能
- 概率论部分主要是讲：大千世界中，数据的分布呈现出来的形状 (分布函数，密度函数..)
- 数理统计部分则是在讲：建立在各种分布的前提下，我们如何用少量的样本数据来推断总体的一些性质; 或者推断两个样本是否来自一个总体; 等等
- [概率论]是[数理统计]的理论基础；学[数理统计]就等于在学习如何进行[统计推断]；[概率论]+[数理统计]=[统计学]；学习[统计学]的目的就是进行[统计推断]
- statistics 统计学是基础. statistical inference 是学统计的目的,即根据样本数据,对总体进行统计推断(假设检验 或 预测). 这两个概念都可以算属于统计学学科
- [统计学] 里，用的最多的就是回归模型，而回归模型里参数的求解，主要是通过[最小二乘（OLS）]和[最大似然估计（MLE）] 来求解
- OLS 和 MLE 其实是一个 [数值优化 (Optimization)] 的问题
- 所谓让机器学习，其中的一个方向，就是让机器求解一个或多个 [数值优化] 的问题。 这个通过利用 [回归模型] 和 [数值优化] 来解决问题的思路就叫做 [ Statistical Learning ]
- 机器学习的另一个方向是 通过逻辑判断的方法来求解问题， 那个方向可以简称 [Concept Learning]，还有神经网络
- 我们需要区分统计学与统计模型。统计学是关于数据的数学研究。没有数据，统计学则无用武之地。统计模型则是一种数据模型，可用于推断数据中的关系或创建具有预测功能的模型。通常情况下，两者相辅相成。
- 对于统计模型，我们假设数据是一个基于高斯分布且有随机噪声的线性回归函数，并且要在其中找到一条均方误差最小的线，但不需要训练和测试数据集。在许多情况下特别是研究中（比如下面将提到的传感器研究），统计模型的重点在于刻画数据与结果变量之间的关系，而不是对未来的数据进行预测。该过程被称为统计推断过程，而非预测过程。
- 两种方法殊途同归。机器学习算法的评价准确性可通过测试数据集来验证。对于统计模型来说，基于置信区间的回归参数分析，重要性测试以及其他测试可以用于评价该模型的有效性。由于使用这些方法所得到的结果是一致的，因此他们认为他们完全相同也是可以理解的。
- 机器学习算法：包括线性回归、逻辑回归、Lasso回归、Ridge回归、线性判别分析、近邻、决策树、感知机、神经网络、支持向量机、AdaBoost、GBDT、XGBoost、LightGBM、CatBoost、随机森林、聚类算法与kmeans、主成分分析、奇异值分解、最大信息熵、朴素贝叶斯、贝叶斯网络、EM算法、隐马尔可夫模型、条件随机场和马尔可夫链蒙特卡洛方法。
- 机器学习是人工智能领域人员做数据分析，数据挖掘是数据库领域人员做数据分析，统计学习是统计学领域人员做数据分析
- 李航老师在2012年出版过一本《统计学习方法》的图书，如图2所示。图书内容包含了朴素贝叶斯，支持向量机，隐马尔可夫模型等有监督学习方法，以及K均值、层次聚类等无监督学习方法。可以看到与传统机器学习内容基本一致，而且在今年第二版简介中提到“统计学习方法即机器学习方法，…”[1]。因此，可以说统计学习在某种场合下与机器学习概念基本一致。统计学习与经典机器学习方法有较强的关联性
- “统计学习与机器学习本质上是一致的（Essentially Equivalent），一些显而易见的区别是，机器学习领域发展迅速，学术会议影响力大，而统计学习注重理论推演，学术期刊影响力大。机器学习专家来自CS/EE专业，而统计学习专家来自Stat/Math专业”。CMU统计学大神Larry Wasserman教授于2012年6月写过一篇博文《Statistics Versus Machine Learning》[4]简短的回答是：两者没有什么区别，都是研究如何从数据中学习。目前这两个领域已经越来越同化，相互借鉴和启发想法。
然而，严谨地讲，混淆机器学习和统计学习两个概念会被认为是一种过于简单的表述，不太合理。主流更倾向于接受，机器学习方法是建立在统计学习基础之上的。
- 上帝函数”的两种套路：理解和预测。
这样的“上帝函数”有什么特点呢？我们说学习的目的无外乎两点：理解和预测，所以我们期盼它能拥有两个能力或者说两个必要条件：解释因果和预测未来。我需要知道问题的本质是什么，形成我们看到的结果的推动力究竟是什么（我是谁？我从哪里来？），这是因果分析；未来事物的发展会怎么样，是否按照某一个模式（我要到哪里去？)，这是预测分析。
- 统计学习以强大的数学理论支撑解释因果
- 机器学习依赖于大数据规模预测未来
- 统计推断（Inference）重解释，机器学习重预测（Prediction）
- 人工智能的另一种方法是将其视为人类智能和认知工作的补充而非替代。这种方法被称为增强智能，它寻找AI通过自动化某些步骤而不是整个过程来帮助人们更好地执行任务的方法。
- “AI首先是华丽辞藻，其实就是统计学。”这是2011年诺贝尔经济学奖获得者托马斯·萨金特（Thomas J. Sargent）近期在中国公开演讲时对AI的结论。
这位宏观经济学家也许是习惯了用统计去寻找经济的因果关系，因而认为AI也是这样。即使是他提到的动态规划（dynamic programming），也不属于统计学范畴。
除了统计，AI中的“学习”“推理”和“决策”中还使用了代数、逻辑、最优化等许多其他学科知识与方法。此外，有了算法后如何有效实现也非常重要。所以单纯说AI就是统计学，或者说“所有的AI都是利用统计学来解决问题的”都是片面和不准确的。
此外，AI还涉及到一个关键因素，就是如何实现最优的智能决策（例如AI打游戏）。一些理论和实证研究已经发现，神经网络就非常善于在复杂的条件下做出最优的决策。神经网络也不是统计学范畴。
应该说，统计学是人工智能若干重要基础之一，但远不是全部。AI的核心能力还来自于数学（博弈论、数值分析、逻辑学等）、运筹学（优化）、计算机科技（分布式计算、并行计算、CPU、NPU）、神经科学，甚至心理学。
- 人工智能的历史与未来划分为了三个阶段：手工知识（Handcrafted Knowledge）阶段、 统计学习（Statistical Learning）阶段、语境顺应（Contextual Adaptation）阶段

# 技术平台
- [AMD ROCm | HIP](https://www.amd.com/zh-hans/graphics/servers-solutions-rocm-hpc)
- [Intel oneAPI toolkit | DPC++](https://software.intel.com/content/www/us/en/develop/articles/installation-guide-for-intel-oneapi-toolkits.html)
- [Nvidia HPC SDK  | CUDA](https://developer.nvidia.com/zh-cn/hpc)
- [hipSYCL](https://github.com/illuhad/hipSYCL)
- [华为CANN | AscendCL](https://www.hiascend.com/zh/software/cann)
- [Microsoft DirectML](https://github.com/microsoft/DirectML)
- [Apple CoreML](https://developer.apple.com/documentation/coreml)
- [AMD AMDMIGraphX](https://github.com/ROCmSoftwarePlatform/AMDMIGraphX)
- [Intel oneDNN](https://github.com/oneapi-src/oneDNN)
- [Rockchip NPU rknpu2](https://github.com/rockchip-linux/rknpu2)[ | rknpu_ddk](https://github.com/airockchip/rknpu_ddk)
- [ARM NN SDK](https://github.com/ARM-software/armnn) [  | Arm Compiler for HPC](https://github.com/ARM-software/arm-hpc-tools)
- [ARM ACL](https://github.com/ARM-software/ComputeLibrary)
- [Android NNAPI](https://developer.android.com/ndk/guides/neuralnetworks)
- [Xilinx Vitis](https://github.com/Xilinx/Vitis-AI)
- [Apache TVM](https://github.com/apache/tvm)
- [Intel openvino](https://github.com/openvinotoolkit/openvino)
- [Nvidia TensorRT](https://github.com/NVIDIA/TensorRT)
- [Nvidia cudnn](https://developer.nvidia.com/zh-cn/cudnn)
- [HeCBench](https://github.com/zjin-lcf/HeCBench) [ | axbench](http://axbench.org/)
# 文件格式
- ONNX (.onnx, .pb, .pbtxt)
- NNEF (.nnef)
- OpenVINO IR (.xml, .bin)
- TensorRT (.plan)
- Keras (.h5, .keras)
- Core ML (.mlmodel)
- Caffe2 (predict_net.pb, predict_net.pbtxt)
- MXNet (.model, -symbol.json) 
- TensorFlow Lite (.tflite). 
- Caffe (.caffemodel, .prototxt)
- PyTorch (.pt, .pth)
- TorchScript (.pt, .pth)
- Torch (.t7), CNTK (.model, .cntk)
- PaddlePaddle (__model__)
- Darknet (.cfg)
- NCNN (.param)
- scikit-learn (.pkl)
- TensorFlow.js (model.json, .pb)
- TensorFlow (.pb, .meta, .pbtxt)

# 神经网络
- ANN，[人工神经网络](https://en.wikipedia.org/wiki/Types_of_artificial_neural_networks)
- RBF NN，径向基函数神经网络
- DBN，深度信念网络
- GAN，生成对抗网络，Dropout
- DNN，深度神经网络
- FCN，全卷积网络
- CNN，卷积神经网络，MCNN多列卷积神经网络，ResNets残差网络，Inception，Xception
- RNN，循环神经网络，BRNN双向循环神经网络、DRNN深层循环神经网络
- LSTM，长短期记忆网络
- AE，自编码器
- GNN，图神经网络，GCN图卷积网络，图注意力机GAT
 
![](https://miro.medium.com/max/2000/1*cuTSPlTq0a_327iTPJyD-Q.png)
<!-- https://towardsdatascience.com/the-mostly-complete-chart-of-neural-networks-explained-3fb6f2367464 -->

# 芯片
- [AI-Chip](https://github.com/basicmi/AI-Chip)
- 图形处理器（GPU）
- 现场可编程门阵列（FPGA）
- 专用集成电路（ASIC）
- 神经拟态芯片（NPU）
- Loihi2、百度昆仑2、ADA20X、阿里平头哥 “含光”、寒武纪 “思元” 、SynSense 的 DYNAP-CNN

# 算法可视化
- [算法可视化](https://algorithm-visualizer.org/)
- [数据结构和算法动态可视化 (Chinese)](https://visualgo.net/zh)
- [GitHub最大的开源算法库](https://the-algorithms.com/)

# AIOps、MLOps、学习平台
- [百度飞桨AI达人训练营](https://aistudio.baidu.com/aistudio/education/group/info/25259)
- [modelartsh | 华为一站式 AI 平台](https://www.huaweicloud.com/product/modelarts.html)[ | mindspore社区](https://www.mindspore.cn/)
- [阿里天池深度学习训练营](https://tianchi.aliyun.com/specials/promotion/aicampdl)
- [亚马逊sagemaker](https://aws.amazon.com/cn/sagemaker/)
- [kaggle](https://www.kaggle.com/)
- [comet | 是一个机器学习平台，用于跟踪、比较、解释和优化实验和模型](https://www.comet.ml/coolxv#projects)
- [neptune | 是一种轻量级运行管理工具，可帮助您跟踪机器学习运行情况](https://neptune.ai/)
- [mlflow | 是一个用于管理机器学习生命周期的开源平台](https://mlflow.org/)
- [polyaxon](https://polyaxon.com/)
- [databricks](https://databricks.com/)
- [floydhub](https://www.floydhub.com/)
- [valohai](https://valohai.com/)
- [algorithmia](https://algorithmia.com/)
- [metaflow](https://metaflow.org/)
- [dominodatalab](https://www.dominodatalab.com/)
- [infuseai](https://www.infuseai.io/)
- [iguazio](https://www.iguazio.com/)
- [datarobot](https://www.datarobot.com/)
- [dataiku](https://www.dataiku.com/)
- [causalens](https://www.causalens.com/)
- [cnvrg](https://cnvrg.io/)
- [allegro](https://www.allegro.ai/)
- [dvc](https://dvc.org/)
- [neptune](https://neptune.ai/)
- [benchmark_results](https://github.com/foolwood/benchmark_results)
# 可视化工具
- [tensorspace | 神经网络三维可视化框架](https://tensorspace.org/html/playground/index.html)
- [netron | 用于神经网络，深度学习和机器学习模型的可视化工具](https://github.com/lutzroeder/netron)
- [convnetjs | 在浏览器中训练深度学习模型（神经网络）](https://cs.stanford.edu/people/karpathy/convnetjs/)
- [反向传播算法演示](https://shuaili8.github.io/Teaching/VE445/L6%20backpropagation%20demo.html)[ | 具体例子](https://www.cnblogs.com/charlotte77/p/5629865.html)
- [nn_visualization | AI可视化及对抗样本演示](https://github.com/aisecstudent/nn_visualization)
- [cnn-explainer | 交互式可视化卷积神经网络](https://github.com/poloclub/cnn-explainer)
- [NN-SVG](http://alexlenail.me/NN-SVG/index.html)
- [tensorflow playground](https://playground.tensorflow.org/)
- [convnetplayground](https://convnetplayground.fastforwardlabs.com/#/models)
- [hiplot | 一款轻量级的交互式可视化工具，可以帮助人工智能研究人员利用平行图和其他图形方式来表示信息，发现高维数据中的相关性和模式](https://github.com/facebookresearch/hiplot)
- [IFeaLiD | 在浏览器中交互式地可视化和探索深度神经网络层或任何高光谱图像](https://github.com/BiodataMiningGroup/IFeaLiD)
- [summit | 通过可视化激活和归因总结来扩展深度学习的可解释性](https://github.com/fredhohman/summit)
- [nnplayground](https://nnplayground.com/)
- [neural-network-playground](https://akarzazi.github.io/neural-network-playground/)
- [监督模型训练过程的可视化工具](wandb.ai/home)
- [3D 手写卷积可视化](https://www.cs.ryerson.ca/~aharley/vis/conv/)[3D简单版](https://thomelane.github.io/convolutions/3DConv.html)
- [卷积可视化，调参](https://ezyang.github.io/convolution-visualizer/)
- [卷积动画](https://github.com/vdumoulin/conv_arithmetic)
- [paddlepaddle visualdl](https://www.paddlepaddle.org.cn/paddle/visualdl/)
- [tensors 3D visualizer](https://github.com/zetane/viewer)
- [华为 AI gallery](https://marketplace.huaweicloud.com/markets/ai/gallery.html)
- [使用LeNet在MNIST数据集实现图像分类](https://www.paddlepaddle.org.cn/documentation/docs/zh/tutorial/cv_case/image_classification/image_classification.html)
- [ConvNetDraw](https://cbovar.github.io/ConvNetDraw/)
- [netscope | 一个基于web的工具，用于可视化神经网络架构(或技术上的任何有向无环图)。它目前支持Caffe的prototxt格式](http://ethereon.github.io/netscope/)
- [ILearnDeepLearning.py | 神经网络和深度学习相关的小型项目](https://github.com/SkalskiP/ILearnDeepLearning.py)
- [解释GAN](https://explaining-in-style.github.io/)
# 标注工具
- [PaddleSeg | 自动标注工具](https://github.com/PaddlePaddle/PaddleSeg)
- [cvat](https://github.com/openvinotoolkit/cvat)
- [PixelAnnotationTool](https://github.com/abreheret/PixelAnnotationTool)
- [LabelMeAnnotationTool](https://github.com/CSAILVision/LabelMeAnnotationTool)
- [labelImg](https://github.com/tzutalin/labelImg)[ | roLabelImg](https://github.com/cgvict/roLabelImg)
- [labelme](https://github.com/wkentaro/labelme)
- [LabelImage | 在线标注](https://github.com/rachelcao277/LabelImage)
- [labelhub | 在线一站式](https://labelhub.cn/)
- [makesense | 在线标注](https://www.makesense.ai/)
- [VoTT](https://github.com/microsoft/VoTT)
- [Labelbox](https://github.com/Labelbox/Labelbox)
- [3D标注](https://github.com/springzfx/point-cloud-annotation-tool)
- [YOLO BBox Annotation Tool](https://github.com/drainingsun/ybat)
- [VGG（VIA）](https://www.robots.ox.ac.uk/~vgg/software/via/)
- [coco-annotator](https://github.com/jsbroks/coco-annotator)
- [label-studio](https://github.com/heartexlabs/label-studio)

# 数据集
- [汽车行业 Cityscapes](https://www.cityscapes-dataset.com/)[ | Mapillary Vistas ](https://www.mapillary.com/dataset/vistas)[ | Kitti Dataset ](http://www.cvlibs.net/datasets/kitti/eval_scene_flow.php)
- [MNIST](http://yann.lecun.com/exdb/mnist/)
- [Fashion MNIST](https://github.com/zalandoresearch/fashion-mnist)
- [ImageNet](https://image-net.org/)
- [COCO](https://cocodataset.org/)
- [Open Image](https://github.com/openimages/dataset)
- [CIFAR](http://www.cs.toronto.edu/~kriz/cifar.html)
- [youtube8m | 视频数据集](https://research.google.com/youtube8m/)
- [数据集列表](https://wiki.pathmind.com/open-datasets)
- [awesome](https://github.com/awesomedata/awesome-public-datasets)
- [StyleGAN 2 models](https://github.com/justinpinkney/awesome-pretrained-stylegan2)
- [datacentricai | 以数据为中心的AI](https://datacentricai.org/)

# 模型 Zoo
- [onnx models](https://github.com/onnx/models)
- [nnef models](https://github.com/KhronosGroup/NNEF-Tools/tree/master/models#nnef-model-zoo)
- [openvino model zoo](https://github.com/openvinotoolkit/open_model_zoo)
- [modelzoo](https://modelzoo.co/)
- [tensorflow models](https://github.com/tensorflow/models/blob/master/research/object_detection/g3doc/tf2_detection_zoo.md)
- [pytorch model zoo](https://pytorch.org/serve/model_zoo.html)
- [mxnet](https://mxnet.apache.org/versions/1.5.0/model_zoo/index.html)
- [keras model zoo](https://modelzoo.co/framework/keras)[keras mode zoo 2](https://keras.io/api/applications/)
- [caffe2 models](https://caffe2.ai/docs/zoo.html)
- [ascend models](https://gitee.com/ascend/modelzoo)
- [Torchreid models](https://kaiyangzhou.github.io/deep-person-reid/MODEL_ZOO)
- [hailo model zoo](https://github.com/hailo-ai/hailo_model_zoo)
- [gluon model zoo](https://cv.gluon.ai/model_zoo/index.html)
- [mmdetection model zoo](https://mmdetection.readthedocs.io/en/latest/model_zoo.html)
- [detectron2 model zoo](https://github.com/facebookresearch/detectron2/blob/main/MODEL_ZOO.md)
- [unrealcv model zoo](http://docs.unrealcv.org/en/latest/reference/model_zoo.html)
- [lifesci model zoo](https://lifesci.dgl.ai/api/model.zoo.html)
- [kipoi model zoo](https://kipoi.org/)
- [roboflow models](https://models.roboflow.com/)
- [elastix model zoo](https://elastix.lumc.nl/modelzoo/)
- [parl.ai model zoo](https://parl.ai/docs/zoo.html)
- [ibm model zoo](https://developer.ibm.com/exchanges/models/all/)
- [the-gan-zoo](https://github.com/hindupuravinash/the-gan-zoo)
# 模型 Hub
- [tensorflow hub](https://www.tensorflow.org/hub)
- [pytorch hub](https://pytorch.org/hub/)
- [paddlepaddle hub](https://www.paddlepaddle.org.cn/hub)
- [megengine hub](https://megengine.org.cn/model-hub)
# 模型训练
- [digits](https://developer.nvidia.com/digits)
- [easydl](https://ai.baidu.com/easydl/app/model/objdct/models)
- [ludwig](https://github.com/ludwig-ai/ludwig)
- [tinyms](https://github.com/tinyms-ai/tinyms)
- [nni](https://github.com/microsoft/nni)
- [ColossalAI](https://github.com/hpcaitech/ColossalAI)
- [determined](https://github.com/determined-ai/determined)
- [horovod](https://github.com/horovod/horovod)
- [pycaret](https://github.com/pycaret/pycaret)
- [onepanel](https://github.com/onepanelio/onepanel)
- [google automl | 收费](https://cloud.google.com/automl)
- [baidu automl | 收费](https://ai.baidu.com/easydl/)
- [microsoft automl | 收费](https://azure.microsoft.com/en-us/services/machine-learning/#product-overview)
- [aliyun automl | 收费](https://www.aliyun.com/product/bigdata/learn)
- [4paradigm automl | 收费](https://www.4paradigm.com/product/hypercycle_ml.html)
- [IBM automl](https://www.ibm.com/cn-zh/cloud/watson-studio/autoai)
- [adanet](https://github.com/tensorflow/adanet)
- [PocketFlow](https://github.com/Tencent/PocketFlow)
- [autokeras](https://github.com/keras-team/autokeras)
- [auto-sklearn](https://github.com/automl/auto-sklearn)
- [Auto-PyTorch](https://github.com/automl/Auto-PyTorch)
- [h2o-3](https://github.com/h2oai/h2o-3/)
- [tpot](http://epistasislab.github.io/tpot/)
- [mlbox](https://mlbox.readthedocs.io/en/latest/)
- [TransmogrifAI](https://github.com/salesforce/TransmogrifAI)
- [awesome-automl](https://github.com/hibayesian/awesome-automl-papers#projects)

# 模型转换
- [paddle2onnx](https://github.com/PaddlePaddle/paddle2onnx)[ | 文档](https://www.paddlepaddle.org.cn/documentation/docs/zh/guides/02_paddle2.0_develop/09_model_to_onnx_cn.html)
- [X2Paddle](https://github.com/PaddlePaddle/X2Paddle)
- [转换为OpenVINO的IR](https://docs.openvino.ai/cn/2020.3/_docs_MO_DG_prepare_model_Prepare_Trained_Model.html)
- [MMdnn](https://github.com/Microsoft/MMdnn#conversion)
# 模型压缩
- [PocketFlow](https://github.com/Tencent/PocketFlow)
- [distiller](https://github.com/IntelLabs/distiller)
- [micronet](https://github.com/666DZY666/micronet)
- [paddleslim](https://paddleslim.readthedocs.io/zh_CN/latest/intro.html)
# 模型编译
- [tvm | 一个针对CPU、GPU和专用加速器的开放式深度学习编译器堆栈](https://github.com/apache/tvm)
- [plaidml | 一种可移植的张量编译器](https://github.com/plaidml/plaidml)
- [XLA | 是一种针对特定领域的线性代数编译器，能够加快 TensorFlow 模型的运行速度，而且可能完全不需要更改源代码](https://www.tensorflow.org/xla?hl=zh-cn)
- [glow | facebook编译器](https://github.com/pytorch/glow)
- [nnfusion](https://github.com/microsoft/nnfusion)
- [BladeDISC](https://github.com/alibaba/BladeDISC)

# 模型推理
- [TensorRT | 英伟达的推理引擎](https://github.com/NVIDIA/TensorRT)
- [armnn | ARM嵌入式设备的inference框架](https://github.com/ARM-software/armnn)
- [Qualcomm Neural Processing SDK for AI](https://developer.qualcomm.com/software/qualcomm-neural-processing-sdk)
- [OpenCV和OpenVINO | Intel的推理引擎](https://github.com/openvinotoolkit/openvino)
- [AMDMIGraphX | AMD 推理引擎](https://github.com/ROCmSoftwarePlatform/AMDMIGraphX)[ | RadeonML](https://github.com/GPUOpen-LibrariesAndSDKs/RadeonML)
- [DirectML | 微软推理引擎](https://github.com/microsoft/DirectML)
- [mediapipe | Google的一个基于图形的跨平台框架，用于构建多模式（视频，音频和传感器）应用的机器学习管道](https://github.com/google/mediapipe)
- [onnxruntime | 微软的高性能ML推理和训练加速器](https://github.com/microsoft/onnxruntime)
- [OpenPPL | 商汤基于自研高性能算子库的开源深度学习推理平台](https://github.com/openppl-public/ppl.nn)
- [MNN | 阿里端侧推理引擎](https://github.com/alibaba/MNN)
- [TNN | 腾讯端侧推理引擎](https://github.com/Tencent/TNN)
- [NCNN | 腾讯端侧推理引擎](https://github.com/Tencent/ncnn)
- [Anakin | 百度高性能跨平台推理引擎](https://github.com/PaddlePaddle/Anakin)
- [FeatherCNN | 腾讯端侧推理引擎](https://github.com/Tencent/FeatherCNN)
- [TensorFlow-Lite | 一种用于设备端推断的开源深度学习框架](https://www.tensorflow.org/lite)
- [Paddle-Lite](https://github.com/PaddlePaddle/Paddle-Lite)
- [Tengine](https://github.com/OAID/Tengine)
- [bolt](https://github.com/huawei-noah/bolt)
- [deepsparse | 为CPU上的精简模型提供gpu类性能的神经网络推理引擎](https://github.com/neuralmagic/deepsparse)
- [Anakin | 跨平台跨架构推理引擎](https://github.com/PaddlePaddle/Anakin)
- [Msnhnet | mini pytorch 推理引擎基于darknet理念](https://github.com/msnh2012/Msnhnet)
- [dl_inference | 通用深度学习推理服务，可在生产环境中快速上线由TensorFlow、PyTorch、Caffe框架训练出的深度学习模型](https://github.com/wuba/dl_inference)
- [mace | 端侧推理引擎](https://github.com/XiaoMi/mace)
- [Adlik | 深度学习模型的端到端优化框架](https://github.com/Adlik/Adlik)


# 开源框架
- [飞桨(PaddlePaddle)](https://www.paddlepaddle.org.cn/)
- [昇思(MindSpore)](https://www.mindspore.cn/)
- [计图(Jittor)](https://cg.cs.tsinghua.edu.cn/jittor/)
- [一流(oneflow)](https://github.com/Oneflow-Inc/oneflow)
- [天元(MegEngine)](https://github.com/MegEngine/MegEngine)
- [CNTK(Microsoft Cognitive Toolkit)](https://github.com/microsoft/CNTK)
- [MIVisionX | AMD的视觉和机器学习工具库](https://github.com/GPUOpen-ProfessionalCompute-Libraries/MIVisionX)
- [OpenMLDB | 深度学习数据库](https://github.com/4paradigm/OpenMLDB)
- [DI-engine | 是一种广义的决策智能引擎](https://github.com/opendilab/DI-engine)
- [tinyms | 基于MindSpore AI框架开发，面向上层用户的一个高级API开发库](https://github.com/tinyms-ai/tinyms)
- [keras | 高级神经网络 API,后端支持TensorFlow、CNTK和Theano](https://keras.io/)
- [Fastai | 高阶API项目,基于PyTorch的深度学习库](https://github.com/fastai/fastai)
- [SeetaFaceEngine2](https://github.com/seetaface/SeetaFaceEngine2)
- [keras-js](https://transcranial.github.io/keras-js/)
- [tensorflow-js](https://www.tensorflow.org/js/)
- [infers 机器学习和矩阵运算库的TypeScript](https://hans_s.gitee.io/infers/)
- [ConvNeXt | Facebook 卷积神经网络实现](https://github.com/facebookresearch/ConvNeXt)
- [mae | Masked Autoencoder 是一种更为通用的图像去噪自动编码器](https://github.com/facebookresearch/mae)
- [data2vec | ](https://github.com/pytorch/fairseq/tree/main/examples/data2vec)
- [ivy | 统一机器学习框架](https://github.com/unifyai/ivy)
- [JAX  | 一个包含可组合函数转换的数值计算库](https://github.com/google/jax)
- [numba | 是Python的即时编译器](https://github.com/numba/numba)
- [dask | 是一个用Python编写的用于并行计算的开源库](https://dask.org/)
- [Mars | 是一个基于张量的大规模数据计算统一框架，可伸缩numpy、pandas、scikit-learn和Python函数。](https://github.com/mars-project/mars)
- [MLPP | 16岁少年的C++机器学习库](https://github.com/novak-99/MLPP)
- [yolov5](https://github.com/ultralytics/yolov5)
- [MMCV | 一个面向计算机视觉的基础库](https://github.com/open-mmlab/mmcv/blob/master/README_zh-CN.md)
# 玩游戏
- [malmo我的世界](https://github.com/microsoft/malmo)
- [ResnetGPT | 用Resnet101+GPT搭建一个玩王者荣耀的AI](https://github.com/FengQuanLi/ResnetGPT)
- [强化学习玩五子棋](https://github.com/junxiaosong/AlphaZero_Gomoku)
- [强化学习斗地主游戏](https://github.com/kwai/DouZero)
- [基于强化学习的智能体玩FIFA](https://github.com/ChintanTrivedi/DeepGamingAI_FIFARL)
- [基于深度学习的智能体玩FIFA](https://github.com/ChintanTrivedi/DeepGamingAI_FIFA)
# 例子
- [在一分钟内实现一个图形分类应用](https://tinyms.readthedocs.io/zh_CN/latest/quickstart/quickstart_in_one_minute.html)
- [基于《集体智慧编程》中提供的神经网络代码](https://github.com/FlorianMuellerklein/Machine-Learning/blob/master/Old/BackPropagationNN.py)
- [基于纯Numpy实现的简单RNN, LSTM和可微神经计算DNC](https://github.com/krocki/dnc)
# 应用
- [GANcraft | 基于图片生成类似于我的世界](https://nvlabs.github.io/GANcraft/)
- [PaddleBoBo | 基于飞桨开发的虚拟主播](https://github.com/JiehangXie/PaddleBoBo)
- [Real-CUGAN | 动漫图像超分辨率生成](https://github.com/bilibili/ailab/tree/main/Real-CUGAN)
- [BLIP | 一个模型搞定图像标注、读图问答两件事](https://github.com/salesforce/BLIP)
- [50个有趣的人工智能(AI)页面，您可以免费使用](https://boredhumans.com/)
- [DeepFaceLab | 换脸](https://github.com/iperov/DeepFaceLab)
- [StyleGAN](https://thispersondoesnotexist.com/)[ | 1](https://www.thiswaifudoesnotexist.net/)[ | 2](https://thiscatdoesnotexist.com/)[ | 3](https://thisrentaldoesnotexist.com/)[ | 4](https://thispersondoesnotexist.com/)

# 数学
## 微积分

## 线性代数与矩阵论
- [麻省理工公开课的 Linear Algebra](https://github.com/yizhen20133868/MIT-Linear-Algebra-Notes)[ | 麻省理工公开课的 Linear Algebra2](https://github.com/apachecn/mit-18.06-linalg-notes)
- [线性代数本质文字版](https://hzhu212.github.io/posts/66517499/)

## 概率论与统计学
- [李航博士《统计学习方法2》算法实现1](https://github.com/fengdu78/lihang-code)[  | 算法实现2](https://github.com/WenDesi/lihang_book_algorithm)[ | 算法实现3](https://github.com/wzyonggege/statistical-learning-method)
- [《模式识别与机器学习》 | PRML](https://www.080910t.com/wp-content/uploads/2020/03/PRML-Chinese-Edition.pdf)[ | PRML笔记](https://github.com/WYHA/PRML_Note)[ | PRML源码](https://github.com/ctgk/PRML)
- [《机器学习：概率视角》 | MLAPP](https://github.com/qiguming/MLAPP_CN_CODE)
- [《统计学习基础》 | ESL](https://github.com/szcf-weiya/ESL-CN/)
- [概率分布python实现](https://github.com/graykode/distribution-is-all-you-need)

## 最优化方法

## 图论

## 信息论

## 控制论

## 博弈论

## 运筹学

## 动力学分析

## 静力学分析

## 运动学分析

# 资料
- [李沐《动手学深度学习》](http://zh.d2l.ai/)
- [吴恩达-deeplearning.ai深度学习课程视频](https://study.163.com/provider/2001053000/course.htm)[ | 笔记1](https://baozoulin.gitbook.io/neural-networks-and-deep-learning/)[ | 笔记2](https://github.com/fengdu78/deeplearning_ai_books)[ | deeplearning.ai](deeplearning.ai)
- [李宏毅《机器学习》笔记](https://github.com/datawhalechina/leeml-notes)
- [周志华《机器学习》的学习笔记](https://github.com/Vay-keen/Machine-learning-learning-notes)
- [邱锡鹏《神经网络与深度学习》 | 蒲公英书](https://nndl.github.io/)
- [强化学习导论](https://rl.qiwihui.com/zh_CN/latest/)
- [《深度强化学习：基础、研究与应用》](https://deepreinforcementlearningbook.org/)
- [微软人工智能教育与学习共建社区](https://github.com/microsoft/ai-edu/)
- [深度学习 | 花书](https://github.com/exacity/deeplearningbook-chinese)
- [深度学习经典、新论文逐段精读](https://github.com/mli/paper-reading)
- [机器学习思维导图](https://github.com/dformoso/machine-learning-mindmap)
- [预测：方法与实践](https://otexts.com/fppcn/)
- [使用tensorflow对服装图像进行分类](https://www.tensorflow.org/tutorials/keras/classification?hl=zh-cn)
- [Weights & Biases with YOLOv5 ](https://github.com/ultralytics/yolov5/issues/1289)
- [船长关于机器学习、计算机视觉和工程技术的总结和分享](https://github.com/Captain1986/CaptainBlackboard)
- [百度PaddleX一站式](https://github.com/PaddlePaddle/PaddleX)
- [practicalAI 中文版](https://github.com/MLEveryday/practicalAI-cn)
- [深度学习经典、新论文逐段精读](https://github.com/mli/paper-reading)
- [interviews.ai | AI面试宝典](https://github.com/BoltzmannEntropy/interviews.ai)[ | AI面试宝典中文](https://github.com/lcylmhlcy/Awesome-algorithm-interview)
- [EasyRL李宏毅老师的《深度强化学习》](https://datawhalechina.github.io/easy-rl/#/)[ | alibaba](https://github.com/alibaba/EasyRL)
- [玩机器学习的张北海](https://tjxj.github.io/)
- [AiLearning](https://github.com/apachecn/AiLearning)
- [《深度学习》(花书) 数学推导、原理剖析与源码级别代码实现](https://github.com/MingchaoZhu/DeepLearning)
- [机器学习100天](https://github.com/Avik-Jain/100-Days-Of-ML-Code)[ | 中文版](https://github.com/MLEveryday/100-Days-Of-ML-Code)
- [深度学习500问](https://github.com/scutan90/DeepLearning-500-questions)
- [深度学习教程整理](https://github.com/zeusees/HyperDL-Tutorial)
- [AI_Tutorial](https://github.com/cbamls/AI_Tutorial)
- [TensorFlow 2深度学习开源书(龙书)](https://github.com/dragen1860/Deep-Learning-with-TensorFlow-book)
- [《Deep learning with PyTorch》](https://paper2fox.github.io/Deep-Learning-with-PyTorch-Chinese/)
- [《机器学习》（西瓜书）公式推导解析](https://github.com/datawhalechina/pumpkin-book)
- [面向机器学习的特征工程](https://github.com/apachecn/fe4ml-zh)
- [fast.ai](https://www.fast.ai/)
- [机器学习基础(Foundations of Machine Learning) | 英文版](https://cs.nyu.edu/~mohri/mlbook/)
- [深度神经网络编译器调研](https://lqhl.github.io/a-survey-on-dnn-compiler/)
- [深度学习中的优化](https://discoverml.github.io/simplified-deeplearning/%E6%B7%B1%E5%BA%A6%E5%AD%A6%E4%B9%A0%E4%B8%AD%E7%9A%84%E4%BC%98%E5%8C%96/%E6%B7%B1%E5%BA%A6%E5%AD%A6%E4%B9%A0%E4%B8%AD%E7%9A%84%E4%BC%98%E5%8C%96.html)
- [《20天吃掉那只Pytorch》](https://github.com/lyhue1991/eat_pytorch_in_20_days)
- [《30天吃掉那只TensorFlow2》](https://github.com/lyhue1991/eat_tensorflow2_in_30_days)
- [目标检测度量解释](https://github.com/rafaelpadilla/Object-Detection-Metrics)
# Awesome
- [AI-algorithm](https://github.com/murufeng/Awesome-AI-algorithm)
- [ightweight_networks](https://github.com/murufeng/awesome_lightweight_networks)
- [awesome-machine-learning-cn](https://github.com/jobbole/awesome-machine-learning-cn)
- [awesome-image-classification](https://github.com/weiaicunzai/awesome-image-classification)
- [awesome-object-detection](https://github.com/amusi/awesome-object-detection)
- [awesome-human-pose-estimation](https://github.com/cbsudux/awesome-human-pose-estimation)
- [awesome-hand-pose-estimation](https://github.com/xinghaochen/awesome-hand-pose-estimation)
- [awesome-ocr](https://github.com/kba/awesome-ocr)
- [awesome-deep-text-detection-recognition](https://github.com/hwalsuklee/awesome-deep-text-detection-recognition)
- [awesome-semantic-segmentation](https://github.com/mrgloom/awesome-semantic-segmentation)
- [studies](https://github.com/imhuay/studies)
- [Qix](https://github.com/ty4z2008/Qix)
- [Machine-Learning-Tutorials](https://github.com/ujjwalkarn/Machine-Learning-Tutorials)
- [awesome-production-machine-learning](https://github.com/EthicalML/awesome-production-machine-learning)
- [awesome-automl-papers](https://github.com/hibayesian/awesome-automl-papers)
- [awesome-nas-papers](https://github.com/jackguagua/awesome-nas-papers)
- [DeepLearning](https://github.com/Mikoto10032/DeepLearning)
- [awesome-game-ai](https://github.com/datamllab/awesome-game-ai)
- [awesome-deepfakes](https://github.com/aerophile/awesome-deepfakes)
- [awesome-DeepLearning](https://github.com/PaddlePaddle/awesome-DeepLearning)
