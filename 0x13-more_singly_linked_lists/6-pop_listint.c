#include "lists.h"

/**
* pop_listint - deletes head node of a list
* @head: pointer to the head of a list
* Return: if the linked list is empty - 0
* Otherwise, the head node's data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
