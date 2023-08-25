#include "main.h"
/**
 * array_range - Function that creates an array of integers.
 * @min: size.
 * @max: size.
 * Return: an array.
 */
int *array_range(int min, int max)
{
	int a, b, *c;

	if (min > max)
		return (NULL);
	b = min;
	c = malloc(sizeof(int) * (max - min + 1));
	if (!c)
		return (NULL);
	for (a = 0; a <= (max - min); a++)
	{
		c[a] = b;
		b++;
	}
	return (c);
}
