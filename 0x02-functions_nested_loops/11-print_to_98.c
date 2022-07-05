#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 *
 * @n: starting number
 *
 * Return: void
 *
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("%d", 98);
	printf("\n");
}
