#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: the size, in bytes, of allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	char *a;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
		return (NULL);

	s = malloc(new_size);

	if (s == NULL)
		return (NULL);
	a = ptr;

	for (i = 0; i < old_size; i++)
		s[i] = a[i];

	return (s);
}
