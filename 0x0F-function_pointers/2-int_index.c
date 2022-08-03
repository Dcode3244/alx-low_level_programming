#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to be searched from
 * @size: size of the array
 * @cmp: a pointer to the function to be used to
 * compare value
 * Return: index of the first element for which the cmp function
 * doesnot return 0, if no element matches or size <=0 -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
