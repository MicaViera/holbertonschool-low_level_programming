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
	unsigned int len = 0;
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

	p = malloc(sizeof(char) * (box + n + 1));

	if (!p)
		return (NULL);

	for (; s1[box]; box++)
		p[len] = s1[box];
	for (; s2[box2] && box2 < n; box2++)
		p[len] = s2[box2];

	p[len] = '\0';

	return (p);
}
