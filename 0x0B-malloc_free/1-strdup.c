#include "main.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * _strdup - returns a pointer to newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string given as parameter
 * Return: a pointer to duplicated string if successful,
 * NULL if not
 */

char *_strdup(char *str)
{
	char *dup; /* duplicate string */

	/* define dup with malloc */
	dup = malloc(_strlen(str) + 1);

	/* condition if string is NULL */
	if (str == NULL || dup == NULL)
		return (NULL);

	/* copy string */
	_strcpy(dup, str);

	return (dup);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @src: source
 * @dest: return
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
