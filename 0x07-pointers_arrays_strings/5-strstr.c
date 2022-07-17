#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring.
 * @haystack: string to be searched through
 * @needle: substring
 * Return: a pointer to the beggining of the located
 * substring, of NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int check = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j] != '\0'; j++, k++)
			{
				if (haystack[k] == needle[j])
				{
					check = 0;
					continue;
				}
				check = 1;
				break;
			}
			if (check == 0)
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
