#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	len1 = len2 = 0;

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	p = malloc((len1 + len2 + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];

	for (i = 0; i <= len2; i++)
		p[len1 + i] = s2[i];
	return (p);
}
