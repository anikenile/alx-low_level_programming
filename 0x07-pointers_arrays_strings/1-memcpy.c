#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: area to copy to
 *@src: area to copy from
 *@n: number of bytes to copy
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
