#include "lists.h"

/**
* free_dlistint - frees a list
* @head: head pointer
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
	head = NULL;
}
