#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 *
 * @ht: hashtable
 * @key: is the key
 *
 * Return: value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *item = NULL;

	if (!ht || !key)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	item = ht->array[i];

	if (!item)
		return (NULL);

	while (item)
	{
		if (!(strcmp(key, item->key)))
			return (item->value);
		item = item->next;
	}

	return (NULL);
}
