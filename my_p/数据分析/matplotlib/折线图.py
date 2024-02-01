from matplotlib import pyplot as plt
import matplotlib

x = range(2, 26, 2)  # x和y的长度必须相同
y = [15, 13, 14.5, 17, 20, 25, 26, 26, 27, 22, 18, 15]
y2 = [13, 12, 23, 14, 18, 29, 23, 17, 15, 10, 23, 25]

# 指定字体，默认字体无中文
matplotlib.rc("font", family="MicroSoft YaHei", weight="bold")

# 调整画面大小与清晰度 dpi:dots per inch
plt.figure(figsize=(16, 8), dpi=80)  

# 也可以plt.legend(["第一条线", "第二条线"])
plt.plot(x, y, label="第一条线", color="orange", linestyle="--", marker="4")
plt.plot(x, y2, "ro:", label="第二条线")  # 可同时绘制两条,且三个参数可以合在一起
plt.legend(loc="upper left")  # 显示label并确定位置(默认左上角)

# 调整x轴精度, 显示样式, 旋转
# p1 和 p2长度必须相同， 否则会报错
p1 = [i for i in range(2, 25)]  # x轴精度
p2 = ["我是{}".format(i) for i in p1]  # 显示样式
plt.xticks(p1, p2, rotation=45)

# 添加描述信息
plt.xlabel("I am x")
plt.ylabel("I am y")
plt.title("一个简简单单的折线图")

# 保存图片
plt.savefig("./t1.png")

# 设置网格颜色深浅(还可以设置linestyle与linewidth)
plt.grid(alpha=0.5)

plt.show()
