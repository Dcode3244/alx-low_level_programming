#include "main.h"
/**
 * times_table -  prints the 9 times table starting with 0
 *
 * Return: Always 0
 *
 */

void times_table(void)
{
	int i = 0, j = 1;
	int k;

	while (i < 10)
	{
		_putchar('0');
		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;
			if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
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
