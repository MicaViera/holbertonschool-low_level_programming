#include "main.h"
#include <stdlib.h>
/**
 * *create_array - This is a function that creates an array of chars.
 * @size: the size.
 * @c: specific char.
 * Return: array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *a = NULL;

	unsigned int r = 0;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (!a)
		return (NULL);

	for (r = 0; r <= size; r++)
		a[r] = c;
	return (a);
}
