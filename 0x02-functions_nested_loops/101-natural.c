#include <stdio.h>
#include "main.h"

/**
 * multiples_of - sum of multiples of 3 and 5
 * Return: sum
 */
int multiples_of(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	return (sum);
}
