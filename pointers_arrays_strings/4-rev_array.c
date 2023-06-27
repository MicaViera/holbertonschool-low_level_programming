#include "main.h"
/**
 * reverse_array - Is a function that reverse arrays.
 * @a: the array to reverse.
 * @n: variable.
 * Return: the reverse array.
 */
void reverse_array(int *a, int n)
{
	int l = 0, b;

	while (l < n--)
	{
		b = a[l];
		a[l++] = a[n];
		a[n] = b;
	}
}
