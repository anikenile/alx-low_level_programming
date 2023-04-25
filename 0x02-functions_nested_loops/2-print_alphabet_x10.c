#include "main.h"

/**
 * print_alphabet_x10 - code starts here
 * prints 10x the alphabet in lowercase followed by a new line
 */

void print_alphabet_x10(void)
{
	char fig, alpha;

	for (fig = 0; fig <= 9; fig++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
