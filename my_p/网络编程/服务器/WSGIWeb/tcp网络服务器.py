import socket
import threading
import re
from mini_frame import *

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 绑定地址及端口
# 部分端口无法使用,见https://blog.csdn.net/whiteBearClimb/article/details/108054219
s.bind(("127.0.0.1", 8888))

# 开始监听,5表示最多连接5台设备
s.listen(5)
print("waiting···")


def tcp(sock, addr):
    print("Accept new connection···")
    while True:
        if data := sock.recv(1024).decode("utf-8"):
            print("Accept new file-requestion···")
            # 获取文件信息
            # 原文:GET /index.html HTTP/1.1
            data = re.search("[^ ]+ ([^ ]*?) ", data).group(1)
            # 判断是否为静态网页
            if not data.endswith('.py'):
                serve_j(data, sock)
            else:
                # 处理以.py结尾的动态网页
                serve_d(data, sock)
        else:
            print("Connection broken")
            break


# 处理静态网页
def serve_j(data, sock):
    if data == "/" or data == "/index":
        data = "/index.html"
    
    if data == "/favicon.ico":
        content_type = "image/x-icon"
    else:
        content_type = "text/html;charset=utf-8"

    try:
        with open(r"C:\Users\28327\Desktop\program\my_p\网络编程\服务器\基础" + data, "rb") as f:
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
        sock.send(b'HTTP/1.1 404 NOT FOUND\r\n\r\n')
        sock.send(b'<b>404 error</b> file not found')


# 处理动态网页
def serve_d(data, sock):
    envi = dict()
    envi["PATH_INFO"] = data
    body = application(envi, response)
    sock.send(header.encode("utf-8"))
    sock.send(body)


# 处理动态网页中的header
def response(statue, headers):
    global header
    header = "HTTP/1.1 %s\r\n"%statue
    for content, parameter in headers:
        header += f"{content}: {parameter}\r\n"
    header += "\r\n"
        

while True:
    sock, addr = s.accept()
    t = threading.Thread(target=tcp, args=(sock, addr))
    t.start()