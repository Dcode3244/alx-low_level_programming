#include<stdio.h>

/**
 * main - Entrance point
 *
 * Description: prints lower case alphabets from in reverse (z - a)
 * followed by a new line
 *
 * Return: 0
 **/

int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		printf("%c", a);
		a--;
	}
	putchar('\n');
	return (0);
}

