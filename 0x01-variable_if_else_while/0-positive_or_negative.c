#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *Assigns a random number to n,
 *then prints whether n is pos, neg, or zero.
*/

/**
 *main - entry point
 *
 *Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
