nclude "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: 0
 */
void _puts(char *str)
{
	int prnt;

	for (prnt = 0; str[prnt] != 0; prnt++)
		_putchar(prnt);
	_putchar('\n');
}
