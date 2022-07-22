#include <stdio.h>

/**
 * main - prints all argument is receives
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return: 0;
 */

int main(int argc, char **argv)
{
	while (--argc)
		printf("%s\n", argv[argc]);
	return (0);
}
