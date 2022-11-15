#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of has table to create
* Return: pointer to new hash_table_t in memory
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newTable = NULL;

	newTable = malloc(sizeof(hash_table_t));
	if (newTable == NULL)
		return (NULL);
	newTable->size = size;
	newTable->array = malloc(sizeof(hash_node_t) * size);
	if (newTable->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		newTable->array[i] = NULL;
	return (newTable);
}
