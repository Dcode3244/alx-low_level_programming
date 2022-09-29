#include "lists.h"

/**
 * free_dlistint -frees a dlistint_t list
 * @head: head of the dlistint_t list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
