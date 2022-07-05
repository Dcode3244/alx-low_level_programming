#include <stdio.h>

/**
 * -  finds the last digit of a number
 *
 * @n: input integer
 *
 * Description - prints the last digit of an integer
 *
 * Return: last digit
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
}
