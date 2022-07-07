#include "main.h"

/**
 * print_line - draws a straight line with
 * @n: lenght of the line
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
