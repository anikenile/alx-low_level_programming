#include "main.h"
#include <stdio.h>

/**
 * int _isupper -  checks for uppercase character
 * @c: the int to search for
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _isupper(int c);
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	return (0);
}
