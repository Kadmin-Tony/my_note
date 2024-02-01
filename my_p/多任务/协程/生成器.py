def f1(n):
    i = 0
    while i <= n:
        yield i*2
        i += 1
    return 0  # 存于Exception.value中

obj = f1(10)

while True:
    try:
        ret = next(obj)
        print(ret)
    except Exception as ret:
        print(ret.value)
        break

"""
    通过range制作生成器
    range(start, end(not contained), step(must be int))
"""
f2 = (i for i in range(10))  # [0, 9]
f3 = (i/4 for i in range(2, 41, 2))