#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned long int i = 0;

	/*allocate table*/
	hashtable = malloc(sizeof(*hashtable));
	if (!hashtable)
		return (NULL);

	/*allocate table entries*/
	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashtable->array)
	{
		free(hashtable);
		return (NULL);
	}

	for (; i < size; ++i)
	{
		hashtable->array[i] = NULL;
	}

	return (hashtable);
}
