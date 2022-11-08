#include "lists.h"

/**
* add_nodeint - adds new node at beginning of list
* @head: pointer to address of the head of list
* @n: integer for new node to contain
* Return: if function fails, NULL
* Otherwise, address of the new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
