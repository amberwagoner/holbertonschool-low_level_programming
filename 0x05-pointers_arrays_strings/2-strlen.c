#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: 0
 */

int _strlen(char *str)
{
	static int count = 0;

	while (*str != '\0')
	{
		count++;
		_strlen(str + 1);
	}
	return count;
}
