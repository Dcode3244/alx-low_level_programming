#include "main.h"

/**
 * reverse_array - reverses content of array of ints
 *
 * @a: array to be reversed
 * @n: number of array
 */

void reverse_array(int *a, int n)
{
	int i, j, len = n;

	for (i = 0; i < n / 2; i++, len--)
	{
		j = a[i];
		a[i] = a[len - 1];
		a[len - 1] = j;
	}
}
