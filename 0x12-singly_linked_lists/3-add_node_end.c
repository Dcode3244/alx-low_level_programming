#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - adds new node at the end of a listt_t list
 * @head: pointer to the first node
 * @str: a string to be placed in head->str
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last;
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = malloc(sizeof(char) * len);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (i = 0; i < len; i++)
		(temp->str)[i] = str[i];

	(temp->str)[i] = '\0';
	temp->len = len;

	if (*head == NULL)
	{
		*head = temp;
		temp->next = NULL;
		return (*head);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}

	temp->next = NULL;
	last->next = temp;
	return (*head);
}
