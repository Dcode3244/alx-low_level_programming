#include "main.h"
#include <stdio.h>

int length(char *s);
int checker(char *s1, char *s2, int len1, int len2, int star);

/**
 * wildcmp - compares strings s1 and s2
 * @s1: first string
 * @s2: second string
 * Return: 1 if strings are considered identical,
 * otherwise 0;
 */
int wildcmp(char *s1, char *s2)
{
	int len1, len2, star = 0;

	len1 = length(s1);
	len2 = length(s2);

	return (checker(s1, s2, len1, len2, star));
}

/**
 * length -calculates length of string
 * @s: string
 * Return: length of string
 */

int length(char *s)
{
	int len = 1;

	if (*s == '\0')
		return (0);
	len += length(s + 1);

	return (len);
}

/**
 * checker - compares two strings
 * @s1: first string
 * @s2: second string
 * @len1: length of string 1
 * @len2: length of string 2
 * @star: asterix value
 * Return: 1 if strings are identical, otherwise 0
 */

int checker(char *s1, char *s2, int len1, int len2, int star)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (checker(s1, s2 + 1, len1, len2, star));
		if (*s2 == '\0')
			return (1);
		else
			return (0);
	}
	if (*s1 == *s2)
	{
		if (*(s2 + 1) == '\0' && *(s1 + 1) != '\0')
		{
			if (star == 1)
				return (checker(s1 + 1, s2, len1, len2, star));
			return (0);
		}
		return (checker(s1 + 1, s2 + 1, len1, len2, star));
	}
	if (*s2 == '*' && *(s2 + 1) != '\0')
	{
		star = 1;
		return (checker(s1, s2 + 1, len1, len2, star));
	}
	if (*s1 != *s2 && *(s2 - 1) == '*')
		return (checker(s1 + 1, s2, len1, len2, star));
	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	if (*s1 != *s2 && star == 1 && len1 > len2)
		return (checker(s1 + 1, s2, len1, len2, star));
	if (*s1 == '-')
		return (0);
	return (0);
}
