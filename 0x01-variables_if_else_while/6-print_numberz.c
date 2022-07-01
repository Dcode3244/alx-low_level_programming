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
	int a = 0;

	while (a < 10)
{
	putchar(a + '0');
	a++;
}
	printf("\n");
	return (0);
}

