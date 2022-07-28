#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the ints
 * @max: maximum value of the ints
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j, *num;

	if (min > max)
		return (NULL);

	num = malloc(sizeof(int) * (max - min + 1));

	if (num == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; i++, j++)
		num[j] = i;
	return (num);
}
