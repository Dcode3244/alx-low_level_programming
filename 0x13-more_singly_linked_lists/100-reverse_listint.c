#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *next;

	temp = *head;
	*head = NULL;

	while (temp != NULL)
	{
		next = temp->next;
		temp->next = *head;
		*head = temp;
		temp = next;
	}

	return (*head);
}
