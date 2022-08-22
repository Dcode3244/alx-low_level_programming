#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: the content os the created file
 * Return: 1 on successs, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr;
	char *buf;

	if (filename == NULL)
		return (-1);

	buf = malloc(sizeof(char) * strlen(text_content));
	if (buf == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (text_content != NULL)
		wr = write(fd, text_content, strlen(text_content));

	if (fd < 0 || wr < 0)
		return (-1);

	free(buf);
	close(fd);

	return (1);
}
