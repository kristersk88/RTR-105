# RTR-105
## Datormācība (pamatkurss) elektroniskā klade

### Komandas:
#### Paņēmieni un darbs ar failiem Shell'ā
```
   whoami #Who you are logged in as
   who #Who is logged into the system.
   last #Last users who have logged onto the system.
   users #Show the user names of users currently logged in to the current host
   pwd #The present working directory
   uname -a #Linux system information
   ls -l #List with long format - show permissions
   ls -a #List all files including hidden file starting with '.'
   ls -la #List long format including hidden files
   ls -al #All files in a long listing (detailed) format
   mkdir #Create directories
   tree #Recursive directory listing program that produces a depth-indented listing of files
   cd #Go to the $HOME directory
   cd .. #Go up one level of the directory tree.
   cd ~ #Change to home directory
   rmdir #Remove empty directories from the filesystem in Linux
   touch #Create, change and modify timestamps of a file
   echo #Display line of text/string that are passed as an argument
   cat #Reads data from file and gives their content as output
   nano #Command line text editor
   hexdump #Filter and display files, or standard input in a human readable format
   rm #Remove objects such as files, directories, symbolic links
   mv #Move one or more files or directories from one place to another
   cp #Copy files or group of files or directory
   chmod #Change the access mode of a file
   groups #The collection of users
   ```
   #### C - gcc
   ```
   git clone https://github.com/kristersk88/RTR-105
   cd RTR-105
   ls -lt a.sh
   chmod 754 a.sh
   ./a.sh
   rm RTR-105
   rm -rf RTR-105
   nano my_first_code.c
   gcc my_first_code.c
   echo $?
   cat a.out
   ./a.out
   nano my_second_code.c
   ./my_second_code.c
   gcc my_second_code.c
   gcc my_first_code.c -o my_first_code.out
   ls -lt
   gcc my_second_code.c -o my_second_code.out
   cat my_first_code.c
   cat my_second_code.c

```
#### Script

```
#!/bin/bash

mkdir ABC
mkdir EFG
touch a.txt
cat a.txt > ABC/b.txt
cd EFG
mv ../ABC/b.txt c.txt

```
