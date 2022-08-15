#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 * @h: the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
