#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Is a function that return the sum of all its parameters.
 * @n: Constant value.
 * Return: the sum of the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int sum;
	va_list ptrs;

	va_start(ptrs, n);

	for (count = 0; count < n; count++)
		sum += va_arg(ptrs, int);

	va_end(ptrs);
	return (sum);
}
