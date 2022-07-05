#include "main.h"

/**
 * print_sign - my function
 *
 * @n: the character to be checked
 *
 * Description - checks sign of character
 *
 * Return: 1 if is positive, -1 if negative, else 0
 *
 */

int print_sign(int n)
{
	while (n > 0)
	{
		_putchar('+');
		return (1);
	}
	while (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar(0);
	return (0);
}
