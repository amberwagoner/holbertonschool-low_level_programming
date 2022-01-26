#include <stdio.h>

/**
 * main - prints the alphabet, lower then uppercase.
 *
 * Return: 0.
 */


int main(void)
{
	/* declare character strings */
	char a_z, A_Z;

	/* putchar the alphabets */
	for (a_z = 'a'; a_z <= 'z'; a_z++)
		putchar(a_z);

	for (A_Z = 'A'; A_Z <= 'Z'; ++A_Z)
		putchar(A_Z);

	/* putchar newline */
	putchar('\n');


	return (0);
}
