#include "lists.h"

size_t detect_list_loop(listint_t *head);

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to the first node of the list
 * Return: number of nodes;
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node, i;
	listint_t *temp = *h;

	node = detect_list_loop(*h);
	if (node == 0)
	{
		while (*h != NULL)
		{
			node++;
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		return (node);
	}

	for (i = 0; i < node; i++)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
	}
	*h = NULL;
	return (node);
}

/**
 * detect_list_loop - checks if a linked list have a loop
 * @head: pointer to the first node of the loop
 * Return: 0 if there is no loop, or number of nodes if there is loop
 */
size_t detect_list_loop(listint_t *head)
{
	listint_t *fast, *slow;
	size_t node = 0;

	fast = slow = head;
	while (fast)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			for (; slow != fast; node++)
			{
				slow = slow->next;
				fast = fast->next;
			}

			slow = slow->next;
			for (; slow != fast; node++)
				slow = slow->next;
			return (++node);
		}
	}
	return (0);
}
