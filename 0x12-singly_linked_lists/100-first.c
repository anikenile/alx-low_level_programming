#include <stdio.h>

void print_long(void) __attribute__((constructor));

/**
 * print_long - to print out a long string
 */
void print_long(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
