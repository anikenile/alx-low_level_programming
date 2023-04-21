#include <stdio.h>
/**
 * main - code goes here
 * code to print all possible combinations of a single digit number
 * Return: Always 0 as output
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
