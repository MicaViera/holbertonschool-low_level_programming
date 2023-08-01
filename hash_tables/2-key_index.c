#include "hash_tables.h"
/**
 * key_index - Function that returns the index of a key.
 * @key: The key, string.
 * @size: The size of the array.
 * Return: index where is the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}

