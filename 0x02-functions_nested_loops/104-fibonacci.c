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
	int i;
	unsigned long a = 0, b = 1, sum;
	unsigned long a1, a2, b1, b2;
	unsigned long half1, half2;

	while (i < 92)
	{
		sum = a + b;
		printf("%lu, ", sum);

		a = b;
		b = sum;
		i++;
	}
	a1 = a / 10000000000;
	b1 = b / 10000000000;
	a2 = a % 10000000000;
	b2 = b % 10000000000;
	while (i >= 92 && i < 98)
	{
		half1 = a1 + b1;
		half2 = a2 + b2;
		if (a2 + b2 > 999999999)
		{
			half1 = half1 + 1;
			half2 = half2 % 10000000000;
		}
		printf("%lu%lu", half1, half2);
		if (i != 97)
			printf(", ");
		a1 = b1;
		a2 = b2;
		b1 = half1;
		b2 = half2;
		i++;
	}
	printf("\n");
	return (0);
}
