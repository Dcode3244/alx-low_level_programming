#include "lists.h"

/**
 * find_listint_loop - finds the loop in linked list
 * @head: pointer to the first node of the list
 * Return: address of the node where the loop starts or
 * NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast, *slow;

	fast = slow = head;

	while (fast)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (fast == slow)
		{
			slow = head;
			while (fast != slow)
			{
				fast = fast->next;
				slow = slow->next;
			}

			return (fast);
		}
	}
	return (NULL);
}
