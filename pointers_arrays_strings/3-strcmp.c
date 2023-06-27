#include "main.h"
/**
 * _strcmp - is a function that compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: the result of the comparision.
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	if (s1 != s2)
		comp = *s1 - *s2;

	return (comp);
}
