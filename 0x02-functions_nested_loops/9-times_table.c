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
			k = (i * j);
			_putchar(k);
			_putchar(44);
		}
		_putchar('\n');
	}
}
