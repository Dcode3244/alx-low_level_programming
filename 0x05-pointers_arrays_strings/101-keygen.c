#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entrance point: generates a random password
 *
 * Return: always 0;
 */

int main(void)
{
	int i, n, pass, complem;

	char values[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char password[222];

	srand(time(0));
	for (i = 0; pass < 2772; i++)
	{
		n = rand() % 10;
		password[i] = values[n];
		pass += password[i];
	}
	comple = 2772 - pass;
	password[i] = complem;
	printf("%s\n", password);

	return (0);
}

