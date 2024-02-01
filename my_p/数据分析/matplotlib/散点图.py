from matplotlib import pyplot as plt
import random

y = []
for i in range(60):
    y.append(i/4 + random.random()*5)

plt.figure(figsize=(12, 6), dpi=100)
plt.xticks(list(range(15)))

plt.scatter([i/4 for i in range(60)], y, marker="o", c="red")  # 绘制散点图

plt.show()

