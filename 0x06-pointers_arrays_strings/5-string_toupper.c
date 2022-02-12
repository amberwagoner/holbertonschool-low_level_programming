# include "holberton.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @s: pointer to a string
 * Return: void
 */

char *string_toupper(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		if (s[str] >= 'a' && s[str] <= 'z')
		{
			s[str] = s[str] - 32;
		}
		str++;
	}
	return (s);
}
