#include "main.h"
/**
 * *_memset - Is a function that fills memory with a constant byte.
 * @s: the pointer.
 * @b: constant byte.
 * @n: number of bytes.
 * Return: array s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		s[n] = b;
	}
	return (s);
}
