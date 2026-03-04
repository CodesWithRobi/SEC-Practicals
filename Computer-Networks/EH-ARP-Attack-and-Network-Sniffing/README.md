# ARP-Attack-and-Network-Sniffing
# Explore Network Sniffing and ARP Attacks

# AIM:

To explore network sniffing and ARP Attacks

## STEPS:

### Step 1:

Install kali linux either in partition or virtual box or in live mode

### Step 2:

Investigate on the various categories of tools as follows:


### Step 3:
Open terminal and try execute some kali linux commands

## ARP Attacks:  
ARP spoofing: A hacker sends fake ARP packets that link an attacker's MAC address with an IP of a computer already on the LAN. 
Boot kali and Windows7 virtual machines.
In windows 7 give the command arp -a
## OUTPUT:
![image](https://github.com/CodesWithRobi/EH-ARP-Attack-and-Network-Sniffing/assets/130537166/d2031c5c-b449-4731-ac4f-f73c1d825e3c)


From kali linux issue the command :
sudo arpspoof -i eth0 -t <target system> <gateway>
## OUTPUT:
![image](https://github.com/CodesWithRobi/EH-ARP-Attack-and-Network-Sniffing/assets/130537166/d9138619-3e53-4a8f-8262-39ac2abe49f7)


 dsniff:

In Metasploit open the ftp console as below. Also you can try other ftp websites ftp.vim.org
## OUTPUT:
![image](https://github.com/CodesWithRobi/EH-ARP-Attack-and-Network-Sniffing/assets/130537166/9c553917-f56d-4d7a-98c9-a13087d6e520)

In Kali issue the following commands:
sudo dsnifff
## OUTPUT:

![image](https://github.com/CodesWithRobi/EH-ARP-Attack-and-Network-Sniffing/assets/130537166/a9aa962e-9125-4046-97a1-78ff3aaf0e6e)


Invoke the wireshark and examine the various menus  and controls of the tool:
![image](https://github.com/CodesWithRobi/EH-ARP-Attack-and-Network-Sniffing/assets/130537166/fedfb086-9fec-40b7-8de5-31eb017cbce5)


## RESULT:
The kali linux tools for ARP Attack and Network Sniffing were identified successfully
