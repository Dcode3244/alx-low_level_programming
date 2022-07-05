#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 *
 */

void main(void)
{
	printf("1, 2, ");
	int i = 0;
	int a, b, c;

	a = 1;
	b = 2;

	while (i < 50)
	{
		c = a + b;
		if (i == 50)
		{
			printf("%d", c);
		}	
		else
		{
			printf("%d, ", c);
			a = b;
			b = c;
			i++;
		}
	}
	printf("\n");
}
