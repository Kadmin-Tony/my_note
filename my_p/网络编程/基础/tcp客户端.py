import socket

# 建立tcp连接
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 连接地址及端口
s.connect(("127.0.0.1", 8888))

while True:
    s.send(input().encode("utf-8"))
    print(s.recv(1024).decode("utf-8"))