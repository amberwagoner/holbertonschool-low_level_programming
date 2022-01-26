#include <stdio.h>

/**
 * main - prints the lowercase alphabet using putchar
 *
 * Return: 0.
 */

int main(void)
{
	/* declare char str[] = alphabet */
	char a_z;
	/* putchar the alphabet */
	for (a_z = 'a'; a_z <= 'z'; a_z++)
		putchar(a_z);
	/* putchar a newline */
	putchar('\n');

	return (0);
}
