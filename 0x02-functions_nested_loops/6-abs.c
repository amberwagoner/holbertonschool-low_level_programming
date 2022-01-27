#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * Return: the absolute value.
 */

int _abs(int r)
{
	return (r * ((r > 0) - (r < 0)));
}
