#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters passed to the function
 * @...: A variable number of paramters to calculate the sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ls, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(ls, int);

	va_end(ls);

	return (sum);
}
