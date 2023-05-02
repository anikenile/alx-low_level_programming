#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: 0
 */
void _puts(char *str)
{
        int prnt;
	int count = 0;

        for (prnt = 0; str[prnt] != '\0'; prnt++)
		count++;
	for (prnt = count; prnt >= 0; prnt--)
                _putchar(str[prnt]);
        _putchar('\n');
}
