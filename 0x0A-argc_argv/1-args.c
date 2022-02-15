#include "main.h"

/**
 * main - print the number of arguments passed into program
 * @argc: number of command line arguments
 * @argv: array of pointers to arrays of character objects (not used)
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
