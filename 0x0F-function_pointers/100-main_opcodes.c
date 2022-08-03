#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opicodes of its own main function
 * @ac: number of command line arguments
 * @av: the command line arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int i, num;
	int (*p_main)(int, char **);
	unsigned char op;

	p_main = main;
	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(av[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		op = *(unsigned char *)p_main;
		printf("%.2x", op);
		if (i != num - 1)
			printf(" ");
		p_main++;
	}

	printf("\n");
	return (0);
}
