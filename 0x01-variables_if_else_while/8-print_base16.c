#include<stdio.h>

/**
 * main - Entrance point
 *
 * Description: prints all the bumbers of base 16 in lowercase
 * followed by a new line
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

