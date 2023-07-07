#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function that frees two dimensional grid.
 * @grid: pointer to a pointer.
 * @height: string.
 */
void free_grid(int **grid, int height)
{
	int h = 0;

	for (; h < height; h++)
		free(grid[h]);

	free(grid);
}
