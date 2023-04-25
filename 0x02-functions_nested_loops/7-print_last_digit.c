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

	x = r % 10;
	_putchar(x);
	return (x);
}
