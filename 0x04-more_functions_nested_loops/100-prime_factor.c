#include <stdio.h>

/**
 * main - prints the largest prime factor of n
 *
 * Return: always 0
 */

int main(void)
{
	long n = 612852475143, prime;
	int i = 2;

	while (n > 0)
	{
		if (n % i != 0)
		{
			i++;
			continue;
		}
		else
		{
			prime = n;
			n = n / i;
			if (n == 1)
			{
				printf("%ld\n", prime);
				break;
			}
		}
	}

	return (0);
}
