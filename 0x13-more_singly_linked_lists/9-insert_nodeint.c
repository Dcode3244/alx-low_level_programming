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

	if (head == NULL || *head == NULL)
		return (NULL);

	new = temp = *head;
	while (new)
	{
		node++;
		new = new->next;
	}

	if (idx > node)
		return (NULL);

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	for (i = 0; i < idx - 1; i++)
		temp = temp->next;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (*head);

}
