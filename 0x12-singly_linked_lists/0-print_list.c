#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;
	size_t node = 0;
	char *null = "[0] (nil)\n";

	while (h)
	{
		if (h->str == NULL)
		{
			while (*null)
				_putchar(*null++);
		}
		else
		{
			_putchar('[');
			_putchar(h->len + '0');
			_putchar(']');
			_putchar(' ');
			for (i = 0; (h->str)[i] != '\0'; i++)
				_putchar((h->str)[i]);
			_putchar('\n');
		}		
		node++;
		h = h->next;
	}

	return (node);
}
