# include "holberton.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @s: pointer to a string
 * Return: void
 */

char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
		s++;
	}
	return (s);
}
