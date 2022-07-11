#include "main.h"

/**
 *  _strcpy - copies the string pointed by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: parameter to be copied to
 * @src: parameter being copied from
 *
 * Return: &dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (src[i] == '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
