#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print backslash
 * Return: void
 */

void print_diagonal(int n)
{
	char s; /* space before backslash */
	char b; /* backslash */

	/* only prints when n is more than zero */
	if (n > 0)
	{
		/* for loop: backslash */
		for (b = 0; b < n; b++)
		{
			/* for loop: space */
			for (s = 0; s < b; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	/* only prints newline when n is 0 or less */
	else
	{
		_putchar('\n');
	}
}
