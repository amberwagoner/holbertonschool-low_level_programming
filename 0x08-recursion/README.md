# 0x08. C- Recursion

## Learning Objectives

### What is recursion?
- A function to call itself.
- Commonly used in applications when the solution to a problem can be expressed in terms of successively applying the same solution to subsets of the problem.
- Recursion continues until some condition is met to prevent it. To prevent infinite recursion, an `if...else` statement can be used.
- The base case is the condition that checks to see if we have gotten the information we need out of our function.

### How to implement recursion
void recursion ()
{
	recursion();
}

int main()
{
	recursion();
}

### Situations to use recursion
- Important in data structures and algorithms
- Made for solving problems that can be broken down into smaller, repetitive problems.
- Good for things that have many porssible branches

### Situations to *not* use recursion
- When speed is an issue: much slower than loops
- Can increase memory usage
- Might make code more difficult to read

### Recursion vs Iteration (loops)
- Recursion is used when code size needs to be small and time complexity isn't an issue. Iteration is used when time complexity needs to be balanced against an expanded code size.
- While loops execute a block of code, checking each time to see if it's at the end of a sequence, there is no such sequential end for recursive code.

## Tasks

### 0. She locked away a secret...
Write a function that prints a string, followed by a new line. Prototype: `void _puts_recursion(char *s);`

### 1. Why is it so important to dream?
Write a function that prints a string in reverse. Prototype: `void _print_rev_recursion(char *s);`

### 2. Dreams feel real while we're in them.
Write a function that returns the length of the string. Prototype: `int _strlen_recursion(char *s);`

### 3. You musn't be afriad to dream a little bigger, darling
Write a function that returns the factorial of a given number. Prototype: `int factorial(int n);`
- If `n` is lower than `0`, the function should return `-1` to indicate an error.

### 4. Once an idea has taken hold of the brain it's almost impossible to eradicate
Write a function that returns the value of `x` raised to the power of `y`. Prototype: `int _pow_recursion(int x, int y);`
- If `y` is lower than `0`, the function should return `-1`

### 5. Your subconscious is looking for the dreamer
Write a function that returns the natural square root of a number. Prototype: `int _sqrt_recursion(int n);`
- If `n` does not have a natural square root, the function should return `-1`

### 6. Inception. Is it possible?
Write a function that returns `1` if the input integer is a prime number, otherwise return `0`. Prototype: `int is_prime_number(int n);`
