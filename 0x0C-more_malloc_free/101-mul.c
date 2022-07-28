#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int num_len(char *);
void num_checker(char *s);
void __sums(char *final_prod, char *next_prod, int next_len);
void __multiply(char *prod, char *mult, int digit, int zeroes);
char *__malloc(int len);

/**
 * main - multiplies two positive number
 * @ac: number of command line arguments
 * @av: the command line arguments
 * Return: 0 if successfull if not exits with code 98
 */
int main(int ac, char **av)
{
	int i, d, len1, len2, lenf, count = 0;

	char *temp, *final;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(av[1]) == '0')
	{
		while (*av[1] && *(av[1]) == '0')
			av[1]++;
	}
	if (*(av[2]) == '0')
	{
		while (*av[2] && *(av[2]) == '0')
			av[2]++;
	}

	if (*(av[1]) == '\0' || *(av[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	len1 = num_len(av[1]);
	len2 = num_len(av[2]);
	lenf = len1 + len2;

	num_checker(av[1]);
	num_checker(av[2]);

	final = __malloc(lenf + 1);
	temp = __malloc(lenf + 1);

	for (i = len2 - 1; i >= 0; i--)
	{
		d = *(av[2] + i) - '0';
		__multiply(temp, av[1], d, count++);
		__sums(final, temp, lenf - 1);
	}

	for (i = 0; final[i]; i++)
	{
		if (final[i] != 'a')
			_putchar(final[i]);
	}
	_putchar('\n');

	free(final);
	free(temp);

	return (0);
}

/**
 * num_len - calculate length of a string
 * @s: the string
 * Return: length of the string
 */
int num_len(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}

/**
 * num_checker - checks if every character in a string is a digit
 * @s: the string to be checked
 */
void num_checker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > '9' || s[i] < '0')
		{
			printf("Error\n");
			exit(98);
		}
	}
}

/**
 * __malloc - allocates specific amount of memory and initiates it with 'a'
 * @len: size of memory to be allocated
 * Return: pointer to the allocated memory
 */
char *__malloc(int len)
{
	char *s;
	int i;

	s = malloc(sizeof(char) * len);

	if (s == NULL)
		exit(98);

	for (i = 0; i < (len - 1); i++)
		s[i] = 'a';

	s[i] = '\0';

	return (s);
}

/**
 * __multiply - multiplies every digit of string av1 with digit d
 * @temp: temporary string to store product
 * @av1: string with digits to be multiplied by d
 * @d: the digit to be multiplied to each string av1 digits
 * @count: counter
 */
void __multiply(char *temp, char *av1, int d, int count)
{
	int dig, len_av1, tens = 0;

	len_av1 = num_len(av1) - 1;
	av1 += len_av1;

	for (; *temp; temp++)
		*temp = 'a';
	temp--;

	for (; count--; temp--)
		*temp = '0';

	for (; len_av1 >= 0; len_av1--, av1--, temp--)
	{
		dig = (*av1 - '0') * d;
		dig += tens;
		*temp = (dig % 10) + '0';
		tens = dig / 10;
	}

	if (tens)
		*temp = (tens % 10) + '0';
}

/**
 * __sums - adds digits of string final and temp
 * @temp: the temporary string to be added
 * @final: the final multiplied string
 * @len: the length of temp
 */
void __sums(char *final, char *temp, int len)
{
	int num, tens = 0;

	for (; *(final + 1); final++)
		;

	for (; *(temp + 1); temp++)
		;

	for (; *final != 'a'; final--)
	{
		num = (*final - '0') + (*temp - '0');
		num += tens;
		*final = (num % 10) + '0';
		tens = num / 10;
		temp--;
		len--;
	}

	for (; len >= 0 && *temp != 'a'; len--)
	{
		num = (*temp - '0');
		num += tens;
		*final = (num % 10) + '0';
		tens = num / 10;
		final--;
		temp--;
	}

	if (tens)
		*final = (tens % 10) + '0';
}
