#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * @ht: hashtable
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *item;

	unsigned long int i = 0;
	int j = 0;

	if (!ht)
		return;

	printf("{");
	for (; i < (ht->size); ++i)
	{
		item = ht->array[i];
		while (item)
		{
			if (j > 0)
				printf(", ");
			printf("\'%s\': \'%s\'", item->key, item->value);
			item = item->next;
			j++;
		}
	}
	printf("}\n");
}
