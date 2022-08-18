#include "main.h"

/**
 * flip_bits - returns a number of bits you would need to flip to
 * get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m  & 1))
			flips++;
		n = n >> 1;
		m = m >> 1;
	}

	return (flips);
}
