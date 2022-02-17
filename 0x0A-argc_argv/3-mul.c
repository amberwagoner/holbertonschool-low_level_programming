#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: pointer to an array of objects
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int sum;

	/* conditions if there aren't two numbers - 3 includes argv[0] */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	sum = atoi(argv[1] * argv[2]);

	/* conditions if there are two numbers */
	printf("%d\n", sum);
	return (0);
}
