#include "main.h"
/**
 *  _strcat - A function that concatenates two strings.
 *  @dest: the destination of the string.
 *  @src: the source of the string.
 *  Return: a pointer of the restulting string.
 */
char *_strcat(char *dest, char *src)
{
	int boxes = 0;
	int dest_len = 0;

	while (dest[boxes++])
		dest_len++;

	for (boxes = 0; src[boxes]; boxes++)
		dest[dest_len++] = src[boxes];

	return (dest);
}
