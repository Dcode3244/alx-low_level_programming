#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the dlistint_t list
 * @n: data of the new list to be added
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		(*head)->next = NULL;
		(*head)->prev = NULL;
		return (*head);
	}
	ptr = *head;
	while (ptr != NULL && ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = new;
	new->prev = ptr;
	new->next = NULL;

	return (ptr->next);
}
