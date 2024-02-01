import socket
import threading
import re

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 绑定地址及端口(127.168.0.1)
# 部分端口无法使用,见https://blog.csdn.net/whiteBearClimb/article/details/108054219
s.bind(("10.129.173.234", 8888))

# 开始监听,5表示最多连接5台设备
s.listen(5)
print("waiting···")

def tcp(sock, addr):

    if data := sock.recv(1024).decode("utf-8"):
    
        print("Accept new connection···")

        # 获取文件信息
        # 原文:GET /index.html HTTP/1.1
        data = re.search("[^ ]+ ([^ ]*?) ", data).group(1)

        if data == "/":
            data = "/index.html"
        
        if data == "/favicon.ico":
            content_type = "image/x-icon"
        else:
            content_type = "text/html;charset=utf-8"

        try:
            with open(r"C:\Users\28327\Desktop\program\my_p\网络编程" + data, "rb") as f:
                body = f.read()
                lens = len(body)

                header = 'HTTP/1.1 200 OK\r\n'  # 发送200信息
                header += "Content-Length: " + str(lens) + "\r\n"  # 发送长度信息(其为二进制长度)
                header += "Content-Type: " + content_type + "\r\n"
                header += "\r\n"

                sock.send(header.encode("utf-8"))
                
                sock.send(body)

        except FileNotFoundError:
            # 若找不到文件,则404报错
            sock.send(b'HTTP/1.1 404 NOT FOUND\r\n\r\n')
            sock.send(b'<b>404 error</b> file not found')
        

while True:
    sock, addr = s.accept()
    t = threading.Thread(target=tcp, args=(sock, addr))
    t.start()