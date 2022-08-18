#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the number:
 * @index: the given index
 * Return: 1 if worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;

	if (index > 64)
		return (-1);

	num = (num >> index) | 1;
	num = num << index;

	*n = *n | num;

	return (1);
}
