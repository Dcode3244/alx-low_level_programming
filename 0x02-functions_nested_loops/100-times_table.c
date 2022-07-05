#include "main.h"
/**
 * print_times_table -  prints n times table starting with 0
 *
 * @n: times table limit
 *
 * Return: Always 0
 *
 */

void print_times_table(int n)
{
	int i = 0, j = 1;
	int k;

	if (n > 15 || n < 0)
		return;

	while (i <= n)
	{
		_putchar('0');
		while (j <= n)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;
			if (k > 99)
			{
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k > 9)
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k  + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
		j = 1;
	}
}
