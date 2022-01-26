# 0x01. C - Variables; if, else, while

## Learning Objectives

**What are the arithmetic operators and how are they used?**
- These perform mathematical operations.
- `+` (add) `-` (subtract) `*` (multiply) `/` (divide)
- `++` (increase by one) `--` (decrease by one)
- `%` (remainder after division)

**What are the logical operators and how are they used?**
- These are commonly used during decision making in C.
- They return either `0` or `1` (true or false).
- `&&` (AND) is true only if all operands are true
- `||` (OR) is true if either operand is true
- `!` (NOT) is true only if operand is 0

**What are the relational operators and how are they used?**
- These check the relationship between two operands.
- `<` (less than)     `<=` (less than or equal to)
- `>` (greater than)  `>=` (greater than or equal to)
- `==` (equal to)     `!=` (not equal to)

**What values are considered TRUE and FALSE in C?**
- TRUE = 1
- FALSE = 0

**What are the boolean operators and how are they used?**
- These are the condition (AND, OR, NOT) in logical operations
- They can greatly reduce or expand the amount returned
- Excellent in focusing searches 

**How do you use the `if`, `if...else` statements?**
- Both variations are Boolean expressions (evaluate true/false conditions). 

if (boolean expression)
{ /* statement executes if bool expression is true
} else
{ /* statement executes if bool expression is false
}

**How do you use comments?**
- The way Betty wants you to use them!!!
- Comments should be used to add descriptions to the main function.
- Comments can also be used as a way to pseudocode.

**How do you declare variables of types `char`, `int`, and `unsigned int`?**
- char variable_name;
- int variable_name;
- unsigned int variable_name;

**How do you assign values to variables?**
- int variable_name = value;

**How do you print the values of variables of type `char`, `int`, `unsigned int` with `printf`?**
- With the % sign.
- char: %c
- int: %i
- unsigned int: %u, %x, %o

**How do you use the `while` loop?**
- The `while` loop is used when you want to repeatedly execute a program as long as a given condition is true.
- `while` statements can be translated into `for` statements and vice versa

**How do you use variables with the `while` loop?**
- They need to be declared outside of the loop to be functional.

**How do you print variables using `printf`?**
- printf("%i", variable_name);

**What is the `ASCII` character set?**
- American Standard Code for Information Interchange
- 7-bit character code where every single bit represents a unique character

**What is the purpose of the `gcc` flags `-m32` and `-m64`?**
- These flags correspond the the bit size of the computer.

## Tasks

### 0.Positive anything is better than negative nothing
*This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.*

### 1.The last digit
*This program will assign a random number to the variavle `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.*

### 2.I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game
*Write a program that prints the alphabet in lowercase, followed by a new line.*

### 3.alphABET
*Write a program that prints the alphabet in lowercase, then in uppercase, followed by a new line.*

### 4.When I was having that alphabet soup, I never thought that it would pay off
*Write a program that prints the alphabet in lowercase, followed by a new line.*

### 5.Numbers
*Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.*

### 6.Numberz
*Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.*

### 7.Smile in the mirror
*Write a program that prints the lowercase alphabet in reverse, followed by a new line.*

### 8.Hexadecimal
*Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.*

### 9.Patience, persistence, and perpiration make an unbeatable combination for success.
*Write a program that prints all possible combinations of single-digit numbers.*
 
 
**Wish me luck!*
