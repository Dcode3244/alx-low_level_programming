#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * append_text_to_file - appends at the end of a file
 * @filename: the name of the file
 * @text_content: the content to be added
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (text_content != NULL)
		wr = write(fd, text_content, strlen(text_content));

	if (fd < 0 || wr < 0)
		return (-1);
	close(fd);

	return (1);
}
