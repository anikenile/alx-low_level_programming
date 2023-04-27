#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes c to output
 * @c: what to print
 * Return: 1 as success
 * -1 as error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
