import numpy as np

t1 = np.arange(0, 9).reshape((3, 3))
t2 = np.arange(0, 3).reshape((3, 1))


# 行相同列不相同时也可进行计算
t1+t2

# @表示以矩阵的方式进行乘法运算
t1@t2

# 转置
t2.T
t2.transpose()

"""
    针对3维数组(a, b, c):
        可与二维数组(b, c)或一维数组(c,)相加减
"""

t3 = np.arange(0, 9).reshape((3, 3))
t4 = np.arange(9, 18).reshape((3, 3))

# 两数组组合
t5 = np.hstack((t3, t4))  # 横向组合 
t6 = np.vstack((t3, t4))  # 竖向组合

# 分割数组
np.hsplit(t5, 2)  # 横向分割为两部分(np.split(t5, 2, axis=1))
np.hsplit(t6, 3)  # 竖向分割为三部分(np.split(t6, 3, axis=0))

