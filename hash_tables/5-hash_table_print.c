#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * hash_table_print - Function that prints a hash table.
 * @ht: The hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pipo = 0, idx = 0;
	hash_node_t *tmp;

	if (!ht)
		return;
	printf("{");

	for (; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			tmp = ht->array[idx];
			while (tmp)
			{
				if (pipo == 0)
				{
					printf("'%s': '%s'", tmp->key, tmp->value);
					pipo += 1;
				}
				else
				{
					printf(", '%s': '%s'", tmp->key, tmp->value);
				}
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}

