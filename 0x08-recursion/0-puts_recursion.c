#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: data to input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
	}
}