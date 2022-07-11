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
	int i, n, passw, complem;

	char seed[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char password[222];

	srand(time(0));
	for (i = 0; passw < 2772; i++)
	{
		n = rand() % 10;
		password[i] = seed[n];
		passw += password[i];
	}
	complem = 2772 - passw;
	password[i] = complem;
	printf("%s\n", password);

	return (0);
}

