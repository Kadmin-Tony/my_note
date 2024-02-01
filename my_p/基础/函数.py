# 普通函数
# a应为int，b应为str，返回值为str（仅为声明，对函数本身无影响）
def f(a:any, b:str) -> str:
    return b
f(1, '16')


# 匿名函数
# 无需使用return
f = lambda a, b: a + b  
f(1, 20)


# /前函数形参必须使用仅限位置而非关键字参数的形式
# *后要求为关键字形参
def f(a, b, /, c, d, *, e, f):
    return (a, b, c, d, e, f)

f(10, 20, 30, d=40, e=50, f=60)    


# 在函数内修改外部变量需使用global
a = 10
def f():
    global a
    a += 1


# 装饰器
# 装饰器参数 -> 函数 -> 函数参数
def say_hello(name):
    print(1)  # 此句将在@处调用

    def decorator(func):
        print(2)  # 此句将在@处调用

        def wrapper(*args, **kwargs):

            print(f"hello{name}")  # 此句将在f()处调用
            f = func(*args, **kwargs)
            print("さようなら")
            
            return f

        return wrapper

    return decorator


@say_hello("123")
def f():
    print("ooooo")

f()