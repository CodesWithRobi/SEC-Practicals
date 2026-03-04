# 2c.SIMULATING ARP /RARP PROTOCOLS
## AIM
To write a python program for simulating ARP protocols using TCP.
## ALGORITHM:
## Client:
1. Start the program
2. Using socket connection is established between client and server.
3. Get the IP address to be converted into MAC address.
4. Send this IP address to server.
5. Server returns the MAC address to client.
## Server:
1. Start the program
2. Accept the socket which is created by the client.
3. Server maintains the table in which IP and corresponding MAC addresses are
stored.
4. Read the IP address which is send by the client.
5. Map the IP address with its MAC address and return the MAC address to client.
P
## PROGRAM - ARP
### Server.py:
![image](https://github.com/CodesWithRobi/CN-2c.ARP_RARP_PROTOCOLS/assets/130537166/6ba7b31c-76eb-4be9-b95f-bb047ea42b5d)
### Client.py:
![image](https://github.com/CodesWithRobi/CN-2c.ARP_RARP_PROTOCOLS/assets/130537166/cf386739-d637-46da-9779-32474906ec6f)
## OUPUT - ARP
![image](https://github.com/CodesWithRobi/CN-2c.ARP_RARP_PROTOCOLS/assets/130537166/6ef36c23-3779-4853-8e92-c449ca86cfe9)
## PROGRAM - RARP
### Server.py:
![image](https://github.com/CodesWithRobi/CN-2c.ARP_RARP_PROTOCOLS/assets/130537166/b5a8fedb-3a19-4b4c-8eae-d19cfce6ecca)
### Client.py:
![image](https://github.com/CodesWithRobi/CN-2c.ARP_RARP_PROTOCOLS/assets/130537166/6878f3b1-10ee-425d-bc24-0902c3384341)

## OUPUT -RARP
![image](https://github.com/CodesWithRobi/CN-2c.ARP_RARP_PROTOCOLS/assets/130537166/27d990d0-421b-4a31-b96e-1a544f69f4a4)

## RESULT
Thus, the python program for simulating ARP protocols using TCP was successfully 
executed.
