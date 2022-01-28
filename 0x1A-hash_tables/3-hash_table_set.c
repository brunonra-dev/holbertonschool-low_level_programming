#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hashtable
 * @key: is the key
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = key_index((unsigned char *)key, ht->size);
	hash_node_t *item = ht->array[i], *new_item;

	if (!ht || !key || !value)
		return (0);

	if (item && strcmp(key, item->key) == 0)
	{
		free(item->value);
		strcpy(item->value, value);
		return (1);
	}

	new_item = malloc(sizeof(hash_node_t));
	if (!new_item)
		return (0);

	strcpy(new_item->key, key);
	strcpy(new_item->value, value);
	new_item->next = ht->array[i];
	ht->array[i] = new_item;

	return (1);
}
