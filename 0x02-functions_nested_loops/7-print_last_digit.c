#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: the number
 *
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	/* Define last digit */
	int lastDigit = (n % 10);

	/* Print the last digit */
	while ((n >= 0) || (n <= 0))
	{
		_putchar(lastDigit);
		n = n / 10;
	}

	return (0);
}
