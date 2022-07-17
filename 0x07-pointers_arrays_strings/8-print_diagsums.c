#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two diagonals of a square
 * matrix of integers
 * @a: the square matrix
 * @size: the size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size * size; i = i + size + 1)
		sum += a[i];

	printf("%d, ", sum);

	sum = 0;
	for (i = size - 1; i <= size * (size - 1); i = i + size - 1)
		sum += a[i];

	printf("%d\n", sum);
}
