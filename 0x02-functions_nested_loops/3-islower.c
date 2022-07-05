#include "main.h"

/**
 * _islower - Entrance point
 *
 * @c: iput parameter
 *
 * Description: prints lower case alphabets from a - z
 *
 * Return: if lowercase 1, else 0
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
