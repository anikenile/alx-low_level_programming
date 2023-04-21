#include <stdio.h>
/**
 * main - Entry of code
 * code to print alphabets in lowercase
 * Return: Always 0 as output
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
