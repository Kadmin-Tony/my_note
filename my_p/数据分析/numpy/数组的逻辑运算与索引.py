import numpy as np

x = np.array([1, 3, 5])
y = np.array([2, 3, 4])
x == y  # [False True False]
np.all(x == y)  # False
np.any(x == y)  # True


t1 = np.arange(0, 16).reshape((4, 4))

# 取行
t1[1]

# 取连续多行
t1[0:2]

# 取不连续多行
t1[[0, 2]]

# 取列
t1[:, 0]
t1[:, [0, 2]]

# 高级索引
t1<5 # 返回一个布尔类型数组
t1[t1<=5]  # 返回一个一维数组

# 将t1中小于5的数值都改为3
t1[t1<5] = 3