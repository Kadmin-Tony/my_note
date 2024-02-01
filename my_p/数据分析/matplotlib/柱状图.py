from matplotlib import pyplot as plt
from random import randint

y = ["a", "b", "c", "d"]
x1 = []
x2 = []
for i in range(4):
    x1.append(randint(1, 8))
    x2.append(randint(1, 6))

#width与height可为列表
plt.bar(list(range(4)), x1, width=0.3)  # 横柱状图
plt.barh(list(range(4)), x2, height=0.3)  # 竖柱状图

l = list(range(4))
plt.yticks(l, y)

plt.xlabel("I am x")
plt.ylabel("I an y")

plt.show()