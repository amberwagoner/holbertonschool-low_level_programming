#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, excluding q & e.
 *
 * Return: 0.
 */

int main(void)
{
	char a_z;

	for (a_z = 'a'; a_z <= 'z'; ++a_z)
	{
		if (a_z != 'e' && a_z != 'q')
			putchar(a_z);
	}

	putchar('\n');

	return (0);
}
