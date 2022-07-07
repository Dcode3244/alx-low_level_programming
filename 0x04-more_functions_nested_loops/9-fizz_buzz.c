#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * but for numbers divisible by 3 prints fizz
 * for numbers divisible by 5 prints buzz
 * for numbers divisible by both 5 and 3 prints fizzbuzz
 *
 * Return: always 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
