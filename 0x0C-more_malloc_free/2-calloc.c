#include <stdlib.h>
#include "main.h"

/**
 * *_memset - a function that fills memory with a byte
 * @a: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy char
 * Return: pointer to the memory area
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		a[x] = b;
	}
	return (a);
}

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
