import numpy as np

file1 = "GB_video_data_numbers.csv"
file2 = "US_video_data_numbers.csv"

# delimeter:以···对数据进行分割
# dype:默认为科学计数法
# unpack:进行转置,默认为False
t1 = np.loadtxt(file1, delimiter=",", dtype="int", unpack=False)
t2 = np.loadtxt(file2, delimiter=",", dtype="int", unpack=False)

# 保存文件 并以逗号进行分割 并format为整数
np.savetxt("file1.csv", t1, delimiter=",", fmt="%d")

# 以2进制形式保存文件
np.save("123", t1)  # npy
np.savez("321", name1 = t1, name2 = t2)  # 储存多个数据 npz

# 读取文件
np.load("123.npy")
np.load("321.npz")["name1"]
np.load("321.npz")["name2"]
