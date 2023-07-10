#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Is a function that allocates memory for an array, using malloc.
 * @nmemb: memory to allocate.
 * @size: size of the array.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (!size || !nmemb)
		return (NULL);

	p = malloc(size * nmemb);

	if (!p)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		p[a] = '\0';

	return (p);
}
