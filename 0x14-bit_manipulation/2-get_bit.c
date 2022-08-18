#include "main.h"

/**
 * get_bit - returns a value of a bit at a given index
 * @n: the number
 * @index: the index starting from 0 of the bit you want to get
 * Return: value of bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i, j;
	int bits[32];

	for (i = 0; n > 1; i++)
	{
		if (n % 2 == 0)
			bits[i] = 0;
		else
			bits[i] = 1;
		n = n / 2;
	}
	bits[i] = n;

	if (index > i)
		return (-1);

	return (bits[index]);
}
