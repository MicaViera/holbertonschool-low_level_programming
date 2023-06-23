#include "main.h"
/**
 * print_rev - print a string in reverse.
 * @s: string.
 */
void print_rev(char *s)
{
	int count = 0, reverse;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (reverse = count - 1; reverse >= 0; reverse--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
