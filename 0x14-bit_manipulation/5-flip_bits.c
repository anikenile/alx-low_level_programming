#include <stdio.h>
#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip number
 * @n: number to flip
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int i;

	for (i = 63; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
		{
			count++;
		}
	return (count);
}
