#include<stdio.h>

int main()
{
int b = 1;
for (int a = 0; a < 10; a++)
{
	b = a + 1;
	while (b < 10)
	{
		putchar(a + '0');
		putchar(b + '0');
		if(a == 8 && b == 9)
		{
			b++;
			putchar('\n');
			continue;
		}
		putchar(',');
		putchar(' ');
		b++;
	}
}
}
