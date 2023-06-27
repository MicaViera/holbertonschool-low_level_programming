#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: value.
 * Return: uppercase letters.
 */
char *string_toupper(char *a)
{

	int chan = 0;

	while (a[chan++])
	{
		if (a[chan] >= 'a' && a[chan] <= 'z')
			a[chan] -= -32;

	}
	return (a);
}
