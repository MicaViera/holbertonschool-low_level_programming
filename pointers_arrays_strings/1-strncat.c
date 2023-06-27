#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: destination string.
 * @src: sorce string.
 * @n: number of bytes.
 * Return: pointer to destination string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int boxes = 0;
	int dest_len = 0;

	while (dest[boxes++])
		dest_len++;

	for (boxes = 0; src[boxes] && boxes < n; boxes++)
		dest[dest_len++] = src[boxes];

	return (dest);
}
