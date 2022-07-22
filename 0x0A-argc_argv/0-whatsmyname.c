#include <stdio.h>

/**
 * main - prints the programs name
 * @argc: number of command line arguments
 * @argv: the command line arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
