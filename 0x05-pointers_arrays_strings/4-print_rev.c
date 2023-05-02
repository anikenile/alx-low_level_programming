#include "main.h"

/**
 * print_rev - prints a string
 * @s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
	int p;
	int count = 0;

	for (p = 0; s[p] != '\0'; p++)
		count++;
	for (p = count; p >= 0; p--)
		_putchar(s[p]);
	_putchar('\n');
}
