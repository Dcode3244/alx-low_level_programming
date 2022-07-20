#include "main.h"

int my_sqrt(int n, int sqrt);

/**
 * _sqrt_recursion - calculates the natural square root of a number n
 * @n: the number
 * Return: square root of n or -1 if there is no natural square root
 */


int _sqrt_recursion(int n)
{
	int sqrt = 0;

	return (my_sqrt(n, sqrt));
}

/**
 * my_sqrt - calculates the square root of a number n
 * @n: the number
 * @sqrt: the root value to be checked
 * Return: square root of n, or -1 if there is no natural square root
 */

int my_sqrt(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	if (sqrt * sqrt > n)
		return (-1);
	return (my_sqrt(n, sqrt + 1));
}
