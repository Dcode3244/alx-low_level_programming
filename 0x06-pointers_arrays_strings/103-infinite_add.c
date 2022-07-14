#include "main.h"

char *conditions(char *n1, char *n2, char *r, int l2, int l1, int size);

/**
 * infinite_add - adds two numbers
 * @n1: the number to be added
 * @n2: the number to be added
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: added value;
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, ln1, ln2, l1, l2, size;

	ln1 = ln2 = i = 0;

	for (i = 0; n1[i++]; ln1++)
		;
	for (i = 0; n2[i++]; ln2++)
		;
	l1 = ln1 - 1;
	l2 = ln2 - 1;
	size = size_r - 1;

	r[size_r] = '\0';
	if (size_r <= ln1 + 1 || size_r <= ln2 + 1)
		return (0);

	return (conditions(n1, n2, r, l2, l1, size));
}

/**
 * conditions - adds two numbers
 * @n1: the number to be added
 * @n2: the number to be added
 * @r: is the buffer that the function will use to store the result
 * @l1: length of l1 - 1;
 * @l2: length of l2 - 1;
 * @size: is the buffer size - 1
 * Return: added value;
 */


char *conditions(char *n1, char *n2, char *r, int l2, int l1, int size)
{
	int sum, left;

	sum = left = 0;
	for (; n1[l1] && n1[l2]; size--, l1--, l2--)
	{
		sum = (n1[l1] - '0') + (n2[l2] - '0') + left;
		r[size] = (sum % 10) + '0';
		left = sum / 10;
	}
	for (; n1[l1]; l1--, size--)
	{
		sum = (n1[l1] - '0') + left;
		r[size] = (sum % 10) + '0';
		left = sum / 10;
	}
	for (; n2[l2]; l2--, size--)
	{
		sum = (n2[l2] - '0') + left;
		r[size] = (sum % 10) + '0';
		left = sum / 10;
	}
	if (left > 0 && size < 0)
		return (0);
	if (left  && size >= 0)
	{
		*(r + size) = (left % 10) + '0';
		return (r + size);
	}
	return (r + size + 1);
}
