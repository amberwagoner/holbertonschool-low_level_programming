#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: 0.
 */

int main(void)
{
	int i = 0;

	while (i >= 9)
	{
		putchar(i);
		putchar(44 + '0');
		putchar(32 + '0');
		++i;
	}

	putchar('\n');

return (0);
}
