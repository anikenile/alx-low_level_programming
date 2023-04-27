#include "main.h"

/**
 * more_numbers - prints 10 times the number, from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
	int i = 1, j;

	while (i < 11)
	{
		j = 0;

		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
