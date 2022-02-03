#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: first integer pointed to
 * @b: second integer pointed to
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
