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
	int op, wr;
	int len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; )
			len++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 5000);
	wr = write(op, text_content, len);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
