#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_all - adds all its parameters
 * @n: number of parameters
 * Return: summ of the parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);
	va_end(ap);

	return (sum);
}
