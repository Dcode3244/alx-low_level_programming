#include "main.h"

/**
 * string_toupper - changes lowercase to uppercase
 *
 * @s: string to be converted to uppercase
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -=  32;
		i++;
	}
	return (s);
}
