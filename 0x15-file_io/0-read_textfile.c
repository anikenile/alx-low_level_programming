#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of file
 * @letters: length of file
 * Return: actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int size, pint;
	char *c;
	int fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);

	c = malloc(sizeof(char) * letters);
	size = read(fd, c, letters);
	pint = write(STDOUT_FILENO, c, size);

	free(c);
	close(fd);
	return (pint);
}
