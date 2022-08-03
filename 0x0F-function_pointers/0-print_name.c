#include <stdlib.h>

/**
 * print_name - prints name
 * @name: the name to be printed
 * @func: pointer to printing function
 */

void print_name(char *name, void (*func)(char *name))
{
	if (name == NULL)
		return;
	func(name);
}
