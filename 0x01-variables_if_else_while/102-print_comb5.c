#include<stdio.h>

/**
 * main - Entrance point
 *
 * Description: prints all possible different combinations of
 * -two two digit numbers
 * the numbers should range from 0 to 99
 * the two digits should be separated by space
 * all numbers should be printed with two digits. 1 should be printed as 01
 * the combinations of numbers should be separated by comma, following a space
 * 00 01  and 01 00 are considered the same combination of the numbers 0 and 1
 * prints only the smallest combination of two digits
 *
 * Return: 0
 **/

int main(void)
{
	int a = 0, b = 0, c = 0, d = 1;

	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				while (d < 10)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(' ');
					putchar(c + '0');
					putchar(d + '0');
					if (a == 9 && b == 8 && c == 9 && d == 9)
					{
						d++;
						putchar('\n');
						continue;
					}
					putchar(',');
					putchar(' ');
					d++;
				}
				c++;
				d = 0;
			}
			b++;
			c = a;
			d = b + 1;
		}
		a++;
		b = 0;
		d = 0;
		c = a;
	}
	return (0);
}
