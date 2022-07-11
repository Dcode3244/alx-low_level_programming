#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints evety other character of a string, starting
 * with the first character, followed by a new line
 *
 * @str: the string paramenter to be printed
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
