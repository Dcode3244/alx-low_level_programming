/**
 * print_name - prints name
 * @name: the name to be printed
 * @func: pointer to printing function
 */

void print_name(char *name, void (*func)(char *name))
{
	if (*name == '\0')
		return;
	func(name);
}
