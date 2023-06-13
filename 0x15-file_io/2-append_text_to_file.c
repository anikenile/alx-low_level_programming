#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;
	int len = 0;

	if (text_content != NULL)
	{
		len++;
	}

	op = open(filename, O_RDWR | O_APPEND);
	wr = write(op, text_content, len);

	if (filename == NULL || op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
