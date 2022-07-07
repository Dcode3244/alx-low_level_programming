#include "main.h"

/**
 * _isdigit - checks for digit 0 through 9
 * @c: character to be checked
 * Return: 1 if digit, 0 if else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
