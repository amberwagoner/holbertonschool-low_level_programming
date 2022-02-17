#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: length of the array
 * @c: character
 * Return: pointer to array, NULL if fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc((size) * sizeof(char));

	if (str == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
