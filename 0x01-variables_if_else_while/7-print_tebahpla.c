#include <stdio.h>
/**
 * main - code enters here
 * program to write alphabets in reverse
 * Return: Always 0 as result
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
