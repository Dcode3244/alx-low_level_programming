#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	if (size <= 0)
		printf("\n");

	while (i < size)
	{
		printf("%08x: ", i);
		j = 0;
		while (j < 10)
		{
			if ((j + i) >= size)
				printf("  ");
			else
				printf("%02x", b[i + j]);

			if ((j % 2) != 0 && (j != 0))
				printf(" ");
			j++;
		}
		j = 0;
		while (j < 10)
		{
			if (i + j >= size)
				break;
			if (b[i] >= 0 && b[i] <= 31)
				printf(".");
			else
				printf("%c", b[i + j]);
			j++;
		}
		i = i + 10;
		printf("\n");
	}
}
