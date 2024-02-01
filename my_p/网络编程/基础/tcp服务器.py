import socket
import threading

# 建立tcp连接
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 绑定地址及端口
s.bind(("127.0.0.1", 8888))

# 开始监听,5表示最多连接5台设备
s.listen(5)
print("waiting···")

def tcp(sock, addr):
     # 需发送二进制数据
    sock.send(b'Hello!')
    print("Accept new connection···")

    while True:

        data = sock.recv(1024)

        if not data or data.decode("utf-8") == "exit":
            break

        sock.send(b"I have received!")
        print(data.decode("utf-8"))

    # 关闭socket
    sock.close()

while True:
    sock, addr = s.accept()
    t = threading.Thread(target=tcp, args=(sock, addr))
    t.start()