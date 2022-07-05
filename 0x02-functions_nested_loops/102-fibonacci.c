#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 *
 * description: prints the first 50 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long c;
	int i = 0;

	a = 0;
	b = 1;

	while (i < 50)
	{
		c = a + b;
		if (i == 49)
		{
			printf("%lu", c);
		}
		else
		{
			printf("%lu, ", c);
			a = b;
			b = c;
		}
		i++;
	}
	printf("\n");
	return (0);
}
