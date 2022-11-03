# File I/O
## Resources
[File Descriptors](https://alx-intranet.hbtn.io/rltoken/Duva-9Fjyskt39R__Nnazg)
[C Programming in Linux Tutorial #024- open() read() write() Functions](https://alx-intranet.hbtn.io/rltoken/9Tmu01qEnA9q9khz3gqzJQ)
### man or help:
- open
- close
- read
- write
- dprintf
## Learning Objectives
### General
- Look for the right source of information online
- How to create, open, close, read and write files
- What are file descriptors
- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
- How to use the I/O system calls open, close, read and write
- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
- What are file permissions, and how to set them when creating a file with the open system call
- What is a system call
- What is the difference between a function and a system call
## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
- Allowed syscalls: read, write, open, close
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- All your header files should be include guarded
- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...