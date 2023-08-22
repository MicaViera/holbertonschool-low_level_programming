#include "main.h"
/**
 * _isupper - Function that checks for uppercase character.
 * @c: Variable.
 * Return: 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
