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

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (p = count; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
