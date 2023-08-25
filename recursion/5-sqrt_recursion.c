#include "main.h"
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: The number.
 * Return: The square root of the n number.
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (n_recursion(n, 0));
}

/**
 * n_recursion - Function that finds the natural number of n.
 * @n: The number.
 * @i: variable.
 * Return:The square root.
 */
int n_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (n_recursion(n, i + 1));
}
