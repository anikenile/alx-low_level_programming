#include <stdio.h>
/**
 * main - Entry of code
 * code to print alphabets in lowercase then uppercase
 * Return: Always 0 as output
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
