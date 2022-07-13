#include "main.h"

/**
 * reverse_array - reverses content of array of ints
 *
 * @a: array to be reversed
 * @n: number of array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
	}
}
