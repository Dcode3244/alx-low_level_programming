#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: string to be comcatenated
 * @src: string to be concatenated
 * @n: number of bytes to be concatenated
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	i = len = 0;
	while (dest[i++])
		len++;

	for (i = 0; i < n && src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
