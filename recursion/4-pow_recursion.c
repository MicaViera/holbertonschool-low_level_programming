#include "main.h"
/**
 * _pow_recursion - A function that returns a value of x raised to y.
 * @x: integer.
 * @y: integer.
 * Return: the value of x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
