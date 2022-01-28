#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: the number
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	n = (n % 10);

	if (n >= 0)
	{
		_putchar('0' + n);
		return (n);
	}

	else if (n < 0)
	{
		n = (n * -1);
		_putchar('0' + n);
		return (n);
	}
	return (0);
}
