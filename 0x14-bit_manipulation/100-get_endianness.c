#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 1 if architecture is little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
