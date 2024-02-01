import socket

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
s.bind(('127.0.0.1', 6666))

while True:
    data, addr = s.recvfrom(1024)
    print("我收到了%s"%data.decode("utf-8"))
    s.sendto(b"hello", addr)