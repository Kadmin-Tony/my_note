import numpy as np
from matplotlib import pyplot as plt
from numpy import pi, sin, cos

rad = np.arange(0, pi * 2, 0.01)

p = plt.figure(figsize=(8, 6), dpi=80)


# 绘制第一幅子图
p.add_subplot(2, 1, 1)  # 创建一个2行1列的子图， 并开始绘制第一幅
plt.title("lines")

plt.xlabel("x")
plt.ylabel("y")

plt.xlim((0, 1))  # 规定x轴范围
plt.ylim((0, 1))  # 规定y轴范围

tick = [0, 0.2, 0.4, 0.6, 0.8, 1]
plt.xticks(tick)
plt.yticks(tick)

plt.plot(rad, rad**2)
plt.plot(rad, rad**4)
plt.legend(["y=x^2", "y=x^4"], loc="lower right")


#  绘制第二幅子图
p.add_subplot(2, 1, 2)
plt.title("sin/cos")

plt.xlabel("x")
plt.ylabel("y")

plt.xlim((0, pi*2))
plt.ylim((-1, 1))

t1 = [0, pi/2, pi, pi*3/2, pi*2]
t2 = ["0", "pi/2", "pi", "3pi/2", "2pi"]
plt.xticks(t1, t2)

plt.yticks([-1, -0.5, 0, 0.5, 1])

plt.plot(rad, sin(rad))
plt.plot(rad, cos(rad))

plt.show()