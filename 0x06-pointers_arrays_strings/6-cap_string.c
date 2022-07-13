#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *s)
{
	int i = 0;
	int isseparator = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (isseparator == 1)
			{
				s[i] -= 32;
				isseparator = 0;
			}
		}
		else if (s[i] == ' ' ||
			s[i] == '\t' ||
			s[i] == '\n' ||
			s[i] == ',' ||
			s[i] == ';' ||
			s[i] == '.' ||
			s[i] == '!' ||
			s[i] == '?' ||
			s[i] == '"' ||
			s[i] == '(' ||
			s[i] == ')' ||
			s[i] == '{' ||
			s[i] == '}')
		{
			isseparator = 1;
			i++;
			continue;
		}
		isseparator = 0;
		i++;
	}
	return (s);
}
