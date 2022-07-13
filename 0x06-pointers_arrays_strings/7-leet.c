#include <stdio.h>

/**
 * leet - encodes string to 1337
 *
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;

	char code[] = "aeotlAEOTL";
	char code2[] = "4307143071";

	while (s[i] != '\0')
	{
		j = 0;
		while (code[j] != '\0')
		{
			if (s[i] == code[j])
			{
				s[i] = code2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
