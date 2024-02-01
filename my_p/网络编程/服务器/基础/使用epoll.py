"""
    注:epoll只能在Linux下运行
"""

import select
import socket
import re

# 1. 创建
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 2. 绑定
s.bind(("127.0.0.1", 8888))

# 3. 变为监听套接字 
s.listen(128)
s.setblocking(False)

# 创建一个epoll对象
epl = select.epoll()

# 将监听套接字对应的文件描述符(fd)注册到epoll中
epl.register(s.fileno(), select.EPOLLIN)

fd_event_dict = dict()

def serve_sock(sock, recv_data):
    data = re.search("[^ ]+ ([^ ]*?) ", recv_data).group(1)

    if data == "/":
        data = "/index.html"
        
    if data == "/favicon.ico":
        content_type = "image/x-icon"
    else:
        content_type = "text/html;charset=utf-8"

    try:
        with open(r"/home/tony/Desktop/program/my_p/网络编程/服务器" + data, "rb") as f:
            body = f.read()
            lens = len(body)

            header = 'HTTP/1.1 200 OK\r\n'  # 发送200信息
            header += "Content-Length: " + str(lens) + "\r\n"  # 发送长度信息
            header += "Content-Type: " + content_type + "\r\n"
            header += "\r\n"

            sock.send(header.encode("utf-8"))
            
            sock.send(body)

    except FileNotFoundError:
        # 若找不到文件,则404报错
        s = '<b>404 error</b> file not found'
        header = 'HTTP/1.1 404 NOT FOUND\r\n'
        header += "Content-Length: " + str(len(s)) + "\r\n"
        header += "\r\n"
        sock.send(header.encode("utf-8"))
        sock.send(s.encode("utf-8"))


while True:
 
    # 默认堵塞,直到检测到有数据到来
    # 返回列表,表示所有监测到的事件
    # [(fd, event), (套接字对应文件描述符, 事件 列如可以调用recv等)]
    fd_event_list = epl.poll()

    for fd, event in fd_event_list:

        if fd == s.fileno():  # 如果事件为接收到了新客户端的连接
            sock, addr = s.accept()
            epl.register(sock.fileno(), select.EPOLLIN)  # 将新套接字注册到epoll中
            fd_event_dict[sock.fileno()] = sock  # 绑定套接字与其文件描述符
        
        elif event == select.EPOLLIN:
            # fd_event_dict[fd] 即为该套接字文件描述符对应的套接字对象
            if recv_data := fd_event_dict[fd].recv(1024).decode("utf-8"):
                serve_sock(fd_event_dict[fd], recv_data)
            else:
                 fd_event_dict[fd].close()
                 # 删除该套接字数据
                 epl.unregister(fd)
                 del fd_event_dict[fd]

