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

	int sign = 1, i = 0;
	unsigned int n = 0;


	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
			n = (s[i] - '0') + (n * 10);

		else if (n > 0)
			break;
		i++;
	}

	return (n * sign);
}
