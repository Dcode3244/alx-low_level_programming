#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linded list
 * @head: pointer to the first node
 * @index: the index of the node starting at 0
 * Return: nth node or NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	for (i = 0; i <= index && head; i++)
	{
		temp = head;
		head = head->next;
	}

	return (temp);
}
