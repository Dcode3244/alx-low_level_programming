#include <stdio.h>

/**
 * _atoi - converts string to integer
 *
 * @s: string to be converted
 *
 * Return: convered integer
 */

int _atoi(char *s)
{
	int i = 0, len = 0, j = 0;
	unsigned int num, pow, neg;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	j = len - 1;
	i = 0;

	num = 0;
	pow = 1;
	neg = 0;
	while (j >= 0)
	{
		if (s[j] == 45)
		{
			neg++;
		}
		if (s[j] >= 48 && s[j] <= 57)
		{
			num = num + (s[j] - 48) * pow;
			pow = pow * 10;
		}
		j--;
	}
	if (neg % 2 != 0)
		return (-num);
	return (num);
}
