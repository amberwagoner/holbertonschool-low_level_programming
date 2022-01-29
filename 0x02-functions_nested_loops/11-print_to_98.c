#include "main.h"

/**
 * print_to_98 - prints down or up to 98
 * @n: number being printed
 * Return: 0.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		_putchar(n);
		_putchar(44);
		_putchar(' ');
		++n;
		if (n == 98)
			return;
	}
	else if (n > 98)
	{
		_putchar(n);
		_putchar(44);
		_putchar(' ');
		--n;
		if (n == 98)
			return;
	}
	else
		_putchar(n);
}
