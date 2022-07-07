#include "main.h"

/**
 * _isupper - checks if char c is upper case
 * @c: character to be checked
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
