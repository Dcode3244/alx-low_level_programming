#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @a: the array of integers parameter
 * @n: elements of array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
