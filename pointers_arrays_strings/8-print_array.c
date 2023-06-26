#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers.
 * @a: string content.
 * @n: integers value.
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%d", a[num]);

		if (num == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
