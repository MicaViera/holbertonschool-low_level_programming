#include "main.h"
/**
 * *cap_string - Is a function that capitalizes all words of a string.
 * @a: the string content.
 * Return: capitalized words.
 */
char *cap_string(char *a)
{
	int chan = 0;

	while (a[chan])
	{
		while (!(a[chan >= 'a' && a[chan] <= 'z']))
			chan++;

		if (a[chan - 1] == ' ' ||
			a[chan - 1] == '\t' ||
			a[chan - 1] == '\n' ||
			a[chan - 1] == ',' ||
			a[chan - 1] == ';' ||
			a[chan - 1] == '.' ||
			a[chan - 1] == '!' ||
			a[chan - 1] == '?' ||
			a[chan - 1] == '"' ||
			a[chan - 1] == '(' ||
			a[chan - 1] == ')' ||
			a[chan - 1] == '{' ||
			a[chan - 1] == '}' ||
			chan == 0)
			a[chan] -= 32;
		chan++;
	}
	return (a);
}
