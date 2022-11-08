#include "lists.h"

/**
* add_node - add new node at the beginning of a list
* @head: pointer to head of the list
* @str: string to be added to the list
*
* Return: address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
