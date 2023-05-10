#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to measure
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int lent = 0;

	if (*s)
	{
		lent++;
		lent += _strlen_recursion(s + 1);
	}
	return (lent);
}
