import socket

s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

while True:
    m = input().encode("utf-8")
    if not m or m == b"exit":
        break
    s.sendto(m, ('127.0.0.1', 6666))
    print(s.recvfrom(1024)[0].decode("utf-8"))

s.close()