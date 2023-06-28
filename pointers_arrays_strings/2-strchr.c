#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: first string.
 * @c: the character.
 * Return: null.
 */
char *_strchr(char *s, char c)
{
	int loc;

	for (loc = 0; s[loc] >= '\0'; loc++)
	{
		if (s[loc] == c)
			return (s + loc);
	}

	return ('\0');
}
