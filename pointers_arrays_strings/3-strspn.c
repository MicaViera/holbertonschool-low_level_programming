#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: first pointer to a string.
 * @accept:pointer to a string.
 * Return: count lenght.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, b;
	unsigned int c = 0;

	for (i = 0; s[i] != 32; i++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
				c++;
		}
	}
	return (c);
}
