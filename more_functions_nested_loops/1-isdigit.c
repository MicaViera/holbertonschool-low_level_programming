#include "main.h"
/**
 * _isdigit - Function that checks for a digit 0 through 9.
 * @c: Variable to check.
 * Return: 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
