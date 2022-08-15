#include "lists.h"

/**
 * free_listint - frees a listint_list
 * @head: pointer to the first list node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
