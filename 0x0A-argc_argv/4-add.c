#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of command line arguments
 * @argv: pointer to an array of objects
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	/* conditions if there are numbers */
	if (argc > 1)
	{
		for (i = 1; argv[i] != NULL; i++)
		{
			char *endptr;

			sum += strtol(argv[i], &endptr, 10);
			/*condition if there is a symbol */
			if (*endptr != '\0')
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
