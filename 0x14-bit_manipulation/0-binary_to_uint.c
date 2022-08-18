#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that are not 0 or 1
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, base = 1;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			continue;
		return (0);
	}

	for (i = i - 1; i >= 0; i--)
	{
		num += (b[i] - '0') * base;
		base *= 2;
	}

	return (num);
}
