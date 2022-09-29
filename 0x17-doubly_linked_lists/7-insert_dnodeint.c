#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the dlistint_t linkde list
 * @idx: the position of the data to be inserted
 * @n: the data to be inserted
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i, len = 0;

	temp = *h;
	while (temp)
	{
		len++;
		temp = temp->next;
	}
	if (idx > len)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temp = *h;
	for (i = 0; i < idx; i++)
		temp = temp->next;

	new->next = temp;
	new->prev = temp->prev;
	new->prev->next = new;
	temp->prev = new;

	return (new);
}
