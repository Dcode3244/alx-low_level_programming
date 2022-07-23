#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: string to be duplicated
 * Return: poiter to the duplicated array of NULL if insufficient
 * memory was available
 */

char *_strdup(char *str)
{
	char *p;
	int len, i;

	for (i = 0, len = 1; str[i] != '\0'; i++)
		len++;
	p = malloc(len * sizeof(char));

	if (p == NULL || str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
