#include "main.h"
/**
 * _atoi - Convert a string into a integer.
 * @s: string.
 * Return: an integer.
 */
int _atoi(char *s)
{
	int checker = 0;
	unsigned int sign = 1;

	if (*s == '-')
	{
		sign *= -1;
	}
	while (*s++)
		if (*s >= '0' && *s <= '9')
		checker = (checker * 10) + (*s - '0');

	else if (checker > 0)
		break;
	return (checker * sign);
}
