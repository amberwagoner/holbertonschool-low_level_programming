#include "holberton.h"

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
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int len1, len2, i;

/* find out length of strings */
	len1 = _strlen(dest);
	len2 = _strlen(src);
/* for loop to add src to dest */
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

/** 
* char *_strcat(char *dest, char *src)
* {
*
*	int i = 0, j;
*
*	* check if dest[i] equals nul byte, increment by one
*	while (dest[i] != '\0')
*		i++;
*
*	* src[j] gets initialized to dest[i]
*	for (j = 0; src[j] != '\0'; j++)
*	{
*		dest[i] = src[j];
*		i++;
*	}
*	dest[i] = '\0';
*	return (dest);
* } 
*/
