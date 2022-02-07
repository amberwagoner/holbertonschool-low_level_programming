#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, j;

	/* check if dest[i] equals nul byte, increment by one */
	while (dest[i] != '\0')
		i++;

	/* src[j] gets initialized to dest[i] */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
