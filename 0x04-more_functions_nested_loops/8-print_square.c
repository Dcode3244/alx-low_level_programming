#include "main.h"

/**
 * print_square - prints a square with given size
 * @size: lenght of the line
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		while (i < size)
		{
			int j = 0;

			while (j < size)
			{
			_putchar('#');
			j++;
			}
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
