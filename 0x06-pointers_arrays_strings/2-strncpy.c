#include "main.h"
#include <stdio.h>
/**
 * _strncpy - a function that copies a string
 *
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: bumber of bytes to be copied
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && dest[i] && src[i];  i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
