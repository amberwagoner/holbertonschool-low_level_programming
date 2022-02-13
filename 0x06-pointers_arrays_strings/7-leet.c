#include "holberton.h"

/**
 * *leet - encodes a string in leetspeak
 * @p: pointer
 * Return: char
 */

char *leet(char *p)
{
	int x, y;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char number[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (x = 0; p[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (p[x] == letter[y])
			{
				p[x] = number[y];
			}
		}
	}
	return (p);
}
