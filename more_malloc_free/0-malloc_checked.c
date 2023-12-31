#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Is a function that allocates memory with malloc.
 * @b: string to allocate.
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	if (b == 0)
		return (NULL);

	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
