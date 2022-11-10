#include "lists.h"

/**
* print_dlistint - prints all elements of a list
* @h: head pointer
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t temp = 0;

	while (h)
	{
		temp++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (temp);
}
