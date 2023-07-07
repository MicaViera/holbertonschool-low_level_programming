#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - Function that returns a pointer to a 2 dimensional arrays.
 * @width: first array of integers.
 * @height: second array of integers.
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int w = 0;
	int h = 0;
	int **m = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (!m)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		m[h] = malloc(sizeof(int) * width);
		if (!m[h])
		{
			for (w = 0; w < h; w++)
			{
				free(m[w]);
			}
			free(m);
			return (NULL);
		}
	}

	for (h = 0; w < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			m[h][w] = 0;
		}
	}
	return (m);
}
