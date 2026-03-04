import socket
s = socket.socket()
s.connect(('localhost', 8080))
print(s.getsockname())
print(s.recv(1024).decode())
s.send("Acknowledgement received from the server".encode())
