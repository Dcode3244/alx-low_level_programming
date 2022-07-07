#include "main.h"

/**
 * print_triangle - prints triangle with the given size
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i = 0;
	int k = size;

	if (size > 0)
	{
		while (i < size)
		{
			int j = 1;
			int l = 0;

			while (j < k)
			{
				_putchar(' ');
				j++;
			}

			while (l <= i)
			{
				_putchar('#');
				l++;
			}

			i++;
			k--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
