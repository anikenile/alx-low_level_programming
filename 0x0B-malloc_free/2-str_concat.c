#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: number to concatenate
 * @s2: number to concatenate
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = ci = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[ci] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (x + ci + 1));

	if (concat == NULL)
		return (NULL);
	x = ci = 0;
	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}

	while (s2[ci] != '\0')
	{
		concat[x] = s2[ci];
		x++, ci++;
	}
	concat[x] = '\0';
	return (concat);
}
