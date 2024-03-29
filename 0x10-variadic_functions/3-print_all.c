#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_int(va_list ap);
void print_char(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	print f[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'f', print_float}
	};
	va_list ap;
	int i, j;
	char *separator = "";

	va_start(ap, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == f[j].format)
			{
				printf("%s", separator);
				f[j].printer(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 * print_int - prints an int
 * @ap: the int to be printed
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_string - prints a string
 * @ap: the string to be printed
 */

void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_char - prints a char
 * @ap: the char to be printed
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - prints a float
 * @ap: the float to be printed
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
