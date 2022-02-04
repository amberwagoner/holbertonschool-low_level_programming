#include "main.h"

/**
 * _puts - prints a string
 * _putchar - prints a character
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	for (str = 0; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
