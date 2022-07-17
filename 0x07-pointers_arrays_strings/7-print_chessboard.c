#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard dimension
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] >= 'a' && a[i][j] <= 'z')
				_putchar(a[i][j]);
			else if (a[i][j] >= 'A' && a[i][j] <= 'Z')
				_putchar(a[i][j]);
			else
				_putchar(' ');
			if (j == 7)
				_putchar('\n');
		}
	}
}
