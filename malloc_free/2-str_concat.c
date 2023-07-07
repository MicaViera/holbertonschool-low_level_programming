#include "main.h"
#include <stdlib.h>
char *_strncat(char *dest, char *src, int n);
/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: sorce string.
 * Return: pointer to destination string.
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
/**
 * *str_concat - Is a fuction that concatenates two strings.
 * @s1: first string to concatenate.
 * @s2: second string to concatenate.
 * Return: a pointer to the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	int total = 0;
	int total2 = 0;
	char *c = NULL;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (; s1[total] != '\0';)
		total++;
	for (; s2[total2] != '\0';)
		total2++;

	c = malloc(sizeof(char) * (total + total2 + 1));

	if (!c)
		return (NULL);

	_strcat(c, s1);
	_strcat(c, s2);
	return (c);
}
