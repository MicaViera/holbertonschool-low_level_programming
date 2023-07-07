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
	int total2;
	char *c;

	if (s1 && s2 == 0)
		return (NULL);

	while (*s1)
	{
		total++;
		s1++;
	}
	while (*s2)
	{
		total2++;
		s2++;
	}

	c = malloc(sizeof(char) * (total + total2));

	if (!c)
		return (NULL);

	while (s1[box++])
		len++;

	for (box = 0; s1[box] != '\0'; box++)
		c[box] = s1[box];

	for (len = 0; s2[len] != '\0'; len++)
	{
		c[box] = s2[len];
		box++;
	}

	c[box + 1] = '\0';
	return (c);
}
