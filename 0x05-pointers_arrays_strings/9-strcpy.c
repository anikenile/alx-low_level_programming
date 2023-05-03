#include "main.h"

/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: destination
 * @src: pointer
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + 1) != '\0')
	{
		x++;
	}
	for ( ; y < 1; y++)
	{
		dest[y] = src[y];
	}
	dest[1] = '\0';
	return (dest);
}
