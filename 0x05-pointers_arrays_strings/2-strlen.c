#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: 0
 */
int _strlen(char *s)
{
	int x;
	int count;

	for (x = 0; s[x] != '\0'; x++)
		count++;
	return (count);
}
