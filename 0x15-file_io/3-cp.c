#include <stdio.h>
#include "main.h"

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments it takes
 * @argv: range of values
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	int from, to, rd, op;
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDWR);
	rd = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_RDWR | 0664);

	while (rd > 0)
	{
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		op = write(to, buf, rd);

		if (to == -1 || op == -1 || buf == NULL)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		rd = read(from, buf, 1024);
		to = open(argv[2], O_RDWR | O_APPEND);

		free(buf);
		close(from);
		close (to);
	}
	return (1);
}
