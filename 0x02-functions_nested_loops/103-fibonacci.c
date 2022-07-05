#include <stdio.h>

/**
 * main - prints the the sum of even fibonacci numbers
 * less than 400
 *
 * description: prints the the sum of even fibonacci numbers
 * less than 400
 *
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long c;
	unsigned long sum = 0;
	int i = 0;

	a = 0;
	b = 1;

	while (i < 50)
	{
		c = a + b;
		a = b;
		b = c;

		if ((c % 2) == 0 && c < 4000000)
		{
			sum = sum + c;
		}
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
