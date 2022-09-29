#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: the head of the dlistint_t list
 * @index: the nth node index
 * Return: the nth node of a dlistint_t list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len = 0, i;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		len++;
		temp = temp->next;
	}

	if (index >= len)
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	return (temp);
}
