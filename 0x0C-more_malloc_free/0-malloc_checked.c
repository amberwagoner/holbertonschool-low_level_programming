#include "main.h"

/**
 * malloc_checked - mallocate
 * @b: malloc size
 * Return: pointer if success, 98 if null
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
