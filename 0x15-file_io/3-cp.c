#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int cp(char *from, char *to);
/**
 * main - entry point
 * @ac: number of command line arguments
 * @av: the command line arguments
 * Return: 0 on success
 */

int main(int ac, char **av)
{
	char *from, *to;

	from = av[1];
	to = av[2];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(from, to);

	return (0);

}

/**
 * cp - copies from one file to another
 * @from: the file to be copied from
 * @to: the file to be copied to
 * Return: 0 on success
 */
int cp(char *from, char *to)
{
	int fd, fd2, sz, wr, c1, c2;
	char *buf;

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}

	fd = open(from, O_RDONLY);
	fd2 = open(to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	sz = read(fd, buf, 1024);

	do {
		if (fd < 0 || sz < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
			free(buf);
			exit(98);
		}

		wr = write(fd2, buf, sz);
		if (fd2 < 0 || wr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
			free(buf);
			exit(99);
		}

		sz = read(fd, buf, 1024);
		fd2 = open(to, O_WRONLY | O_APPEND);
	} while (sz > 0);

	c1 = close(fd);
	c2 = close(fd2);
	if (c1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		free(buf);
		exit(100);
	}
	if (c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		free(buf);
		exit(100);
	}
	free(buf);

	return (0);
}
