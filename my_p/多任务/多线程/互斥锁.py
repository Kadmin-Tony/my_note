import threading
from time import sleep

a = 0

def f(n:int):
    global a
    for i in range(n):
        mutex.acquire()  # 上锁
        a += 1
        mutex.release()  # 解锁

mutex = threading.Lock()

t1 = threading.Thread(target=f, args=(1000000,))
t2 = threading.Thread(target=f, args=(1000000,))

t1.start()
t2.start()

sleep(2)

print(a)
