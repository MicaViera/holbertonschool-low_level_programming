#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: Pointer to the string with the binary number.
 * Return: Binary number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;
	int idx;

	if (!b)
		return (0);

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] == '1')
			bin = (bin << 1) | 1;
		else if (b[idx] == '0')
			bin = bin << 1;
		else
			return (0);
	}
	return (bin);
}
