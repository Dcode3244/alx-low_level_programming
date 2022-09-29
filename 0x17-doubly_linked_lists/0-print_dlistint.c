#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t
 * @h: header of the dlistint
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
