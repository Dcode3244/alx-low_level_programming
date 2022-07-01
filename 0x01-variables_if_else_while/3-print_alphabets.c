#include<stdio.h>

/**
 * main - Entrance point
 *
 * Description: prints lower case and upper case alphabets from a..zA..Z
 *
 * Return: 0
 **/

int main(void)
{
	char a;
	char b;

	a = 'a';
	b = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

