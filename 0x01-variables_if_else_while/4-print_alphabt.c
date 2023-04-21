#include <stdio.h>
#include <dirent.h>
/**
 * main - Entry of code
 * code to print all alphabets in lowercase except q and e
 * Return: Always 0 as output
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' || ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
