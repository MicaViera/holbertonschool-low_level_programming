#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * hash_table_create - Function that creates a hash table.
 * @size: The size of the hash table.
 * Return: Apointer to a newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;

	hasht = malloc(sizeof(hash_table_t));

	if (hasht == NULL)
	{
		free(hasht);
		return (NULL);
	}
	hasht->size = size;
	hasht->array = malloc(sizeof(long int) * size);

	if (hasht->array == NULL)
	{
		free(hasht->array);
		return (NULL);
	}
	return (hasht);
}

