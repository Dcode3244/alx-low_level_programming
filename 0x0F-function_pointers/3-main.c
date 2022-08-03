#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - intrance point
 * Description: calculates input numbers with the appropriate
 * parameter given in the command line
 * @av: number of comand line arguments
 * @ac: the command line arguments
 * Return: 0 if successfull, else exits with given error code
 */

int main(int av, char **ac)
{
	int a, b, num;

	if (av != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(*ac[2] == '+' || *ac[2] == '*' ||
		*ac[2] == '-' || *ac[2] == '/' ||
		*ac[2] == '%') && ac[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((ac[2][0] == '/' || ac[2][0] == '%') && (ac[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(ac[1]);
	b = atoi(ac[3]);
	num = get_op_func(ac[2])(a, b);
	printf("%d\n", num);

	return (0);
}
