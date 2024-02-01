import gevent
import time 
from gevent import monkey

monkey.patch_all()

def f(a):
    while True:
        print("---{}---".format(a))
        time.sleep(0.1)

gevent.joinall([
    gevent.spawn(f, 1),
    gevent.spawn(f, 2),
    gevent.spawn(f, 3)
])

