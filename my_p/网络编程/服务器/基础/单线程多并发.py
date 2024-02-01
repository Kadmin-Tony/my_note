import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind(("10.128.136.49", 8888))

client_list = []
s.setblocking(False)  # 将套接字设置为非堵塞
s.listen(5)

while True:
    try:
        sock, addr = s.accept()
    except:
        print("没有新用户到来")
    else:  # 只要没产生异常就说明来了一个新客户端
        sock.setblocking(False)
        client_list.append(sock)

    for c in client_list:
        try:
            data = c.recv(1024)
        except:
            print("客户未发来数据")
        else:  # 只要没产生异常就说明接受到了数据
            if not data:  # 如果为空则删除该套接字
                client_list.remove(c)
                c.close()
            else:
                c.send(b"I received")
