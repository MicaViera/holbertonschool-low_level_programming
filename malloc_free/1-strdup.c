#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - A function that returns a pointer to a new space in memory.
 * @str: pointer to string.
 * Return: a pointer.
 */
char *_strdup(char *str)
{
	char *p = NULL;
	int r;

	if (!str)
		return (NULL);

	p = malloc(sizeof(char) * ((*str) + 1));

	if (!p)
		return (NULL);

	for (r = 0; str[r] != '\0'; r++)
		p[r] = str[r];

	return (p);
}
