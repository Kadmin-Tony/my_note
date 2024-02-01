from multiprocessing import Pool
from time import sleep

def f(a):
    for i in range(20):
        print(a)
        sleep(0.1)


# 进程的使用必须在name==main后
if __name__ == "__main__":

    po = Pool(3)  # 定义一个进程池，最大进程数为3

    for i in range(10):
        po.apply_async(f, (i,))  # 将任务添加进进程池，但并不会运行

    po.close()  # 关闭进程池，关闭后不再接受新的请求
    po.join()  # 等待完成，必须在close后
