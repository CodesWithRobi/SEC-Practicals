# Ex-01-Linux-Commands


## Aim:

To study the execution of various Linux operating system commands.

## Linux:

Linux is an open-source operating system. The kernel is the heart of Linux OS which
 
helps the communication between hardware and software. The main advantage of Linux was that programmers can use Linux kernel to design their own custom OS.

Linux Commands:
All basic and advanced tasks can be done by executing commands. The commands are executed on Linux terminal. Linux commands are case sensitive.


## Commands:

### 1)	ls Command

The ls command is used to display a list of content of a directory.

 Syntax: ls
 
<img width="895" height="175" alt="image" src="https://github.com/user-attachments/assets/ed02c81f-bda7-4fc0-958c-65c84b8bd73b" />


### 2)	pwd Command

The pwd command is used to display the location of the current working directory.

Syntax: pwd

<img width="414" height="147" alt="image" src="https://github.com/user-attachments/assets/6aff00bf-55c9-4745-8553-6133a5f86cb7" />

 
### 3)	mkdir Command

The mkdir command is used to create a new directory under any directory.

Syntax: mkdir <directory name>

<img width="351" height="103" alt="image" src="https://github.com/user-attachments/assets/91db6edf-31e0-46dd-a2d8-cd31fc6a1ff7" />


### 4)	rmdir Command

The rmdir command is used to delete a directory.

Syntax: rmdir <directory name>

<img width="355" height="103" alt="image" src="https://github.com/user-attachments/assets/80abf863-0d21-4ec7-97db-57d65ff339ed" />


### 5)	cd Command

The cd command is used to change the current directory.

Syntax: cd <directory name>

<img width="361" height="110" alt="image" src="https://github.com/user-attachments/assets/faddb762-6712-4e3f-959c-c556f8367983" />


### 6)	cat Command

The cat command is a multi-purpose utility in the Linux system. It can be used to create a file, display content of the file, copy the content of one file to another file, and more.

Syntax: cat [OPTION]... [FILE]..

<img width="697" height="338" alt="image" src="https://github.com/user-attachments/assets/c29344ed-8a3c-4150-adcc-a59b0a772060" />

 
### 7)	cp Command

The cp command is used to copy a file or directory.

Syntax: cp <existing file name> <new file name>

<img width="494" height="98" alt="image" src="https://github.com/user-attachments/assets/49d87b69-9257-446c-8c2a-547147679159" />

### 8) passwd Command

The passwd command changes passwords for user accounts.

Syntax: passwd [options] [LOGIN]

<img width="1308" height="444" alt="image" src="https://github.com/user-attachments/assets/dfb7ff14-0437-4689-a3a0-88fb34ba1028" />

### 9)	su Command

The su command provides administrative access to another user. In other words, it allows access of the Linux shell to another user.

Syntax: su <user name>

<img width="1024" height="334" alt="image" src="https://github.com/user-attachments/assets/7b9c6c30-cdd2-4e31-a194-cb1b57ff7aa4" />


### 10)	mv Command

The mv command is used to move a file or a directory form one location to another location.

Syntax: mv <file name> <directory path>

## 11)	rename Command

The rename command is used to rename files. It is useful for renaming a large group of files.

Syntax: rename 's/old-name/new-name/' files

<img width="1167" height="660" alt="image" src="https://github.com/user-attachments/assets/a3604e12-7f1f-49a3-9d8d-3b48727a8206" />

### 12)	head Command

The head command is used to display the content of a file. It displays the first 10 lines of a file.

Syntax: head <file name>

<img width="1311" height="592" alt="image" src="https://github.com/user-attachments/assets/d88a90f0-dcbe-4a90-be9b-f2ae5046c4a4" />


### 13)	tail Command

The tail command is similar to the head command. The difference between both commands is that it displays the last ten lines of the file content. It is useful for reading the error message.

Syntax: tail <file name>

<img width="1329" height="582" alt="image" src="https://github.com/user-attachments/assets/62d3bb97-ad9e-4f42-852c-ab250afd8324" />
 
### 14)	id Command

The id command is used to display the user ID (UID) and group ID (GID).

Syntax: id

<img width="2032" height="361" alt="image" src="https://github.com/user-attachments/assets/96aa4977-d611-4fc0-a84e-ebb0b09f9367" />


### 15)	grep Command

The grep is the most powerful and used filter in a Linux system. The 'grep' stands for "global regular expression print." It is useful for searching the content from a file. Generally, it is used with the pipe.

Syntax: command | grep <search word>

