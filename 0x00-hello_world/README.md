# 0x00. C - Hello, World

## Learning Objectives

**Why is the C programming language so awesome?!**
- *It's the preferred coding language for kernel development!*
- *Almost all other languages are built off C!*
- *C is portable and efficient, making it ideal for programs that require high performance and low memory overhead!*
- *C has been around for over 30 years and is deeply embedded in countless systems!*
- *Writing code in C will help you understand how a computer really works!*
- *There will always be a job demand for expert C knowledge!*
- *The Mars Curiosity Rover is powered by 500,000 lines of C code!*

**Who invented C?**
- *Dennis Ritchie and Ken Thompson invented C in order to make Unix portable.*
- *This work took place at AT&T Bell Laboratory.*

**Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds?**
- *Dennis Ritchie is the inventor of the C language.*
- *Brian Kernighan was also at Bell Labs and cowrote (along with Ritchie)* The C Programming Language.
- *Linus Torvalds created the Linux kernel. He also created Git!*

**What happens when you type `gcc main.c`?**
- *The compiler creates an executable file called a.out by default.*

**What is an entry point?**
- *This is the point in a program where the execution of a program begins.*
- *It's where the program has access to command line arguments.*

**What is `main`?**
- *This is the entry point in C.*

**How to print text using `printf`, `puts`, and `putchar`**

**`printf()`**
- `int printf(constant char*c-string);`
- `c-string` = `%[flags][width][.precision][length]specifier`
- `printf` *is one of the most commonly used commands in C*

**`puts()`**
- `int puts(constant char *s);`
-  `puts` *moves cursor to next line.*
-  *Can be a simpler and easier command to use for printing strings vs* `printf`.

**`putchar()`**
- `int putchar(int c);
- `int putc (int c, FILE *stream);` 
- *other versions return the character written.*
- `putc()` *can be defined as marco, letting the argument be evaluate multiple times.*

**How to get the side of a specific type using the unary operator `sizeof`**
- *When the operand is a data type, it returns the amount of memory allocated for specified type.*

**1-4: How to compile using `gcc`**

1. Preprocessing `gcc -E main.c`
- *gets rid of the comments in source file(s)*
- *includes code in the header file(s)*
- *replaces all the macros with their values*
- *output of this step will have "i." extension*

2. Compiling `gcc -S main.c`
- *takes the preprocessed file and generates IR code*
- *IR = Intermediate Representation*
- *produces a file with ".s" extension*

3. Assembling `gcc -c main.c`
- *takes IR code and turns it into machine language (ie binary)*
- *produces a file with ".o" extension*

4. Linking `gcc main.c`
- *can link all sources files together*
- *can link function calls with their definitions*
- *default output is* `a.out`
- `gcc main.c -o my_program` *creates an executable program with the name we want.*

**What is the default program name when compiling with `gcc`**
- `a.out``a.exe`

**What is the official C coding style and how to check your chode with `betty-style`**
- *[Official C Coding Style](https://www.gnu.org/prep/standards/html_node/Writing-C.html)*
- *[Betty Style](https://github.com/holbertonschool/Betty/wiki)*

**How to find the right header to include in your source code when using a standard library function**
- *So much can be found by using man...*

**How does the `main` function influence the return value of the variable?**
- *The return value of the* `main` *function shows how the program exited.*
- *Normal exit of a program (no bugs/errors) returns a value of 0.*
- *If the code has errors it will be return with a non-zero value.*

## Tasks

### 0. Preprocessor
- *Write a script that runs a C file through the preprocessor.*
- *Save the result into another file.*
- *The C file name will be saved in the variable* `$CFILE`.
- *The output should be saved in the file* `c`.

### 1. Compiler
- *Write a script that compiles a C file but does not link.*
- *The C file will be saved in the variable* `$CFILE`.
- *The output file should be named the same as the C file, but with the extension* `.o` *instead of* `.c`.

### 2. Assembler
- *Write a script that generates the assembly code.*
- *Save it in an output file.*
- *The C file name will be saved in the variable* `$CFILE`.
- *The output file should be named the same as the C file, but with the extension* `.s` *instead of* `.c`.

### 3. Name
- *Write a script that compiles a C file and creates an executable file named* `cisfun`.
- *The C file name will be saved in the variable* `$CSFILE`.

### 4. Hello, puts
- *Write a C program that prints exactly:*
- `"Programming is like building a multilingual puzzle`.
- *Follow it with a new line.*
- *Use the function* `puts`.
- *Your program should end with the value* `0`.

### 5. Hello, printf
- *Write a C program that prints exactly:*
- `with proper grammar, but the outcome is a piece of art, `.
- *Follow it with a new line.*
- *Use the function* `printf`.
- *Your program should return* `0`.
- *Your program should compile without warning when using the* `-Wall``gcc` *option.*

### 6. Size is not grandeur, and territory does not make a nation.
- *Write a C program that prints the size of the various types on the computer it is compiled and run on.*
- *Warnings are allowed. Your program should return* `0`.


## Wish me luck! :)
