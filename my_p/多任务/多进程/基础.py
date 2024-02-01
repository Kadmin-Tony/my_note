import multiprocessing
import time

def f(a):
    for i in range(5):
        print(a)
        time.sleep(1)

p1 = multiprocessing.Process(target=f, args=("1",))
p2 = multiprocessing.Process(target=f, args=("2",))

# 使用多进程必须使用该句!
if __name__ == '__main__':
    p1.start()
    p2.start()