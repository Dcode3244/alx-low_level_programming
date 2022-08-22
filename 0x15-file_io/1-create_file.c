#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: the file name
 * @text_content: the content os the created file
 * Return: 1 on successs, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, text_len, i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_len = 0;
	else
	{
		for (i = 0, text_len = 0; text_content[i]; i++)
			text_len++;
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	wr = write(fd, text_content, text_len);

	if (fd < 0 || wr < 0)
		return (-1);

	close(fd);

	return (1);
}
