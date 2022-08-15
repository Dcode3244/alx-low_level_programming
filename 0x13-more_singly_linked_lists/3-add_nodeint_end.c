#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the list's head pointer
 * @n: the int to be added
 * Return: the address of the new element or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *last;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		(*head) = temp;
		return (*head);
	}
	last = *head;

	while (last)
	{
		if (last->next == NULL)
		{
			last->next = temp;
			break;
		}
		last = last->next;
	}

	return (*head);
}
