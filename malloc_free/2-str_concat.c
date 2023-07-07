#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - Is a fuction that concatenates two strings.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 * Return: a pointer to the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int box;
	int len;
	int total;
	char *c;

	if (s1 && s2 == 0)
		return (NULL);

	while (s1[box++])
		len++;

	for (box = 0; s2[box]; box++)
		s1[len] = s2[box];

	total = box + len;

	c = malloc(sizeof(char) * total);

	if (!c)
		return (NULL);

	for (box = 0; s1[box]; box++)
		c[box] = s1[box];

	c[box + 1] = '\0';
	return (c);
}
