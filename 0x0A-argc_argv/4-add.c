#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds numbers
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return: 1 if number contains symbols that are not digits,
 * else 0
 */

int main(int argc, char **argv)
{
	int i, sum = 0;
	char *a;

	while (--argc)
	{
		a = argv[argc];
		for (i = 0; a[i] != '\0'; i++)
		{
			if (a[i] > 57 || a[i] < 49)
				{
				printf("Error\n");
				return (1);
				}
		}
		sum += atoi(a);
	}
	printf("%d\n", sum);
	return (0);


}
