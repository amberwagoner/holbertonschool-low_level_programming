#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: n bytes from src
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
		j++;

	}
	dest[j + i] = '\0';
	return (dest);
}
