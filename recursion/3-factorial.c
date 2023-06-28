#include "main.h"
/**
 * factorial - Is a function that returns the factorial number.
 * @n: the number.
 * Return: the factorial result.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
