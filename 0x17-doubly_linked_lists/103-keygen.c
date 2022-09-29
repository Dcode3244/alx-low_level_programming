#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of comand line arguments
 * @argv: command line arguments.
 * Return: 0 on success 1 on error..
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char pwd[7], *str;
	int len = strlen(argv[1]), i, tmp;

	pwd = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	if (argc != 2)
		printf("Correct usage: ./keygen5 username\n");

	tmp = (len ^ 59) & 63;
	pwd[0] = str[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	pwd[1] = str[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	pwd[2] = str[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	pwd[3] = str[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	pwd[4] = str[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	pwd[5] = str[(tmp ^ 229) & 63];
	pwd[6] = '\0';
	printf("%s", pwd);
	return (0);
}
