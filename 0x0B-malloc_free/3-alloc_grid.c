#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of ints
 * @width: column of the array
 * @height: row of the array
 * Return: pointer to a 2D array of ints
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **p;

	p  = malloc((height) * sizeof(int *));

	for (i = 0; i < height; i++)
		p[i] = malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
