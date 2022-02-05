#include "main.h"

/**
 * print_square - prints a square :)
 * @size: size of the sqaure
 * Return: void
 */

void print_square(int size)
{
	char r; /* row */
	char c; /* column */

	/* when size is more than zero */
	if (size > 0)
	{
		/* for loop: row */
		for (r = 0; r < size; r++)
		{
			/* for loop: column */
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			/* move to next row */
			_putchar('\n');
		}
		_putchar('\n');
	}
	/* when size is less than zero */
	else
		_putchar('\n');
}
