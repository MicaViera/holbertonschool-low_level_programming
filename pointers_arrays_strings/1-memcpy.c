#include "main.h"
/**
 * _memcpy - is a function that copies a memory area.
 * @dest: destination.
 * @src: source.
 * @n: variable.
 * Return: destination string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
