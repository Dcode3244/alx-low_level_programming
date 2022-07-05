#include <stdio.h>

/**
 * main - computes and prints sum of all multiples
 * of 3 and 5 below 1024
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n;
	int sum;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
