#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * starting with the first character and ending in a new line.
 * @str: our string
 * Return: 0
 */

void puts2(char *str)
{
	int index;
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}
		_putchar('\n');
}
