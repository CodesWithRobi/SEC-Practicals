import socket
from datetime import datetime 
s = socket.socket()
s.bind(('localhost', 8080))
s.listen()
c, addr = s.accept()
print("Client address:", addr)
now = datetime.now()
dt_str = now.strftime("Date:%d/%m/%y ☧ Time:%H:%M:%S")
c.send(dt_str.encode())
ack = c.recv(1024).decode()
if ack:
    print(ack)
    c.close()
