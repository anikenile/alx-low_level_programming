#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0 or NULL
 */
char *_strdup(char *str)
{
	char *sty;
	int x, r = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	sty = malloc(sizeof(char) * (x + 1));

	if (sty == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		sty[r] = sty[r];

	return (sty);
}
