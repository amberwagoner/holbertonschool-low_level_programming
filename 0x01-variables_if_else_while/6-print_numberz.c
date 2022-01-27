#include <stdio.h>

/**
 * main - prints 0123456789 using putchar
 *
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
	{
	putchar(i);
	}
	putchar('\n');

	return (0);
}
