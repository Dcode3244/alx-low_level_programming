#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * @head: pointer to the first node
 * @index: the index of the list where the node should be deleted
 * Return: 1 if it succeeded or -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new;
	unsigned int i, node = 0;

	new = temp = *head;
	while (new)
	{
		node++;
		new = new->next;
	}

	if (index > node - 1 || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		for (i = index; i > 1; i--)
			temp = temp->next;

		new = temp->next->next;
		free(temp->next);
		temp->next = new;
	}
	return (1);

}
