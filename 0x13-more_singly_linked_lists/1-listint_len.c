#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: the list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
