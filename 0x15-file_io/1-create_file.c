#include <stdio.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT|O_RDWR|O_TRUNC, 500);
	}
	close(fd);
	return (1);
}
