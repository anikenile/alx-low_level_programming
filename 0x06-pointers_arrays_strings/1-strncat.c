#include "main.h"

/**
 * *_strncat -  concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlent;
	int x;

	for (destlent = 0; dest[destlent] != '\0'; destlent++)
		;
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[destlent + x] = src[x];
	dest[destlent + x] = '\0';

	return (dest);
}
