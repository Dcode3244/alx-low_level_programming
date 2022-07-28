#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates a memory for an array using malloc
 * @nmemb: size of the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	s = malloc(nmemb * size);

	for (i = 0; i < nmemb; i++)
		s[i] = 0;
	return (s);
}
