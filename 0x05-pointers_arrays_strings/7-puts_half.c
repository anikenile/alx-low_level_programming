#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: what to print
 * Return: 0
 */
void puts_half(char *str)
{
	int n;
	int x;
	int lent = 0;

	for (x = 0; str[x] != '\0'; x++)
		lent++;

	n = (lent / 2);

	if ((lent % 2) == 1)
		n = ((lent + 1) / 2);

	for (x = n; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
