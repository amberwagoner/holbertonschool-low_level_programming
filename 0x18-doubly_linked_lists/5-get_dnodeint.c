#include "lists.h"

/**
* get_dnodeint_at_index - return the nth node of a linked list
* @head: head pointer to linked list
* @index: index of node starting from 0
* Return: null if node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
