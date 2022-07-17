#include "main.h"
#include <stdio.h>
/**
 * _strspn - gets length of a prefix substring.
 * @s: string
 * @accept: string
 * Return: numner of bytes int the initial segment of s which consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int check = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\n'; j++)
		{
			if (s[i] == accept[j])
			{
				check = 1;
				break;
			}
			else
				check = 0;
		}
		if (check == 0)
			return (i);
	}
	return (i);
}
