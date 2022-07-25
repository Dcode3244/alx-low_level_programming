#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: the arguments
 * Return: a pointer to a new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *a;

	k = len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			len++;
	}

	a = malloc(sizeof(char) * (len + 1));
	k = 0;
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			a[k] = av[i][j];
		a[k] = '\n';
		k++;
	}
	k++;
	a[k] = '\0';

	return (a);

}
