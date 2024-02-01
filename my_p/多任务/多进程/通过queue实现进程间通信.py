from multiprocessing import Queue

q = Queue(3)
q.empty()  # 查看是否为空
q.full()  # 查看是否已满

q.put(123)
q.put("123")
q.put([123, 456, 789])
# q.put() 若满了，会一直等待至有空


try:
    q.put_nowait(123)  # 若满则报错
except:
    print("q已满")


for i in range(3):
    print(q.get())


# q.get() 若空了，会一直等待至有值
try:
    q.get_nowait(123)  # 若空则报错
except:
    print("q已空")
