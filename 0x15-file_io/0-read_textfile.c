#include "main.h"
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
	ssize_t sz, fd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	sz = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, sz);

	if (sz < 0 || fd < 0 || wr < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (sz);
}
