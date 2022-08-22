#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file an dprints it to the POSIX standard output
 * @filename: the text file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * or 0 if the file can not be opened or if filename is NULL or
 * if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * 2048);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
	{
		return (0);
	}

	sz = read(fd, buf, letters);
	buf[sz] = '\0';

	close(fd);
	printf("%s\n", buf);
	return (sz);
}
