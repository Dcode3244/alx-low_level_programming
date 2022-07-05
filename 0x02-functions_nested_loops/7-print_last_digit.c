#include "main.h"
/**
 * print_last_digit -  finds the last digit of a number
 *
 * @n: input integer
 *
 * Description - prints the last digit of an integer
 *
 * Return: last digit
 *
 */

int print_last_digit(int n)
{
	int l;
	l = (n % 10);
	if (l < 0)
		n = n * -1;
	_putchar(l + '0');
	return (l);
}
