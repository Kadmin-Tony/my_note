import logging

"""
日志一共分成5个等级, 从低到高分别是:

    1. DEBUG
    2. INFO
    3. WARNING
    4. ERROR
    5. CRITICAL

说明:

    DEBUG: 
        详细的信息,通常只出现在诊断问题上
    INFO: 
        确认一切按预期运行
    WARNING: 
        一个迹象表明,一些意想不到的事情发生了
        或表明一些问题在不久的将来(例如。磁盘空间低”)
        这个软件还能按预期工作。
    ERROR: 
        更严重的问题,软件没能执行一些功能
    CRITICAL: 
        一个严重的错误,这表明程序本身可能无法继续运行
    
这5个等级, 也分别对应5种打日志的方法:
    debug 、info 、warning 、error 、critical。
    默认的是WARNING, 当在WARNING或之上时才被跟踪。
"""


"""
    3、日志格式说明
    logging.basicConfig函数中
    可以指定日志的输出格式format
    这个参数可以输出很多有用的信息
    如下:
        %(levelno)s:    打印日志级别的数值
        %(levelname)s:  打印日志级别名称
        %(pathname)s:   打印当前执行程序的路径,其实就是sys.argv[0]
        %(filename)s:   打印当前执行程序名
        %(funcName)s:   打印日志的当前函数
        %(lineno)d:     打印日志的当前行号
        %(asctime)s:    打印日志的时间
        %(thread)d:     打印线程ID
        %(threadName)s: 打印线程名称
        %(process)d:    打印进程ID
        %(message)s:    打印日志信息
"""

# 方法一
logging.basicConfig(level=logging.WARNING,  
                    format='%(asctime)s - %(filename)s[line:%(lineno)d] - %(levelname)s: %(message)s',
                    filemode="a",
                    filename="C:\\Users\\28327\\Desktop\\program\\my_p\\标准库\\log.txt",)  


# 方法二
loger = logging.getLogger()

# 设置总等级
loger.setLevel(logging.WARNING)

# 设置文件
fh = logging.FileHandler("C:\\Users\\28327\\Desktop\\program\\my_p\\标准库\\log.txt")
fh.setLevel(logging.DEBUG)

# 设置控制台
ch = logging.StreamHandler()
ch.setLevel(logging.DEBUG)

# 定义格式
fm = logging.Formatter('%(asctime)s - %(filename)s[line:%(lineno)d] - %(levelname)s: %(message)s')
fh.setFormatter(fm)
ch.setFormatter(fm)

# 添加
loger.addHandler(fh)
loger.addHandler(ch)


# 开始使用log功能
logging.info('这是 loggging info message')  
logging.debug('这是 loggging debug message')  
logging.warning('这是 loggging a warning message')  
logging.error('这是 an loggging error message')  
logging.critical('这是 loggging critical message')