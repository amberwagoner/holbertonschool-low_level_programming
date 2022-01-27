#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0.
 */

void print_alphabet(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z'; ++a_z)
	{
		putchar(a_z);
	}

	putchar('\n');

}
