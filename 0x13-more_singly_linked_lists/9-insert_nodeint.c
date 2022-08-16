#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: the inded of the list where the new node should be added
 * @n: the node to be inserted
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i, node = 0;

	new = temp = *head;

	while (new)
	{
		node++;
		new = new->next;
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	if (idx > node)
		return (NULL);

	for (i = idx; i > 1; i--)
		temp = temp->next;

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
