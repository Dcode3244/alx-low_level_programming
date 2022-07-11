#include "main.h"

/**
 * puts_half - prints second half of string followed
 * by a new line
 *
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i = 0, j, len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	j = len / 2;
	while (i < len / 2)
	{
		if (len % 2 == 0)
			_putchar(str[j]);
		if (len % 2 != 0)
			_putchar(str[j + 1]);
		j++;
		i++;
	}
	_putchar('\n');
}
