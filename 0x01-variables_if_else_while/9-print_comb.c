#include<stdio.h>

/**
 * main - Entrance point
 *
 * Description: prints all posible combinations of single-digit numbers.
 *
 * Return: 0
 **/

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a == 9)
		{
			a++;
			continue;
		}
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}

