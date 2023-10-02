# Project: 0x00. C - Hello, World

## Resources

#### Read or watch:

* [Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw)
* [Dennis Ritchie](https://intranet.alxswe.com/rltoken/YWFrRob_-Yo-_NQikMLI-g)
* ["C" Programming Language: Brian Kernighan](https://intranet.alxswe.com/rltoken/W4oygfMgAp5Hyc7o6QuSYQ)
* [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)
* [Learning to program in C part 1](https://intranet.alxswe.com/rltoken/aE_pZLbexuLroHA0FmjLbw)
* [Learning to program in C part 2](https://intranet.alxswe.com/rltoken/3a5y1N-0FlTaPbKRxlRLlQ)
* [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/idYJyVfQRZ9e5aljiT5UKg)
* [Betty Coding Style](https://intranet.alxswe.com/rltoken/wJg_qB9ducisfVQNk62htg)
* [Hash-bang under the hood](https://intranet.alxswe.com/rltoken/zwv5CHLybXN6KFmsjbu_tg)
* [Linus Torvalds on C vs. C++](https://intranet.alxswe.com/rltoken/JrokM8Pk6bd9wPqQvEfSAA)
## Learning Objectives

### General

* Why C programming is awesome 
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type <code>gcc main.c</code>
* What is an entry point
* What is <code>main</code>
* How to print text using <code>printf</code>, <code>puts</code> and <code>putchar</code>
* How to get the size of a specific type using the unary operator <code>sizeof</code>
* How to compile using <code>gcc</code>
* What is the default program name when compiling with <code>gcc</code>
* What is the official C coding style and how to check your code with <code>betty-style</code>
* How to find the right header to include in your source code when using a standard library function
* How does the <code>main</code> function influence the return value of the program
## Tasks

| Task | File |
| ---- | ---- |
| 0. Preprocessor | [0-preprocessor](./0-preprocessor) |
| 1. Compiler | [1-compiler](./1-compiler) |
| 2. Assembler | [2-assembler](./2-assembler) |
| 3. Name | [3-name](./3-name) |
| 4. Hello, puts | [4-puts.c](./4-puts.c) |
| 5. Hello, printf | [5-printf.c](./5-printf.c) |
| 6. Size is not grandeur, and territory does not make a nation | [6-size.c](./6-size.c) |
| 7. Intel | [100-intel](./100-intel) |
| 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity | [101-quote.c](./101-quote.c) |







0. Preprocessor
mandatory
Score: 100.0% (Checks completed: 100.0%)
Write a script that runs a C file through the preprocessor and save the result into another file.

The C file name will be saved in the variable $CFILE
The output should be saved in the file c
julien@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 
