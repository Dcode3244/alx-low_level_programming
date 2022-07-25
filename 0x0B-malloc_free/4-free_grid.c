#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimentional grid
 * @grid: the 2D array
 * @height: array height
 */

void free_grid(int **grid, int __attribute__((unused))height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
