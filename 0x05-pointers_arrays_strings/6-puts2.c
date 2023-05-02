#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: the string
 * Return: 0
 */
void puts2(char *str)
{
	int x;
	int lent = 0;
	int i = 0;
	char *y = str;

	if (*y != '\0')
	{
		y++;
		lent++;
	}
	i = lent - 1;

	for (x = 0; x <= i; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
