#include "lists.h"

/**
* add_dnodeint - adds a new node at the beginning of a list
* @head: head pointer
* @n: integer for the new node to contain
* Return: address of the element, or NULL if failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	/* allocate memory for newNode */
	newNode = malloc(sizeof(dlistint_t));

	/* if statement to take care of failure */
	if (newNode == NULL)
		return (NULL);

	/* assign n to newNode */
	newNode->n = n;

	/* point next of newNode to the first node of doubly linked list */
	newNode->next = *head;

	/* point prev to NULL */
	newNode->prev = NULL;

	/* point previous of the first node to newNode */
	if (*head != NULL)
		(*head)->prev = newNode;

	/* head points to newNode */
	*head = newNode;

	return (newNode);
}
