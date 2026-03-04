# 3b.CREATION FOR CHAT USING TCP SOCKETS
## AIM
To write a python program for creating Chat using TCP Sockets Links.
## ALGORITHM:
1. Import the necessary modules in python
2. Create a socket connection to using the socket module.
3. Send message to the client and receive the message from the client using the Socket module in
 server
4. Send and receive the message using the send function in socket.
## PROGRAM
### SERVER
```
import socket                                                              
s=socket.socket() 
s.bind(('localhost',8000)) 
s.listen(5) 
c,addr=s.accept() 
while True: 
    ClientMessage=c.recv(1024).decode() 
    print("Client > ",ClientMessage) 
    msg=input("Server > ") 
    c.send(msg.encode())
```
### CLIENT
```
import socket                                                              
s=socket.socket() 
s.connect(('localhost',8000)) 
while True: 
    msg=input("Client > ") 
    s.send(msg.encode()) 
    print("Server > ",s.recv(1024).decode())
```
## OUPUT
### SERVER
![image](https://github.com/CodesWithRobi/CN-3b_CHAT_USING_TCP_SOCKETS/assets/130537166/5248ef3f-2131-43f2-9839-f0b039200444)

### CLIENT
![image](https://github.com/CodesWithRobi/CN-3b_CHAT_USING_TCP_SOCKETS/assets/130537166/4fa6a280-dda8-4677-aa39-f2733b88601e)

## RESULT
Thus, the python program for creating Chat using TCP Sockets Links was successfully 
created and executed.
