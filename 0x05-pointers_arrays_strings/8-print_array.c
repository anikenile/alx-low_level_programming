#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: array one
 * @n: array two
 * Return: 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
		printf("%d", a[n - 1]);
	printf("\n");
}
