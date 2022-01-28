#include "main.h"

/**
 * jack_bauer - wants every minute of the day!
 * Return: 0.
 */

void jack_bauer(void)
{
	char h = 0;
	char m = 0;

	while (h <= 23)
	{
		while (m <= 59)
		{
			putchar(m);
			++m;
		}
		putchar(h);
		putchar(58);
		putchar(' ');
		++h;
	putchar('\n');
	}
}
