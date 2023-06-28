#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a string.
 * @accept: another pointer to a string.
 * Return: pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	int bytes;

	while (*s)
	{
		for (bytes = 0; accept[bytes] != '\0'; bytes++)
		{
			if (*s == accept[bytes])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
