#include "main.h"

/**
 * print_triangle - we're gonna make a triangle!
 * @size: size of our triangles!
 * Return: 0
 */

void print_triangle(int size)
{
	char r; /* rows */
	char c; /* column hashes */
	char s; /* space before column hashes */

	if (size > 0)
	{
		/* for loop: number of rows */
		for (r = 1; r <= size; r++)
		{
			/* for loop: spaces */
			for (s = size - r; s > 0; s--)
			{
				_putchar(' ');
			}
			/* for loop: column hashes */
			for (c = 1; c <= r; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
