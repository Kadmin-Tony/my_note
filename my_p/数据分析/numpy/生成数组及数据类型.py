import numpy as np
import random


"""
    shape:返回turple表示数组尺寸,如(3, 2)表示3行2列的数组
    size:返回int表示数组的元素总数
    dtype:描述数组中元素的类型
"""


# 生成数组，得到ndarray类型
t1 = np.array([1, 3, 5])
t2 = np.array(range(1, 6, 2))
t3 = np.arange(1, 6, 2)  # [1, 6)步长为2

# 生成随机数
np.random.random(100)  # 生成100个0~1的随机数
np.random.rand(10, 5)  # 生成符合 均匀分布 的10行5列随机数
np.random.randn(10, 5)  # 生成符合 正太分布 的10行5列随机数
np.random.randint(2, 10, size=[10, 5])  # 生成10行5列随机数


# 生成数列
np.linspace(1, 6, 3)  # 1开始6结束元素个数为3
np.logspace(1, 6, 3)  # 用法类似linspace，创建等比数列


# 生成特殊数组
m1 = np.zeros((2, 3))  # 二行三列全为0的数组
m2 = np.ones((2, 3))  # 二行三列全为1的数组
np.eye(3)  # 生成3阶单位数组
np.diag([1, 2, 3, 4])  # 生成对角数组


# 生成矩阵(matrix) '*'将以矩阵方式运算
# T转置
# H共轭转置
# I逆矩阵
np.mat("1 2 3;4 5 6;7 8 9")
np.matrix([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
np.bmat("m1 m2; m2 m1")  # 生成分块矩阵


# 定义数据类型
t5 = np.array([1, 0, 1, 0, 0], dtype=bool)


# 重设数据类型
t5.astype(int)


# 保留小数
t6 = [random.random() for i in range(10)]
np.round(t6, 2)  # 2位小数


