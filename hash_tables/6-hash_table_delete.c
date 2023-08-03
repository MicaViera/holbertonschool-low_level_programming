#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
/**
 * hash_table_delete - Is a function that deletes a hash table.
 * @ht: The hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;

	for (; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];

		while (tmp)
		{
			if (tmp)
			{
				free(tmp->value);
				free(tmp->key);
				free(tmp);
			}
			tmp = tmp->next;
		}
		free(tmp);
	}
	free(ht->array);
	free(ht);
}
