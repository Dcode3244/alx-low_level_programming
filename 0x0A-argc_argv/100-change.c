#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an
 * amount of money
 * @argc: number of comandline arguments
 * @argv: the command line arguments
 * Return: 1 if argc is not 2, else 0.
 */

int main(int argc, char **argv)
{
	int money, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money <= 0)
		coin = 0;
	if (money >= 25)
	{
		coin = money / 25;
		money %= 25;
	}
	if (money >= 10)
	{
		coin = coin + money / 10;
		money %= 10;
	}
	if (money >= 5)
	{
		coin = coin + money / 5;
		money %= 5;
	}
	if (money >= 2)
	{
		coin = coin + money / 2;
		money %= 2;
	}
	if (money >= 1)
		coin = coin + money;
	printf("%d\n", coin);
	return (0);
}
