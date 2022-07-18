#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: string to be searched in
 * @c: character to be searched in string s
 * Return: a pointer to the first occurence of the character c in s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	for (i = 0; s[i] != '\0'; i++)
		;

	return (s + i);
}
