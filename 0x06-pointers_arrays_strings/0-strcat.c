#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string one
 * @src: string two
 * Return: a pointer
 */
char *_strcat(char *dest, char *src)
{
	int n = -1;
	int m = 0;

	for (m = 0; dest[m] != '\0'; m++)
		;
	do {
		n++;
		dest[m] = src[n];
		m++;
	} while (src[n] != '\0');

	return (dest);
}
