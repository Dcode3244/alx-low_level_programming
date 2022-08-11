#include "lists.h"
#include <stdio.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		free(temp->str);
		temp = temp->next;
	}

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
