#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number being evaluated.
 *
 * Return: 1 if greater than zero, -1 if less than zero, 0 if zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		putchar(45);
		return (-1);
	}
	else
	{
		putchar(48);
		return (0);
	}
}
