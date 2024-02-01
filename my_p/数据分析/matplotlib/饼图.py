from matplotlib import pyplot as plt
import matplotlib

matplotlib.rc("font", family="MicroSoft YaHei", weight="bold")

plt.figure(figsize=(8, 8))  # 将画布设为正方形则饼图为正圆
label = ["第一产业", "第二产业", "第三产业"]  # 定义饼图标签
explode = [0.01, 0.02, 0.03]  # 设定各项距离圆心n个半径

"""
    autopct
    a. %d%%:整数百分比;
    b. %0.1f:一位小数；
    c. %0.1f%%:一位小数百分比；
    d. %0.2f%%:两位小数百分比
"""
au = "%1.1f%%"

plt.pie([100, 80, 90], explode=explode, labels=label, autopct=au)

plt.show()