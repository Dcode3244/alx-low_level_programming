#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - struct containing type of argument and function
 * @format: the type of the parameter
 * @printer: printing function according to the argument type
 */
typedef struct format
{
	char format;
	void (*printer)(va_list ap);
} print;

#endif
