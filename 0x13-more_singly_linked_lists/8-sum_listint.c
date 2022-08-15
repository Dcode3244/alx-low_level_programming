#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the first node
 * Return: the sum or 0 of the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
