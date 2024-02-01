# 元组拆包1
def p(a, b):
    print(a, b)

p1 = (1, 2)
p(*p1)  # 将(1, 2)拆为1, 2

# 元组拆包2
def p(*args):
    print(args)

p(1, 2, 3)  # 将1, 2, 3合并为一个元组传入函数

# 字典拆包同理:**kwargs