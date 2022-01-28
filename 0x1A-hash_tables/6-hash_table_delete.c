#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * @ht: hashtable
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *tmp;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (; i < (ht->size); ++i)
	{
		item = ht->array[i];
		while (item)
		{
			tmp = item;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			item = item->next;
		}
	}
	free(ht->array);
	free(ht);
}
