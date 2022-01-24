# 0x00. C - Hello, World

## Learning Objectives

By the end of this project, I will be able to explain to anyone:
- Why the C programming language is so awesome
- Who invented C
- Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds
- What happens when you type `gcc main.c`
- What is an entry point
- What is `main`
- How to print text using `printf`, `puts`, and `putchar`
- How to get the side of a specific type using the unary operator `sizeof`
- How to compile using `gcc`
- What is the default program name when compiling with `gcc`
- What is the official C coding style and how to check your chode with `betty-style`
- How to find the right header to include in your source code when using a standard library function
- How does the `main` function influence the return value of the variable

## Tasks

### 0. Preprocessor
*Write a script that runs a C file through the preprocessor.
Save the result into another file. 
The C file name will be saved in the variable* `$CFILE`.
*The output should be saved in the file* `c`.

### 1. Compiler
*Write a script that compiles a C file but does not link.
The C file will be saved in the variable* `$CFILE`.
*The output file should be named the same as the C file, but with the extension* `.o` *instead of* `.c`.

### 2. Assembler
*Write a script that generates the assembly code.
Save it in an output file.
The C file name will be saved in the variable* `$CFILE`.
*The output file should be named the same as the C file, but with the extension* `.s` *instead of* `.c`.

### 3. Name
*Write a script that compiles a C file and creates an executable file named* `cisfun`.
*The C file name will be saved in the variable* `$CSFILE`.

### 4. Hello, puts
*Write a C program that prints exactly:*
`"Programming is like building a multilingual puzzle`.
*Follow it with a new line.
Use the function* `puts`.
*Your program should end with the value* `0`.

### 5. Hello, printf
*Write a C program that prints exactly:*
`with proper grammar, but the outcome is a piece of art, `.
*Follow it with a new line.
Use the function* `printf`.
*Your program should return* `0`.
*Your program should compile without warning when using the* `-Wall``gcc` *option.*

### 6. Size is not grandeur, and territory does not make a nation.
*Write a C program that prints the size of the various types on the computer it is compiled and run on.
Warnings are allowed. Your program should return* `0`.


**Wish me luck! :)**
