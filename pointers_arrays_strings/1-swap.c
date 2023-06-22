#include "main.h"
#include <stdio.h>
/**
 * swap_int - Function that swaps the values of two integers.
 * @a: First int.
 * @b: Second int.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
