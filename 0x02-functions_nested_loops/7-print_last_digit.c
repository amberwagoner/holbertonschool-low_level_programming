#include "main.h"

/*
 * print_last_digit - print the last digit of a number.
 * @n: the number
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	int lastDigit = (n % 10);

	while (n >= 10)
	{
		n = n / 10;

		_putchar(lastDigit);
	}

	return (0);
}
