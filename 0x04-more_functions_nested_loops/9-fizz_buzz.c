#include <stdio.h>
#include "main.h"

/**
 * main - the infamous FizzBuzz test! numbers 1 to 100 with:
 * Fizz when n % 3 == 0
 * Buzz when n % 5 == 0
 * FizzBuzz when n % 5 == 0 && n % 3 == 0 (or n % 15 == 0)
 * Return: 0
 */

int main(void)
{
	int n; /* number between 1 and 100 */

	/* for loop, followed by if elseif elseif else */
	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else
			printf("%i ", n);
	}
	printf("\n");
	return (0);
}
