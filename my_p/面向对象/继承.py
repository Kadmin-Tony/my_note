class Parent:
    def __init__(self):
        print("hello")
        self.command = "you"

    def run(self):
        print("fuck %s"%self.command)


class Child(Parent):
    def __init__(self):
        super().__init__()  # 使用父类的__init__方法
        self.command = "me?"

p = Parent()
c1 = Child()
c1.run()


# 判断是否为子类
print(isinstance(c1, Parent))  # True
print(isinstance(c1, Child))  # True
print(isinstance(123, int))  # True