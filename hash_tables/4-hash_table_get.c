#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * hash_table_get - Function that retrieves a value associated to the key.
 * @ht: The new node in the hash table.
 * @key: The key of the hash table.
 * Return: The value of the key or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index, size;

	if (!ht || !key)
		return (NULL);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	tmp = ht->array[index];

	if (!tmp)
		return (NULL);

	while (strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->next;
	}

	return (tmp->value);
}

