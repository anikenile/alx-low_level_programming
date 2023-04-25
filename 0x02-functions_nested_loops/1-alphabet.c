#include "main.h"
#include <unistd.h>
/**
* print_alphabet - Entry point
* a function that prints the alphabet, in lowercase, followed by a new line
* Return: 0 as output
*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
