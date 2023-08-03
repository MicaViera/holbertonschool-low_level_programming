#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * hash_table_set - Function that adds an element in the hash tables.
 * @ht:hash table.
 * @key: The string.
 * @value: Value of the string.
 * Return: 1 if it succeeded, 0 oterwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *newnode;
	unsigned long int index, size;

	if (!ht || !key || !value)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	tmp = ht->array[index];
	if (tmp && strcmp(tmp->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	newnode = malloc(sizeof(hash_node_t));

	if (!newnode)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = tmp;
	tmp = newnode;

	return (1);
}

