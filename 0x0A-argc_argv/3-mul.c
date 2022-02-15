#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: pointer to an array of objects
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int a, b, sum;

	/* get values for a, b, and sum */
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = a * b;

	/* conditions if there aren't two numbers - 3 includes argv[0] */
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	/* conditions if there are two numbers */
	else
	{
		printf("%d\n", sum);
		return (0);
	}
}
