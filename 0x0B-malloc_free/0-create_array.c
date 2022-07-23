#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, and initializes with specific char
 * @size: size of the array
 * @c: character
 * Return: pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(char));

	if (p == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
