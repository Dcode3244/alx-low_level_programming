#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: number to be raised to y
 * @y: number to be the power of x
 * Return: x raised to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
