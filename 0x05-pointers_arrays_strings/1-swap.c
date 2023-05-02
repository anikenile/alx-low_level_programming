#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: first value to swap
 * @b: second value to swap
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
