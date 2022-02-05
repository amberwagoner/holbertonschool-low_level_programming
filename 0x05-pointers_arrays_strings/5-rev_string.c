#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int l; /* length */
	int str; /* string */
	char ch; /* ch = character to swap */

	/* Get length of string */
	for (l = 0; s[l] != '\0'; l++)
	{
		continue;
	}

	/* Reverse string */
	for (str = l - 1; str >= l / 2; str--)
	{
		ch = s[str];
		s[str] = s[l - str - 1];
		s[l - str - 1] = ch;
	}
}
