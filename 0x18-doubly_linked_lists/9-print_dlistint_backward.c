#include "lists.h"

/**
* print_dlistint_backward - prints list backward
* @h: pointer to head of list
* Return: number of nodes
*/

size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	unsigned int counter;

	/* if statement for empty temp */
	if (temp == NULL)
		return (0);

	/* traverse to end of list */
	while (temp->next != NULL)
		temp = temp->next;

	/* move backwards and print elements */
	while (temp != NULL)
	{
		counter++;
		printf("%d\n", temp->n);
		temp = temp->prev;
	}

	return (counter);
}
