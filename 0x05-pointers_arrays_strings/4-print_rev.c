#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reversr followed by new line
 *
 * @str : string to be printed out
 */

void print_rev(char *str)
{
	int i = 0, j, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
printf("%d\n", len);
	j = len;

	while (j > 0)
	{
		_putchar(str[j - 1]);
		j--;
	}

	_putchar('\n');
}
