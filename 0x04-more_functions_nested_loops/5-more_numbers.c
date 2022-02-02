#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 ten times,
 * followed by new line
 *
 * Return: 0
 */

void more_numbers(void)
{
	int next = 0;
	int n;

	for (next = 1; next <= 10; next++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
