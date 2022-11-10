#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list
* @h: head pointer
* Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t temp = 0;

	while (h)
	{
		temp++;
		h = h->next;
	}

	return (temp);
}
