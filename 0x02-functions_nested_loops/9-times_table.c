#include "main.h"

/**
 * times_table - prints the times tables from 0 to 9
 *
 * Return: 0.
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(44 + '0');
			_putchar(20 + '0');

			k = (i * j);

			if (k <= 9)
				_putchar(20 + '0');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
		_putchar('\n');
	}
}
