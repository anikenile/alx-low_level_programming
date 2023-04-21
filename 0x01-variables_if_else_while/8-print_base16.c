#include <stdio.h>
/**
 * main - Code goes here
 * code to print between 0 to 9 and a to f
 * Return: Always 0 as output
 */
int main (void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	for (x = 97; x < 103; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
