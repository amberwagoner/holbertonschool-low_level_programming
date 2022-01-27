#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times.
 *
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	int next = 0;
	char a_z;

	for (next = 1; next <= 10; next++)
	{
		for (a_z = 'a'; a_z <= 'z'; a_z++)
			putchar(a_z);
		putchar('\n');
	}
}
