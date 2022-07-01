#include<stdio.h>

/**
 * main - Entrance point
 *
 * Description: prints all all possible different combinations of two digits
 * the two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * prints only the smallest combination of two digits
 *
 * Return: 0
 **/

int main(void)
{
	int a = 0;
	int b = 1;
	int c = 2;

	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a == 7 && b == 8 && c == 9)
				{
					b++;
					c++;
					putchar('\n');
					continue;
				}
				putchar(',');
				putchar(' ');
				c++;
			}
			b++;
		}
		a++;
	}
	return (0);
}
