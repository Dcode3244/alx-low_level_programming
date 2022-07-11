#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 *
 * @s: the string paramenter to be reversed
 */

void rev_string(char *s)
{
	int i = 0, j, len = 0;

	char n;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	j = len - 1;
	i = 0;

	while (i < len / 2)
	{
		n = s[i];
		s[i] = s[j];
		s[j] = n;
		i++;
		j--;
	}
}
