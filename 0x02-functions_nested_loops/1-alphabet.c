#include "main.h"

/**
 * print_alphabet - my function
 *
 * print_alphabet: prints alphabet in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar('\n');
}
