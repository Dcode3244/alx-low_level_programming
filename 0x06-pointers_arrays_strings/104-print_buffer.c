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

	while (b[i] < size)
	{
		if ((i % 10) == 0)
			printf("%08x: ", i);
		while (b[j] < size)
		{
			if (j % 2 == 0)
				printf(" ");
			printf("%02x", b[j]);
			j++;
			if ((j % 10 == 0) && (j != 0))
			{
				printf(" ");
				break;
			}
			if (j == size)
			{
				printf("           ");
				break;
			}
		}
		while (b[i] < size)
		{
			if (b[i] >= 0 && b[i] <= 31)
				printf(".");
			else
				printf("%c", b[i]);
			i++;
			if (i % 10 == 0 || i == size)
				break;
		}
	printf("\n");
	if (i == size)
		break;
	}
}
