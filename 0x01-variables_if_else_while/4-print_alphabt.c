#include<stdio.h>

/**
 * main - Entrance point
 *
 * Description: prints lower case alphabets from a - z,
 * followed by a new line. and doestn't print "q" and "e"
 *
 * Return: 0
 **/

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
		putchar('\n');
return (0);
}

