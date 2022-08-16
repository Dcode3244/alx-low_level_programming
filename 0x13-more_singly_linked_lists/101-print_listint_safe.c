#include "lists.h"

size_t detect_loop(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 * Return: number of nodes;
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i;

	node = detect_loop(head);

	if (node == 0)
	{
		while (head != NULL)
		{
			node++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (node);
	}

	for (i = 0; i < node; i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);

	return (node);
}

/**
 * detect_loop - checks if a linked list have a loop
 * @head: pointer to the first node of the loop
 * Return: 0 if there is no loop, or number of nodes if there is loop
 */
size_t detect_loop(const listint_t *head)
{
	const listint_t *fast, *slow;
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
