#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	/* loop until both strings end */
	while (*s1 != '\0' || *s2 != '\0')
	{
		s1++;
		s2++;
		/* print difference in strings */
		if (*s1 == *s2)
			return (0);
		else
			return (*s1 - *s2);
	}
}
