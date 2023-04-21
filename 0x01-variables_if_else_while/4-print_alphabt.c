#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - Entry of code
 * code to print all alphabets in lowercase except q and e
 * Return: Always 0 as output
 */
int main(void)
{
	int ch;

	for (ch = 97; ch < 123; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
