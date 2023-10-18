# Project Description
## 0x16. C - Simple Shell
	- Writing a simple UNIX command interpreter.

# Requirements
## General
	- Allowed editors: vi, vim, emacs
	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	- All your files should end with a new line
	- A README.md file, at the root of the folder of the project is mandatory
	- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	- Your shell should not have any memory leaks
	- No more than 5 functions per file
	- All your header files should be include guarded
	- Use system calls only when you need to
	- Write a README with the description of your project
	- You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository.
# Output Examples
- Example of error with sh:
```bash 
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
Same error with your program hsh:
```bash
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
# Compilation
Your shell will be compiled this way:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
# Testing
Your shell should work like this in interactive mode:
```bash
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode:
```bash
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

