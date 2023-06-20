#include "main.h"
/**
 * _islower - Returns 1 if c is lowercase, else returns 0
 * @c: received characters
 *Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
