#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data.
 * @head: pointer to the first node of the list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
