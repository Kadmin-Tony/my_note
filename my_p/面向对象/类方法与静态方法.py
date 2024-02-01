class Tool:

    count = 0
    def __init__(self):
        Tool.count += 1

    @classmethod
    def show(cls):
        print(cls.count)

    @staticmethod
    def p():
        print("静态方法")

t1 = Tool()
t1.p()
t2 = Tool()
t2.show()