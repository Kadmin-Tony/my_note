import numpy as np


arr = np.random.randint(0, 20, size=[3, 4])
print(arr)


# 排序
arr.argsort()  # 返回值为重新排序后的序号
arr.sort()       # 横着排,会对原数据进行修改
arr.sort(axis=0) # 竖着排,会对原数据进行修改
np.lexsort((arr, ))  # 可以对多个数组进行修改


# 去重, 返回一个一维数组
np.unique(arr)


# 重复
np.tile(arr, 3)  # 将arr重复3次
arr.repeat(2, axis=1)  # 一横0竖


# 求和
np.sum(arr)
arr.sum(axis=1)


# 平均值
np.mean(arr)
arr.mean(axis=1)


# 其他
np.std(arr)  # 标准差
np.var(arr)  # 方差
np.min(arr)
np.max(arr)
np.argmin(arr)  # 返回最小值的索引
np.argmax(arr)  # 返回最大值的索引


np.cumsum(arr)  # 返回一维数组,表示该数与之前的所有数字之和
np.cumprod(arr)  # 返回一维数组,表示该数与之前的所有数字之积
