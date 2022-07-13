#include "main.h"

/**
 * _strcmp - comares two strings
 *
 * @s1: string to be compared
 * @s2: string to be compared
 *
 * Return: 0 if strings are equal,
 * > 0 if the first non-matching character in str1 is
 *  greater (in ASCII) than that of str2.
 * < 0 if the first non-matching character in str1 is
 * lower (in ASCII) than that of str2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (s1[i++] && s2[i++])
		val = s2[i] - s1[i];
	return (val);
}
