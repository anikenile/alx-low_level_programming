#include "main.h"

/**
 * _isupper -  checks for uppercase character
 * @c: the int to search for
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c);
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
