#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number:
 * @index: the given index
 * Return: 1 if worked, or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
