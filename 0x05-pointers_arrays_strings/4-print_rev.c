#include "main.h"

/**
 * print_rev - prints a string
 * @s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
        int prnt;
	int count = 0;

        for (prnt = 0; s[prnt] != '\0'; prnt++)
		count++;
	for (prnt = count; prnt >= 0; prnt--)
                _putchar(s[prnt]);
        _putchar('\n');
}
