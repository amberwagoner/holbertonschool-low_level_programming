#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int x; /* original string */ 
	int y; /* reverse string */

	/* declare the original string and continue */
	for (x = 0; s[x] != '\0'; x++)
	{
		continue;
	}
	/* reverse the string */
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	putchar('\n');
}
