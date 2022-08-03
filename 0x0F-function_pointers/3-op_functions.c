#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds a and b
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: first number
 * @b: second number
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: first number
 * @b: second number
 * Return: a * b;
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: first number
 * @b: second number
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives a % b
 * @a: first number
 * @b: second number
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
