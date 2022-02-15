#include "main.h"

/**
 * main - prints all arguments the program receives
 * @argc: number of command line arguments
 * @argv: pointer to array of character objects
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
