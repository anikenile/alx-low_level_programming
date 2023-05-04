#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer
 * Return: 0
 */
void print_number(int n)
{
	int x, y, num, total, power;
	unsigned int temp, numchar, number;

	num = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}

	number = temp;

	while (number >= 10)
	{
		number = number / 10;
		num++;
	}
	total = num + 1;
	power = 1;
	x = 1;

	while (x < total)
	{
		power = power * 10;
		x++;
	}
	y = power;
	while (y >= 1)
	{
		numchar = (temp / y) % 10;
		_putchar(numchar + '0');
		y = y / 10;
	}
}
