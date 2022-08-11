#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds new node at the beginning of a listt_t list
 * @head: pointer to the first node
 * @str: a string to be placed in head->str
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
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
	temp->next = *head;

	*head = temp;
	return (*head);
}
