# RTR-105
## Datormācība (pamatkurss) elektroniskā klade

#### Komandas:
```
   whoami
   who
   last
   registry
   use
   user
   pwd
    /
   /home
   /user
   history
   man uname
   ls
   man ls
   ls -l
   ls -a
   ls -a -l
   ls -l -a
   ls -la
   ls -al
   mkdir ABC
   cd ABC/
   tree
   cd
   cd ABC/
   cd .
   cd ..
   cd /
   cd /home/user/
   cd ~
   rmdir ABC/
   ls -lt
   touch a.txt
   echo
   echo 12345 > b.txt
   cat b.txt
   echo 67890 > b.txt
   echo abcde >> b.txt
   echo fghij >> c.txt
   nano
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
```
   45  git clone https://github.com/kristersk88/RTR-105
   46  rm -rf RTR-105_old
   47  rm -rf RTR-105_new
   48  ls -lt
   49  cd RTR-105
   50  ls -lta
   51  .git$ cat config
   52  cd
   53  .git$ cat config
   54  cd RTR-105
   55  cat git-upload
   56  cd
   57  ls -lta
   58  cat a.sh
   59  rd rd a.sh
   60  ls -lt a.sh
   61  ch mod a.sh
   62  chmod a.sh
   63  chmod 754 a.sh
   64  ./a.sh
   65  cd
   66  ./a.sh
   67  pwd
   68  nano
   69  ls -lt
   70  rm RTR-105
   71  rm -rf RTR-105
   72  ls -lt
   73  gcc my_first_code.c
   74  echo $?
   75  ls -lt
   76  cat a.out
   77  gcc my_first_code.c my_first_code.out
   78  gcc my_first_code.c
   79  gcc my_first_code.c my_first_code.out
   80  ./my_first_code.out
   81  ./a.out
   82  history
   83  nano my_second_code.c
   84  ./my_second_code.c
   85  gcc my_second_code.c
   86  ls -lt
   87  gcc my_first_code.c -o my_first_code.out
   88  ls -lt
   89  gcc my_second_code.c -o my_second_code.out
   90  ls -lt
   91  cat my_first_code.c
   92  cat my_second_code.c

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
