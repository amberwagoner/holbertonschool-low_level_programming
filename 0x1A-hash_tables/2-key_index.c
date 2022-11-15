#include "hash_tables.h"

/**
* key_index - get the index of given key for hash table
* @key: string containing the key
* @size: size of the hash table's array
* Return: the index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
