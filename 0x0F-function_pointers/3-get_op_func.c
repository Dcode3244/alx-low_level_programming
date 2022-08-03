#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: the parameter
 * Return: pointer to the correct function or NULL
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (*s == ops[i].op[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
