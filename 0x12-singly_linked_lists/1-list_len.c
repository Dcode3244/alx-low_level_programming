#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list
 * @h: the list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
