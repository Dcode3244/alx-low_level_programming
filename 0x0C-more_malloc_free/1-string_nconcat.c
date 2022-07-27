#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes of s2 to be concatenated to s1
 * Return: pointer to a newly allocated space in memory,
 * which contains s1 followed by n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0, len1 = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0, len2 = 0; s2[i] != '\0'; i++)
		len2++;

	if (len2 <= n)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0, j = 0; j < len1; j++, i++)
		s[i] = s1[j];

	for (j = 0; j <  n; j++, i++)
		s[i] = s2[j];

	s[i] = '\0';

	return (s);
}
