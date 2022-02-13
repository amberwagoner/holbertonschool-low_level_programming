#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: pointer
 * Return: pointer
 */

char *cap_string(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
	{
		if (s[str] >= 'a' && s[str] <= 'z')
		{
		if (s[str - 1] == ' ' ||
			s[str - 1] == '\t' ||
			s[str - 1] == '\n' ||
			s[str - 1] == ',' ||
			s[str - 1] == ';' ||
			s[str - 1] == '.' ||
			s[str - 1] == '!' ||
			s[str - 1] == '?' ||
			s[str - 1] == '"' ||
			s[str - 1] == '(' ||
			s[str - 1] == ')' ||
			s[str - 1] == '{' ||
			s[str - 1] == '}' ||
			str == 0)
			{
				s[str] = s[str] - 32;
			}
		}
	}
	return (s);
}
