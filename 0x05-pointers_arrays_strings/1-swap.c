#include "main.h"

/**
 * swap_int - swaps value of a and b;
 * @a: parameter to be swaped
 * @b: parameter to be swaped
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
