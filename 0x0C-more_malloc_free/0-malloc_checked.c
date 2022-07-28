#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates momory using malloc
 * @b: size of memory to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
