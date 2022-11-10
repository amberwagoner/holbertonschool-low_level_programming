#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a list
* @head: head pointer
* @n: integer for the new node to contain
* Return: address of the new element, or NULL for failure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp = *head;

	/* allocate memory for node */
	newNode = malloc(sizeof(dlistint_t));

	/* if statement for failure */
	if (newNode == NULL)
		return (NULL);

	/* assign n to newNode */
	newNode->n = n;

	/* assign NULL to next of newNode */
	newNode->next = NULL;

	/* if the linked list is empty, make newNode as head node */
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	/* if the linked list is not empty, traverse to end of list */
	while (temp->next != NULL)
		temp = temp->next;

	/* point to the next of last node (temp) to newNode */
	temp->next = newNode;

	/* assign prev of newNode to temp */
	newNode->prev = temp;

	return (newNode);
}
