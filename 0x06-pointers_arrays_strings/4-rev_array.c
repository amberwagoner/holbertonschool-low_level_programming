#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array being pointed to
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	/* declare int i and a reverse array with n elements */
	int i;
	int r[n];
	/* for loop putting a backwards into rev */
	for (i = 0; i < n; i++)
	{
		r[n - 1 - i] = a[i];

	}
	/* for loop assigning value of rev to a */
	for (i = 0; i < n; i++)
	{
		a[i] = r[i];
	}
}
