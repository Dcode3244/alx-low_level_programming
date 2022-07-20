#include "main.h"
#include <stdio.h>

int length(char *s, int len);
int pal(char *s, int len, int val);

/**
 * is_palindrome - checks if string s is a palindrome
 * @s: the string to be checked
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
	int len = 0, val;

	len = length(s, len);
	val = len;
	return (pal(s, len, val));
}

/**
 * length - finds length of string s
 * @s: the string
 * @len: length of string
 * Return: length of the string
 */

int length(char *s, int len)
{
	len = 0;
	if (*s != '\0')
	{
		len++;
		len += length(s + 1, len);
	}
	return (len);
}

/**
 * pal - checks if string s is palindrome
 * @s: the string to be checked
 * @len: length of the string
 * @val: initiay val = len
 * Return: 1 if s is palindrome, 0 if not
 */

int pal(char *s, int len, int val)
{
	if (val <= 1)
		return (1);
	if (*s == *(s + val - 1))
		return (pal(s + 1, len, val - 2));
	return (0);
}
