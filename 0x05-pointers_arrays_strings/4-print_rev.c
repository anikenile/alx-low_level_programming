#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: 0
 */
void _puts(char *str)
{
        int prnt;

        for (prnt = str[prnt]; str[prnt] != '\0'; prnt++)
                _putchar(str[prnt]);
        _putchar('\n');
}
