#include "main.h"
#include <math.h>
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{

	int dg = 0, a, b, c, d;
	int num = n;

	while (n != 0)
	{
		n = n / 10;
		dg++;
	}
	a = num % 10;
	b = (num % 100) / 10;
	c = (num % 1000) / 100;
	d = (num % 10000) / 1000;
	if (num < 0 && num != 0)
	{
		_putchar('-');
		if (num < -999)
			_putchar((d * -1) + '0');
		if (num < -99)
			_putchar((c * -1) + '0');
		if (num < -9)
			_putchar((b * -1) + '0');
		if (num < 0)
			_putchar((a * -1) + '0');
	}
	else if (num > 0 && num != 0)
	{
		if (num > 999)
			_putchar(d + '0');
		if (num > 99)
			_putchar(c + '0');
		if (num > 9)
			_putchar(b + '0');
		if (num > 0)
			_putchar(a + '0');
	}
	else
		_putchar(0 + '0');

}
