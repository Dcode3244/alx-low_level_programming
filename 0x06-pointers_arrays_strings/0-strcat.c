#include "main.h"
#include <stdio.h>

/** _strcat - concatenates two strings
 *
 * @dest - string to be concatenated
 * @src - string to be concatenated
 *
 * Return: pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	if (*(dest + i) == '\0')
	{
		do {
			dest[i] = src[j];
			i++;
			j++;

		} while (src[j] != '\0');
	}

	return (dest);
}
