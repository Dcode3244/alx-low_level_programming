#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index of the list
 * @head: head of the linked list
 * @index: the index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = 0, i;

	temp = *head;
	while (temp)
	{
		len++;
		temp = temp->next;
	}

	if (index >= len || *head == NULL)
		return (-1);

	temp = *head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	else
		*head = temp->next;
	free(temp);

	return (1);
}
