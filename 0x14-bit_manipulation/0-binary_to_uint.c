#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointing to binary
 * Return: NULL or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ret = 0;

	if (b == NULL)
		return (0);

	if (b[i] < '0' || b[i] > '1')
		return (0);

	for (i = 0; i < b[i]; )
	{
		ret = 2 * ret + (b[i] - '0');
		i++;
	}
	return (ret);
}
