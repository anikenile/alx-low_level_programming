#include <stdio.h>
#include "main.h"

/**
 * exitWithError - code to format exit messages
 * @message: exit message to show
 */
void exitWithError(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
	exit(1);
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: number of arguments it takes
 * @argv: range of values
 * Return: number of arguments
 */
int main(int argc, char *argv[])
{
	int from, to;
	char *buf = malloc(sizeof(char) * 1024);
	ssize_t rd, op;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = argv[2];

	from = open(argv[1], O_RDWR);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}


	rd = read(from, buf, 1024);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | 0644);

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (rd > 0)
	{
		op = write(to, buf, rd);

		if (op == -1)
		{
			dprintf(STDERR_FILENO, "Error:: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
        exit(100);
    }
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
        exit(100);
    }
	free(buf);
	return (0);
}
