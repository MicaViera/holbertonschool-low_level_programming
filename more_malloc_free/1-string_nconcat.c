#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - Is a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: a pointer or NULL if fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int box = 0;
	unsigned int box2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (; s1[box] != '\0';)
		box++;
	for (; s2[box2] != '\0';)
		box2++;

	if (n >= box2)
		n = box2;

	p = malloc(((box + n) + 1));

	if (!p)
		return (NULL);

	for (box = 0; s1[box]; box++)
		p[box] = s1[box];
	for (box2 = 0; box2 != n; box2++)
	{
		p[box] = s2[box2];
		box++;
	}
	p[box] = '\0';

	return (p);
}
