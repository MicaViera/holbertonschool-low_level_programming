#include "main.h"
/**
 * is_prime_number - Fuction that checks if is a prime number.
 * @n: The number.
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n >= 0 && n % n == 0 && n % 1 == 0)
		return (1);
	if ((n / 2) % n == 0)
		return (0);
	if (n == 1)
		return (0);
	else
		return (0);
}
