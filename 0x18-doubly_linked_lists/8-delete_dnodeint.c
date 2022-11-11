#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index
* @head: head pointer
* @index: index of node that should be deleted
* Return: 1 if success, -1 if failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (temp == NULL || (*head) == NULL)
		return (-1);

	while (temp != NULL && count < index)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	if (*head == temp)
		*head = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);

	return (1);
}
