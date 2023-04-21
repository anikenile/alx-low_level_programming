#include <stdio.h>

/**
 * main - Entry of code
 * code to print numbers from 0 to 9
 * Return: Always 0 as result
 */
int main(void)
{
        int num;

        for (num = 0; num < 10; num++)
		putchar(num);
	putchar('\n');
        return (0);
}