<img width="738" height="207" alt="image" src="https://github.com/user-attachments/assets/f2aa3d48-85cc-4a59-a841-13ac1fb087bc" />

### 16)	tr Command

The tr command is used to translate the file content like from lower case to upper case.

Syntax: command | tr <'old'> <'new'>

<img width="737" height="292" alt="image" src="https://github.com/user-attachments/assets/a4481f10-08ba-4f90-b06f-42a2056def26" />

### 17)	chmod Command

The chmod command is used to change the access mode of a file (i.e., read, write or execute)

Syntax: chmod<options><permissions><file_name>

<img width="708" height="109" alt="image" src="https://github.com/user-attachments/assets/09d6b0f3-7731-4104-9a09-fe6fb22cf207" />

### 18)	tar Command

The tar command is used for creating Archieve and extracting the archieve files.

Syntax: tar[options][archieve-file] [file to be archieved]
$ tar xvzf file.tar *.c

sudo <img width="1131" height="338" alt="image" src="https://github.com/user-attachments/assets/618a8424-d977-49f5-9f62-93c447d023e4" />
 
### 19)	chown Command

The chown command is used to change ownership.

Syntax: chown owner_name file_name

<img width="731" height="148" alt="image" src="https://github.com/user-attachments/assets/c9ed9cca-af6f-4363-997e-06a7ff4cefda" />


### 20)	make Command

The make command is used for building and maintaining group of program.

Syntax: make [-f makefile][options]…….[targets]….

<img width="910" height="770" alt="image" src="https://github.com/user-attachments/assets/925223bb-af7f-42d6-a9c0-51328c29a182" />


### 21)	ifconfig Command

The ifconfig command is used to configure kernel-resident network interface.

Syntax: ifconfig[options][interface]

<img width="1323" height="765" alt="image" src="https://github.com/user-attachments/assets/18839505-6e11-4577-b1fd-97092a3538c8" />

### 22)	chmod 777 Command

The chmod 777 command gives read, write and execute permission to the owner, group and public.

Syntax: chmod 777 file_name
$chmod -R 777 /path/to/file/or/folder

<img width="1156" height="144" alt="image" src="https://github.com/user-attachments/assets/367a2d3f-d750-43f0-96d3-0c0be7f5a35f" />

### 23)	host Command

The host command is used to display the IP address for a given domain name and vice versa. It performs the DNS lookups for the DNS Query.

Syntax: host <domain name> or <ip address>

<img width="936" height="124" alt="image" src="https://github.com/user-attachments/assets/c92d1618-fe1a-4912-9a46-02e8825de9c7" />

### 24)	gzip Command

The gzip command is used to truncate the file size. It is a compressing tool. It replaces the original file by the compressed file having '.gz' extension.

Syntax: gzip <file1> <file2> <file3>..

<img width="1428" height="226" alt="image" src="https://github.com/user-attachments/assets/75926f4f-86d8-46bf-b3f7-f8f6dd4f90f4" />

### 25)	sort Command

The sort command is used to sort files in alphabetical order.

Syntax:sort <file name>

<img width="488" height="238" alt="image" src="https://github.com/user-attachments/assets/dcb4c631-4076-4363-b774-88a28bbedd17" />

### 26)	cal Command

The cal command is used to display the current month's calendar with the current date highlighted.

Syntax: cal

<img width="733" height="354" alt="image" src="https://github.com/user-attachments/assets/677b0a5e-d7ea-42ee-b41d-cca7d7422d48" />

### 27)	clear Command

Linux clear command is used to clear the terminal screen.

Syntax: clear

<img width="725" height="200" alt="image" src="https://github.com/user-attachments/assets/dd23d417-7f15-4def-925e-6fedaad5b138" />

### 28)	history Command

history - GNU History Library.

Syntax: history

<img width="527" height="169" alt="image" src="https://github.com/user-attachments/assets/c4cb4247-0a5f-41bf-8d47-ad669d307d52" />

### 29)	df Command

The df command is used to display the disk space used in the file system. It displays the output as in the number of used blocks, available blocks, and the mounted directory.

Syntax: df

 <img width="1100" height="319" alt="image" src="https://github.com/user-attachments/assets/b4320af1-d813-4fd7-844f-0c9c19a87292" />

### 30)	find Command

The find command is used to find a particular file within a directory.

Syntax: find.-name”*.pdf”

<img width="491" height="132" alt="image" src="https://github.com/user-attachments/assets/b910441c-a4b5-4734-8b6f-69b40a678681" />

## Result:

Thus, the execution of various Linux commands is executed successfully using Ubuntu OS.
