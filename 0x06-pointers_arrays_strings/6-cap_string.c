#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer
 * Return: pointer
 */

char *cap_string(char *s)
{
	int str = 0; /* string */
	int spec = (str - 1); /* special character */

	while (s[str] != '\0')
	{
		if (s[str] >= 'a' && s[str] <= 'z')
		{
		if (s[spec] == ' ' ||
			s[spec] == '\t' ||
			s[spec] == '\n' ||
			s[spec] == ',' ||
			s[spec] == ';' ||
			s[spec] == '.' ||
			s[spec] == '!' ||
			s[spec] == '?' ||
			s[spec] == '"' ||
			s[spec] == '(' ||
			s[spec] == ')' ||
			s[spec] == '{' ||
			s[spec] == '}' ||
			str == 0)
				s[str] = s[str] - 32;
		}
		str++;
	}
	return (s);
}
