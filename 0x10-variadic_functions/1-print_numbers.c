#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int indx;

	va_start(num, n);

	for (indx = 0; indx < n; indx++)
	{
		printf("%d", va_arg(num, int));

		if (indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
