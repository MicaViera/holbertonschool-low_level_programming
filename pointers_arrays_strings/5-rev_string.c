#include "main.h"
/**
 * rev_string - reverse a string.
 * @s: the pointer.
 */
void rev_string(char *s)
{
	int l = 0, b = 0;

	char (rev);

	while (s[l] != '\0')
	{
		l++;
	}

	while (b < l--)
	{
		rev = s[b];
		s[b++] = s[l];
		s[l] = rev;
	}
}
