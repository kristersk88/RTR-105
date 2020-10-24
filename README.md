# RTR-105
## Datormācība (pamatkurss) elektroniskā klade

### Komandas:
#### Paņēmieni un darbs ar failiem Shell'ā
```
   whoami #Who you are logged in as
   who #Who is logged into the system.
   last #Last users who have logged onto the system.
   registry
   user
   pwd #The present working directory
   uname -a #Linux system information
   man ls
   ls -l
   ls -a
   ls -a -l
   ls -l -a
   ls -la
   ls -al #All files in a long listing (detailed) format
   mkdir ABC
   tree
   cd #Go to the $HOME directory
   cd .. #Go up one level of the directory tree.
   cd ~
   rmdir ABC/
   ls -lt
   touch a.txt
   echo 12345 > b.txt
   cat b.txt
   echo 67890 > b.txt
   echo abcde >> b.txt
   echo fghij >> c.txt
   nano d.txt
   hexdump -C b.txt
   rm a.txt
   mv HIJ KLM
   mv b.txt b.text
   rm *.txt
   cp b.text KLM/b1.text
   cp KLM/b1.text EFG/b2.txt
   ls -l KLM/
   ls -l /home/user/EFG/
   ls -l ../EFG/
   rmdir EFG/
   rm EFG/
   man rmdir
   rmdir --ignore-fail-on-non-empty EFG/
   man rm
   rm -r EFG/
   ls -l /bin/ls
   cat /bin/ls
   cat
   nano my_first_shell_script.sh
   echo $PATH
   mv my_first_shell_script my_first_shell_script.sh
   PATH=$PATH:~
   echo $PATH
   rd my_first_shell_script my_first_shell_scrip
   /home/user/my_first_shell_script.sc
   chmod +rwx my_first_shell_script.sh
   chmod my_first_shell_script.sh
   chmod 754 my_first_shell_script.sh
   hmod 754 my_first_shell_script.sh
   ls -l EFG/c.txt
   cat my_first_shell_script.sh
   groups
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
