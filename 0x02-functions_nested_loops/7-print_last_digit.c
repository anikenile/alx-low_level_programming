#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: the int to get the last digit from
 *
 * Return: value of the last digit
 *
 */
int print_last_digit(int r)
{
	int x;

	if (r < 0)
		r = -r;
	x = r % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
