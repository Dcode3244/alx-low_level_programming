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
	long double a;
	long double b;
	long double c;
	int i = 0;

	a = 0;
	b = 1;

	while (i < 98)
	{
		c = a + b;
		if (i == 97)
		{
			printf("%.0Lf", c);
		}
		else
		{
			printf("%.0Lf, ", c);
			a = b;
			b = c;
		}
		i++;

	}
	fprintf(stderr, "[Anything]");
	printf("\n");
	return (0);
}
