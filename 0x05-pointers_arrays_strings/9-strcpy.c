#include "main.h"

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
