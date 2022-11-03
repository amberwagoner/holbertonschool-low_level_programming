#include "lists.h"

/**
* print_list - prints all the elements of list_t
* @h: pointer to list_t
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node;

	while (h)
	{
		if (str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len h->str);

	h = h->next;
	node++;

	return (node);
	}
}
