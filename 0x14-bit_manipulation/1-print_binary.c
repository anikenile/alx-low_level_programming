#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 63;
	int count = 0;

	for ( ; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
