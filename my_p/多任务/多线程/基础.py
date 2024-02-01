import threading
import time

def f(a):
    for i in range(5):
        print(a)
        time.sleep(1)

t1 = threading.Thread(target=f, args=("1",))
t2 = threading.Thread(target=f, args=("2",))

t1.start()
t2.start()