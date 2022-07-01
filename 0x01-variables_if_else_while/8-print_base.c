#include<stdio.h>

/**
 * main - Entrance point
 *
 * Description: prints lower case alphabets from a - z
 *
 * Return: 0
 **/

int main(void)
{
	char a = 0;
	char b = 'a';

	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

