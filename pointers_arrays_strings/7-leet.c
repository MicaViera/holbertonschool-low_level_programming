#include "main.h"
/**
 * leet - Function that encodes a string into 1337.
 * @s: The character.
 * Return: 0.
 */
char *leet(char *s)
{
	int a = 0;
	int b = 0;
	char *m = "AaEeOoLlTt";
	char *l = "4433001177";

	while (s[b] != '\0')
	{
		while (m[a] != '\0')
		{
			if (s[b] == m[a])
				s[b] = l[a];
			a++;
		}
		a = 0;
		b++;
	}
	return (s);
}
