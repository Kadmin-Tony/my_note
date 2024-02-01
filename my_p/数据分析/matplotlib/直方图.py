from math import ceil
from matplotlib import pyplot as plt
from random import randint
import math

a = [0, 40]
for i in range(38):
    a.append(randint(0, 40))

bin_width = 4  # 组距(并非真正的组距)
num = math.ceil((max(a) - min(a)) / bin_width)  # 分为多少组
# density:频率直方图
plt.hist(a, num, color="pink", density=True)

plt.xticks([i for i in range(min(a), max(a) + 1, bin_width)])
plt.grid(alpha=0.5)

plt.show()

