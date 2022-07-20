#include "main.h"

int prime(int n, int div);

/**
* is_prime_number - checks if given number is a prime number
* @n: the number to be checked
* Return: 1 if n is prime or 0 if n is num prime
*/

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (prime(n, div));
}


/**
* prime - checks if given number is a prime number
* @n: the number to be checked
* @div: number checker
* Return: 1 if n is prime or 0 if n is num prime
*/

int prime(int n, int div)
{
	if (n % div == 0)
		return (0);
	if (div == n / 2)
		return (1);
	return (prime(n, div + 1));
}
