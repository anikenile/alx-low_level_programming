#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string one
 * @src: string two
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	char *destsrc = 0;

	int n = 0;
	int m = 0;

	while (dest[n] != '\0')
	{
		destsrc[m] = dest[n];
		n++;
		m++;
	}
	n = 0;

	while (src[n] != '\0')
	{
		destsrc[m] = src[n];
		n++;
		m++;
	}
	destsrc[m] = '\0';

	return (destsrc);
	_putchar('\n');
}
