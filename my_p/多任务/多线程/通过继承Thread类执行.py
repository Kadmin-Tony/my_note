from threading import Thread
from time import sleep

class MyThread(Thread):

    def __init__(self, name):
        super().__init__()
        self.name = name

    # 必须定义一个run函数
    def run(self):
        for i in range(5):
            print("I am %s"%self.name)
            sleep(1)

t1 = MyThread(123)
t2 = MyThread(321)

t1.start()
t2.start()
