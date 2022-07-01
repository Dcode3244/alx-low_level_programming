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
	char a;

	a = 'a';
	while (a < 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

