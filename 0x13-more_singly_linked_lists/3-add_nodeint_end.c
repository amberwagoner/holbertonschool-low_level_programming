#include "lists.h"

/**
* add_nodeint_end - adds new node at the end of list
* @head: pointer to the address of head of list
* @n: integer for the new node to continue
* Return: if the function fails - NULL
* Otherwise - address of the new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
