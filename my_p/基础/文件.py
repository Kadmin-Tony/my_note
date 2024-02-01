f = open(r"C:\Users\28327\Desktop\my_p\基础\123.txt", "r", encoding="UTF-8")
for line in f:
    print(f"{line}")
f.close()

"""
    r: 只读
    w: 写入(文件存在会清空内容,文件不存在会创建文件)
    a: 追加(文件不存在会创建文件)
    b: 二进制
"""
with open(r"C:\Users\28327\Desktop\my_p\基础\123.txt", "ar", encoding="UTF-8") as f:
    f.read(1024)  # 读取1024字节,默认全部读取
    f.readline()  # 读取全部行,返回列表
    f.write("123")
    # f.flush()   刷新,将内存中的数据写入文件 close内置该方法

