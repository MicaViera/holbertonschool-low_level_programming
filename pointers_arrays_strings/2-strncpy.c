#include "main.h"
/**
 * _strncpy - A function that copies a string.
 * @dest: destination string.
 * @src: source strings.
 * @n: variable size from src.
 * Return: a copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int copy;

	for (copy = 0; copy < n && src[copy] != '\0'; copy++)
		dest[copy] = src[copy];

	for ( ; copy < n ; copy++)
		dest[copy] = '\0';

	return (dest);
}
