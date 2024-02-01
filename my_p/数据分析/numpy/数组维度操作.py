import numpy as np

# 3维数组 int t6[2][2][2] 
t1 = np.array([[[1, 2], [1, 2]], [[3, 4], [3, 4]]])

# 更改数组维度
t2 = t1.reshape((2, 4))
print(t2)

# 降维,默认横向展开,加F改为竖向
t3 = t2.flatten("F")
print(t3)